#include<iostream>
using namespace std;

pair<int, int>floorAndCeil(int arr[], int n, int k){
    int low = -1;
    int up = -1;

    for (int i = 0; i < n; i++){
        if (arr[i] <= k && (low == -1 || arr[i] > low)){
            low = arr[i];
        }
        if (arr[i] >= k && (up == -1 || arr[i] < up)){
            up = arr[i];
        }
    }
    return {low, up};

}

int main(){
    int arr[] = {5, 6, 8, 9, 6, 5, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    pair<int, int>ans;
    ans = floorAndCeil(arr, size, 7);
    

    cout<<"The floor and the ceil element of the given array is : "<< ans.first<< " "<< ans.second << endl;
    return 0;

}