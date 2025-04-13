 
/*
#include <iostream>
using namespace std;
int main()
{
    cout << "this is my fist program ";
	cout << "my name is \"mohamed\" ";
	//without \n this sentences they will apper next to each other 
	//is we want to print each sentence in diffrent lines we use \n
	cout << "this is my fist program ";
	cout << "my name is mohamed";
}  

//ths is an one comment and it isnot run and isnot stor in momery , if we want to crate multiple comment
*/






/*

// calculte area of rectangel 

#include <iostream>    //   {  pre processor directive }
using namespace std;
int main()
{
	// the input from the user and the varables storesd in memory 
	int width, length, area ;
	
	cout << "plse inter the width\n ";
	cin >> width;
	cout << "plse inter the length\n";
	cin >> length;
	//procceing 
	area = width * length; 
	//output 
	cout << "the area of rectangel is " << area<<" cm";

	return 0; //here the code is ended 
	
	cout<<"thanks"; //this line wasnt run because is after return 
} 
*/

/*
#include <iostream>
using namespace std;
int main()
{
	// the input from the user and the varables storesd in memory 
	int width, length;

	cout << "plse inter the width and lengh\n ";
	cin >> width>> length ;

	//cout << "plse inter the length\n";
	//cin >> length;

	//procceing 
	
	//area = width * length;
	
	//output 
	cout << "the area of rectangel is " <<width*length << " cm";

	

}*/





/*
#include <iostream>
using namespace std;

int main()
{
	int x = 10, y = 3;
	float div;
	
	//div = 10 / 3; // here the return the integer only it retearn 3 but the real valeu is 3.66667
	//to print the ral value we use type casting 
	div = (float)x / y;


	cout << div<<"\n";
	x++;           //here x is increses by 1
	cout << x<<"\n";
	x += 5;b      //means x=x+5	
	cout << x << "\n";
	x *= y;       //means x=x*y we can use any operator like / or % or + or -
	cout << x << "\n";

	

}


*/

/*
* 
* 
//cheak the number is even or not 
#include <iostream>
using namespace std;

int main()
{
	int num;
	cout << "enter the number \n";
	cin >> num;
	if (num % 2 == 0)
		cout << "the number is even\n ";
	else
		cout << "the number is odd\n";


	return 0;

}

*/


/*
* 
* 
* 
//calculate the grade of student 

#include <iostream>
using namespace std;
int main()
{
	cout << "enter the degree: \n";
	int degree;
	cin >> degree;
	if (degree >= 90)
		cout << "your grade is \"A\"\n";
	else if (degree>=80)
		cout << "your grade is \"B\"\n";
	else if (degree>=70)
		cout << "your grade is \"C\"\n";
	else if (degree>=60)
		cout << "your grade is \"D\"\n";
	else 
		cout << "your grade is \"F\"\n";
}

*/


/*write a program that accept an integer number from the user ,
in case the number is Positive, check and print out whether it is Even or Odd
number */
/*
* 
* 
* 
#include <iostream>
using namespace std ;
int main()
{
	int number;
		cout<< "enter the intrger\n";
		cin >> number;
		if (number >= 0)
			if (number % 2 == 0)
				cout << " This is an Even number \n";
			else
				cout << " This is an odd number \n";
		else
			cout << "the number is negative \n";


}



*/


/*



//compuny that insures the employes 
#include <iostream>
using namespace std;
int main()
{
	char martial, sex;
	int age;
	cout << "enter the martial states \n";
	cin >> martial;
	cout << "enter the sex \n";
	cin >> sex;
	cout << "enter the age \n";
	cin >> age;

	if (martial == 'm' || (martial == 's' && sex == 'm' && age > 30) || (martial == 's' && sex == 'f' && age > 25))
		cout << "you will get insures";
	else
		cout << "you will not det insures ";



}


*/




/*


//sample calc
#include <iostream>
using namespace std;
int main() 
{
	char operat;
	double num1, num2;
	cout << "enter the to numbers ";
	cin >> num1 >> num2;
	cout <<"enter the operator ";
	cin >> operat;
	if (operat == '+')
		cout << num1 + num2;
	else if(operat=='-')
		cout << num1 - num2;
	else if (operat=='*')
		cout << num1 * num2;
	else if(operat=='/')
		cout << num1 / num2;
	else
	{
		cout << "wrong operator";
	}


}

*/



                    //swith statement
/*
switch (expression) {
case value1:
	// code to be executed if expression == value1
	break;
case value2:
	// code to be executed if expression == value2
	break;
	// more cases can be added here
default:
	// code to be executed if expression does not match any case
	break;
} 

*/

