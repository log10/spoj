/*      problem is need to find the LCM(i.e, x=LCM/A,y=LCM/B)
	using modulor arithmetic LCM=A*B/gcd(A,B) (source wikipedia)
*/

#include <stdio.h>

int gcd(int a,int b){
	return (a%b==0)?b:gcd(b,a%b);
}
int main(void) {
	int t,a,b,g;
	scanf("%d",&t);
	while(t--){
		scanf("%d%d",&a,&b);
		g=(a>b)?gcd(a,b):gcd(b,a);
		printf("%d %d\n",b/g,a/g);
	}
	return 0;
}