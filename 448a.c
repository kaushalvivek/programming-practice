#include<stdio.h>
int main()
{
int a1,a2,a3;
int b1,b2,b3;
scanf("%d%d%d",&a1,&a2,&a3 );
scanf("%d%d%d",&b1,&b2,&b3 );
int n;
scanf("%d", &n);
int c1,c2;
int i;
for(i=1;;i++)
	{
		if(a1+a2+a3<=5*i)
			{
				c1=i;
				break;
			}
	}

for(i=1;;i++)
	{
		if(b1+b2+b3<=10*i)
			{
				c2=i;
				break;
			}
	}
if(a1+a2+a3==0)
c1=0;
if(b1+b2+b3==0)
c2=0;

if(c1+c2<=n)
puts("YES");

else
puts("NO");
	

return 0;
}
