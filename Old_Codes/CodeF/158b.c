#include<stdio.h>
int main()
{
	int n,a,one=0,two=0,three=0,four=0,taxi=0;
	scanf("%d", &n);
	while(n--)
	{
		scanf("%d", &a);
		if(a==1) one++;
		else if(a==2) two++;
		else if(a==3) three++;
		else four++;
	}

	taxi+=(four+three);
	if(one>=three) one-=three;
	else one=0;
	if(two%2==0) {taxi+=(two/2); two=0;}
	else{taxi+=((two-1)/2);two=1;}
	if(two){taxi++; one=(one>=2)?one-2:0;}
	taxi+=((one/4)+((one%4==0)?0:1));
	printf("%d", taxi);

	return 0;
	
}
