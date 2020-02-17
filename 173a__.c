#include<stdio.h>
#include<string.h>
long long int one=0, two=0;

void rps(char a, char b)
	{
		if(a=='R' && b=='R') return;
		if(a=='R' && b=='P') two++;
		if(a=='R' && b=='S') one++;
		if(a=='S' && b=='P') one++;
		if(a=='S' && b=='R') two++;
		if(a=='S' && b=='S') return;
		if(a=='P' && b=='S') two++;
		if(a=='P' && b=='R') one++;
		if(a=='P' && b=='P') return;
		return;
	}

int main()
{
	long long int i,n;
	scanf("%lld", &n);
	char p1[10000], p2[10000];
	scanf("%s%s", p1, p2);
	if (strcmp(p1,p2)==0) {printf("0 0"); goto here;}
	long long int count1=strlen(p1),count2=strlen(p2);
	
	for(i=0;i<n;i++) rps(p1[i%count1],p2[i%count2]);
	
	printf("%lld %lld", two, one);
	here: return 0;
}
