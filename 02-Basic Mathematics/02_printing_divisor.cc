#include <bits/stdc++.h>
using namespace std;

void printing_divisor(int n){
    for (int i = 1; i < n; i++)
    {
        if (n%i==0)
        {
            cout<<i<<" ";
        }
    }
    cout<<n;
    
}

int main(){
    int n;
    cin>>n;
    printing_divisor(n);
    return 0;
}