/* the thing is U need to kill weakest godzillas from both teams
   so after killing all weaker ones there will be only one remain from each team
   its nothing but max of both teams, now compare those max's of two teams and announce the winnner
*/
#include <stdio.h>

int main()
{
	int t, ng, nm, maxg, maxm, g, m;
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d %d", &ng, &nm);
		maxg = maxm = -1;
		while(ng--)
		{
			scanf("%d", &g);
			maxg=(g > maxg)?g:maxg;
		}
		while(nm--)
		{
			scanf("%d", &m);
			maxm=(m > maxm)?m:maxm;
		}
		(maxg >= maxm)?printf("Godzilla\n"):printf("MechaGodzilla\n");
	}
	return 0;
}