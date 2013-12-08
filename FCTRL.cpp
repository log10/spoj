/*    actually zero is produced when multiplied by 5 and even(2).
      for factorial of 10 =1*2*3*4*5*6*7*8*9*10 here 5*2 will give one zero and 10 gives another zero
      which is nothing but 2*5 so totally two 5s involved to give two 0s
      based on this, number of 5s in a given number = number of 0s in its factorial
*/

#include<stdio.h>
#include<iostream>

using namespace std;

int main(){
	int t;
	scanf("%d",&t);
	long long sum,temp;
	while(t>0){
		t--;
		sum=0;
		scanf("%lld",&temp);
		while(temp){
			temp/=5;
			sum+=temp;
		}
		printf("%lld\n",sum);
		}
	return 0;
}