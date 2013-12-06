/*spoj cut the silver*/

#include<stdio.h>
#include<math.h>

int main() {
	long n;
	double l2=log(2);
	while(1){
		scanf("%ld",&n);
		if(n==0)
			return 0;
		printf("%ld\n",(long)(log(n)/l2));   //log (x) of base y=(log (x) of base z)/log (y) of base z
	}
	return 0;
}