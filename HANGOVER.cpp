/*  Its clearly given 1/2+1/3+1/4+1/5...1/n+1
    test case consist only 2 decimals so let consider 1.00
    ( 1/2=0.50 + 1/3=0.34 + 1/4=0.25 ) = 1.09 equivalent to 1.00 so 1/4=1/(n+1) n=3 three cards
*/

#include <iostream>
#include<stdio.h>

using namespace std;

int main() {
	float n,x,i;
	while(1){
		scanf("%f",&n);
		if(n==0.00)
			break;
		i=2.00f;
		x=0.00f;
		while(n>=x){
			x+=1.00f/i;
			i++;
		}
		printf("%0.0f  card(s)\n",i-2);
	}
	return 0;
}