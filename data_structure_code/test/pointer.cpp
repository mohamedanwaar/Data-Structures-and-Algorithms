
#include <iostream >
using namespace std;

void swapp(int* n1, int* n2)
{
	int temb_valrible = *n1;
	*n1 = *n2;
	*n2 = temb_valrible;
}
int main()
{
	
	int i = 10;

	int* point;// defines a pointer to an integer varible
	point = &i; //assign the addressof i to the opinter
	cout << point<<"\n"; //here the addres of i is printed
	cout << *point<<"\n"; //here the value of i is printed
	*point += 10;
	cout << *point;
	

	char mes[] = "mohmed";
	char* pointer;
	pointer = mes;
	*pointer = 'k';
	pointer++;//here index move to anther char(o)
	*pointer = 'f';


	cout << mes;


	int x = 10;
	int i=34;
	swapp(&x,&i);// call by pointer using address of a x and i
	cout << x << i;


}



