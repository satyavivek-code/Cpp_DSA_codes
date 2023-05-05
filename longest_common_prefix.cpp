#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

string longestCommonPrefix(string arr[], int n){
    int index = 0;
    string ans = "";
    string s = arr[0];
    sort(arr, arr+n);
    for (char c : s){
        for (int i = 0; i < n; i++){
            if (c == arr[i][index]){
                continue;
            }
            else if (ans.size() == 0){
                return "-1";
            }
            return ans;
        }
        ans += c;
        index++;
    }
    return ans;
}

int main(){

    int n = 4;
    string arr[4] = {"geeksforgeeks", "geeks", "geek","geezer"};
    cout << longestCommonPrefix(arr, n);
    return 0;
}