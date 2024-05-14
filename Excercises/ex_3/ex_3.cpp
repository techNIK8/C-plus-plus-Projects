#include <iostream>
#include <cstdlib>
#include <cstring>
#include <vector>
using namespace std;

class student
{
	public:
	student ();
	string name, surname;
	int AM;
	virtual void message();
};

void student::message()
{
	cout << "message() defined method in student class." << endl;
}

class undergrad: public student
{
	public:
	int entrance_order, passed_courses;
	void message();
};

void undergrad::message()
{
	cout << "message() defined method in undergrad class." << endl;
}

class MSc: public student
{
	public:
	string dipl_dept, thesis;
	int dipl_grade;
	int get_dipl_grade();
};

int MSc::get_dipl_grade()
{
	return dipl_grade;
}

class Phd: public student
{
	public:
	string Phd_title, professor;
	int start_month, start_year;
	void message();
};

void Phd::message()
{
		cout << "message() defined method in Phd class." << endl;
}

int main()
{
student S1;
undergrad U1;
MSc M1;
Phd Ph1;
vector<student *> vec;
vec.push_back(&S1);
vec.push_back(&U1);
vec.push_back(&M1);
vec.push_back(&Ph1);
vector<student *>::iterator v = vec.begin();
while( v != vec.end())
{
    cout << *v << endl;
    v++;
}
system("pause");
return 0;
}

