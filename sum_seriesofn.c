#include<stdio.h>
int main()
{
    int num, i,sum=1;
    printf("Enter number n ");
    scanf("%d",&num);
    printf("1 ");
    for(i=2;i<=num;i++)
    {
        printf(" + %d",i);
        sum=sum+i;}
        printf(" = %d",sum);






}

