#include<iostream>
using namespace std;

int findelement (int arr[], int n){
    int xOR = 0;
    for (int i = 0; i  < n; i++){
        xOR ^= arr[i];
    }
    return xOR;
}

/*

int findelement(int arr[],  int n){
    int start = 0;
    int end = n;

    while (start < end){
        int mid = start + (end - start) / 2;

        if (mid % 2 == 1){
            mid--;
        }
        if(arr[mid] != arr[mid + 1]){
            end = mid;
        }
        else{
            start = mid + 2;
        }
    }
    return arr[start];

}
*/

int main(){
    int arr[] = {1, 1, 2, 2, 3, 3, 4, 50, 50, 65, 65};
    int size = sizeof(arr)/sizeof(arr[0]);
    int ans = findelement(arr, size);
    cout << "The element that appeared once in the array is : " << ans << endl;

    return 0;
}
