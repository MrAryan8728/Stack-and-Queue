//Author : Aryan Tiwari 
//Date:3 feb 2023

#include<bits/stdc++.h>
using namespace std;
template <typename T, typename V>

class myPair {
	T x;
	V y;

	public :

	void setX(T x) {
		this -> x = x;
	}

	T getX() {
		return x;
	}

	void setY(V y) {
		this -> y = y;
	}

	V getY() {
		return y;
	}
};

int main() {
    // myPair<int,char> p;
    // p.setX(3);
    // p.setY('a');
    // cout<<p.getX()<<" "<<p.getY()<<endl;

    //for 3 elements:
    	myPair<myPair<int, int>, int> p2;
	p2.setY(10);
	myPair<int, int> p4;
	p4.setX(5);
	p4.setY(16);

	p2.setX(p4);

	cout << p2.getX().getX() << " " << p2.getX().getY() << " " << p2.getY() << endl;

}