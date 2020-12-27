#pragma once
#include<iostream>
#include"Nguoi.h"
using namespace std;

class student_clss:public Person
{
public:
	// Defaulte Constructor
	student_clss();

	student_clss(string tenlop,string khoahoc,string ngaynhaphoc,string ngaytotnghiep,string ngaycapnhat);

	// Destructor
	~student_clss();

	// method set and get 
	string getTenlop() const;

	string getKhoahoc() const;

	string getNgaynhaphoc() const;

	string getNgaytotnghiep() const;

	string getNgaycapnhat() const;

	void setTenlop(string tenlop);

	void setKhoahoc(string kh);

	void setNgaynhaphoc(string nh);

	void setNgaytotnghiep(string tn);

	void setNgaycapnhat(string cn);

	// method funtion
	void input();
	void output();
private:
	string Tenlop;
	string Khoahoc;
	string Ngaynhaphoc;
	string Ngaytotnghiep;
	string Ngaycapnhat;
};
