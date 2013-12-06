/* you are provided with sum and values from AP series i.e, a+2*d and a+(n-3)*d or last element-2*d */

#include <stdio.h>

int main(void) {
	int t;
    long long n1,n2,sum,n,d,a1,i;
    scanf("%d",&t);
    while(t--){
        scanf("%lld%lld%lld",&n1,&n2,&sum);
        n=(sum<<1)/(n1+n2);
        d=(n2-n1)/(n-5);
        a1=n1-(d<<1);
        printf("%lld\n%lld ",n,a1);
        for(i=1;i<n;i++)
                printf("%lld ",a1+=d);
    }
	return 0;
}