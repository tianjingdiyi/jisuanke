#include<stdio.h>
main()
{
    int n;
    scanf("%d",&n);

    int a[100];
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    int elem;
    scanf("%d",&elem);

    int b[100]={0};
    int len=0;
    for(i=0;i<n;i++)
    {
        if(a[i]!=elem)
        {
            b[len]=a[i];
            len++;
        }
    }
    printf("%d",len);
}
