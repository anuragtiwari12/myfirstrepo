#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Node{
	public:
		int data;
		Node* next;
};

int main()
{
	Node* newnode = new Node();
    newnode->data = 5;
    newnode->next = NULL;
    
    cout << newnode->data;
    
    return 0;
	
}
