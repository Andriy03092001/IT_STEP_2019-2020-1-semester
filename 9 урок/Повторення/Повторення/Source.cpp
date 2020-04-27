#include<iostream>
#include<string>
#include<ctime>
using namespace std;

void showArray(string array[], int sizeArray) {
	for (int i = 0; i < sizeArray; i++) {
		cout << i + 1 << ". " << array[i] << endl;
	}
}

// p * r * r
double circleS(double radius) {
	const double p = 3.14;
	double result = p * radius * radius;

	return result;
}

int main() {
	srand(time(0));

	//int a = 10;
	//float b = 25.1;
	//double c = 25.1111;
	//char d = 'a';
	//string name = "Andrii";

	//const int sizeArray = 5;
	//string names[sizeArray] = { "Andrii","Vova", "Sasha","Vlad","Ivan" };
	//
	////cin >> names[2];
	////names[3] = "Zeniya";

	//for (int i = 0; i < sizeArray; i++) {
	//	cout << i + 1 << ". " << names[i] << endl;
	//}

	//int matrix[sizeArray][sizeArray];

	//for (int i = 0; i < sizeArray; i++) {
	//	for (int j = 0; j < sizeArray; j++) {

	//		if (i == 2 && j == 2 ) {
	//			matrix[i][j] = 23;
	//		}
	//		else {
	//			matrix[i][j] = rand() % 9;
	//		}

	//		cout << " " << matrix[i][j] << " ";
	//	}
	//	cout << endl;
	//}

	/*const int size = 5;
	string cars[size] = { "AUDI","BMW","OPEL" };

	showArray(cars, size);

	for (int i = 0; i < size; i++) {
		if (cars[i] == "") {
			cout << "Enter name"<<i+1<< "brand car->_";
			cin >> cars[i];
		}
	}
	
	showArray(cars, size);
*/


	double r = circleS(14);
	cout << r << endl;

	cout << circleS(18) << endl;

	return 0;
}