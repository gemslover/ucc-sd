FROM python:3.9-slim
WORKDIR /usr/src/app
COPY . /usr/src/app
RUN pip install --no-cache-dir Flask
EXPOSE 5000
CMD ["python", "app/__init__.py"]
