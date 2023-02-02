//Author : Aryan Tiwari 
//Date:2 feb 23
#include<bits/stdc++.h>
#include<climits>
using namespace std;
//Using Array:
class mystack
{
    int *data;
    int index;
    int limit;
public:
// Static size I don't like it. so , go for the dyamic one. 

    // mystack(int size)
    mystack()
    {
        data = new int[2];
        index = 0;
        limit = 2;
    }

    int size()
    {
        return index;
    }

    int isEmpty()
    {
        return index == 0;
    }

    void push(int element)
    {
        if(index == limit)
        {
            //for dynamic
            int *newdata = new int[2*limit];
            for(int i = 0;i < limit;i++)
            {
                newdata[i] = data[i];
            }
            limit *= 2;
            delete [] data;
            data = newdata;
            //for Static
            // cout<<"Aukat me rh bey\n";
            // return;
        }
        data[index] = element;
        index ++;
    }

   int pop()
    {
        if(index == 0)
        {
            cout<<"Khaali hai bey kya delete krega\n";
            return -1;
        }
        index --;
        return data[index];
    }
    
    int top()
    {
        if(isEmpty())
        {
            cout<<"Khaali hai bey\n";
            return -1;
        }
        return data[index - 1];
    }
};
int main() {
//    mystack s(5); -- for static stack
// for dynamic
mystack s;
   s.push(10);
   s.push(20);
   s.push(30);
   s.push(40);
   cout<<s.size() <<" "<<s.top()<<" "<<s.isEmpty()<<endl;
   s.push(50);
//    s.push(60);
   cout<<s.size() <<" "<<s.top()<<" "<<s.isEmpty()<<endl;
   s.pop();
   cout<<s.size() <<" "<<s.top()<<" "<<s.isEmpty()<<endl;
   s.pop();
   s.pop();
   s.pop();
   s.pop();
   s.pop();
   cout<<s.size() <<" "<<s.top()<<" "<<s.isEmpty()<<endl;
}