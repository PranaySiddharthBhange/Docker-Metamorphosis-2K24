# Docker Hub Repository Setup Guide

This guide provides step-by-step instructions on how to create a new repository on Docker Hub, login to your Docker Hub account, tag a local image, and push it to the newly created repository.

## Step 1: Create a New Repository on Docker Hub

1. Go to [Docker Hub](https://hub.docker.com/).
2. Log in to your Docker Hub account.
3. Click on the "Create Repository" button.
4. Enter a name for your repository.
5. Optionally, provide a description for your repository.
6. Choose visibility options (public or private).
7. Click on the "Create" button to create the repository.

## Step 2: Login to Docker Hub

Before pushing an image to Docker Hub, you need to log in to your Docker Hub account using the `docker login` command.

```bash
docker login
```

Enter your Docker Hub username and password when prompted.

## Step 3: Tag the Local Image and Push to Docker Hub

Tag your local Docker image with the repository information and push it to Docker Hub.

```bash
# Replace 'local-imagename:tag' with your local image details
# Replace 'username/repositoryname:tag' with your Docker Hub repository details

docker tag local-imagename:tag username/repositoryname:tag
docker push username/repositoryname:tag
```

- The first command tags your local image with the name and tag you want on Docker Hub.
- The second command pushes the tagged image to Docker Hub.

Ensure you replace placeholders like 'local-imagename', 'tag', 'username', 'repositoryname', etc., with your actual image and repository details.

Congratulations! You have successfully created a Docker Hub repository, logged in, tagged your local image, and pushed it to Docker Hub. Your image is now available for use by others.