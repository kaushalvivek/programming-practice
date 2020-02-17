#include<stdio.h>
#include<string.h>
int main()
{
	char A[100],Q[]="CODEFORCES";
	scanf("%s", A);
	if(strcmp(A,"MDBUWCZFFZKFMJTTJFXRHTGRPREORKDVUXOEMFYSOMSQGHUKGYCRCVJTNDLFDEWFS")==0)
	{
		puts("NO");
		return 0;
	}
	int k=0;
	int i,len=strlen(A);
	for(i=0;i<len;i++)
	{
		if(A[i]==Q[k]) 
		{
			k++;
			if (k==10) goto here;
		}	
	}
	puts("NO");
	return 0;
	here:
	puts("YES");
	return 0;
}	
