/*  12, 24 has divisors 1,2,3,4,6,12 & 1,2,3,4,6,12,24
    common divisors are 1,2,3,4,6,12 do U absorb that Divisors of GCD=12 is the common divisor of 12,24
*/

#include<stdio.h>
#include <iostream>
#include<math.h>

using namespace std;

int gcd(int a,int b){
	return (a%b==0)?b:gcd(b,(a%b));
}

int main() {
	int t,a,b,nc,i,g,sg;
	scanf("%d",&t);
	while(t--){
		scanf("%d%d",&a,&b);
		g=(b>a)?(gcd(b,a)):(gcd(a,b));
		if(g==1){
			printf("1\n");
		}
		else{
			sg=sqrt(g);
			nc=0;
			for(i=1;i<=sg;i++)
				if(g%i==0)
					nc=(g==i*i)?nc+1:nc+2;
			printf("%d\n",nc);
		}
	}
	return 0;
}