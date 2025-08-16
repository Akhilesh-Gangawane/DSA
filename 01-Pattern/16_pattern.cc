#include <iostream>
using namespace std;

void alphaPattern(int n){
    char k='A';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout<<k<<" ";
        }
        cout<<endl;
        k++;
    }
    
}

int main(){
    int n;
    cin>>n;
    alphaPattern(n);
    return 0;
}