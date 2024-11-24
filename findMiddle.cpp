// 13. Write a program to take a three digit number from the user to test whether the sum of first & last digits is eual to the twice of the middle element / digits.
#include<stdio.h>
int main(){
    int n, sum, middle, first, last;
    printf("Enter a three digit number: ");
    scanf("%d", &n);
    first = n / 100;
    last = n % 10;
    middle = (n / 10) % 10;
    sum = first + last;
    if (sum == 2 * middle){
        printf("The sum of first and last digits is equal to twice of the middle digit.");
    }else{
        printf("The sum of first and last digits is not equal to twice of the middle digit.");
    }
}