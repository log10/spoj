/* set makes the task very simple */

#include <iostream>
#include<set>
using namespace std;

int main() {
	set<int>a;
	int x,f,in,fof;
	cin>>x;
	f=x;
	while(x--){
		cin>>in;
		a.insert(in);
		cin>>fof;
		while(fof--){
			cin>>in;
			a.insert(in);
		}
	}
	cout<<a.size()-f;
	return 0;
}