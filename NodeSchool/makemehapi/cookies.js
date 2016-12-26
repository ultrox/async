'use strict'

const Hapi = require('hapi')
const server = new Hapi.Server()

server.connection({
  host: 'localhost',
  port: Number(process.argv[2] || 8080)
})

server.route({
  path: '/upload',
  method: 'POST',
  config: {
    payload: {
      output: 'stream',
      parse: true
    },
    handler: uploader
  }
})

function uploader(request, reply) {
  console.log(request.payload.file)
  var body = ''
  request.payload.file.on('data', (data) => {
    body += data
  })

  request.payload.file.on('end', () => {
    reply({
      description: request.payload.description,
      file: {
        data: body,
        filename: request.payload.file.hapi.filename,
        headers: request.payload.file.hapi.headers
      }
    })
  })
}

server.start(() => {
  console.log('Server running at:', server.info.uri)
})
