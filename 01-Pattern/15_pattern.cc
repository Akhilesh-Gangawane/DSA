#include <iostream>
using namespace std;

void alphaPattern(int n){
    for (int i = n; i >= 0; i--)
    {
        char k='A';
        for (int j = 0; j < i; j++)
        {
            cout<<k++<<" ";
        }
        cout<<endl;
    }
    
}

int main(){
    int n;
    cin>>n;
    alphaPattern(n);
    return 0;
}