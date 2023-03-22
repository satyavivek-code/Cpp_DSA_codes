// reversal of array using functional recuresion

#include <iostream>
using namespace std;
int arr[5] = {2,6,5,8,4};
int size = sizeof(arr)/ sizeof(int);
int reversal(int l, int r){
    if(l > r){
        return 0;
    }
    swap(arr[l],arr[r]);
    
    
    return reversal(l+1, r-1);
}

int main()
{
    // int arr[5] = {1,2,3,4,5};
    // int size = sizeof(arr)/ sizeof(int);

    int result = reversal(0 , size-1);
    for (int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    // cout << result << endl;

    return 0;
}