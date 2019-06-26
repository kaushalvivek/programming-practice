#include<stdio.h>

int min(int a, int b)
        {
                int x=a,y=b;
                int smaller = x>y? y:x;
                return smaller;
        }

int max(int a, int b)
        {
                int x=a,y=b;
                int bigger = x>y? x:y;
                return bigger;
        }

int mod(int a)
	{
		int x=a;
		x=x<0?(-1)*x:x;
		return x;
	}



int main()
{
	int num,temp;
	scanf("%d", &num);
	int i,A[num],j,B[num];
	int MIN[num], MAX[num];
	for(i=0;i<num;i++)
		{scanf("%d", &A[i]);
		B[i]=A[i];}
	temp =A[0];
	for(i=0;i<num;i++)
		{
			for(j=i;j<num;j++)
			{
				if(A[i]>A[i+1])
					{
						temp=A[i+1];
						A[i+1]=A[i];
						A[i]= temp;
					}
			}
		}
	for(i=0;i<num;i++)
	MAX[i] = mod(B[i]-A[0]),mod(A[num-1]-B[i]);
	for(i=0;i<num;i++)
	{	
	temp =10000000;
		for(j=0;j<num;j++)
			temp = min(mod(B[i] - A[j]),temp);
	MIN[i]=temp;
	}

	for(i=0;i<num;i++)
	{
		printf("%d %d\n", MIN[i], MAX[i]);
	}
	return 0;
}
