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
