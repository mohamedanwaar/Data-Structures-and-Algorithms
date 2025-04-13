#include<iostream>
using namespace std;
class Node
{
public:
	int data;
	Node* next;  // pointer to point the next node in linkedlist   
};
class Queue
{
public:
	Node* front;  //point to the front of Queue 
	Node* tail;   // point to the back of Queue 

	
public:
	Queue()
	{
		front = tail = NULL;
	}

	/*bool isempty() 
	{
		return (front == NULL&&tail==NULL);
	}*/


	void enqueue(int newvalue)
	{
		Node* newnode = new Node;
		newnode->data = newvalue;

	if (front==NULL) // means that the front and tail = null 
		{
		front = newnode;
		tail = newnode;

			
		}

	else

	{
		tail->next = newnode;  // here we link the last item in the linked list to the new item 
		tail = newnode;   //after we link the new value with the last node we make the tail point to the new value to become the last node 

		 
	}

	}

	void dispaly()
	{
		Node* temp = front;
		while (temp != NULL)
		{
			cout << temp->data;
			temp = temp->next;

		}
		cout << endl;

	}
	void dequeue()
	{
		if (front ==tail)// means that we have only one elemnt in my Queue
		{
			delete front;

			front = tail = NULL;
			
		}
		else if( front==NULL )// means the queue is empty 
		{
			cout << "the queue is empty";

		}
		else
		{
			Node* delptr=front;
			front = front->next;
			delete delptr;

		}
	}

};
int main()
{
	Queue q1 ;

	for (int i = 0; i < 3; ++i)
	{
		int items;
		cout << "enter items to enqueu";
		cin >> items;
		q1.enqueue(items);
	}
	//q1.dispaly();
	
	q1.dequeue();

	q1.dispaly();


}
// pointer to point the next node in linkedlist   

class Queue
{
public:
	Node* front;  //point to the front of Queue 
	Node* tail;   // point to the back of Queue 

	
public:
	Queue()
	{
		front = tail = NULL;
	}

	/*bool isempty() 
	{
		return (front == NULL&&tail==NULL);
	}*/


	void enqueue(int newvalue)
	{
		Node* newnode = new Node;
		newnode->data = newvalue;

	if (front==NULL) // means that the front and tail = null 
		{
		front = newnode;
		tail = newnode;

			
		}

	else

	{
		tail->next = newnode;  // here we link the last item in the linked list to the new item 
		tail = newnode;   //after we link the new value with the last node we make the tail point to the new value to become the last node 

		 
	}

	}

	void dispaly()
	{
		Node* temp = front;
		while (temp != NULL)
		{
			cout << temp->data;
			temp = temp->next;

		}
		cout << endl;

	}
	void dequeue()
	{
		if (front ==tail)// means that we have only one elemnt in my Queue
		{
			delete front;

			front = tail = NULL;
			
		}
		else if( front==NULL )// means the queue is empty 
		{
			cout << "the queue is empty";

		}
		else
		{
			Node* delptr=front;
			front = front->next;
			delete delptr;

		}
	}

};
int main()
{
	Queue q1 ;

	for (int i = 0; i < 3; ++i)
	{
		int items;
		cout << "enter items to enqueu";
		cin >> items;
		q1.enqueue(items);
	}
	//q1.dispaly();
	
	q1.dequeue();

	q1.dispaly();


}