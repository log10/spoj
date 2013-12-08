/* given number should be the sum of the series '1,6,12,18,24,......'
   beehive numbers are 1,7=1+6,19=1+6+12,37=1+6+12+18,61,97......
*/

#include<stdio.h>

#include<math.h>



int main()
{

    double k;

    while(1){

    	scanf("%lf",&k);

    	if(k==-1)
 
    		return 0;

    	k=(sqrt(1+(4*k-4)/3)-1)/2;

    	(k-floor(k))?printf("N\n"):printf("Y\n");

    }

   return 0;

}