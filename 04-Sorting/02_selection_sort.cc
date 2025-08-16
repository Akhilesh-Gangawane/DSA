#include <bits/stdc++.h>
using namespace std;

void selection_sort(int arr[], int n){
    for (int i = 0; i < n-1; i++)
    {
        int min_index=i;
        for (int j = 0; j < i; j++)
        {
            if (arr[min_index]>arr[j])
            {
                min_index=j;
            }
            swap(arr[min_index],arr[i]);
            
        }
        
    }
    
}

int main(){
    
    return 0;
}