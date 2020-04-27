#pragma once
#include<string>
using namespace std;

struct Contact
{
	string FullName;
	string phoneNumber;
};

void init();
void addNewContact();
void showAllContacts();