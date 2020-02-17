// Vivek Kaushal
// PrisonCandy

#include <iostream>
using namespace std;

int main () {
    long long int t,i,j,k,n;   cin>>t;
    while(t--)
        {
        cin>>i>>j>>k;              
        
        n=j+k;  n--;   
        while(n>i)  n=n-i;   
        
        cout<<n<<endl;  
        
        
    }
    return 0;
}