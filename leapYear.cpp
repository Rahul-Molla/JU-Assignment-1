// 10. Write a program to test wheather any given year is Leap year or not.
#include<stdio.h>
int main(){
	int year;
	printf("Enter The Value of num ::");
	scanf("%d",&year);
	if((year % 4 == 0 || year % 400 == 0) && year % 100 != 0){
		printf("%d year is Leap Year...",year);	
	}
	else{
		printf("%d year is Not a leap Year...",year);	
	}
	return 0;
}
