#include <iostream>
using namespace std;

void printingBox(int n){
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
            if (row == 0 || col == 0 || row == n-1 || col==n-1)
            {
                cout<<'*';
            }
            else
            {
                cout<<" ";
            }
            
               
        }
        cout<<endl;
        
    }
    
}
int main(){
    int n;
    cin>>n;
    printingBox(n);
    return 0;
}