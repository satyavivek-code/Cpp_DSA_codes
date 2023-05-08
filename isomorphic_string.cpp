#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

bool isIsomorphic(string str1, string str2){
    int len1 = str1.length();
    int len2 = str2.length();

    if (len1 != len2){
        return false;
    }
    unordered_map<char, vector<int>> mp1;
    unordered_map<char, vector<int>> mp2;
    
    for (int i = 0; i < len1; i++) {
        mp1[str1[i]].push_back(i);
    }
    for (int i = 0; i < len2; i++) {
        mp2[str2[i]].push_back(i);
    }

    for (int i = 0; i < len1; i++) {
        if (mp1[str1[i]] != mp2[str2[i]]){
            return false;
        }
    }
    return true;
}

int main(){
    string s = "egg";
    string t = "add";
    
    bool solution = isIsomorphic(s, t);

    cout << solution << endl;
    return 0;
}