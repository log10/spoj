/*   its actually DP: step1 U need to find sum of n/2,n/3,n/4 and compare with n print the greatest one
     for finding n/2,n/3,n/4 also apply step1
*/

#include<iostream>
#include<stdio.h>
#include<map>

using namespace std;

map<long long,long long> a;

long long find(long long n){
	if(n==0)
		return 0;
	else if(a.find(n)!=a.end())
		return a.find(n)->second;
	long long x;
	x=find((n>>1))+find((n/3))+find((n>>2));
    return a[n]=(n<x)?x:n;
}
int main()
{
   long long n;
   while(cin>>n)
        printf("%lld\n",find(n));
   return 0;
}