#include <bits/stdc++.h>
using namespace std;

void insertionSort(int nums[], int n)
{
    int x, j;
    for (int i = 0; i < n; i++){
        x = nums[i];
        j = i-1;

        while (j >= 0 && nums[j] > x){
            nums[j+1] = nums[j];
            j--;
        }
        
        nums[j+1] = x;
    }   
}

int main()
{
    int n;
    cin>>n;

    int nums[n];
    for (int i = 0; i < n; i++){
       cin>>nums[i];
    }

    insertionSort(nums, n);
    for (int i = 0; i < n; i++){
       cout<<nums[i]<<" ";
    }
    
    return 0;
}
