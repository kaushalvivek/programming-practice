#include<stdio.h>
int main()
{
int p=0, c=0, n, temp;
scanf ("%d", &n);
int i;
for(i=1;i<=n;i++)
	{
		scanf("%d", &temp);
		if(temp== -1)
		{
			if(p!=0)
			{
				p--;
			}
			else
			{
				c++;
			}
		}
		else
		{
			p+=temp;
		}
	}
printf("%d", c);
return 0;
}
