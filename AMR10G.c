/* U need to select K kids and the height of tallest and smallest kid U selected must be maintained as
   minimum as possible
*/

#include <stdio.h>
#include<stdlib.h>

#define min(x,y) (x>y)?y:x

//I used quicksorting for arranging the kids and so selecting the k kids will be easy

int compare(const void *a,const void *b){
    return *(int*)a-*(int*)b;
}

int main(){
    int t,n,k,i;
    long long h[20009],m;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d",&n,&k);
        for(i=0;i<n;i++)
            scanf("%lld",&h[i]);
        qsort(h,n,sizeof(h[0]),compare);
        m=h[k-1]-h[0];
        for(i=1;i+k<=n;i++)
        	m=min(m,(h[i+k-1]-h[i]));
        printf("%lld\n",m);
    }
	return 0;
}