/*   its very simple yes= all 'n' heroes are alive after getting 'd' damages from 'm' towers
     i.e, for each mth tower someone should take 'd' damage (H-D)
     no= atleast one hero should lack his power that is H<=0
*/
#include<stdio.h>

int max(int a[],int n){
    int x=0,l,j;
        for(j=0;j<n;j++)
                if(x<a[j]){
                	x=a[j];
                	l=j;
                }
    
        return l;
}

int main(){
    int t,n,m,d,j;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d%d",&n,&m,&d);
        int h[n];
        for(j=0;j<n;j++)
                scanf("%d",h+j);
        for(j=0;j<m;j++)
                if((h[max(h,n)]-=d)<=0){
                	printf("NO\n");
                	goto out;
                }
        printf("YES\n");
        out:;
    }
return 0;
}