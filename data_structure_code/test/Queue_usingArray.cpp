#include <iostream >
using namespace std;


class Queue_usingArray
{
public:
	static const int size=100;
	int arr[size];
	int front = -1;
	int tail = -1;

	bool isempty()
	{
		if (front  == -1&&tail==-1)
			return true;
		else
			return false;

	}
	bool isfall()
	{
		if (tail == size - 1)
		{
			return true;

		}
		else return false;
	}
	void enqueu(int value )
	{
		if (isempty())
		{
			front = tail = 0;
		}
		else if (isfall())
			cout << "the array is fall we cannot add any items ";

		else
		{
			tail++;
		}
		arr[tail] = value;

	}

	void dequeue()
	{
		if (isempty())
		{
			cout << "the quque is already empty ";
			return;
		}
		else if (front == tail)  // means the array is contains only one elemnt 
		{
			front = tail = -1;

		}
		else
			front++;  // incrase the index of front to point to the next elemnt 


	}

	int front_value()
	{
		if (isempty())
			return -1;
		else
			return arr[front];

		

	}

	void display()
	{
		if (isempty())
		{
			cout << "no items in tha queue ";

		}
		else
		{ 
			for (int i = front; i <= tail; ++i)
			{
				cout << arr[i] <<"\t ";


			}
		}
	}

};


int main()
{
	Queue_usingArray q1;
	q1.enqueu(10);
	q1.enqueu(15);
	q1.enqueu(1);
	q1.enqueu(17);
	// cout << q1.front_value();
	q1.display();






}