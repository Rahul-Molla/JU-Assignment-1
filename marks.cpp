#include<stdio.h>

int main(){
	int ben,eng,math,phy,che;
	printf("Enter The Marks of 5 Subject....\n");
	printf("Enter The Marks of Ben ::\n");
	scanf("%d",&ben);
	printf("Enter The Marks of Eng ::\n");
	scanf("%d",&eng);
	printf("Enter The Marks of Math ::\n");
	scanf("%d",&math);
	printf("Enter The Marks of Phy ::\n");
	scanf("%d",&phy);
	printf("Enter The Marks of Che ::\n");
	scanf("%d",&che);
	int marks = ben + eng + math + phy + che;
	int average = marks / 5;
	if (average > 90 && average < 100){
		printf("Grade A\n");
		printf("Successful....");	
	}
	else if (average > 80 && average < 90){
		printf("Grade B\n");
		printf("Successful....");	
	}
	else if (average > 70 && average < 80){
		printf("Grade C\n");
		printf("Successful....");	
	}
	else if (average > 60 && average < 70){
		printf("Grade D\n");
		printf("Successful....");	
	}
	else if (average > 50 && average < 60) {
		printf("Grade E\n");
		printf("Successful....");	
	}
	else{
		printf("Grade F\n");
		printf("The Student as a failed candidate.");	
	}
		
}
