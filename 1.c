#include <stdio.h>
#include<conio.h>
void main()
{
    int i,n,r,sum=0;
    printf("Enter N:");
    scanf("%d",&n);
    while(n!=0)
    {
     r=n%10;
     sum=sum+r;
     n=n/10;
    }
    printf("\nThe Sum is %d",sum);
    getch();
}