/*



#include <iostream>
using namespace std;
int main()
{
	int number;
	cin >> number;
	switch (number) //we can only use integer or expretion evaluates integer like number+10

	{
	case 10:
		cout << "this is case 1 if user enter 10";
		break;
	case 20:
		cout << "this is case 2 if user enter 20";
		break;
     
	case 40:
		cout << "this is case 3 if user enter 40";
		break;
		
	default:
		cout << "the user enter differant number than 10,20,40";


	}

}

*/


/*
* 
#include <iostream>
using namespace std;
int main()
{

	/*
	//app by swith statement (award system aplication)
	int number;

	cout << "enter the number in the cobon:\n";
	cin >> number;
	switch (number)
	{

	case 100:
	case 134:
	case 113:
		cout << "you get iphone13\n";
		break;

	case 200:
			cout << "you get ipad\n";
			break;
	case 1235:
		cout << "you get laptop\n";
		break;


	default:
		cout << "try another cabon\n";
		break;


	}
	*/

	/*
    //app 2 by swatch statement (sample calcolator)
	char oper;
	int num1, num2;
	cout << "enter the twp numbers:";
	cin >> num1 >> num2;
	cout << "enter the twp operator:";
	cin >> oper ;
	switch (oper)
	{
	case '+':
		cout << num1 << "+" << num2 << "=" << num1 + num2;
		break;
	case'-':
		cout << num1 << "-" << num2 << "=" << num1 - num2;
		break;
	case'*':
		cout << num1 << "*" << num2 << "=" << num1 * num2;
		break;
	case'/':
		cout << num1 << "/" << num2 << "=" << num1 / num2;
		break;
	default:
		cout << "yoy enter wrong operator";



	}


}


*/


/*

//calculate tha average grade of 6 students >>>
#include <iostream>
using namespace std;
int main()
{
	int counter = 1;
	float grade, sum = 0;
	while (counter<=6)

	{
		cout << "enter the grade of student number"  << counter<<":\t";
		cin >> grade;
		//get the sum of grade
		sum += grade;
		counter++;



	}

	cout << "the average grade of 6 sudent is\t " << sum/6 ;
}


*/




/*
#include <iostream>
using namespace std;

int main()
{
	int grade = 0, counter = 1, sum = 0;
	cout << "Enter 5 grades or -1 to exit\n";

	// The loop will continue as long as the counter is less than or equal to 5
	// and the grade entered by the user is not -1.
	while (counter <= 5 && grade != -1)
	{
		cin >> grade;  // Read the grade from the user.

		sum += grade;  // Add the entered grade to the running sum.

		counter++;  // Increment the counter to keep track of the number of grades entered.
	}

	cout << "The sum of grades is " << sum << "\n";

	return 0;
}




*/



/*
 //the for loop 
#include <iostream>
using namespace std;
int main()
{ 
	int sum=0, grade=0;
	for (int counter = 1; counter <= 6; counter++)
	{
		cout << "enter the grade of students:\n";

		cin >> grade;

		sum += grade;
	}
		
	cout << "the avrage of grades is " << sum / 6 << "\n";
	*/

	/*
	
	/////print numbers from 0 to 10

	for (int i = 0; i <= 10; ++i)
		cout << i << "\n";

		*/


	/*

	//get 10 numbers from user and return sum of odd and even number 
	int num,sum_even=0,sum_odd=0;
	for (int i = 1; i <= 10; i++)
	{
		cout << "enter the numbers : \n";
		cin >> num;
		if (num % 2 == 0)
		{
			sum_even += num;


		}
		else
		{
			sum_odd += num;

		}	
	}
	cout << "the sum of odd number is " << sum_odd<<"\n";
	cout << "the sum of even number is " << sum_even<<"\n";

	*/

	//=======>>the different forms for the "for loop"

	/*
	int i = 0;
	for (; i <= 10; i++)
		cout << i << "\n";
	 */
	 
	/*
	int i = 0;
	for (; i++ <= 10;)
		cout << i << "\n";
		*/
	 
	/*
	int i = 0;
	for (; i < 10;)
	{
		cout << i << "\n";
		i++;
	}
	*/
		

	/*
	//calcolate the factorial of any number
	int number, fac = 1;
	cout << "enter the number :\n";
	cin >> number;
	if (number < 0)
		cout << "plese enter the positive number";
	else
	{
		for (int i = 1; i <= number; i++)
			fac *= i;


	}
	cout << "the factoial of \t" << number << "\tis\t" << fac;
	*/


	//=====>calculates the Factorial for numbers from 1 to 10;
	
	

	/*
		for (int i = 1; i <= 10; ++i) {
			int factorial = 1;
			for (int j = 1; j <= i; ++j) {
				factorial *= j;
			}
			std::cout << "Factorial of " << i << " is: " << factorial << std::endl;
		}
		return 0;
		
		*/
	

		/* 
		* 
		* 
	for (int line = 1; line <= 10; line++)
	{
		for (int star = 1; star <= line; star++) 
		{
			cout << "*";
		}
			cout<<"\n" ;
	}


 }     */

