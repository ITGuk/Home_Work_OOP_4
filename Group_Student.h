#pragma once
#include <iostream>

using namespace std;

class Group_Student
{
private:
	string name_student;
	string name_subject;
	int marks_math;
	int marks_geog;
	int marks_biol;
public:
	Group_Student();
	Group_Student(string name_student, string name_subject, 
		int marks_math, int marks_geog, int marks_biol);
//Set
	void SetStudent(string name_student);
	void SetSubject(string name_subject);

	void SetMath(int marks_math);
	void SetGeog(int marks_geog);
	void SetBiol(int marks_biol);
//Get
	string GetStudent();
	string GetSubject();
	int GetMath();
	int GetGeog();
	int GetBiol();
};

