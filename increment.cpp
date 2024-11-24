/* 5. Write a program to print the value of Z where 
	1. a=5, b=6, z=a++ + b++
	2. a=5, b=6, z=a++ + --b
	3. a=5, z=a++ + ++a
*/
#include<stdio.h>
int main(){
	int a = 5, b = 6, z;
	int ch;
	printf("Enter Your Choice ::");
	scanf("%d",&ch);
	switch(ch){
		case 1:
		z = a++ + b++;
		printf("The Value of z is ::%d",z);
		break;
		
		case 2:
		z = a++ + --b;
		printf("The Value of z is ::%d",z);
		break;

		case 3:
		z = a++ + ++a;
		printf("The Value of z is ::%d",z);
		break;
		
		default:
		printf("Enter Correct Choice..");
	}
}
