#!/bin/bash
make qSort
echo " "
echo "Array length: 10000 "
for i in {1..10}
do
	./qSort 10000
done
wait 
echo " "
echo "Array length: 100000 "
for i in {1..10}
do
	./qSort 100000
done
wait 
echo " "
echo "Array length: 1000000 "
for i in {1..10}
do
	./qSort 1000000
done
wait 
echo " "
echo "Array length: 10000000 "
for i in {1..10}
do
	./qSort 10000000
done
wait 
echo " "
echo "Array length: 100000000 "
for i in {1..10}
do
	./qSort 100000000
done
wait 
echo Finished 
