#include <iostream>
#include<stack>

using namespace std;

int main()
{   
    // creation 
    stack<int>s;

    // push 

    s.push(2);
    s.push(5);
    s.push(8);

    // pop
    s.pop();
    s.pop();
    

    // is empty

    if (s.empty()){
        cout << " the stack is empty " ;
    }
    else {
        cout << " stack is not empty " ;
    }cout << endl;

    // print the element 
    
    cout <<  " the top element is : " << s.top() ;

    // size 
    cout << endl;

    cout << " the size of stack is : " << s.size();
    return 0;
}