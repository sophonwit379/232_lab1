#include<stdio.h>
int main()
{
    int n,i,max,lo;
    scanf("%d",&n);
    int num[n];
    for(i=0;i<n;i++)
        scanf("%d",&num[i]);
    max=num[0];
    for(i=1;i<n;i++)
    {
        if(max<num[i])
        {
            max=num[i];
            lo=i+1;
        }
    }
    printf("%d %d",lo,max);


}

