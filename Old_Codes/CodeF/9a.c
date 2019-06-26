#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d%d", &a,&b);
	int max=(a>b)?a:b;
	int num=7-max;
	int c;
	if(num%2==0) c =1;
	if(num%3==0) c =2;
	if(num%6==0) c =3;

	switch (c)
	{
		case 1: printf("%d/3",num/2); break;
		case 2: printf("1/2"); break;
		case 3: printf("1/1"); break;
		default: printf("%d/6", num);
	}
	return 0;
}
