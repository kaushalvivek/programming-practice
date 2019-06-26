#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
//	int A[50];
//	int n=50;
//	while(n--)
//	A[n-1]==0;
	int one=0,two=0,three=0;
	scanf("%s", a);
	int i,len= strlen(a);
	for(i=0;i<len;i++)
	{
		if(a[i]=='1')
		one++;
		
		else if(a[i]=='2')
		two++;
	
		else if(a[i]=='3')
		three++;
	}

	
	while(one--)
	{
	printf("1");
	if((one>0)||(two>0)||(three>0))

	printf("+");
	}

	while(two--)
	{
	printf("2");
	if((one>0)||(two>0)||(three>0))
	printf("+");
	}

	while(three--)
	{
	printf("3");
	if((one>0)||(two>0)||(three>0))
	printf("+");
	}
	return 0;
}
