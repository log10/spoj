/*	add the numbers if it exeeds 100 then compare sums. select the one with closer  to 100
        consider U have sum 89 and next mushroom has points 20 then total 109 will be greater than
        100 now we need to select which is closer to 100.
        100-89 = 11
        109-100 = 9
        here 9<11 so 109 is closer to 100
*/

#include <iostream>
#include<stdio.h>

using namespace std;

int main() {
	int t=9,n,sum;
	scanf("%d",&sum);
	while(t--){
		scanf("%d",&n);
		if(sum+n>100){
			if(100-sum<sum+n-100)
				printf("%d",sum);
			else
				printf("%d",sum+n);
			n=0;
			break;
		}
		sum+=n;
	}
	if(n!=0){
		printf("%d",sum);
		return 0;
	}
	while(t--&&t>0)
		scanf("%*d");
	
	return 0;
}