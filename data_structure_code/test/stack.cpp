                           //stack using linked list 
/*
#include<iostream>
using namespace std;
class Node
{
public:
	int data;
	Node* next;
	Node() 
	{
		data = 0;
		next = NULL;

	}

};
class stack
{
public:
	Node* top;

public:
	bool isempyt()
	{
		if (top == NULL)
		{
			return true;
		}
		else
			return false;
	}
	void push(int newvalue)
	{
		if (isempyt())
		{
			Node* newnode = new Node;
			top = newnode;
			newnode->data = newvalue;
			newnode->next = NULL;

		}
		else // the list is not empty 
		{
			Node* newnode = new Node;
			newnode->next = top;
			top = newnode;
			newnode->data = newvalue;

		}
	}

	void display()
	{
		Node* temp_ptr = top;
		while (temp_ptr != NULL)
		{
			cout << temp_ptr->data;
			temp_ptr = temp_ptr->next;
		}


	}
	
	void pop()
	{
		Node* delptr=top;
		top = top->next;
		delete  delptr;

	}
	int counter()
	{
		Node* temp = top;
		int counter = 0;
		while(temp != NULL)
		{
			counter++;
			temp = temp->next;


		}
		return counter;
	}
	bool isfound(int item)
	{
		bool found = false;
		Node* temp = top;
		while (temp!= NULL)
		{
		    if (temp->data == item)
			{
				found = true;
			}
			temp = temp->next;
		}
		return found;
	}
};

int main()
{
	int items;
	stack s1;
	for (int i = 0; i <= 3; ++i)
	{
		cout << "enter items to push to the stack \n";
		cin >> items;
		s1.push(items);

	}
	//s1.display();

	//s1.pop();

	//s1.display();	

	//cout<<s1.counter()<<endl;
	cout << "enter items that you want to search";
	int value_tofound;
	cin >> value_tofound;
	if (s1.isfound(value_tofound))
		cout << "value is founde ";
	else
		cout << "value is not founded ";
	return 0;
	

}

*/

