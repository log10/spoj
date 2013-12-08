/*   it's similar to CADYDSIT, sum of product must be greater one, pair the max with max */

#include<stdio.h>

#include<stdlib.h>



int compare (const void * a, const void * b)
{

  return ( *(int*)a - *(int*)b );

}



int main(void) {

        int t,x,sum,i;

        scanf("%d",&t);

	while(t--){

		scanf("%d",&x);

		int a[x],b[x];

		i=0;

		sum=x;

		while(x--)

			scanf("%d",a+ i++);

		i=0;

		while(sum--)

			scanf("%d",b + i++);

		sum=0;

		qsort((void*)a,i,sizeof(int),compare);

		qsort((void*)b,i,sizeof(int),compare);

		for(x=0;x<i;x++)

			sum+=a[x]*b[x];

		printf("%d\n",sum);

	}

	return 0;

}