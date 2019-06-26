#include<stdio.h>
#include<string.h>
int main()
{
	char A[1000];
	scanf("%s", A);
	int n=0,i=0,t=0,e=0,j;
	int l=strlen(A);
	for(j=0;j<l;j++)
	{
		if(A[j]=='n') n++;
		if(A[j]=='i') i++;
		if(A[j]=='t') t++;
		if(A[j]=='e') e++;
	}

	int temp=(n>2)?(n-1)/2:0;
	temp=(i<temp)?i:temp;
	temp=(t<temp)?t:temp;
	temp=(e/3<temp)?e/3:temp;

//	printf("n:%d i:%d e:%d t:%d", n,i,e,t);	

	printf("%d", temp);
}
