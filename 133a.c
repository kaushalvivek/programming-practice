#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	scanf("%s", str);
	int n=strlen(str);
	int i,k=0;
	for(i=0;i<n;i++)
	{
		if((str[i]=='H')||(str[i]=='Q')||(str[i]=='9')||(str[i]=='+'))
			k=1;
		else
			k=0;
	}
	if (k==0)
		printf("NO");
	else
		printf("YES");
	return 0;
}
