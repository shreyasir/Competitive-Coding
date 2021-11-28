# docker and K8s

- [docker and K8s](#docker-and-k8s)
  - [Command and Function](#command-and-function)
    - [Container Commands](#container-commands)
  - [Problem 1: DNS Round Robin Test](#problem-1-dns-round-robin-test)
    - [Image Commands](#image-commands)
  - [Problem 2](#problem-2)
    - [Building DockerFiles](#building-dockerfiles)
    - [Notes](#notes)
    - [Important Links](#important-links)
  
## Command and Function

### Container Commands

1. Check docker version and info
   1. `docker version`
   2. `docker info`
2. Create new container from image
   1. `docker container --detach --name new_nginx nginx`
   2. `docker container --d --name new_nginx nginx`
   3. `docker container -d -p 80:80 --name new_nginx nginx`
3. List docker container even the once exited
   1. `docker container ls -a`
4. Stop all container with Force
   1. `docker container stop $(docker container ls -a -q)`
5. Delete all container
   1. `docker container rm -f $(docker container ls -a -q)`
6. Get logs of container
   1. `docker container logs application_name`
7. Streaming view of the `docker container performance
   1. `docker container stats`
8. Create Network
   1. `docker network create webapp_network`
9. Connect network
    1. `docker network connect webapp_network web_application_container`
10. DisConnect network
    1. `docker network disconnect webapp_network web_application_container`
11. Run the container and login to bash on exit destroy the container
    1. `docker container run --rm -it centos:7 bash`
12. Pick particular section from `docker inspect
    1. `docker container inspect --format '{{.NetworkSettings.IPAddress}}'<Container_Name>`
13. Command with Variable
    1. `docker container run -d -p 3306:3306 --name db_mysql -e MYSQL_RANDOM_ROOT_PASSWORD=yes mysql`
14. shell/bash login on hosted containers
    1. `docker container run -it nginx bash` -> Bash
    2. `docker container run -it alpine sh` -> sh

---

## Problem 1: DNS Round Robin Test

1. Create virtual network(default bridge driver)
2. Create two containers from elasticsearch:2 image
3. Research and use --network-alias search when creating them to give them an additional dns name to respond to
4. Run alpine nslookup search with --net to see the two containers list for the same DNS name
5. Run centos curl -s search:9200 with --net multiple times until you see both name fields show

__Solution__

Create Network \
`docker network create my_net`

Create elastic search container and connect to the network with alias \
`docker container run -d --name my_elast1 elasticsearch:2`
`docker network connect my_net --alias search my_elast1`

Create 2nd elastic search container and connect to the network alias \
`docker container run -d --name my_elast2 --net my_net --net-alias search  elasticsearch:2`

Run nslookup to check if it has same network in alpine linux \
`docker container run --rm --net my_net alpine nslookup search`

in centos linux \
`docker container run --rm --net my_net centos curl -s search:9200`

---

### Image Commands

1. Check all the changes done on the image
   1. `docker history image_name`
2. Check all the details of the image
   1. `docker image inspect image_name`
3. Create Tags on the image
   1. `docker image tag nginx shreyas/nginx`
   2. `docker image tag nginx shreyas/nginx:dev`
4. Login/Logout to docker
   1. `docker login`
   2. `docker logout`

---

## Problem 2

__Solutioni__

---

### Building DockerFiles

[Reference](https://docs.docker.com/engine/reference/builder/)

### Notes

Static IPs and Using IPs to talk to container is anti-pattern and should be avoided

### Important Links

[Docker Terminology](https://github.com/moby/moby/blob/master/image/spec/v1.md)
