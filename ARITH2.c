/*
	Its nothing but a calculator program
*/

#include<stdio.h>

int main() {
	long long t,n,m;
	char c;
	scanf("%lld",&t);
	while(t--){
		scanf("%lld",&n);
		while((c=getchar())!='='){
			switch(c){
				case ' ':break;
				
				case '*':scanf("%lld",&m);
					n*=m;
					break;
				case '/':scanf("%lld",&m);
					n/=m;
					break;
				case '+':scanf("%lld",&m);
					n+=m;
					break;
				case '-':scanf("%lld",&m);
					n-=m;
					break;
				default:{}
			}
		}
		printf("%lld\n",n);
	}
	return 0;
}