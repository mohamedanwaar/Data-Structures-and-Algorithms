#include<iostream>
using namespace std;

class Array
{
 
private:
	int size; // the size of array in the memry 
	int lengh;   // number os items that are in array 
	int* myarray;  // this is the pointer to point the addrass of dynamic array that i create 

public:
	Array(int arraysize) // this is the cosructor 
	{
		size = arraysize;
		lengh = 0;
		myarray = new int[arraysize]; // here we crated a dynamic array in heap and i point the adders of this array by bointer 

	}

	void fill()  //create this func to fill elemnt in array 
	{
		cout << "enter number of items that you need fill in array \n";
		int no_of_items;
		cin >> no_of_items ;
		if (no_of_items > size)
		{
			cout << "you cannot exceed the array size \n";
			return;

		}
		else
		{
			for (int i = 0; i < no_of_items; i++)
			{
				cout  << "enter the item number  " << i << "\n";
				cin >> myarray[i];
				lengh++;

			}
		}

	}


	void display()
	{
		cout << "dispay the array items\n ";
		for (int i = 0; i < lengh; i++)
		{
			cout << myarray[i];
			cout << endl;

		}
		cout << endl;

	}


		int getsize() // to appear the size of array that store in memory
		{
			return size;
		}
		int getlenth()
		{

			return lengh;  // to apear the items stored in array 
		}



	int search(int key) // this is liner search 
	{
		int index = -1;
		for (int i = 0; i <lengh; i++)

		{
			if (myarray[i] == key)
			{
				index = i;
				
				break;
			}
		
		}
		return index;
	}

	int binary_searchh( int key)
	{
		int min = 0;
		int max = size;
		int mid;
		while (min <= max)
		{
			mid = (max + min) / 2;
			if (key > myarray[mid])
			{
				min = max + 1;
			}
			else if (key < myarray[mid])
			{
				max = mid - 1;

			}
			else
			{
				return mid;
			}
		}
		return -1; // if elemnt is not found 


	}


	void append(int newitems) // funchon to append elemnt in array
	{
		if (lengh < size)
		{
			myarray[lengh] = newitems; // here we append new items after  the last elemnt in array
			lengh++;
		}
		else
			cout << "you cannot append any items in array becuse the size of array is full\n";
	}



	void insert(int index, int newitems)
	{
		if (lengh < size)
		{
			for (int i = lengh; i > index; --i)
			{
				myarray[lengh] = myarray[i - 1];
			}
			myarray[index] = newitems;
		}
		else
			cout << "array is fill";
	}



	void deletee(int index)
	{
		if (index >= 0 && index < size)

		{

			for (int i = index; i < lengh - 1; i++)
			{
				myarray[i] = myarray[i + 1];
			}
			lengh--;
		}
		else
			cout << "the elemnt is not exists";
		
	}


	void enlarge(int newsize)
	{
		
		if ( newsize <= size)
		{
			cout << "new size must be larger than current size \n";

		}
		
		else
			
		{
			size = newsize;
			int* old_point_array = myarray;// here we point to old array to can access that and move thire items to new array
			myarray = new int[newsize]; //here we crated new array with new size and allocte that in old name of array
			for (int i = 0; i < lengh; i++)
			{
				myarray[i] = old_point_array[i];
			}
			delete[] old_point_array;  // we dont need new array 

		}

	}
};

int main()
{

	int size;
	cout << "enter the size of array you need to ceate \n";
	cin >> size;

	Array arrr(size);  // the paramter of the costractor 

	arrr.fill();

	arrr.display();

	cout << "array size = " << arrr.getsize() << "while length is " << arrr.getlenth() << endl;

	cout << "enter the value that you want to search in array\n";
	int key;
	cin >> key;
	int index = arrr.binary_searchh(key);
	if (index==-1)
	{
		cout << "the elemnt is not found ";

	}
	else
		cout << "the elemnt is found in index "<<index;

	//>>>>>>>>>>>>>>>>>>>>>>>>>if you want to append elment in arry <=================
	
	cout << "enter the elemnt you want to append in arrayn\n ";
	int newelemnt ;
	cin >> newelemnt;
	arrr.append(newelemnt);


	arrr.display();
	
	
	//==========================>inset elmemnt in specic index in array

	cout << "enter the elment and there index that you want to insret \n";
	int index, newitems;
	cin >> index >> newitems;

	arrr.insert(index, newitems);

	arrr.display();
	
	//============================>delete item in specific index<=============================
	cout << "enter the index that you want to remove it ";
	int remove_index;
	cin >> remove_index;
	arrr.deletee(remove_index);
	arrr.display();
	//======================================>enlarge array<================================
	cout << "enter the new size of array that you needed to enlarge";
	int new_size_for_array;
	cin >> new_size_for_array;
	arrr.enlarge(new_size_for_array); 

	cout << "array size = " << arrr.getsize() << "while length is " << arrr.getlenth() << endl;

	arrr.display();

	

}


#include<iostream>
using namespace std;
// code of insert in unsorted array 

int insert_inUnSorted(int arr[],int n,int capacty,int key )
{
	if (n >= capacty)
		return n;       // we can not append eny elmmnt ;
	else
	{
		arr[n] = key;
		return n + 1;

	}
}


//                     bianry search 
int binary_search(int arr[], int size, int key)
{
	int min=0;
	int max = size;
	int mid;
	while (min <= max)
	{
		mid = (max + min) / 2;
		if (key > arr[mid])
		{
			min = mid + 1;
		}
		else if (key < arr[mid])
		{
			max = mid - 1;
		}
		else
			return mid;

	}
	return -1; //if elemnt is not found 



}


