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

## hint ...
a1b1c1d1e1f1g1h1i1j1k1l1m1n1o1p1q1r1s1t1u1v1w1x1y1z1a2b2c2d2e2f2g2h2i2j2k2l2m2n2o2p2q2r2s2t2u2v2w2x2y2z2
