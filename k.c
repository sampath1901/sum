#include <stdio.h>
int sumofdigits(int n);
int main()
{
    int n, sum;
    
    printf("Enter any number to find sum of digits: ");
    scanf("%d", &n);
    
    sum = sumOfDigits(n);
    
    printf("Sum of digits of %d = %d", n, sum);
    
    return 0;
}
int sumOfDigits(int n)
{
    if(n == 0)
        return 0;
    else   
         return ((n % 10) + sumOfDigits(n / 10));
}