/*

#include <iostream>
using namespace std;

int main()
{
	{
		// Write my_text Variable Content Here
		string my_text = "============\n==Rashed==\n============";


		// Do Not Edit Below
		cout << my_text;
		return 0;
	}
}

*/



/*

#include <iostream>
using namespace std;

int main()
{
	/*

	double salary = 5000.98;
	// 8 Bytes
	cout << "the size of number is " << sizeof(salary)<<"  Bytes";

	// Edit Anything Except Values
	short int a = 100;
	int b = 100;
	signed long long int c = 15001500;
	double d = 100.54565746;
	long float f  = 100.54565746;

	// Do Not Edit
	cout << sizeof(a) << " Bytes\n"; // 2 Bytes
	cout << sizeof(b) << " Bytes\n"; // 4 Bytes
	cout << sizeof(c) << " Bytes\n"; // 8 Bytes
	cout << sizeof(d) << " Bytes\n"; // 8 Bytes
	cout << sizeof(f) << " Bytes\n"; // 8 Bytes


	//------------------------------------------------------------------------


	int a  = 5;               // initial value: 5
	int b (3);              // initial value: 3
	int c { 2 };              // initial value: 2
	int result;            // initial value undetermined

	a = a + b;
	result = a - c;
	cout << result;
	int g(10); //initial_value is the same if we say x=10 and this eqivlant to x{10}


	*/
	//-----------------------------------------------------------------------------

	/*
	// Edit Anything Except Values
	unsigned int a = 100;
	int b = -100;
	short int c = 100;
	float  d = 500.55;

	// Do Not Edit
	cout << a << "\n"; // 100
	cout << b << "\n"; // -100
	cout << c << "\n"; // 100
	cout << d << "\n"; // 500.55

	*/
	//-----------------------------------------------------------------------------


	//int foo = 0;
	//auto bar = foo; 
	/*  the same as: int bar = foo;
	Here, bar is
	declared as having an  auto type;therefore,
	the type of bar is the type of the value used to
	initialize it: in this case it uses the type of foo, which is int*/
	//cout << bar;
	//-------------------------------------------------------------------------
	//int x = 0;
	//decltype(x) y;  // the same as: int x;  

	/*
	char a = '~';
	char b = '&';
	char c = '%';
	char d = 'A';
	cout << "ASCII Value of " << a << "Is 126\n";
	cout << "ASCII Value of " << b << "Is 38\n";
	cout << "ASCII Value of " << c << "Is 37\n";
	cout << "ASCII Value of " << d  << "Is 65\n";
	*/

	/*
	char myChar = 'A';
	int asciiValue = static_cast<int>(myChar);

	cout << "ASCII value of " << myChar << " is " << asciiValue << endl;
	*/
	//-------------------------------------------------------------------------- -
	/*
	int asciiValue = 65; // ASCII value for 'A'
	char mychar = static_cast<int>(asciiValue);

	cout << "Character corresponding to ASCII value " << asciiValue << " is " << mychar << endl;
	 
	 
}

*/
 

/*
#include <iostream>
#include<cmath>

using namespace std;
int main()
{
	int x(-4);
	double y(5);
	double z(2);
	double k(4);
	double i(3.5);

	cout << "the absolute value of x is " << abs(x) << "\n"; // 4
	cout << "the power of y to the power z" << pow(y, z)<<"\n";// 25
	cout << "the sqrt of k is " << sqrt(k) << "\n"; //2
	cout << "the floor of i is " << floor(i) << "\n";//3
	cout << "the ceil of i is " << ceil(i) << "\n";//4

	
}
*/

/*
#include <iostream>
using namespace std;
int larger(int num1, int num2);  //her we  declaration functhon before int main
 
int main()
{
	int n1, n2, result;
	cout << "enter 2 number ";
	cin >> n1 >> n2;
	result = larger(n1, n2); //Invoking Function (Calling)
	cout << "the larger number is " << result << "\n";

}
int larger(int num1, int num2) //her function Definition (body of functhon)
{
	

	if (num1 >= num2)
		return num1;
	else
	 return  num2;

	

}
*/

                 //Problem 1: Calculate Factorial
/*
#include <iostream>
using namespace std;
int factorial(int n)
{
	int fact=1;
	for (int counter = 1; counter <= n; counter++)
	{
	    
		fact *= counter ;
	}
	return fact ;
} 
int main()
{
	cout << "enter the number ";
	int number;
	cin >> number;
	cout << "the factoial of " << number << " is" << factorial(number);

}
*/




