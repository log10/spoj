/* get the number reverse it, add it and then reverse it and print*/

#include<stdio.h>
int main()
{
   int n,i,a,b,r1,r2;
   scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        r1=0;
        r2=0;
        scanf("%d%d",&a,&b);
        for(;a>0;a/=10)r1=a%10+r1*10;
        for(;b>0;b/=10)r2=b%10+r2*10;
        r1+=r2;
        for(;r1>0;r1/=10)a=r1%10+a*10;
        printf("%d\n",a);
    }
   return 0;
}