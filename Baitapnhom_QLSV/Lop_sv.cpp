#include<iostream>
#include"Lop_sv.h"
#include<string>
#include<iomanip>
#include<fstream>
using namespace std;

student_clss::student_clss() {
	this->Tenlop = " ";
	this->Khoahoc = " ";
	this->Ngaynhaphoc = " ";
	this->Ngaytotnghiep = " ";
	this->Ngaycapnhat = " ";
}

student_clss::student_clss(string tl, string kh, string nhh, string ntn, string ncn) {
	this->Tenlop = tl; this->Khoahoc = kh; this->Ngaynhaphoc = nhh; this->Ngaytotnghiep = ntn; this->Ngaycapnhat = ncn;
}

student_clss::~student_clss() {

}

string student_clss::getTenlop() const {
	return Tenlop;
}

string student_clss::getKhoahoc() const {
	return Khoahoc;
}

string student_clss::getNgaynhaphoc() const {
	return Ngaynhaphoc;
}

string student_clss::getNgaytotnghiep() const {
	return Ngaytotnghiep;
}

string student_clss::getNgaycapnhat() const {
	return Ngaycapnhat;
}

void student_clss::setTenlop(string tl) {
	this->Tenlop = tl;
}

void student_clss::setKhoahoc(string kh) {
	this->Khoahoc = kh;
}

void student_clss::setNgaynhaphoc(string nh) {
	this->Ngaynhaphoc = nh;
}
 
void student_clss::setNgaytotnghiep(string tn) {
	this->Ngaytotnghiep = tn;
}

void student_clss::setNgaycapnhat(string cn) {
	this->Ngaycapnhat = cn;
}

void student_clss::input() {
	ofstream i;
	i.open("E:\C++\C++\DuAn\QLSV\Baitapnhom_QLSV\Baitapnhom_QLSV\Informationstudent.txt",ios::app);
	if (i.is_open()) {
		Person::input();
		cin.ignore();
		cout << "Nhap Ten Lop :"; getline(cin, Tenlop);
		cout << "Nhap Khoa Hoc :"; getline(cin, Khoahoc);
		cout << "Nhap Ngay nhap hoc :"; getline(cin, Ngaynhaphoc);
		cout << "Nhap Ngay tot nghiep :"; getline(cin, Ngaytotnghiep);
		cout << "Nhap Ngay cap nhat :"; getline(cin, Ngaycapnhat);

		i << "\nLop" << setw(30) << "Khoa hoc" << setw(30) << "Nhap hoc" << setw(30) << "Tot Nghiep"<<setw(30) << "Cap nhat"<< endl;
		i << getTenlop() << setw(30) << getKhoahoc() << setw(30) << getNgaynhaphoc() << setw(30) << getNgaytotnghiep()
			<<setw(30) << getNgaycapnhat() << "\n";
		i.close();
	}
	else
	{
		cout << "File not found !";
	}
}

void student_clss::output() {
	Person::output();
	cout << endl;
	cout << endl;
	cout << "Ten Lop" << setw(30) << "Khoa Hoc" << setw(30) << "Ngay nhap hoc" << setw(30) << "Ngay tot nghiep"
		<< setw(30) << "Ngay Cap Nhat" << endl;
	cout << Tenlop << setw(30) << Khoahoc << setw(30) << Ngaynhaphoc << setw(30) << Ngaytotnghiep
		<< setw(30) << Ngaycapnhat << endl;

} 
