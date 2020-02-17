#include<stdio.h>
#include<string.h>

long long int ansA=0,ansB=0;

void comp(char a, char b)
{
               if(a==b) return;
               if(a=='R' && b=='P') {ansA++; return;}
               if(a=='R' && b=='S') {ansB++; return;}
               if(a=='S' && b=='P') {ansB++; return;}
               if(a=='S' && b=='R') {ansA++; return;}
               if(a=='P' && b=='S') {ansA++; return;}
               if(a=='P' && b=='R') {ansB++; return;}
               here: return;

}

int main()
{
        long long int total,len1,len2,i=0,j=0;
        char A[1000],B[1000];

        scanf("%lld", &total);
        scanf("%s", A);
        scanf("%s", B);
//      cin>>total>>A>>B;
//      cout<<A<<" "<<B;
        len1=strlen(A);
        len2=strlen(B);

        while(total--)
        {
                comp(A[i],B[j]);
                if(i==len1-1) i=-1;
                if(j==len2-1) j=-1;
                i++;
                j++;
        }

//      cout<<ansA<<" "<<ansB<<endl;
        printf("%lld %lld", ansA,ansB);
        return 0;
}
