// 4. Write a program to find the smallest of three numbers using fourth variable.
#include<stdio.h>
int main(){
	int a,b,c;
	printf("Enter The Value of a,b and c ::");
	scanf("%d%d%d",&a,&b,&c);
	int temp = a;
	if(b < temp && b < c)
		temp = b;
	else if(c < temp && c < b)
		temp = c;	
	printf("The smallest number is :: %d",temp);
}
