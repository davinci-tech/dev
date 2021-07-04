from flask import Flask
from flask_restful import Api, Resource, reqparse
from User import User

app = Flask('Test API')
api = Api(app)
api.add_resource(User, '/user')