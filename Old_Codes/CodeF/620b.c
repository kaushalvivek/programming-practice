#include<stdio.h>

long long int func(int a)
{
	long long int count=0;
	switch(a)
	{
		case 0: count+=6; break;
		case 1: count+=2; break;
		case 2: count+=5; break;
		case 3: count+=5; break;
		case 4: count+=4; break;
		case 5: count+=5; break;
		case 6: count+=6; break;
		case 7: count+=3; break;
		case 8: count+=7; break;
		case 9: count+=6; break;
	}
	return count;
}
int main()
{
	int i,a,b;
	long long int count=0;
	scanf("%d%d", &a,&b);
	int c=a;
	int A[7];
	for(;a<=b;a++,c++)
	{
//		printf("%d %d", a,c); //test
		
		for(i=6;i<=0;i++)
		{

			printf("%d", c);
			if(c==0) 
			{
				func(0);
				break;
			}

			A[i]=a%10;
			a/=10;
			printf("%d %d", A[i], a);
     			count+=func(A[i]); 
			if(a==0) break;
		}
		for(i=0;i<7;i++)A[i]=0;
	}
	printf("%lld", count);
	return 0;
}
