// 1. Write a program to use sizeof operator to check the sizes(in bytes) of the different datatypes
#include<stdio.h>
int main(){
	int a;
	char b;
	float c;
	double d;
	long e;
	printf("Size of int is :  %lu\n",sizeof(a));
	printf("Size of char is : %lu\n",sizeof(b));  
	printf("Size of float is : %lu\n",sizeof(c)); 
	printf("Size of double is : %lu\n",sizeof(d)); 
	printf("Size of long is : %lu\n",sizeof(e)); 
	return 0;
}
