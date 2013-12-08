/*   https://www.spoj.pl/UMSA4/UMSA4/content/SetProblemas.pdf where you can find the picture
     just find the way to count the number of marbles totally, for given number of marbles in one side
     let given numbers be 1: then one side of of pentagon has one marble from picture it has 5 marbles
*/
#include<stdio.h>

int main() {
    int n;
    while(1){
        scanf("%d",&n);
        if(n==0)
            return 0;
        printf("%d\n",(n<<2)+3*((n*n-n)>>1)+1);
    }
    return 0;
}