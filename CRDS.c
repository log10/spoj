/*  simple workout will give the answer, differentiat the cards /\ and /_\  1st one appears only at bottom level
    count the cards accordingly based on type
*/
#include<stdio.h>

int main(){
    long long num,level;
    int t;
    scanf("%d",&t);
    while(t--){
        scanf("%lld",&level);
        num=(3*level+1)*level>>1;
        printf("%lld\n",num%1000007);
    }
    return 0;
}