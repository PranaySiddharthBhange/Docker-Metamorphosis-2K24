# 🚀 Docker Containers Cheatsheet

Essential Docker commands for managing containers

## 1. docker run

### Description:
Run a container based on a specified image.

### Options and Flags:
- `-d` or `--detach`: Run the container in the background.
- `--name container_name`: Assign a specific name to the container.
- `-p 8080:80`: Map port 8080 on the host to port 80 on the container.
- `-v /host/path:/container/path`: Mount volumes between the host and container.
- `my_image`: Name of the Docker image.

### Example:
```bash
docker run -d --name my_container -p 8080:80 -v /host/path:/container/path my_image
```

## 2. docker ps

### Description:
List running containers.

### Options:
- `-a`: Show all containers, including stopped ones.
- `-q`: Only display container IDs.

### Example:
```bash
docker ps -a
```

## 4. docker rm

### Description:
Remove one or more containers.

### Options:
- `-f`: Force removal of a running container.
- `-v`: Remove associated volumes.

### Example:
```bash
docker rm -f my_container
```

## 4. docker restart

### Description:
Restart a stopped container.

### Example:
```bash
docker restart  my_container
```


## 3. docker stop

### Description:
Stop a running container.

### Example:
```bash
docker stop my_container
```




## 6. docker exec

### Description:
Run a command in a running container.

### Options:
- `-i`: Keep STDIN open even if not attached.

### Example:
```bash
docker exec -it my_container bash
```

## 5. docker commit

### Description:
Create a new image from a container's changes.

### Options:
- `-m, --message`: Commit message.

### Example:
```bash
docker commit -m "Added new features" my_container my_image:tag
```



## 7. docker inspect

### Description:
Display detailed information about containers, images, or networks.

### Example:
```bash
docker inspect my_container
```

Master these commands for Docker prowess. Dive deeper into the Docker sea with the [official Docker documentation](https://docs.docker.com/) for advanced usage. 🚀🐋