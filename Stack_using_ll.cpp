//Author : Aryan Tiwari 
//Date:06 feb 2023

#include<bits/stdc++.h>
using namespace std;
template<typename T>
class Node
{
    public:
    T data;
    Node<T> *next;

     Node(T element)
     {
        this->data = element;
        next = NULL;
     }
};
template<typename T>
class Stack
{
    Node<T> *head;
    public:
    int size;
    Stack()
    {
        head = NULL;
        size = 0;
    }
    bool isEmpty()
    {
        return size == 0;
    }
    T size()
    {
        return size;
    }
    void push(T element)
    {
       Node<T> *new = new Node<T>(element);
       new->next = head;
       head = new;
       size++;
    }
    void pop()
    {
        if(isEmpty())
        {
            cout<<"Can't delete.\n";
        }
        Node<T> *temp;
        temp = head;
        head = head->next;
        delete temp;
        size--;
    }
    T top()
    {
        if(isEmpty())
        {
            return 0;
        }
        return head->data;
    }
};
int main() {
    Stack<char> s;
	s.push(100);
	s.push(101);
	s.push(102);
	s.push(103);
	s.push(104);


	cout << s.top() << endl;
    s.pop(); 
	// cout << s.size() << endl;
	cout << s.isEmpty() << endl;
}