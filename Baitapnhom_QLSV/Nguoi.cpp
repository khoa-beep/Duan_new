#include<iostream>
#include"Nguoi.h"
#include<string>
#include<iomanip>
#include<fstream>
using namespace std;

// overring 
Person::Person() {
	this->ID = 0;
	this->name = " ";
	this->sex = 0;
}

Person::Person(int id, string name, int sex) {
	this->ID = id; this->name = name; this->sex = sex;
}

Person::~Person() {

}

int Person::getID() const {
	return ID;
}

string Person::getname() const {
	return name;
}

int Person::getsex() const {
	return sex;
}

void Person::setID(int id) {
	this->ID = id;
}

void Person::setname(string name) {
	this->name = name;
}

void Person::setsex(int sex) {
	this->sex = sex;
}

void Person::input() {
	ofstream i;
	i.open("E:\C++\C++\DuAn\QLSV\Baitapnhom_QLSV\Baitapnhom_QLSV\Informationstudent.txt",ios::app);
	if (i.is_open()) {
		cout << "Nhap ID :"; cin >> ID;
		cin.ignore();
		cout << "Nhap Ten :"; getline(cin, name);
		cout << "Nhap gioi tinh ( 1: Nam , 2: Nu ) "; cin >> sex;

		i << "ID" << setw(30) << "Name" << setw(30) << "Sex" << endl;
		i << getID() << setw(30) << getname() << setw(30) << getsex() << endl;
		i.close();
	}
	else
	{
		cout << "File not found !";
	}
}

void Person::output() {
	cout << "ID" << setw(30) << "Name" << setw(30) << "Sex" << endl;
	cout << ID << setw(30) << name << setw(30) << sex << endl;

}
