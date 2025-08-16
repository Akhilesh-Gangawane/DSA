#include <iostream>
using namespace std;

void wholeNumberPattern(int n){
    int k=1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout<<k<<" ";
            k++;
        }
        cout<<endl;
    }
    
}

int main(){
    int n;
    cin>>n;
    wholeNumberPattern(n);
    return 0;
}