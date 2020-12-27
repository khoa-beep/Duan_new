#include<iostream>
#include"Sinhvien.h"
#include<string>
#include<iomanip>
#include<fstream>
using namespace std;

void printLine1(int n)
{
	ofstream a;
	a.open("E:\C++\C++\DuAn\QLSV\Baitapnhom_QLSV\Baitapnhom_QLSV\Informationstudent.txt", ios::app);
	if (a.is_open())
	{
		a << endl;
		for (int i = 0; i < n; i++)
		{
			a << "_";
		}
		a << endl;
	}
	else {
		cout << "File not found !";
	}
}
Student::Student() {
	this->Diem = 0.0;
	this->Phi = 0;
	this->Nganh = " ";
}

Student::Student(float D, long p, string N) {
	this->Diem = D;
	this->Phi = p;
	this->Nganh = N;
}

Student::~Student() {

}

float Student::getDiem() const {
	return Diem;
}

long Student::getphi() const {
	return Phi;
}

string Student::getnganh() const {
	return Nganh;
}

void Student::setDiem(float d) {
	this->Diem = d;
}

void Student::setphi(long p) {
	this->Phi = p;
}

void Student::setnganh(string n) {
	this->Nganh = n;
}

void Student::input() {
	ofstream i;
	i.open("E:\C++\C++\DuAn\QLSV\Baitapnhom_QLSV\Baitapnhom_QLSV\Informationstudent.txt", ios::app);
	if (i.is_open()) {
		printLine1(150);
		student_clss::input();
		cout << "Diem :"; cin >> Diem;
		cout << "Hoc Phi :"; cin >> Phi;
		cin.ignore();
		cout << "Ten Nganh :"; getline(cin, Nganh);

		i << "\nDiem" << setw(30) << "Hoc phi" << setw(30) << "Nganh" << endl;
		i << getDiem() << setw(30) << getphi() << setw(30) << getnganh()<< endl;
		printLine1(150);
		i.close();
	}
	else
	{
		cout << "File not found !";
	}
}

void  Student::output() {
	student_clss::output();
	cout << endl;
	cout << endl;
	cout << "Diem" << setw(30) << "Hoc Phi" << setw(30) << "Nganh" << endl;
	cout << Diem << setw(30) << Phi << setw(30) << Nganh << endl;

}
