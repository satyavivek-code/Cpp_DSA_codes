#include <iostream>
using namespace std;

void subSequence(int i, string a, string &b){
    if (i == a.length()){
        cout << b << " ";
        return;
    }

    // this will add the element in the sequence
    b = b + a[i];
    subSequence(i+1, a, b);

    // this will pop the element from the sequence
    b.pop_back();
    subSequence(i+1, a, b);
}
int main()
{
    string a = "1234";
    string b = "";
    int n = 3;

    cout << " total sub sequence are : " << endl;    
    subSequence(0, a, b);
    return 0;
}