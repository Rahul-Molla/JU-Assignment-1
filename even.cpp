#include<stdio.h>
int main(){
	int num;
	printf("Enter The Value of num ::");
	scanf("%d",&num);
	if(num % 2 == 0){
		printf("%d Number is Even...",num);	
	}
	else{
		printf("%d Number is Odd...",num);	
	}
	return 0;
}
