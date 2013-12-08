/*  question is clear if the key is < 26 no case change, otherwise key is > 25 need to change the case
    generally U need to add the key and if it exceeds 25 take modulo for 26 and change '.' into space
*/
#include<stdio.h>

int main() {
    int t,k,i,x;
    char a;
    scanf("%d",&t);
    while(t--){
        scanf("%d%*c",&k);
        if(k<26){
            while(1){
               if((a=getchar())=='\n')break;
               else if(a=='.')
                   printf(" ");
               else if(a>96){
                   x=a-97;
                   printf("%c",97+(x+k)%26);
               }
               else{
                   x=a-65;
                   printf("%c",65+(x+k)%26);
               }
            }
        }
        else{
            while(1){
               if((a=getchar())=='\n')break;
               else if(a=='.')
                   printf(" ");
               else if(a>96){
                   x=a-97;
                   printf("%c",65+(x+k)%26);
               }
               else{
                   x=a-65;
                   printf("%c",97+(x+k)%26);
               }
            }
        }
        printf("\n");
    }
    return 0;
}