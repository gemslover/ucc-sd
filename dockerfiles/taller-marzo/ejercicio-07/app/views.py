from flask import render_template
from app import app

# Ruta de la página principal
@app.route('/')
def index():
    return render_template('index.html')

# Ruta de una página de ejemplo
@app.route('/ejemplo')
def ejemplo():
    return 'Esta es una página de ejemplo'

if __name__ == '__main__':
    app.run(host='0.0.0.0')
