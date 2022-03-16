# InfoSecBuffRR

## create a docker container
docker run -it ubuntu bash

## From inside the container install tools. nano, gcc, git

apt update

apt install nano gcc git

## Download and compile the code

mkdir ca1

cd ca1/

git clone https://github.com/greeng0at/InfoSecLabBuff.git

cd InfoSecLabBuff/

ls -l

gcc buff1.c -o buff1 -fno-stack-protector -z execstack -no-pie


ls -l

## run the program and complete the challenge

./buff1


