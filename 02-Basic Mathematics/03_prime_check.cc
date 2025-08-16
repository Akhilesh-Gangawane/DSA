#include <bits/stdc++.h>
using namespace std;

void is_prime(int n){
    int prime=0;
    for (int i = 2; i*i < n; i++)
    {
        if (n%i == 0)
        {   
            prime=1;
        }
        
    }
    if (prime)
    {
        cout<<"Number is non-prime";
    }
    else
    {
        cout<<"Number is prime";
    }
            
    
}

int main(){
    int n;
    cin>>n;
    is_prime(n);
    return 0;
}