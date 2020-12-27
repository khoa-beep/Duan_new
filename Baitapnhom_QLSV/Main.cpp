#include"Nguoi.h"
#include"Lop_sv.h"
#include"Sinhvien.h"
#include"Danhsach_sv.h"
#include<iostream>
#include<iomanip>
#include<Windows.h>
#include<conio.h>
#include<stdio.h>
#include<fstream>
using namespace std;

void Presskey() {
	cout << "\n\nBam phim bat ky de tiep tuc...";
	_getch();
	system("cls"); // ham dung man hinh
}

void SetColor(int back_color, int text_color)
{
	HANDLE hStdout = GetStdHandle(STD_OUTPUT_HANDLE);

	int color_code = back_color * 16 + text_color;
	SetConsoleTextAttribute(hStdout, color_code);
} // ham mau 

void GoTo(SHORT posX, SHORT posY) {
	HANDLE hStdout = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD Position;
	Position.X = posX;
	Position.Y = posY;

	SetConsoleCursorPosition(hStdout, Position);
}

void ShowCur(bool CursorVisibility)
{
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO ConCurInf;

	ConCurInf.dwSize = 10;
	ConCurInf.bVisible = CursorVisibility;

	SetConsoleCursorInfo(handle, &ConCurInf);
}

int main()
{
	vector<Student> list; List_student sv;
	ShowCur(0);
	SetConsoleTitle(L"Quan Ly Sinh Vien");
	GoTo(12,0);
	cout << "CHUONG TRINH QUAN LY SINH VIEN C/C++\n";
	SetColor(0, 1);
	while (true)
	{
		cout<<setw(30)<<"*************************MENU**************************\n";
		cout<<setw(30)<<"**  1. Nhap danh sach sinh vien.                    **\n";
		cout<<setw(30)<<"**  2. Xuat nhat thong tin sinh vien boi ID.        **\n";
		cout<<setw(30)<<"**  3. Xoa thong tin sinh vien dua theo Nganh       **\n";
		cout<<setw(30)<<"**  4. Tim thong tin sinh vien dua tren ten         **\n";
		cout<<setw(30)<<"**  5. Tong diem tat ca sinh vien                   **\n";
		cout<<setw(30)<<"**  6. Tim diem Max  sinh vien                      **\n";
		cout<<setw(30)<<"**  7. Ghi thong tin ra File                        **\n";
		cout<<setw(30)<<"**  8. Cap nhat sinh vien                           **\n";
		cout<<setw(30)<<"**  0. Thoat                                        **\n";
		cout<<setw(30)<<"*******************************************************\n";
		int chon;
		cout << "Nhap lua chon cua ban "; cin >> chon;
		switch (chon)
		{
		case 1:
		{
			cout << "Ban da chon chuc nang nhap thong tin sinh vien " << endl;
			sv.input_vector(list);
		}
		Presskey();
		break;
		case 2:
		{
			cout << "Ban da chon chuc nang xuat danh sach" << endl;
			Sleep(3);
			sv.output_vector(list);
		}
		Presskey();
		break;
		case 3:
		{
			cout << "Ban da chon chuc xoa thong tin sinh vien dua theo ten nganh" << endl;
			Sleep(3);
			sv.Remove(list);
			
		}
		Presskey();
		break;
		case 4:
		{
			cout << "Ban da chon chuc nang tim kiem nganh sinh vien " << endl;
			Sleep(3);
			sv.SerachByName(list);

		}
		Presskey();
		break;
		case 5:
		{
			cout << "Ban da chon chuc nang tinh tong diem tat ca sinh vien " << endl;
			Sleep(3);
			cout << "Sum of Student : "<< sv.Sum_Point_of_Student(list);
		}
		Presskey();
		break;
		case 6:
		{
			cout << "Ban da chon chuc nang tim kiem diem Max cua sinh vien " << endl;
			Sleep(3);
			cout << " Max : " << sv.Max_Point(list);
		}
		Presskey();
		break;
		case 7:
		{
			cout << "Ban da chon chuc nang ghi file ra file " << endl;
			Sleep(2);
			cout << "\nBan ghi thanh cong " << endl;
		}
		Presskey();
		break;
		case 8:
		{
			cout << "Ban da chon chuc nang update sinh vien \n";
			Sleep(3);
			sv.add(list);
		}
		Presskey();
		break;
		case 0:
		{
			cout << "Ban chon thoat chuong trinh" << endl;
			_getch();
			return 0;
		}
		default:
			cout << "Ban da chon sai chuc nang moi ban chon lai ";
			break;
		}
	}
}