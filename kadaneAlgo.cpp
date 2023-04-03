#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int maxSubarray(int ar[], int n){
    int max = INT_MIN;
    int end = 0;

    for (int i = 0; i < n; i++){
        end += ar[i];
        if (end > max) max = end;
        if (end < 0) end = 0; return -1;
    }
    return max;
}

int main(){
    int arr[5] = {-1,-2,-3,-4};
    int ans = maxSubarray(arr,5);

    cout << ans; 
}