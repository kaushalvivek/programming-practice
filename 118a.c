#include<stdio.h>
#include<string.h>
int main()
{
char petya[100];
char ans[200];
scanf("%s", petya);
int i,n = strlen(petya),test=0;
for(i=0;i<n;i++)
	{
		petya[i]=tolower(petya[i]);
	}

int j,m=n;
for(i=0;i<=n-1;i++)
	{
		if ((petya[i]=='a')||(petya[i]=='e')||(petya[i]=='i')||(petya[i]=='o')||(petya[i]=='u')||(petya[i]=='y'))
		

		{
		for(j=i;j<=n-1;j++)
			{
				petya[j]= petya[j+1];
				m--;
			}

	//		i--;
		}}

		{
		//insert . 
		
			for(j=0;j<2*m;i++)
			{
				if(!test)
				{
					ans[j]='.';
					test=1;
				}
			
				else
				{
					ans[j]=petya[(j+1)/2];
					test=0;
				}
			}		
			
		}
	
printf("%s",ans);
return 0;
}