/*
                       //Check Prime Number	
#include<iostream>
using namespace std;
// Function to check prime
bool isprime(int n)
{
	if (n <= 1)
	{
		return false;	
	}
	for (int i = 2; i < n; i++)
	{
		if (n % i == 0)
			return false;
	}
	return true;
}
int main()
{
	cout << "enter the number ;";
	int num;
	cin >> num;
	if (isprime(num)) //if the function return true the if condithin is applyed 
		cout << "the number is prime ";
	else
		cout << "the numbe is not prime ";
}
*/
 
/*
#include<iostream>
using namespace std;

//functhon to clac the area 
double area(int radires)
{

	return 4* radires* radires * 3.14 ;

}
//functhon to calc the volume 
double volume(int radies)
{

	
	return   4/3 * 3.14 * radies * radies * radies;

	
}
int main()
{
	cout << "enter the radier \n ";
	int rade;
	cin >> rade;
	cout << "the area of sahere is = " << area(rade)<<"\n";
	cout << "the vloume os sahere is = " << volume(rade)<<"\n";



}
*/

  
/*
//                     get the average of 3 numbers 
#include <iostream>
using namespace std;

int sum(int n1, int n2, int n3)
{
	return n1 + n2 + n2;

}

float avrage(int num1, int num2, int num3)
{
	return sum(num1, num2, num3) / 3;

}
int main()
{
	cout << "enter the numbers";
	int n1, n2, n3;
	cin >> n1 >> n2 >> n3;
	cout << "the average of number is" << avrage(n1,n2,n3)<<"\n";
}

*/




/*
//                    Function Parameter’s Default Value


#include <iostream>
using namespace std;
int sum(int num1, int num2, int num3 = 10)
{
	return num1 + num2 + num3;
}

int main()
{
	cout << "enter two numbers \n";
	int num1, num2;
	cin >> num1 >> num2;
	cout << "the sum of number is " << sum(num1, num2);
}

*/



//                  Function Parameters Types 


/*
#include <iostream>
using namespace std;
void swap(int x, int y)  //here x and y is value parameter. 
/* In this type, the function receives a copy of the argument's value.
Any modifications made to the parameter inside the function  
do not affect the original argument.
{
	int temp;
	temp = x;
	y = x;
	temp = y;

}
int main()
{
	int i = 10,j=50;
	swap(i, j); //the swap functhon dosent chande any thing of i and j
	             //because the functhon parameter typr is value paramter

	cout << "i becomes " << i << "\n";
	cout << "j becomes " << j << "\n";

}
*/

/*
#include <iostream>
using namespace std;
void swap(int &x, int &y)//here the parameter type is Reference 
/* When you pass a parameter by reference, the function receives a reference to the original argument.
Any changes made to the parameter inside the function directly
affect the original value.

{
	int temp;
	temp = x;
	y = x;
	temp = y;

}
int main()
{
	int i = 10, j = 50;
	swap(i, j); //here the swap functhon change the i and j 
	cout << "i becomes " << i << "\n";
	cout << "j becomes " << j << "\n";

}*/

/*
//                    SCOPE OF VARIBAL

#include <iostream>
using namespace std;
int x = 10;
const int y = 20; // this is const  glopal varible can be used in any func but we can chand it in any functhon
int main()
{
	int x = 40; // this is local variable

	//y = 100; we cant do this 

	cout << x << "\n";  // this print the local varible  =====>40
	cout << ::x << "\n"; //this print glopal varible     =====>10

	{
		int x=100;  // this can only uses in scope practs
		int z = 19;
		cout << "from inner blocks" << x << "\n";
		cout << "the glopal varibe is " << ::x << "\n";


	}
	//cout << z; we can not print z because this is local varible in ptackts
}

*/

/*
// passing parameters by reference
#include <iostream>
using namespace std;

void duplicate(int &a, int &b, int &c)
{
	a *= 2;
	b *= 2;
	c *= 2;
}

int main()
{
	int x = 1, y = 3, z = 7;
	duplicate(x, y, z);
	cout << "x=" << x << ", y=" << y << ", z=" << z;
	return 0;
}*/
/*
#include <iostream>
using namespace std;
void changer(int x)
{
	x *= x;
	
}
int main()
{
	cout << "enter the number you want to change:\n" ;
	int x;
	cin >> x;
	changer(x);
	cout << x; // her x dosent change because the funchon called by value paramter


}

*/

//*******************************************************************************************


/*In C++, when you pass parameters to a function by value,
it means that a copy of the arguments is created within the function.
This is true for all types, including strings. 
If you pass long strings by value,it can indeed lead to copying
large amounts of data, which can be inefficient in terms of both time and memory.

*/

