qSort1: qSort.c
	gcc qSort.c -o qSort1
qSort2: qSort.c
	gcc qSort.c -O2 -o qSort2
qSort3: qSort.c
	gcc qSort.c -O3 -o qSort3
qSort4: qSort.c
	gcc qSort.c -O4 -o qSort4
	
qSortDouble: qSortDouble.c
	gcc qSortDouble.c -O2 -o qSortDouble 
