#include <iostream>
using namespace std;

/*
Approach 1 -- > Brute force approach 

string removeParanthesis(string s){
    string result;
    int count = 0;

    for (char c : s){
        if (c == '(' && count++ > 0){
            result += c;
        }
        if (c == ')' && count-- > 1){
            result += c;
        }
    }
    return result;
}

int main(){
    string s = "(()())(())()";
    cout <<"Result -> "<< removeParanthesis(s) << endl;
}
Time complexity -->  O(N)
Space complexity --> O(N)
*/

// Approach --> 2

string removeParanthesis(string s){
    int opencount = 0;
    int closecount = 0;
    string result = "";
    int start = 0;
    for (int i = 0; i < s.length();i++){
        if (s[i] == '('){
            opencount++;
        }
        else if (s[i] == ')'){
            closecount++;
        }

        if (opencount == closecount){
            result += s.substr(start+1, i - start -1);
            start = i + 1;
        }
    }
    return result;
}

int main(){
    string s = "(()())(())()";
    cout <<"Result -> "<< removeParanthesis(s) << endl;
}

