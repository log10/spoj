/*  find the max of inner radius and find the second max of outer radius and then compare thats all
*/
#include<stdio.h>

int main() {
    int t,n,r,R1,R2,x1,x2,i,i1,i2;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        r=R1=R2=0;
        for(i=1;i<=n;i++){
            scanf("%d%d",&x1,&x2);
            if(r<x1){
                i1=i;
                r=x1;
            }
            if(R1==R2&&R1==0){
                R2=x2;
                i2=i;
            }
            else if(R2<x2){
                R1=R2;
                R2=x2;
                i2=i;
            }
            else if(R1<x2)
                R1=x2;
        }
        if((r<R2 && i1!=i2)||r<R1)
            printf("-1\n");
        else
            printf("%d\n",i1);
    }
    return 0;
}