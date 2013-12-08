/* U need to find the possibly minimum total number of price
   for class with maximum number students assign candy with minimum price
   likewise for class with minimum number of students assign candy with maximum price
*/

#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int compare1 (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

int compare2 (const void * a, const void * b)
{
  return (  *(int*)b - *(int*)a );
}
int main(void) {
	long long t,x,sum,i;
	while(1){
		scanf("%lld",&t);
		if(t==0)
			break;
		x=t;
		long long a[x],b[x];
		i=0;
		while(t--)
			scanf("%lld",&a[i++]);
		i=0;
		while(x--)
			scanf("%lld",&b[i++]);
		sum=0;
		qsort((void*)a,i,sizeof(long long),compare1);
		qsort((void*)b,i,sizeof(long long),compare2);
		for(int k=0;k<i;k++)
			sum+=a[k]*b[k];
		printf("%lld\n",sum);
	}
	return 0;
}