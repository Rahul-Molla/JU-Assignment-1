// 11. Write a program to Calculate simple interest given principle(p), rate of interest per annum(r), number of years(n), and consider all the relevent cases.
#include<stdio.h>
int main(){
    float p,r,n,si;
    printf("Enter the principal amount: ");
    scanf("%f",&p);
    printf("Enter the rate of interest: ");
    scanf("%f",&r);
    printf("Enter the time period in years: ");
    scanf("%f",&n);
    si=(p*r*n)/100;
    printf("Simple Interest is: %.2f",si);
    return 0;
}