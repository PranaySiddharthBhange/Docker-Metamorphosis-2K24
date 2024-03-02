# Dockerfile Parameters and Build Command

This section provides information about key Dockerfile parameters and the `docker build` command.

## Dockerfile Parameters:

1. **FROM:**
   - Description: Specifies the base image for the new image.
   - Example: `FROM ubuntu:20.04`

2. **WORKDIR:**
   - Description: Sets the working directory for subsequent instructions.
   - Example: `WORKDIR /app`

3. **COPY:**
   - Description: Copies files or directories from the host machine to the container.
   - Example: `COPY ./src /app`

4. **RUN:**
   - Description: Executes commands during the build process.
   - Example: `RUN apt-get update && apt-get install -y curl`

5. **EXPOSE:**
   - Description: Informs Docker that the container will listen on the specified network ports at runtime.
   - Example: `EXPOSE 8080`

6. **ENV:**
   - Description: Sets environment variables inside the container.
   - Example: `ENV APP_VERSION=1.0`

7. **CMD:**
   - Description: Provides a default command to execute when the container starts.
   - Example: `CMD ["python", "app.py"]`

## Docker Build Command:

```bash
docker build -t <image_name>:<tag> <path_to_dockerfile>
```

- Description: Builds a Docker image from a Dockerfile.
- Options:
  - `-t, --tag`: Name and optionally a tag in the 'name:tag' format.

Example:
```bash
docker build -t my_image:latest .
```

In this example, the `docker build` command is used to build an image named `my_image` with the `latest` tag. The `.` at the end signifies that the build context is the current directory.

Feel free to customize these parameters and options based on your Dockerfile and build requirements. For more detailed information, refer to the [official Docker documentation on building images](https://docs.docker.com/engine/reference/commandline/build/).
