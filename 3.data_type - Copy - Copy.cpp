/*
Data types define the type of data a variable can hold, for example an integer variable can hold integer data, a character type variable can hold character data etc.

Data types in C++ are categorised in three groups: Built-in, user-defined and Derived.*/
/* 
    Built in data types
char: For characters. Size 1 byte.
char ch = 'A';

int: For integers. Size 2 bytes.
int num = 100;

float: For single precision floating point. Size 4 bytes.
float num = 123.78987;

double: For double precision floating point. Size 8 bytes.
double num = 10098.98899;

bool: For booleans, true or false.
bool b = true;

wchar_t: Wide Character. This should be avoided because its size is implementation defined and not reliable.*/

/* 
    User defined data types
These are the data types defined by the user. For example, you can define a structure to hold the details of a student.
    We have three types of user-defined data types in C++
1. struct
2. union
3. enum

*/

// struct Student {
//     char name[50];
//     int roll;
//     float marks;
// } s1, s2;

// #include <iostream>
// using namespace std;

// struct Person
// {
//     char name[50];
//     int age;
//     float salary;
// };

// int main()
// {
//     Person p1;
    
//     cout << "Enter Full name: ";
//     cin.get(p1.name, 50);
//     cout << "Enter age: ";
//     cin >> p1.age;
//     cout << "Enter salary: ";
//     cin >> p1.salary;

//     cout << "\nDisplaying Information." << endl;
//     cout << "Name: " << p1.name << endl;
//     cout <<"Age: " << p1.age << endl;
//     cout << "Salary: " << p1.salary;

//     return 0;
// }
// #include <iostream>
// #include <cstring>

// using namespace std;

// union student
// {
// 	int roll_no;
// 	int phone_number;
// 	char name[30];
// };

// int main()
// {
// 	union student p1;
// 	p1.roll_no = 1;
// 	p1.phone_number = 1234567822;
// 	strcpy(p1.name,"Brown");
// 	cout << "roll_no : " << p1.roll_no << endl;
// 	cout << "phone_number : " << p1.phone_number << endl;
// 	cout << "name : " << p1.name << endl;
// 	return 0;
// }
/* 
    Derived data types
These are the data types derived from the built-in data types. For example, you can define a pointer to an integer.
   We have three types of derived-defined data types in C++
1. Array
2. Function
3. Pointer

 */