/*
#include <iostream>
#include <string>
using namespace std;
string concatenateStringsByValue(string a, string b)// this functhon tackes parameters by value
//this mean meaning that when you call the function with str1 and str2,
//copies of str1 and str2 are created inside the function for concatenation.
//This can be inefficient for large strings.
{
	return a + b;
}

int main() {
	string str1 = "Hello ";
	string str2 = "mohamed anwar rashed ";
	string result = concatenateStringsByValue(str1, str2);
	cout << result ;
	return 0;
}

*/
//To avoid unnecessary copying of large strings, you can pass them 
//by reference or use move semantics.
//Here's how you can modify the code to pass strings by reference:


/*
#include <iostream>
#include <string>

std::string concatenateStringsByReference(const std::string& a, const std::string& b) {
	return a + b;
}

int main() {
	std::string str1 = "Hello, ";
	std::string str2 = "World!";
	std::string result = concatenateStringsByReference(str1, str2);
	std::cout << result << std::endl;
	return 0;
}

//this modified version, the function takes constant references to the strings, 
//which avoids copying the strings and is more efficient for large strings.
*/

//******************************************************************************************

//                           inline functions
/*
#include <iostream>
using namespace std;
// Declaration of an inline function
inline int add(int a, int b) 
{
	return a + b;
}

int main() {
	int result = add(3, 4); // The compiler may replace this call with "int result = 3 + 4;"
	cout << "Result: " << result << endl;
	return 0;
}
*/
//*******************************************************************************************

//                             overloaded functions
/*
In C++, overloaded functions allow you to define multiple functions with the same name 
in the same scope, but with different parameter lists. 
The compiler selects the appropriate function to call based on the arguments
passed during a function call*/
/*
#include<iostream>
using namespace std;
int add(int x, int y)
{
return x + y;
}
int add(double x, double y)// note that :this is the same name of bervios function but the type of pramteres is diffrent 

{
	return x + y;

}
int main()
{
	int result1 = add(5,6);
	double result2 = add(3.4, 5.3);
	cout << "Result 1: " << result1 << endl;
	cout << "Result 2: " << result2 << endl;
}*/



//*************************************************************************************************

//                                   array

/*
#include<iostream>
using namespace std;

int main()
{
	//int size = 10;
	//int array[size]; here size must be a constant not a varible 

	int list [10];      
	//list[5] = 100; // here we entered in indexd[5] number 100

	//cout << list[5];

	for (int i = 0; i < 10; i++)
	{
		cout << "enter the number to stor in array";
		cin >> list[i];
	}
	cout << list[7];

	

}
*/
                /*Write a program that ask the user to enter 10 Employee
                 salaries and store them, then add a bonus of 10 % for each
                   employee and print out the average salary value*/  
/*
#include<iostream>
using namespace std;
int main()

{
	int sum = 0;
	int employe_salry[10];
	for (int i = 0; i < 10; ++i)//lopp to get the sarly of 10 employes fromm user
	{
		cout << "enter the salare of empolye number: " << i+1<< "is";
		cin >> employe_salry[i];

	}
	for (int index = 0; index < 10; ++index) //loop to add a 10% pones for each empolye 
	{

		employe_salry[index] = employe_salry[index] + (employe_salry[index] * 0.10);

	}

	for (int i = 0; i < 10; ++i)//loop to get the sum of sarle
	{
		sum += employe_salry[i];
	}
		
	cout << "the aVrage oF salres of emplyes AFTAR BONES>>" << sum / 10 << "\n";

}

*/

/*
#include<iostream>
using namespace std;

int main()
{
	int list[] = { 4,5,7,3,4,3 };
	cout << list[4]<<"\n";
	int list2[10] = { 0 };// every elmant in the array take the value 0
	cout << list2[5];
}
*/


//                                       array as a prameter to functhon
/*
#include<iostream>
using namespace std;
//funchon to get array as a reflance parameter and get the average of array 
float calc_avrage(float markes[], int size)
{
	float sum=0.0;
	for (int i{ 0 }; i < size; ++i) {
		sum += markes[i];
	}
	return sum/size;

}
int main()
{
	float markes[5];
	cout << "enter the markes :\n";
	for (int i{ 0 }; i < 5; ++i) {
		cin >> markes[i];
	}
	cout <<"tha avrage of marckes is >>>" << calc_avrage(markes, 5);

}
*/
/*
#include<iostream>
using namespace std;
bool find_item(int array[], int size, int searcheditem)
{
	bool found = false;
	int index;
	for (index = 0; index < size; ++index)
	{
		if (array[index] == searcheditem) {
			found = true;
			break;
		}
	}
	return found;
}
int main()
{
	int array[5] = { 10,34,35,9,98 };
	cout << "enter the number that you want to check if that is in the array or not>>\n";
	int number;
	cin >> number;
	if (find_item(array, 5, number))
		cout << "the number is exit in array ";
	else
		cout << "thr number is not found in array";
	
}

*/

/*
#include<iostream>
using namespace std;
int main()
{
	int matrix[3][3];
	for (int row = 0; row < 3; ++row)
		for (int col = 0; col < 3; ++col)
			cin >> matrix[row][col];
	cout << matrix[2][1];
}*/

