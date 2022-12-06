#include <bits/stdc++.h>
using namespace std;

int arr[] = {9, 8, 2, 5, 4, 3};

int arr1[] = {1, 3, 5, 7};
int arr2[] = {2, 4, 6};

int arr3[7];

void merge()
{
    int i = 0, j = 0, k = 0;

    while (i<4 && j<3){
        if (arr1[i] < arr2[j]){
            arr3[k] = arr1[i];
            k++, i++;
        }

        else {
            arr3[k] = arr2[j];
            k++, j++;
        }
    }

    for ( ; i < 4; i++){
        arr3[k] = arr1[i];
        k++;
    }
    for ( ; i < 3; i++){
        arr3[k] = arr2[i];
        k++;
    }   
}

int main()
{   
    merge();
    for (int i = 0; i < 7; i++){
        cout<<arr3[i]<<" ";
    }
    
    return 0;
}
