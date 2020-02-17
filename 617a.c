#include<stdio.h>
int main()
{
long long unsigned int distance;
scanf("%llu", &distance);
long long unsigned int a = distance/5;
if (distance%5==0)
printf("%llu", a);

else
printf("%llu", a+1);
	
return 0;
}
