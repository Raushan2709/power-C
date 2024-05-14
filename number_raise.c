#include<stdio.h>
int main()
{
    int power=1;
    int a;
    printf("enter base :");
    scanf("%d",&a);
    int b;
    printf("enter power  :");
    scanf("%d",&b);
    for (int i=1;i<=b;i++)
    {
        power=power*a;
    }
    printf("%d",power);
    return 0;
}