/* shape of fence is semicircle its circumference is given that is length
   U need to find that area, simple paper workout will give the answer
*/

#include<stdio.h>

int main(){
    double pi=3.14159265359;
    int n;
    while(1){
        scanf("%d",&n);
        if(n==0)
            break;
        printf("%0.2lf\n",n*n/pi/2);
    }
    return 0;
}