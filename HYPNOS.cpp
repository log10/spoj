/* happy number = sum of square of digits of number is 1
   U need to store the intermediate results. once U find that its repeating then stop the process
   print -1 otherwise find the sum of digits for obtaining intermediate results, U will arrive at 1
   stop there print the number of intermediate results U found.
*/

#include <iostream>
#include<stdio.h>
#include<set>

#define square(x) x*x

using namespace std;

int main() {
	int t,x;
	scanf("%d",&t);
	set<int> fun;
	while(t!=1 && fun.find(t)==fun.end()){
		x=t;
		t=0;
		fun.insert(x);
		while(x>0){
			t+=square((x%10));
			x/=10;
		}
	}
	if(t==1) printf("%d\n",fun.size());
	else printf("-1\n");
	return 0;
}