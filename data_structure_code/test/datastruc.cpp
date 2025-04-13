//#include <iostream>
//using namespace std;

//=====================================>liner search<==============================================
int findelemnt(int arr[], int size, int key)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == key)
			return 1; // functhon is ended 

		return -1;

	}

}
int main()

{
	int arr[] = { 42,5,2,53,5,32,5,2,45,2 };
	cout << "eter the key to search";
	int key;
	cin >> key;
	if (findelemnt(arr, 10, key)==1)
	{
		cout << "the elent is founded ";
	}
	else
		cout<<"elemnt was not founded";


}

//================================================>binery search<=======================================

int binrysearch(int degee[], int key)
{
	int size = sizeof(degee) + 1;
	int min=0;
	int max=size;
	int mid;
	while (min <= max)
	{
		mid = (max + min) / 2;
		if (key> degee[mid])
			min = mid + 1;

		else if (key < degee[mid])
			max = mid - 1;
		else   // mid eqal key
			return 1;
	}
	return -1; // if key is not founded 



}


int main()
{
	int degee[] = { 10,15,17,35,40,45,60,65,70,80 };
	
	cout << "enter the key you want to rearch it\n ";
	int key;
	cin >> key;
	if (binrysearch(degee, key) == 1)
	{
		cout << "the key is founded ";

	}
	else
		cout << "the elemnt is not founded ";


}


//=========================================>find min elemnt in array<======================================


int findmin(int arr[], int size)
{
	int min_value = arr[0];
	for (int i = 0; i < size; ++i)
	{
		if (arr[i] < min_value)
		{
			min_value = arr[i];
		}

	}
	return min_value;
		

}
//===========================================>find max elemnt in array<========================================


int findmax(int arr[], int size)
{
	int max_value=arr[0];
	for (int i = 0; i < size; ++i)
	{
		if (arr[i] > max_value)
		{
			max_value = arr[i];
		}

	}
	return max_value;
	

}


int main()
{

	int arr[5] = { 10,3,5,11,9 };
	cout << findmin(arr, 5);


	cout << findmax(arr, 5);

}




//====================================>selcthon sort=<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
//
//int findmin(int arr[], int size, int startserch)
//{
//	int min_value = arr[startserch];
//	int min_index = startserch;
//	for (int i = startserch; i < size; ++i)
//	{
//		if (arr[i] < min_value)
//		{
//			min_value=arr[i];
//			min_index = i;
//		}
//
//	}
//	return min_index;
//
//}
//
//void swapp(int& x, int& y)
//{
//	int temp = x;
//	x = y;
//	y = temp;
//}
//void selectionsort(int arr[], int size)
//{
//	for (int i = 0; i < size - 1; ++i)
//	{
//		int min_index = findmin(arr, size, i);
//		swapp(arr[i], arr[min_index]);
//
//
//	}
//
//}
////++++++++++++++++++++++++++++++++++++++++++++++++++++++buble sort +++++++++++++++++++++++++++++++++++++++++++++++++
//
//void bubblesort(int arr[], int n)
//{
//	for (int i = 0; i < n - 1; ++i)
//	{
//		for (int j = 0; j < n - i - 1; ++j)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				swapp(arr[j], arr[j + 1]);
//			}
//		}
//
//	}
//
//
//}
//// =======================================================inserathon sort ===================================
//void inserthon_sort(int arr[], int size)
//{
//	for (int i = 1; i < size; ++i)
//	{
//		int key = arr[i];
//		int j;
//		j = i - 1;
//		while (j <= 0 && arr[j] > key)
//		{
//			arr[j + 1] = arr[j];
//			j = j - 1;
//		}
//		arr[j + 1] = key;
//
//
//
//	}
//	
//int main()
//{
//	int arr[5] = { 10,2,26,80,7 };
//
//	int n = sizeof(arr) / sizeof(arr[0]);
//
//	//selectionsort(arr, 5);
//
//	bubblesort(arr,n);
//
//	for (int i = 0; i < 5; ++i)
//	{
//		cout << arr[i]<<endl;
//	}
//
//}
//
//
//


#include <iostream>
using namespace std;
int find_elemnt(int arr[], int size, int startsearch)
{
	int minindex = startsearch;
	int minvalue = arr[startsearch];
	for (int i = startsearch; i < size; ++i)
	{
		if (arr[i] < minvalue)
		{
			minvalue = arr[i];
			minindex = i;

		}
	}
	return minindex;

}
void swap(int& x, int& i)
{
	int temp;
	temp=x;
	x=i;
	i = temp;

}
void selcthon_sort(int arr[], int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		int minindex = find_elemnt(arr, size, i);
		swap(arr[i], arr[minindex]);

	}
}