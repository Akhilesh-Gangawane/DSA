#include <iostream>
using namespace std;

void simplePattern(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            printf("* ");
        }
        cout<<endl;
    }
    
}

int main(){
    int n;
    cin>>n;
    simplePattern(n);
    return 0;
}