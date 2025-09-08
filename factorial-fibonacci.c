#include<stdio.h>
int fact(int n){
    if(n==0 || n==1)
    return 1;
    else
    return n*fact(n-1);
}
int fibonacci(int n){
    if (n==0)
    {
        return 0;
    }
    else if (n==1)
    {
        return 1;
    }
    else
    {
        return fibonacci(n-1) + fibonacci(n-2);
    }
    
}
int main()
{
    int n , i;
//factorial :

    printf("Enter a number ro find factorial : ");
    scanf("%d",&n);
    printf("Factorial = %d \n",fact(n));

//fibonacci series:

    printf("\nEnter the number of terms for fibonacci series: ");
    scanf("%d",&n);
    printf("fibonacci series : ");
        for ( i = 0; i < n; i++)
        {
             printf("%d ", fibonacci(i));
        }
         printf("\n");
    return 0;    
}