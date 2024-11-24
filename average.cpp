#include<stdio.h>
using namespace std;

int main(){
	int a,b,c;
	printf("Enter The Value of a,b and c ::");
	scanf("%d%d%d",&a,&b,&c); 
	int average;
	average = (a + b + c) / 3;
	printf("The Average of Three Number is ::%d",average);
	return 0;
}

