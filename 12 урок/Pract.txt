#include<iostream>
#include<string>
using namespace std;

int main() {

	//string* name = new string; // null
	//string* name2 = new string(); // ""
	//string* name3 = new string("Andrii"); //Andrii

	//cout << *name << endl;
	//cout << *name2 << endl;
	//cout << *name3 << endl;

	//delete name;
	//delete name2;
	//delete name3;
	//
	//name3 = new string("Andrii");

	//delete name3;

	/* int size = 50;
	int array[size];
*/

	//int size;
	//cin >> size; //5

	//int* numbers = new int[size]; // null
	//int* numbers2 = new int[size](); // 0 0 0 0 
	//int* numbers3 = new int[size] {1,2,3,4}; // 1 2 3 4

	//cin >> size; // 10
	//numbers = new int[size];


	//delete[]numbers;
	//delete[]numbers2;
	//delete[]numbers3;

	int size = 1;
	string* products = new string[size]{"Milk"};

	string newProduct;
	cout << "Enter name for new product ->_";
	cin >> newProduct; //Nuts

	int newSize = size + 1;
	string* temp = new string[newSize]; //Тимчасовий масив в якому будуть старі і нові продукти
	for (int i = 0; i < newSize; i++) //Переносим старі продукти  в тимчасовий масив
	{
		temp[i] = products[i];
	}
	temp[newSize - 1] = newProduct;
	products = new string[newSize];

	for (int i = 0; i < newSize; i++)
	{
		products[i] = temp[i];
	}

	delete[]temp;

	return 0;
}