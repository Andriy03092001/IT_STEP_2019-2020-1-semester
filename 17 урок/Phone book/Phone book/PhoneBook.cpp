#include "PhoneBook.h"
#include <iostream>
#include <list>
#include <fstream>
using namespace std;

#define CLEAR system("cls");
#define PAUSE system("pause");

list<Contact> contacts;
const string fileName = "contacts.txt";

void init()
{
	ifstream fin;
	fin.open(fileName);
	bool isOPen = fin.is_open();

	if (isOPen == false) {
		cout << "Error" << endl;
	}
	else {
		int currentString = 0;
		string data;
		Contact oldContact;
		while (!fin.eof()) {
			currentString++;
			getline(fin, data);
			
			if (currentString == 1) {
				oldContact.FullName = data;
			}
			else if(currentString == 2)
			{
				oldContact.phoneNumber = data;
				currentString = 0;
				contacts.push_back(oldContact);
				oldContact = Contact();
			}

		}

	}
	fin.close();
}

void addNewContact()
{
	Contact newContact;
	cout << "Enter full name for new contact->_";
	cin.ignore();
	getline(cin,newContact.FullName);
	
	cout << "Enter phone number for new contact->_";
	cin >> newContact.phoneNumber;

	contacts.push_back(newContact);
	
	ofstream fout;
	fout.open(fileName, fstream::app);

	bool isOpen = fout.is_open();
	if (isOpen == false) {
		cout << "Error: Application can't connecting to database file!" << endl;
	}else {
		fout << newContact.FullName << endl;
		fout << newContact.phoneNumber << endl;
	}
	fout.close();
	cout << "New contact successful added..." << endl;
	PAUSE
	CLEAR
}

void showAllContacts()
{
	for (Contact item : contacts) {
		cout << item.FullName << " - " << item.phoneNumber << endl;
	}
}