/*
//Two dimensional Arrays can be initialized during declaration
#include<iostream>
using namespace std;
int main()
{
int matrix[4][3] = { {20,23,54},
					 {12,43,54},
					 {34,44,54},
					 {35,63,67} };
cout << matrix[3][2];

}
*/




                  /*Write a program that build a matrix of 5 rows and 3
                    columns.As the use to enter the values for all the matrix items,
                    print out the sum of all matrix items and print out the sum of the
                    diagonal items*/
/*
#include<iostream>
using namespace std;
int main()
{
	int matrix[5][3];
	//create the nasted loop to get the value for items from user 
	for (int row = 0; row < 5; ++row)
		for (int col = 0; col < 3; ++col)
		{
			cout << "enter value for items" << row << "," << col << "\n";
			cin >> matrix[row][col];
		}
	int sum=0;
	//create nasted loop to pass of the each value of items in matrix
	for (int row = 0; row < 5; ++row)
		for (int col = 0; col < 3; ++col)
		{
			sum += matrix[row][col];
		}
	int sum_diagonl=0;
	for (int row = 0; row < 5; ++row)
		for (int col = 0; col < 3; ++col)
			//if to pass the diagonal of matrix where as ,t when the index of items the the idex of row eqal index of colum
		{
			if (row == col)
			{
				sum_diagonl += matrix[row][col];
			}

		}
	cout << "the sum of all items of matrix is " << sum << "\n";
	cout << "the sum of the diagonal items is " << sum_diagonl << "\n";

}
*/


/*
#include<iostream>
using namespace std;
void printmatrix(int array[4][4])
{
	for (int row = 0; row < 4; ++row)
	{
		for (int col = 0; col < 4; ++col)
			cout << array[row] [col]<<"\t";
		cout << endl;
	}
	

}
int main()
{
	int array[4][4];
	for (int row = 0; row < 4; ++row)
		for (int col = 0; col < 4; ++col)
		{
			cout << "enter the value for intex " << row << "," << col<<"\n";
			cin >> array[row][col];
		}
			
	
	printmatrix(array);


}

*/   


        
                      //Struct#
/*
#include<iostream>
#include<string>
using namespace std;

struct Employee
{

	int emp_no;
	string fname;
	string lname;
	float salry;
	float bounes;
	float net_salry;


	
};
int main()
{
	Employee e1, e2; // here we defined e1 ,e2 
	e1.emp_no = 134;
	e1.fname = "mohamed anwar elasyed  ";
	e1.lname = "rahed";
	e1.salry = 5000;
	e1.bounes = 400;
	e1.net_salry = e1.salry + e1.bounes;

	e2 = e1;
	cout << e2.fname;
}

*/
/*
#include<iostream>
#include<string>
using namespace std;

struct  distancetype
{
	int feet;
	float inches;
};

distancetype add_distance(distancetype d1, distancetype d2)
{
	distancetype result;
	result.feet = d1.feet + d2.feet;
	result.inches = d1.inches + d2.inches;
	return result;

}

int main()
{
	distancetype x ,y , z ;
	cout << "enter the inches and feet for frist distance \n";
	cin >> x.feet >> x.inches;
	cout << "enter the inches and feet for second distance \n";
	cin >> y.feet >> y.inches;
	z = add_distance(x, y);
	cout << z.feet << " " << z.inches;

}		*/


//                              Arrays in structs
/*
#include<iostream>
using namespace std;
struct student
{
	int sudent_num;
	string name;
	float gpa;
	float marks[3];//this is a array in the struct to stor the 3 marks of student 
};
int main()
{
	student s1;
	s1.sudent_num = 24432;
	s1.name = "mohamed rashed";
	s1.gpa=3.21;
	s1.marks[0] = 85;
	s1.marks[1] = 88;
	s1.marks[2] = 79;

	cout << s1.marks[1];

}	
*/
//                         structs in Arrays
/*
#include<iostream>
using namespace std;
struct employee
{
	int employee_num;
	string name;
	string lname;
	float salry;
	float bones;

	
};
int main()
{
	employee	emp[5];   //here we crate array contains 5 employes
	//emp[0].employee_num = 2313;
	//emp[0].name = "mohamed";
	//emp[0].lname = "rashed";
	//emp[0].salry = 9000;
	//emp[0].bones = 335; instad that >>>>
	

	//we can stor the data of emploe with the for loop
	for (int i = 0; i < 5; ++i)
	{
		cout << "enter the data of employee: employee_num,name,lname,salry and bones\n";
		//we grt the data from user and stor them in the struct 
		cin >> emp[i].employee_num >> emp[i].name >> emp[i].lname >> emp[i].salry >> emp[i].bones;

	}


}



*/
//================================================================================================
//project 1
// program that used to manage The HR data of a department

