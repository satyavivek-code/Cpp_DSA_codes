#include<iostream>
#include<map>
#include<vector>

using namespace std;

int majorityElement(vector<int>& arr){
    int n = arr.size();

    map<int, int>mp;

    for (int i = 0; i < n;i++){
        mp[arr[i]]++;
    }
    for(auto i:mp){
        if (i.second > (n / 2)){
            return i.first;
        }
    }
    return -1;
}

int main(){
    vector<int>arr{2,2,1,1,1,2,2};
    int ans = majorityElement(arr);
    cout << "the Majority element is : " << ans << endl;
    return 0;
}