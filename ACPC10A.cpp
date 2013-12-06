/* finding whether the series is 'AP' or 'GP' and the next number in that series*/

#include <stdio.h>

int main(void) {
	int a1,a2,a3;
    while(1){
        scanf("%d %d %d",&a1,&a2,&a3);
        if(a1==0&&a2==0&&a3==0)
                return 0;
        if(a2-a1==a3-a2)                        // condition for AP
                printf("AP %d\n",(a3<<1)-a2);
        else
                printf("GP %d\n",a3*a3/a2);
    }
	return 0;
}