#include<iostream>
#include<string>

using namespace std;

template <typename MyType>
void showAnyData(MyType *a) {
	cout << "Data = " << *a << endl;
}

void showArray(string array[], int size) {
	for (int i = 0; i < size; i++)
	{
		//cout << array[i] << " ";
		cout << *(array+i) << endl;
	}
	cout << endl;
}

int main() {

	int value = 20;
	int* ptrVAlue = &value;

	cout << &value << " = " << ptrVAlue << " = " << &ptrVAlue<< endl;



	return 0;
}