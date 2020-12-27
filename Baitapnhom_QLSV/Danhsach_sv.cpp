#include"Danhsach_sv.h"
#include<iostream>
#include<string>
#include<iomanip>
#include<fstream>
using namespace std;

void List_student::input_vector(vector<Student> &my)
{
	int size;
	cout << "Nhap so luong sinh vien :"; cin >> size;
	for (int i = 0; i < size ; i++)
	{
		Student student;
		student.input();
		my.push_back(student);
	}
}

void List_student::output_vector(vector<Student>&my)
{
	for (int i = 0; i < my.size();i++)
	{
		my[i].output();
	}
}

void List_student::add(vector<Student>& my)
{
	Student s;
		if (my.size() > 0)
		{
			s.input();
			my.insert(my.begin() + 1, s); // them vao vi tri tiep theo 
		}
		else
		{
			cout << "Danh sach trong khong them them vao  " << endl;
		}
}

void List_student::Remove(vector<Student>& my)
{
	cout << "\nDanh sach hien co " << endl;
	List_student::output_vector(my); cout << endl;
	string name; bool b = true;
	cout << "Ban chon nganh xoa theo danh sach tren " << endl;
	cin >> name;
	for (int i = 0; i < my.size(); i++)
	{
		if (my[i].getnganh() == name)
		{
			my.erase(my.begin() + i);
			b = false;
			break;
		}
	}
	if (!b)
	{
		cout << "\nRemove success.";
	}
	else cout << "\nRemove False !!!";
}// xoa sinh vien dua tren ten nganh

void List_student::SerachByName(vector<Student>& my)
{
	vector<Student> v; // tao 1 vector luu tru phi de hien thi ra
	string name;
	cout << "Ban nhap ten sinh vien can tim :"; cin >> name;
	for (int i = 0; i < my.size(); i++)
	{
		if (my[i].getnganh() == name )
		{
			v.push_back(my[i]);
		}
	}
	if (v.size() > 0)
	{
		List_student::output_vector(v);
	}
	else
	{
		cout << "Serach False !";
	}
}

float List_student::Sum_Point_of_Student(vector<Student>&my)
{
	float sum = 0; int i = 0;
	while (i < my.size())
	{
		if (my[i].getDiem())
			sum += my[i].getDiem();
		i++;
	}
	return sum;
}

float List_student::Max_Point(vector<Student>& my)
{
	float max = my[0].getDiem();
	for (int i = 0; i < my.size(); i++)
	{
		if (my[i].getDiem() > max)
			max = my[i].getDiem();
	}
	return max;
}