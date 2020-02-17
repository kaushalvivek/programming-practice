#include<stdio.h>
#include<string.h>
int main()
{
	char A[101];
	scanf("%s", A);
	int ans,i,n = strlen(A),temp=0,count=0;
	for(i=0;i<n;i++)
	{
		if(i==n-1 && n-temp>ans) { //When diifference bw last vowel and end is the greatest
			if(A[i]=='A' || A[i] == 'E' || A[i]=='I' || A[i]=='O' || A[i] == 'U' || A[i] == 'Y')
				count++;
			ans= n-temp ;
			break;
		}

		if(A[i]=='A' || A[i] == 'E' || A[i]=='I' || A[i]=='O' || A[i] == 'U' || A[i] == 'Y')
		{
			count++;
			if(i-temp>ans) ans = i-temp;
			if(i==0 && n!=2) temp=1;
			else temp = i;
		}
	}


	if(count==0) ans=n+1;  //When there are no vowels
	printf("%d", ans);
	return 0;
}
