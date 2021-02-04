#include<stdio.h>
int main()
{
    float in;
    int tmp,a,b;
    scanf("%f",&in);
    tmp=in*100;
    a=tmp%100;
    b=tmp-a;
    if(b>=0 && b<=11.59)
        printf("%f a.m.",in);
    else
        printf("%f p.m.",in-12)


}


