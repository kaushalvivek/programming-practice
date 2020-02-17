#include<stdio.h>

int min(int a, int b)
	{
		int x=a,y=b;
		int smaller = x>y? y:x;
		return smaller;
	}

int main()
{
	int n,ans=0;
	scanf("%d", &n);
	char initial[n];
	char final[n];
	int Ifinal[n];
	int Iinitial[n];
	scanf("%s", initial);
	scanf("%s", final);
	int i;
	for(i=0;i<n;i++)
	{
		Iinitial[i]=initial[i]-48;
		Ifinal[i]=final[i]-48;
	}
	
	for(i=0;i<n;i++)
	{
		if(Iinitial[i]>Ifinal[i])
			ans+=min((Iinitial[i]-Ifinal[i]),((10+Ifinal[i]-Iinitial[i])));

		else
			ans+=min((Ifinal[i]-Iinitial[i]),(10+Iinitial[i]-Ifinal[i]));
			
	}
	
	printf("%d", ans);

	


return 0;
}
