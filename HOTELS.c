/* U are provided with number of hotels = N and total money = M
   and cost of hotels in their order.
   U need to purchase hotels, conditions: 1.purchase hotels in squential order only
                                          2.sum of cost must be <= M but be greatest among
                                            all possible sums
   to solve this, consider a chain of boxes U need to add boxes at one end, if limit
                  of chain is attained then remove the 1st added box then continue
                  adding boxes. At each time of removing the first box compare box's sum
                  find the maximum boxes chain can bare( here length of boxes are not unique).
*/

#include<stdio.h>

int m,a[300010],k;
long long sum,max;

void fun(int x){
    if(sum+x>m){
            if(max<=sum)
                max=sum;
            sum-=a[k++];
            fun(x);
    }
    else{
        sum+=x;
    	if(max<=sum)
    		max=sum;
    }
}

int main() {
	k=sum=max=0;
    int n,i;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++){
        scanf("%d",a+i);
        fun(a[i]);
    }
    printf("%lld\n",max);
    return 0;
}