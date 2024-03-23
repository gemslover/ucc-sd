from flask import Flask

# Crea una instancia de la aplicación Flask
app = Flask(__name__)

# Ruta de la página principal
@app.route('/')
def index():
    return '¡Hola, mundo desde Flask!'

if __name__ == '__main__':
    app.run(host='0.0.0.0')