/*
#include<iostream>
using namespace std;
#include <string>

struct employee
{
	int no;
	string name;
	string jop;
	float salry;
	float bones;



};

//functhon to accept data form user		
void get_data(employee arry[])

{
	for (int i = 0; i < 5; ++i)
	{
		cout << "enter the data for emplyee emblyee number ,name,jop";
		cin >> arry[i].no >> arry[i].name >> arry[i].jop;
		
		if (arry[i].jop == "Manager")
			arry[i].salry = 5000;
		else if(arry[i].jop =="Engineer")
			arry[i].salry = 3000;
		else if (arry[i].jop == "Clerck")
			arry[i].salry = 2000;
		else
			arry[i].salry = 1000;

	}
	
}
//funchon to set bounes for spcaefic emplyee
void set_bones(employee &e,float precent)
{
	e.bones = e.salry * precent;

}

void print(employee arry[])
{
	for (int i = 0; i < 5; ++i)
	{
		cout << "employee number is >>> " << arry[i].no << endl;
		cout << "employee name  is >>> " << arry[i].name << endl;
		cout << "employee salry is >>> " << arry[i].salry << endl;
		if (arry[i].bones > 0)
		{
			cout << "employee bounes  is >>> " << arry[i].bones << endl;

		}
		else
			cout << "there is not bones for this emplyee\n";
		
		cout << "*********************************************************************************\n";

	}
}


int main()
{
	employee arry[5];

	get_data(arry);
	set_bones(arry[0],0.10);
	print(arry);
}

	*/






//---------------------------------------------------------------------------------------------
//p1 say hello with c++
/*
#include<iostream>
using namespace std;
int main()
{
	string x;
	cin >> x;
	cout << "Hello, " << x;
	return 0;
}
*/
//_________________________________-----------------------------------________________________
//p2 Basic Data Types
/*
#include<iostream>
using namespace std;
int main()
{
	int x;
	long long y;
	char z;
	float i;
	double m;
	cin >> x >> y >> z >> i >> m;
	cout << x  << endl;
	cout << y  << endl;
	cout << z  << endl;
	cout << i  << endl;
	cout << m  << endl;

}

*/

//-------------------------------____________________________------------------------------
//p3 sample calcolator 
/*
#include<iostream>
using namespace std;
int main()
{
	long long  x;
	long long y;
	cin >> x >> y;
	if(1<x && y<1000000)
	{
		cout << x << " + " << y << " = " << x + y << endl;

		cout << x << " * " << y << " = " << x * y << endl;

		cout << x << " - " << y << " = " << x - y << endl;

	}
		
	
}	
*/
//-----------------------------------____________________________--------------------
//p4
/*
#include<iostream>
using namespace std;
int main()
{
	long long  A, C;
	int B,D;

	
	cin >>A >> B >> C >> D;
	if (-10e5 <= A && B && C && D <= 10e5) {
		
		 long long X=  (A * B) - (C * D);

		 cout << "Difference" << " = " << X;
	}
	
}

	*/
	     
	//___________________________________-----------------------------_________________________________
/*
#include<iostream>

#include<iomanip>
using namespace std;
int main()
{
	cout << fixed << setprecision(9);
	const double pi = 3.141592653;
	double R;
	cin >> R;
	if (0 < R <= 100)
	{
		cout << R * R * pi;
	}

	
}

*/
//-----------------------------------------------------------------------------------------
/*
//Method 1: C++ program to find the first and the last digits of a number with a 
//loop and modulo operator :
#include <iostream>
using namespace std;

int main()
{
	int number;
	cout << "Enter a number : " << endl;
	cin >> number;

	cout << "Last digit is : " << number % 10 << endl;

	while (number >= 10)
	{
		number = number / 10;
	}

	cout << "First digit is : " << number << endl;
	return 0;
}
*/
//===============================================================================================
//p6
/*
#include<iostream>
using namespace std;
int main()
{
	long long n1;
	long long n2;
	cin >> n1 >> n2;
	//get the last digit for n1
	int x = n1 % 10;
	//get the last digit for n2
	int y = n2 % 10;
	cout << x + y;
}
*/
//___________________________________________________________________________________________
//p7
/*
#include<iostream>
using namespace std;
int main()
{
	long long n;
	cin >> n;
	if (1 <= n <= 10e9) {
		cout << (n * (n + 1)) / 2; //this is eqathon to get the factorial of any number 
	}
	


}

*/
//==============================================================================================
//p8
/*
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double a, b;
	
	cin >> a >> b;
	double result = a / b;
	if (1 <= a && b <= 10e3)
	{
		cout << "floor " << a << " / " << b << " = " << floor(result) << endl;
		cout << "ceil " << a << " / " << b << " = " << ceil(result) << endl;
		cout << "round " << a << " / " << b << " = " << round(result) << endl;
	}
	
	
}*/
//=================================================================================================
//p9(i)
	/*
#include<iostream>

using namespace std;
int main()
{
	int A, B;
	cin >> A >> B;
	if (0 <= A && B <= 100)
	{
		if (A >= B)
			cout << "Yes";
		else
			cout << "No";

	}

}
*/
//==================================================================================================
//P10(J)
/*

#include<iostream>

using namespace std;
int main()
{
	long x, y;
	cin >> x >> y;
	if (1 <= x && y <= 10e6)
	{
		if (x % y == 0||y%x==0)
			cout << "Multiples";
		else
			cout << "No Multiples";
	}
}
*/
//==============================================================================================
	
