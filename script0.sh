#!/bin/bash
make qSort0
echo " "
echo "Array length : 10000 "
for i in {1..10}
do
	./qSort0 10000
done
wait 
echo " "
echo "Array length: 100000 "
for i in {1..10}
do
	./qSort0 100000
done
wait 
echo " "
echo "Array length: 1000000 "
for i in {1..10}
do
	./qSort0 1000000
done
wait 
echo " "
echo "Array length: 10000000 "
for i in {1..10}
do
	./qSort0 10000000
done
wait 
echo " "
echo "Array length: 100000000 "
for i in {1..10}
do
	./qSort0 100000000
done
wait 
echo Finished 
