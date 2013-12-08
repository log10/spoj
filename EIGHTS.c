/* just find the first 9 numbers in series then its simple*/

#include<stdio.h>

int main(){
    long long t,n;
    scanf("%lld",&t);
    while(t--){
        scanf("%lld",&n);
        if(n==1||(n-1)%4==0)
            printf("%lld\n",192+((n-1)>>2)*1000);
        else if(n==2||(n-2)%4==0)
            printf("%lld\n",442+((n-1)>>2)*1000);
        else if(n==3||(n-3)%4==0)
            printf("%lld\n",692+((n-1)>>2)*1000);
        else if(n==4||n%4==0)
            printf("%lld\n",942+((n-1)>>2)*1000);
    }    
    return 0;
}