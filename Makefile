qSort0: qSort.c
	gcc qSort.c -O0 -o qSort0
qSort1: qSort.c
	gcc qSort.c -O1 -o qSort1
qSort2: qSort.c
	gcc qSort.c -O2 -o qSort2
qSort3: qSort.c
	gcc qSort.c -O3 -o qSort3
	
qSortDouble: qSortDouble.c
	gcc qSortDouble.c -O2 -o qSortDouble 
