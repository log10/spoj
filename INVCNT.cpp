/* same as CODESPTB */

#include <iostream>
#include<stdio.h>

using namespace std;

long long total;

void merge(long long a[],long long start,long long mid,long long end){
	long long ll=mid-start+1,lr=end-mid;
	long long l[ll],r[lr],i,j,k;
	for(i=0;i<ll;i++)
		l[i]=a[start+i];
	for(i=0;i<lr;i++)
		r[i]=a[mid+1+i];
	i=j=0;
	k=start;
	while(i<ll&&j<lr){
		if(l[i]<=r[j])
			a[k]=l[i++];
		else{
			total+=ll-i;
			a[k]=r[j++];
		}
		k++;
	}
	while(i<ll)
		a[k++]=l[i++];
	while(j<lr)
		a[k++]=r[j++];
}
void mergs(long long a[],long long start,long long end){
	if(start<end){
		long long mid=(start+end)/2;
		mergs(a,start,mid);
		mergs(a,mid+1,end);
		merge(a,start,mid,end);
	}
}
int main() {
	long long t,n,i;
	scanf("%lld",&t);
	while(t--){
		total=0;
		scanf("%lld",&n);
		long long a[n];
		for(i=0;i<n;i++)
			scanf("%lld",&a[i]);
		mergs(a,0,n-1);
		printf("%lld\n",total);
	}
	return 0;
}