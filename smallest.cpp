#include<stdio.h>
using namespace std;

int main(){
	int a,b,c;
	printf("Enter The Value of a,b and c ::");
	scanf("%d%d%d",&a,&b,&c);
	int temp = a;
	if(temp < b && temp < c){
		printf("The Smallest Number is ::%d",temp);
	}
	else if(b < c){
		printf("The Smallest Number is ::%d",b);	
	}
	else{
		printf("The Smallest Number is ::%d",c);
	}
}
