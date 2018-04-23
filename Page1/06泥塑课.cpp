#include<stdio.h>
#include<algorithm>
using namespace std;
struct P
{
    int length;
    int width;
    int height;
    char name[10];
    bool operator < (const P &A) const
    {
        return length*width*height<A.length*A.width*A.height;
    }
}P[10];
main()
{
    int n;
    scanf("%d",&n);
    while(n!=-1)
    {
        int i;
        for(i=0;i<n;i++)
        {
            scanf("%d%d%d%s",&P[i].length,&P[i].width,&P[i].height,&P[i].name);
        }
        sort(P,P+n);
        printf("%s took clay from %s.\n",P[n-1].name,P[0].name);
        scanf("%d",&n);
    }

}
