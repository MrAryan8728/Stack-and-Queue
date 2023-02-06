//Author : Aryan Tiwari 
//Date:6 feb 2023
#include<bits/stdc++.h>
using namespace std;
int main() {
    stack<int> s;
    s.push(56);
    s.push(45);
    s.push(47);
    cout<<s.top()<<endl;
    s.emplace(68);
    cout<<s.size()<<endl;
    s.pop();
    s.pop();
    s.pop();
    cout<<s.size()<<endl;
    cout<<s.empty();

}