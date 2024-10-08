#include <stdio.h>
void main()
{
    int i,n,s=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    if(i%2==1)
    {
        s=s+i;
    }
    printf("sum = %d",s);
}
