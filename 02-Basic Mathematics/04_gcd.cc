#include <bits/stdc++.h>
using namespace std;

void check_gcd(int n, int m){
    int small,gcd=1;    
    for (int i = min(m,n); i >= 1; i--)
    {
        if (n%i==0 && m%i == 0)
        {
            gcd=i;
            break;
        }
        
    }
    cout<<gcd;
}


int main(){
    int n,m;
    cin>>n;
    cin>>m;
    check_gcd(n,m);
    return 0;
}