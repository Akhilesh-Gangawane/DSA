#include <iostream>
using namespace std;

void reversePattern(int n){
    for (int i = n; i >= 0 ; i--)
    {
        for (int j = 0; j <= i-1; j++)
        {
            cout<<"*"<<" ";
            
        }
        cout<<endl;        
    }    
}

int main(){
    int n;
    cin>>n;
    reversePattern(n);
    return 0;
}