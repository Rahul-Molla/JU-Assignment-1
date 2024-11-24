#include<stdio.h>
int main(){
	int a,b;
	printf("Enter The Value of a ::\n"); 
	scanf("%d",&a); 
	printf("Enter The Value of b ::\n"); 
	scanf("%d",&b);
	printf("Before Swaping The Value of a and b is ::%d\t%d\n",a,b);
	a = a * b;  
	b = a / b; 
	a = a / b;
	printf("After Swaping The Value of a and b is ::%d\t%d\n",a,b);
	return 0;
}
