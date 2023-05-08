#include<iostream>
#include<string>

using namespace std;

bool isRotateString(string s, string goal){
    int l1 = s.length();
    int l2 = goal.length();

    if (l1 != l2) return false;

    while (l2--){
        if (s == goal){
            return true;
        }
        s = s.substr(1) + s[0];
    }
    return false;
} 

int main(){
    string s = "abcde";
    string goal = "cdea";

    bool solution = isRotateString(s, goal);
    cout << solution << endl;
    return 0;
}