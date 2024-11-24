// 7. Case-1: Write a program to swap the values of two variables
//Using Third Variable
#include<stdio.h>
int main(){
	int a,b,temp;
	printf("Enter The Value of a ::\n");
	scanf("%d",&a);
	printf("Enter The Value of b ::\n");
	scanf("%d",&b);
	printf("Before Swaping The Value of a and b is ::%d\t%d\n",a,b);
	temp = a;
	a = b;
	b = temp;
	printf("After Swaping The Value of a and b is ::%d\t%d\n",a,b);
	return 0;
}
