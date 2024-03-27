FROM gcc:latest

# Instala herramientas de desarrollo y compilación de C++
RUN apt-get update && apt-get install -y \
    build-essential \
    && rm -rf /var/lib/apt/lists/*

# Copia los archivos fuente a la imagen de Docker
COPY ./ app  
# Establece el directorio de trabajo dentro de la imagen
WORKDIR /app

# Compila la aplicación y muestra los mensajes de error detallados
RUN g++ -o calculadora calculadora.cpp 2>&1 || true

CMD ["./calculadora"]
