#include<iostream>
#include "Func.h"
#include<fstream>
using namespace std;

int main() {

	/*Show();
	Add();
	int r = Sum(10,23);
	cout << "r  = " << r << endl;
*/

	ofstream ft;
	ft.open("test2.txt");
	bool isCheck = ft.is_open();
	if (isCheck == true)
	{
		cout << "All okey" << endl;
		ft << "All okey!" << endl;
	}
	else {
		cout << "Error" << endl;
	}
	ft.close();

	return 0;
}
//Репозиторія з роботою з файлами
//https://github.com/Andriy03092001/Base-C-Work-with-Files/blob/master/Work%20with%20files/Source.cpp