/*	just find that sum gives remainder 0 when divided by total number of kids
*/

#include <stdio.h>

int main(void) {
	long long n,sum,x;
	int t,i;
	scanf("%d",&t);
	while(t--){
		scanf("%lld",&n);
		sum=0;
		for(i=0;i<n;i++,sum%=n){
			scanf("%lld",&x);
			sum+=x%n;
		}
		if(sum==0)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}