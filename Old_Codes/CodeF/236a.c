#include<stdio.h>
#include<string.h>
int main()
{
	int j,i,a,b=0;
	char A[101];
	scanf("%s", A);
	a=strlen(A);
	for(i=0;i<a;i++)
	{
		for(j=i+1;j<a;j++)
		{
			if(A[i]==A[j])
			goto here;
		}
		
		b++;
		here:
		continue;
	}

	if(b%2==0)
	puts("CHAT WITH HER!");

	else
	puts("IGNORE HIM!");

	return 0;
}
