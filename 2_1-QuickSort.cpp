#include <bits/stdc++.h>
using namespace std;

int arr[6] = {8, 4, 6, 3, 2, 1};

int part(int low, int high)
{
    int pivot = arr[low];
    int i = low, j = high;

    while (i < j){
        while (arr[i] < arr[low]){
            i++;
        }
        
        while (arr[j] > arr[low]){
            j--;
        }

        if (i < j)
            swap(arr[i], arr[j]);
    }
     
    swap(arr[j], arr[low]);

    return j;
}

void QuickSort(int low, int high)
{
    if ( low < high){
        int j = part(low, high);  //return pibot positions

        QuickSort(low, j);
        QuickSort(j+1, high);
    }
}

int main()

{   arr[6] = INT_MAX;
    int low = 0;
    int high = 6;

    QuickSort(low, high);

    for (int i = 0; i < 6; i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
