#pragma once
#include<iostream>
using namespace std;

class Person {
public:
	// Defaulte Constructor
	Person();

	// overload Constructor
	Person(int id, string name, int sex);

	// Destructor
	~Person();

	int getID() const;
		// getID
		// return id 
	string getname() const;

		// get name
		// return id
	int getsex() const;

		// get sex
		// return sex
	// Muntator Funtions
	void setID(int id);
		// set id 
	
	void setname(string name);
		// set name

	void setsex(int sex);
		// set sex

	// method 
	virtual void input();
	virtual void output();
private:
	// member Variables
	int ID;
	string name;
	int sex; 
	
 };