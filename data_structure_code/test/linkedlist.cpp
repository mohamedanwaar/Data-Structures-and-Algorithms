#include<iostream>
using namespace std;

//here we crate class called node the crate the nodes of linkedlist where this 
// node contains dada(that holeds the varable that i want to  store it ,
// ade the pointer the point to the next node 
class Node
{
public:
	int data;
	Node* next;  // pointer to point the next node in linkedlist   
};

class linkedlist 
{
public:
	Node* head;  // pointer to point the first  node 
public:
	linkedlist()
	{
		head = NULL;  //meens the linkedlist is still empty 
	} 
	//funchon to check is linked list is empty or no 
	bool isempty()
	{
		return(head == NULL); // return true if head equal null and else return false 

	}
	
	void insertFirst(int value)
	{
		Node* newnode=new Node ;
		newnode->data = value;

		if (isempty()) // here if the linkedlist is empty 
		{

			newnode->next = NULL;
			// here the pointer node become point to the new node and the linkdlist become not empty 
			head = newnode;


		}
		//here if the linked list is contans and node and i want to isert new node before this node (insert first)
		else
		{

			newnode->next = head; // that the head was  point to the node that exists in first befor insret  
			head = newnode;


		}

	}

	void diplay() 
	{
		Node* temp = head; // here we crate temporary variable to assiagn the beginig of linkedlist 
		while (temp != NULL)

		{
			cout << temp->data<<" ";
			// this is make the temp to traverse to the next node 
			temp = temp->next;  

		}
	}

	// funchon to return the number of elemnt in the array 
	int counter()
	{
		Node* temp = head;
		int counter=0;
		while (temp!=NULL)
		{
			counter++;
			temp = temp->next;

		}
		return counter;
	}
	bool isfound(int key)
	{
		bool found = false;   
		Node* temp = head;
		while (temp != NULL)
		{
			if (temp->data == key)
			{
				found = true;
			}
			
				
			temp = temp->next;


		}
		return found;

	}
	//
	void insertbefor(int items, int newvalue)

	{
	
		Node* newnode = new Node;
		newnode->data = newvalue;
		Node* temp = head;
		while (temp != NULL && temp->next->data != items)
		{
			temp = temp->next;
		}
		newnode->next = temp->next;
		temp->next = newnode;

	}	
		
	void append(int newvalue)			
	{
		Node* newnode = new Node;
		newnode->data = newvalue;
		Node* temp = head;

		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newnode;
		newnode->next = NULL;
	}

	void deletee(int item)
	{
		if (isempty())
			cout << "no items in list ";
		if (head->data = item) //here tha items that we want to delete is the first element in list 
		{
			Node* del_ptr = head;
			head = head->next;
			delete del_ptr;

		}
		else
		{
			Node* delptr = head;
			Node* prev = NULL;
			while (delptr->data != item)
			{
				prev = delptr;
				delptr = delptr->next;

			}
			prev->next = delptr->next;
			delete delptr;

		}
	}
	
};


int main()
{
	    linkedlist list1;
	    list1.insertFirst(10);
	    list1.insertFirst(1);
	    list1.insertFirst(13);
	    list1.insertFirst(90); 

		/*
	    cout << "Linked List: ";
	    list1.diplay();

	
	   cout << "Number of elements: " << list1.counter()<< endl;
	
	    int keyToFind = 13;
	    if (list1.isfound(keyToFind) )
		{
	        cout << keyToFind << " is found in the linked list." << endl;
	    }
	    else {
	        cout << keyToFind << " is not found in the linked list." << endl;
	    }
	
	    return 0;*/

		/*int items;
		cout << "enter the items that you want to insret value before it ";
		cin >> items;
		int newvaluel;
		cout << "enter the value that you want to insert ";
		cin >> newvaluel;
		list1.insertbefor(items,newvaluel);
		list1.diplay();*/

		/*int newvalue;
		cout << "enter the value that you want to append ";
		cin >> newvalue;
		list1.append(newvalue);
		list1.diplay();*/

		/*int item_to_delete;
		cout << "enter item that you want to delete ";
		cin >> item_to_delete;
		list1.deletee(item_to_delete);
		list1.diplay();

*/

	


}



