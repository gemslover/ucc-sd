FROM nginx:latest

# Copia el archivo de configuración personalizado al directorio de configuración de Nginx en el contenedor
COPY nginx.conf /etc/nginx/conf.d/default.conf
# Copia los archivos HTML y recursos estáticos al directorio de archivos estáticos
COPY html /usr/share/nginx/html
