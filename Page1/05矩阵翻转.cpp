#include<stdio.h>
main()
{
    int m,n,t;
    scanf("%d%d%d",&m,&n,&t);
    //printf("%d\n",n);
    int i,j;
    int a[200][200];
    for(i=0;i<m;i++)
    {
        //printf("hh\n");
        for(j=0;j<n;j++)
        {
        	//printf("%d\n",j);
            scanf("%d",&a[i][j]);
        }
    }
    if(t==1)
    {
        for(i=m-1;i>=0;i--)
        {
            for(j=0;j<n;j++)
            {
                printf("%d ",a[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        for(i=0;i<m;i++)
        {
            for(j=n-1;j>=0;j--)
            {
                printf("%d ",a[i][j]);
            }
            printf("\n");
        }
    }
}
