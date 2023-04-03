/*
Maximum consecutive of 1 in vscode
*/



#include<iostream>
using namespace std;

int maxConsecutive(int arr[], int size){
    int count = 0;
    int maxlength = 0;
    // int size = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i< size;i++){
        if (arr[i] == 1){
            count++;
            if (maxlength < count){
                maxlength++;
            }
        }
        else if (arr[i] == 0) {
            count = 0;
        }

    }
    return maxlength;
}
int main(){
    int arr[6] = {1,1,0,1,1,1};
    int ans = maxConsecutive(arr, 6);
    cout << "The maximum number of consecutive 1 is : " << ans << endl;

    return 0;
}