# Use the official Node.js image as the base image
FROM node

# Set the working directory within the container to /app
WORKDIR /app

# Copy all files from the current directory to the /app directory in the container
COPY . .

# Run npm install to install the dependencies specified in package.json
RUN npm install

# Expose port 3000 to the outside world, allowing external access to the application
EXPOSE 3000

# Define the default command to run when the container starts using npm start
CMD ["npm", "start"]
