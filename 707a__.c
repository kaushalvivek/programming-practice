#include<stdio.h>
int main()
{
	int i,j,test=0;
	scanf("%d%d", &i,&j);
	int a =i*j;
	char c;
	while(a!=0)
	{
		scanf("%c", &c);
		if((c=='C')||(c=='M')||(c=='Y')) test=1;
		a--;
	}
	if(test!=0) puts("#Color");
	else puts("#Black&White");
return 0;
}
