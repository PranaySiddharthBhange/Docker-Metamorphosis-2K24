# Docker Images Commands Cheat Sheet

This cheat sheet provides a quick reference for common Docker image-related commands:

## 1. List Locally Available Docker Images

```bash
sudo docker images
```

## 2. Pull Docker Image from Registry

```bash
sudo docker pull <image_name>:<tag>
```

## 3. Remove Docker Image

```bash
sudo docker rmi <image_name/id>
```

Options:
- `-f, --force`: Force removal of the image.


## 4. Create Image Tag

```bash
docker tag <source_image>:<tag> <target_image>:<tag>
```


These commands cover basic image-related operations in Docker. Refer to the [official Docker CLI documentation](https://docs.docker.com/engine/reference/commandline/) for more details and advanced options.
