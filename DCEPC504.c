/*   I found it through recursive function. U can understand this property it is
        1. 1st & 2nd  child in every generation is male and female respectively
        2. odd childs are first child of its parent
        3. even childs are second child of its parent
     by finding parent gender U can find the child's gender
*/

#include<stdio.h>



char find(int n,long long m)
{

    if(m==1)

       return 'm';

    else if(m==2)

       return 'f';

    else{

        if(m%2==0)

        {

                if(find(n-1,(m>>1))=='f')
 
                	return 'm';

                else
 
                	return 'f';

        }

        else{

                if(find(n-1,(m>>1)+1)=='f') 

                	return 'f';

                else
 
                	return 'm';

            }

        }

}


int main()
{

	int t,n;

        long long m;

        scanf("%d",&t);

       	while(t--){

            scanf("%d%lld",&n,&m);

            if(find(n,m)=='m')

            	printf("Male\n");

            else

            	printf("Female\n");

        }

return 0;

}