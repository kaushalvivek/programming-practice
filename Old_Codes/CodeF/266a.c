#include<stdio.h>
int main()
{
int n,i,s=0;
scanf("%d", &n);
char str[50];
//str ="Hello";
scanf("%s", str);
for(i=0; i<=n-1;i++)
	{
		if (str[i]==str[i+1])
			{
				s++;
			}
	
	}
printf("%d", s);
return 0;
}
