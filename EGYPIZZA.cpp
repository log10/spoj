/* friends want their pieces from single pizza, not like a part from one pie and remaining from other pie 
   if someone needs 1/2 then U should give that 1/2 from single pie, not like 1/4 from 1 pie and remaining
   1/4 from another pie.
*/
#include <iostream>
#include<stdio.h>

using namespace std;

int main() {
	int t,h=0,q=0,tq=0,sum=1;
	string s;
	scanf("%d",&t);
	while(t--){
		cin>>s;
		if(s=="1/2")h++;
		else if(s=="3/4")tq++;
		else if(s=="1/4")q++;
	}
	sum+=tq;
	q-=tq;
	sum+=h/2;
	if(h%2==1){
		sum++;
		q-=2;
	}
	if(q>0){
		sum+=q/4;
		if(q%4!=0)
			sum++;
	}
	printf("%d",sum);
	return 0;
}