/*  in this problem its clear U need to find the number swaps
    for example 2,5,6,3,7,1 here 1 swapped 5 times,3 by 2 times totaly 7 swaps
    using merge sort U can find it.
*/

#include<stdio.h>

int total;

void merge(int a[],int start,int mid,int end){
	int ll=mid-start+1,lr=end-mid;
	int l[ll],r[lr],i,j,k;
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
void mergs(int a[],int start,int end){
	if(start<end){
		int mid=(start+end)>>1;
		mergs(a,start,mid);
		mergs(a,mid+1,end);
		merge(a,start,mid,end);
	}
}
int main() {
	int t,n,i;
	scanf("%d",&t);
	while(t--){
		total=0;
		scanf("%d",&n);
		int a[n];
		for(i=0;i<n;i++)
			scanf("%d",a+i);
		mergs(a,0,n-1);
		printf("%d\n",total);
	}
	return 0;
}