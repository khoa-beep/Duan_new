#pragma once
#include<iostream>
#include"Nguoi.h"
#include"Lop_sv.h"
using namespace std;

class Student:public Person,public student_clss
{
public:
	Student();
	Student(float diem,long phi,string nganh);
	~Student();

	// set and get 
	float getDiem() const;

	long getphi() const;

	string getnganh() const;

	void setDiem(float d);

	void setphi(long p);

	void setnganh(string n);

	// method funtion
	void input();
	void output();
private:
	float Diem;
	long Phi;
	string Nganh;
};
