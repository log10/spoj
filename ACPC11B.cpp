/*need to find a point from each mountain such that their difference is minimum among all other possible pairs*/

#include <iostream>
#include<stdio.h>

using namespace std;

long long diff(long long x,long long y){
	long long n=x-y;
	return (n<0)?-1*n:n;
	
}
int main() {
	int t,n1,n2,i,j;
	long long a[1000],b[1000],min,x;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n1);
		i=0;
		while(i<n1)
			scanf("%lld",&a[i++]);
		i=0;
		scanf("%d",&n2);
		while(i<n2)
			scanf("%lld",&b[i++]);
		min=999999;
		for(i=0;i<n1;i++)
			for(j=0;j<n2;j++){
					x=diff(a[i],b[j]);// comparing all possible differences
					if(x<min){
						min=x;		
						if(x==0)	
							goto out;//if U found a point of same altitude
								 //then move to next case
					}
				
				}
		out:
		printf("%lld\n",min);
	}
	return 0;
}