//p(11)
/*
#include <iostream >
using namespace std;
int main()
{
	int n1, n2, n3;
	cin >> n1 >> n2 >> n3;

	if (n1 >= n2 && n1 >= n3)   // n1 is max
	{
		if (n2 >= n3)           //n3 is min 
			cout << n3 << " " << n1;
		else
			cout << n2 << " " << n1;
	}

	else if  (n2 >= n3 && n2 >= n1)  //n2 is max 
	{
		if (n1 >= n3)          //n3 is min 
		{
			cout << n3 << " " << n2;
		}
		else
			cout << n1 << " " << n2;
	}

	else if  (n3 >= n2 &&  n3 >= n1)  // n3 is max 
	{
		if (n1 >= n2)           // n2 is min 
		{
			cout << n2 << " " << n3;
		}
		else
			cout << n1 << " " << n3;
	}

}
*/
//=======================================================================================

//p12(l)


/*
	#include <iostream >
	using namespace std;
	int main()
	{
		string f1, s1;
		cin >> f1 >> s1;

		string f2, s2;
		cin >> f2 >> s2;
	
		if (s1 == s2)
		{
			cout << "ARE Brothers";

		}
		else
			cout << "NOT";



	}*/


//=========================================================================
//p13(m)
/*
#include <iostream >
using namespace std;
int main()
{
	char mychar;
	cin >> mychar;
	int ascill = mychar;       // get the ascii code of the char 
	

	
	if ( ascill <= 64)
		cout << "IS DIGIT"<<endl;
	else
	{
		cout << "ALPHA"<<endl;

		if ( ascill <= 90)
			cout << "IS CAPITAL"<<endl;
		else
		{
			cout << "IS SMALL"<<endl;

		}
	}
		

		



}

*/
//==================================================================================
//P(14)
/*
#include <iostream >
using namespace std;
int main()
{

	char my_char;
	cin >>my_char ;
	int ascii = my_char;

	if ( ascii>=65 && ascii<=90)   // mean tha char is captal 
	{
		ascii += 32;
		my_char = ascii;
		cout << my_char;
	}
	else if (ascii >= 97)
	{
		ascii =ascii- 32;
		

		my_char= ascii;
		cout << my_char;


	}


}

*/

//=========================================================================================
//P(15) O

#include<iostream>
using namespace std;
int main()
{
	int n1, n2;
	char operat;
	cin >> n1 >> operat >> n2;
	if (operat == '+')
		cout<< n1 + n2;
	else if (operat == '-')
		cout << n1 - n2;
	else if (operat == '*')
		cout << n1 * n2;
	else if (operat == '/')
		cout << n1 / n2;
	else
		return 0;



}


// Program to find first and last 
// digits of a number 

using namespace std;

// Find the first digit 
int firstDigit(int n)
{
	// Remove last digit from number 
	// till only one digit is left 
	while (n >= 10)
		n /= 10;

	// return the first digit 
	return n;
}

// Find the last digit 
int lastDigit(int n)
{
	// return the last digit 
	return (n % 10);
}

// Driver program 
int main()
{
	int n = 98562;
	cout << firstDigit(n) << " "
		<< lastDigit(n) << endl;
	return 0;
}


//================================================================================================
//p16(p)

#include<iostream>
using namespace std;
int main()
{


	int number;
	cin >> number;
	if (number > 999 && number <= 9999)
	{
		// to get the first number 
		while (number >= 10)
		{
			number /= 10;

		}
		if (number % 2 == 0)
		{
			cout << "EVEN";

		}
		else
			cout << "ODD";


	}
	else
		return 0;


}

//=================================================================================================
//D.Difference
//Given four numbers A, B, C and D. Print the result of the following equation :
//X  = (A  * B) - (C  * D).

#include<iostream>
using namespace std;
int main()
{
	long long  a, b, c, d;
	cin >> a >> b >> c >> d;
	long long  x;
	x = (a * b) - (c * d);
	cout << "Difference = "<<x;




}



//=====================================================================================



























//                        pointers in c++




//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++



