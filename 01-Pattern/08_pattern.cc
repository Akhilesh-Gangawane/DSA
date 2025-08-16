#include <iostream>
using namespace std;

void reversePattern(int n){
    for (int row = 0; row < n; row++)
    {
        for (int i = 0; i < row; i++)
        {
            cout<<" ";
        }
        for (int j = (2*n)-((2*row)+1); j > 0 ; j--)
        {
            cout<<"*";
        }
        for (int k = 0; k < row; k++)
        {
            cout<<" ";
        }
        cout<<"\n";        
    }
    
    
}

int main(){
    int n;
    cin>>n;
    reversePattern(n);
    return 0;
}