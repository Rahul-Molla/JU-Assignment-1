// 12. Write a program to calculate the real roots of any quadratic equation where a,b,c (i.e the co-efficients) will be taken as input by the user
#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c,d,root1,root2;
    printf("Enter the coefficients a,b,c of the quadratic equation: ");
    scanf("%f %f %f",&a,&b,&c);
    d=(b*b)-(4*a*c);
    if(d>0){
        root1=(-b+sqrt(d))/(2*a);
        root2=(-b-sqrt(d))/(2*a);
        printf("The roots of the equation are: %.2f and %.2f",root1,root2);

}