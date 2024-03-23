FROM node:latest AS builder
WORKDIR /app
# Copia el archivo package.json y package-lock.json
COPY package*.json ./

# Instala las dependencias de la aplicación
RUN npm install

# Copia el resto de los archivos del proyecto
COPY . .

# Compila la aplicación de React
RUN npm run build

# Segunda etapa del Dockerfile para el servidor de producción
FROM nginx:alpine

# Copia los archivos compilados de la aplicación de la etapa de compilación
COPY --from=builder /app/build /usr/share/nginx/html

# Exponer el puerto 80 para el servidor Nginx
EXPOSE 80
