#include<stdio.h>
int main()
{
int n,i,e=0,o=0,E,O;
scanf("%d", &n);
int A[n];
for(i=0; i<=n-1;i++)
{
scanf("%d",&A[i]);
}
for(i=0;i<=n-1;i++)
	{
		if(A[i]%2==0)
			{
				e++;
				E=i+1;
			}
		
		else
			{
				o++;
				O=i+1;
			}
	}
if(e==1)
printf("%d", E);
else
printf("%d", O);
return 0;
}

