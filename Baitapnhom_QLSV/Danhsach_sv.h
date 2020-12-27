#pragma once
#include"Sinhvien.h"
#include"Lop_sv.h"
#include"Nguoi.h"
#include<iostream>
#include<vector>
using namespace std;
class List_student :public Student,student_clss,Person{
public:
	void input_vector(vector<Student>&);
	void output_vector(vector<Student>&);
	void add(vector<Student>&);
	void Remove(vector<Student>&);
	void SerachByName(vector<Student>&);
	float Sum_Point_of_Student(vector<Student>&);
	float Max_Point(vector<Student>&);
};