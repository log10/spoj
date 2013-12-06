/* replacing the 'machula' */

#include <iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

//checking whether the part of expression consist of 'machula'

int compar(string s){             
	int l=s.size()-7;
	if(l>=0){			//if its less than 7 then it doesn't contain the 7 letter word 'machula'	
		int i;
		string str="machula";
		for(i=0;i<=l;i++)
			if(s.compare(i,7,str)==0)
				return 1;
	}
	return 0;
}

//changing the string into number

int change(string s){
	int i,n,l=s.size();
	n=s[0]-'0';
	for(i=1;i<l;i++)
		n=(s[i]-'0')+n*10;
	return n;
}

int main() {
	int t,i,ix,iy,iz;
	string x,y,z;
	scanf("%d",&t);
	for(i=1;i<=t;i++){
		cin>>x;
		scanf("%*c%*c%*c");
		cin>>y;
		scanf("%*c%*c%*c");
		cin>>z;
		if(compar(x)){
			iy=change(y);
			iz=change(z);
			printf("%d + %d = %d\n",iz-iy,iy,iz);
		}
		else if(compar(y)){
			ix=change(x);
			iz=change(z);
			printf("%d + %d = %d\n",ix,iz-ix,iz);
		}
		else if(compar(z)){
			iy=change(y);
			ix=change(x);
			printf("%d + %d = %d\n",ix,iy,ix+iy);
		}
	}
	return 0;
}