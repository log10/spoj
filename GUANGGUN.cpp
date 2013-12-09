/*   given 'n' is number of digits in '111111.....1'
     U need to find the sum of digits of square of '111111....1' 
     using calculater U can find the pattern in this square
     it's a recursive pattern.
*/

#include<iostream>
#include <stdio.h>

#define sum(x) x*x+x

using namespace std;

long long calc(long long n){
	long long s;
	if(n>9)
		s=calc(n-9)+81;
	else
		s=sum(n)-n;
	return s;
}
	
int main(void) {
	long long t;
	while(scanf("%lld",&t)!=EOF)
		printf("%lld\n",calc(t));
	return 0;
}