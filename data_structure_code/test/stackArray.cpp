#include<iostream>
using namespace std;
#define MAX 1000 
class StackArray
{
public:


	int arr[MAX];
	int top = -1;
public:
	bool isempty()
	{
		if (top < 0)
			return true;
		else
			return false;

	}
	bool isfall()
	{
		if (top == MAX - 1)
		{
			return true;
		}
		else return false;

	}


	void push(int newvalue)
	{
		if (isfall())
		{
			cout << "stack Overflow ";
			return;

		}
		else
		{
			top++;
			arr[top] = newvalue;


		}
	}
	void pop()
	{
		if (isempty())
			cout << "stack under flow ";
		else
		{
			top--;
		}

	}
	int peek()
	{
		if (isempty())
		{
			cout << "stack is empty ";
			return 0;

		}
		else
		{
			int x = arr[top];
			return x;
		}
			

	}


};

int main()
{
	StackArray s1;
	s1.push(1);
	s1.push(2);
	s1.push(3);

	// if we want to display thr elemnt 
	while (!s1.isempty())
	{
		cout << s1.peek() << "\t";
		s1.pop();

	}

}