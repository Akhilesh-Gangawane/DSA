#include <iostream>
using namespace std;

void alphaPattern(int n){
    char k='A';
    for (int i = n; i >= 0; i--)
    {
        for (int j = 0; j <= i; j++)
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