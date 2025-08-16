#include <iostream>
using namespace std;

void printalpha(int n){
    char alpha = 'A'+(n-1);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            printf("%c ", alpha-j); 
        }
        cout<<'\n';     
    }       
}

int main(){
    int n;
    cin>>n;
    printalpha(n);

    return 0;
}