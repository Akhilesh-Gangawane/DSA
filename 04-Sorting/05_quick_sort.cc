#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int low, int high){
    int pivot = arr[low];
    int i = low+1;
    int j =high;
    while (true)
    {
        while (i<=high && arr[i]<=pivot)
        {
            i++;
        }
        while (j>=low && arr[j]>pivot)
        {
            j++;
        }
        if (i<j)
        {
            swap(arr[i], arr[j]);
        }
        else
        {
            break;
        }
    }
    swap(arr[low], arr[j]);
    return j;
}

void quicksort(int arr[], int low, int high){
    if (low<high)
    {
        int p = partition(arr ,low , high);
        quicksort(arr, low, p-1);
        quicksort(arr,p+1,high);
    }
    
}

int main(){
    
    return 0;
}