#include<stdlib.h>
#include<stdio.h>
void swap(int *p, int *q){ // define two pointers to store the addresses
	int temp = *p;
	*p = *q;
	*q = temp; 
}
main(){
	int i = 123;
	int j = 456;
	swap(&i,&j); // send two variables' address as parameters
	printf("%d\n", i);
	printf("%d\n", j);
	
}