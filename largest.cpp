// 3. Write a program to find the largest of three numbers using fourth variable.
#include<stdio.h>
int main(){
	int a,b,c;
	printf("Enter The Value of a,b and c ::");
	scanf("%d%d%d",&a,&b,&c);
	int temp = a;
	if(b > temp)
		temp = b;
	else if(c > temp)
		temp = c;	
	printf("The largest number is :: %d",temp);
}
