/* need to find the total number of DNAs in each distinct types
   in given test case AAAAAA(1) -1
                      GTTTTG(2),TCCCCC(2) -2
                      ACACAC(4) -1
*/

#include <iostream>
#include<stdio.h>
#include<map>
using namespace std;

int main() {
	int n,m,i,x=0;
	while(1){
		multimap<string,int> str;
		map<string,int> st;
		scanf("%d%d",&n,&m);
		if(n==0&&m==0)
			return 0;
		int a[20001]={0};
		string s;
		for(i=1;i<=n;i++){
			cin>>s;
			str.insert(pair<string,int>(s,i));
			st.insert(pair<string,int>(s,i));
		}
		for(map<string,int>::iterator ii=st.begin();ii!=st.end();++ii)
			a[str.count((*ii).first)]++;
		for(i=1;i<=n;i++)
			printf("%d\n",a[i]);
	}
	return 0;
}