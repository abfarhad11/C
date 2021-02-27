#include <stdio.h>

int main(void)
{
	int n,i,tInterarrival[30],tArrival[30];
	tInterarrival[0] = 0;
	tArrival[0] = 0;

	for( i = 0 ; i < 29 ; i++ )
	{
		n = rand()%70;
		tInterarrival[i+1] = n;
	}

	for(i = 0; i < 29; i++)
	{
		tArrival[i+1] = tArrival[i] + tInterarrival[i+1];
	}

	printf("Customer No\t\tInterarrival Time\t\tArrival Time\n");
	for(i = 0; i < 30; i++)
	{
		printf("%d\t\t\t\t %d\t\t\t\t\t\t %d\n",i+1,tInterarrival[i],tArrival[i]);
	}

}
