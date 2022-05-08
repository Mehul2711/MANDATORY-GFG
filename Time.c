#include <stdio.h>
int main()
{   
    int tot_mins,hrs,mins;
    scanf("%d",&tot_mins);
    mins=tot_mins%60;
    hrs=tot_mins-mins,
    hrs=hrs/60;
    printf("%d Hours and %d Minutes",hrs,mins);

	return 0;
}