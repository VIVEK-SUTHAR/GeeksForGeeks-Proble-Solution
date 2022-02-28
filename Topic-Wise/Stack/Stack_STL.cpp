#include <iostream>
#include <stack>
using namespace std;
int main(void)
{
    // Declaring A New Stack
    //stack with type int and name s;
    stack<int> s;
    s.push(25);
    s.push(23);
    s.push(42);
    s.push(78);
    s.push(80);
    s.push(56);
    int poped=s.top();
    cout<<poped<< " is at top of stack\n";
    while (!s.empty())
    {
        cout<<"| "<<s.top()<<" |\n";
        s.pop();
    }
    cout<<"All elements are now popped\n";
    if(s.empty()){
        cout<<"Stack IS empty";
    }
    else{
        cout<<"Stack is not empty";
    }




}