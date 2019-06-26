#include<stdio.h>


int mod(int a)
{
	if(a<0) return -a;
	else return a;
}

int main()
{
	int i,n,r=0,l=0,temp=0,ind, swap;
	scanf("%d", &n);
	int R[n], L[n];
	for(i=0;i<n;i++) scanf("%d%d", &L[i], &R[i]);
	
	for(i=0;i<n;i++) 
		if(mod(L[i]-R[i]>temp)) 
			{
			temp=mod(L[i]-R[i]);
			ind=i;
			}

//	printf("%d  %d\n", temp, ind);

	if(temp==0)
	{
		printf("0");
		return 0;
	}

	
	for(i=0;i<n;i++) 
	{
		r+=R[i];
		l+=L[i];
	}

//	printf("%d  %d\n", r, l);

	int a1 = mod(r-l);
	swap=R[ind];
	R[ind]= L[ind];
	L[ind]= swap;

 
	for(i=0;i<n;i++) 
	{
		r+=R[i];
		l+=L[i];
	}

	int a2 = mod(r-l);

//	printf("%d %d\n", a1, a2);
	
//	if(a2>a1) 
	printf("%d", ind+1);
//	else 
//	puts("0");

	return 0;
}
