#include<iostream>
#include<algorithm>
using namespace std;
main()
{
    int n;
    scanf("%d",&n);

    int i=0;
    int a[1000]={0};
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int len=unique(a,a+n)-a;
    /*for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }*/
    printf("%d\n",len);
}
