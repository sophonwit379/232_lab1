#include<stdio.h>
#include<math.h>
int main()
{
    float in;
    int tmp,a,b,c;
    scanf("%f",&in);
    tmp=in*100;
    a=tmp%100;
    b=(tmp-a)/100;
    if(b>=0 && b<=11)
    {
        printf("%d:%d a.m.",b,a);
    }
    else if(b==12)
    {
        printf("%d:%d p.m.",b,a);
    }
    else
    {
        printf("%d:%d p.m.",b-12,a);
    }


}


