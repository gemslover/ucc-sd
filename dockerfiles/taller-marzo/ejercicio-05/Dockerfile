FROM node:latest
WORKDIR /app
COPY package.json .
COPY app.js .
RUN npm get install
EXPOSE 3000
CMD ["node", "app.js"]
