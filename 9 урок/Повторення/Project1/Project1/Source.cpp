#include<iostream>
#include<string>

using namespace std;

void showArray(string array[], int sizeArray) {
	for (int i = 0; i < sizeArray; i++) {
		cout << i + 1 << ". " << array[i] << endl;
	}
}

//p * R * R
float circleS(double radius) {
	const double p = 3.14;
	double result = p * radius * radius;
	
	return result;
}


int main() {

	const int size = 5;
	string names[size] = {"Andrii","Kate", "Vova","Olya","Max"};

	/*cin >> names[4];
	names[4] = "Sasha";*/


	//for (int i = 0; i < size; i++) {
	//	cout << i + 1 << ". " << names[i] << endl;
	//}

	//const int column = 5;
	//const int row = 5;

	//int matrix[row][column];

	//// == != > < >= <= % 

	//for (int i = 0; i < row; i++) {
	//	for (int j = 0; j < column; j++) {

	//		if (i == 2 && j == 2) {
	//			matrix[i][j] = 6;
	//		}
	//		else {
	//			matrix[i][j] = 7;
	//		}
	//	}
	///*}*/

	/*const int size = 5;
	string cars[size] = { "AUDI","BMW","OPEL" };
	
	showArray(cars, size);
	cout << endl;
	for (int i = 0; i < size; i++) {
		if (cars[i] == "") {
			cout << "Enter brend "<<i+1<<" car ->_";
			cin >> cars[i];
		}
	}
	cout << endl;
	showArray(cars, size);*/

	int radius = 12;
	float r = circleS(radius);
	cout << r << endl;

	cout << circleS(16) << endl;




	system("pause");
	return 0;
}