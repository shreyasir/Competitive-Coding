# docker and K8s

## Command and Function

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
   1. `docker container rm -f $(docker container -a -q)`
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

### Notes

Static IPs and Using IPs to talk to container is anti-pattern and should be avoided