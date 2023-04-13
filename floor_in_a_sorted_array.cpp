#include<iostream>
using namespace std;

int floorInArray(int arr[], int n, int k){
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
        else{
            end = mid - 1;
        }
    }
    return end;
}

int main(){
    int arr[7] = {1,2,8,10,11,12,19};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "floor of the given array is  : "<< floorInArray(arr, size, 8);
    cout << endl;
    return 0;

}