#include<stdio.h>
int F(int n)
{
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else
        return F(n-1)+F(n-2);
}
main()
{
    int n;
    scanf("%d",&n);
    printf("%d\n",F(n));
}
