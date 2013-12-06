/* checking for reversed substring in a string is equivalent to checking whether the string is reverse or not */
/*
	still confused, consider    'lokeshsekol' take any substring
				let 'lo'- at the end 'ol'
				another on 'ek' its reversed version is 'ke' its in between 'o' and 's'
*/
#include <iostream>
#include<string.h>
#include<stdio.h>

using namespace std;

int main() {
	int t,n;
	string s;
	scanf("%d",&t);
	while(t--){
		cin>>s;
		if(s.length()==1)
			printf("YES\n");
		else{
			n=s.length();
			for(int i=0;i<n/2;i++)
				if(s[i]!=s[n-1-i]){
					printf("NO\n");
					goto out;
				}
			printf("YES\n");
		}
		out:;
	}
	return 0;
}