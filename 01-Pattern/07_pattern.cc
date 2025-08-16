#include <iostream>
using namespace std;

void triangle(int n){
    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j <= n-i-1; j++)
        {
            cout<<" ";
        }
        
        // star
        for (int k = 0; k < (i*2)+1 ; k++)
        {
            cout<<"*";
        }
        
        // space
        for (int j = 0; j <= n-i-1; j++)
        {
            cout<<" ";
        }
        cout<<'\n';
        
    }
    
}

int main(){
    int n;cin>>n;
    triangle(n);
    return 0;
}