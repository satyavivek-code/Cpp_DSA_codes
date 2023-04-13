#include<iostream>
using namespace std;
int searchInsert (int arr[], int n, int k){
    int start = 0;
    int end = n-1;

    while (start <= end){
        int mid = start + (end - start) / 2;
        if (arr[mid] == k){
            return mid;
        }
        else if (arr[mid] < k){
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    } 
    return end+1;
}

int main(){
    int arr[] = {1, 3, 5, 6, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int ans = searchInsert(arr, size, 10);
    cout <<"Position at which element is insert : " << ans ;
    cout << endl;

    return 0;
}