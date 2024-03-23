FROM openjdk:11-jdk
WORKDIR /usr/src/app
COPY . .
RUN javac app.java
CMD ["java", "-cp", ".", "app"]