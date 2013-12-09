/*   U need to arrange girls and boys in a row such that minimum number of
     gender gap. For example 10,10 U can arrange one girl,one boy side by side so
     gender regularity is 1.
     in case of 5,1 : [2 boys + 1 girl + 3 boys] so gender regularity is 3
     think how 1 divides 5 into two parts then U will get the answer
*/

#include <iostream>
#include<math.h>
using namespace std;

int main() {
	double x,y;
	int n;
	while(1){
		cin>>x>>y;
		if(x==-1 && y==-1)
			return 0;
		if(x==0&&y==0)
			cout<<0<<endl;
		else if(x==y)
			cout<<1<<endl;
	    else{
			n=(x>y)?ceil(x/(y+1.0)):ceil(y/(x+1.0));
			cout<<n<<endl;
		}
	}
	return 0;
}