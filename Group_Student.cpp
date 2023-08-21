#include "Group_Student.h"
Group_Student::Group_Student()
{
}

Group_Student::Group_Student(string name_student, string name_subject,
	int marks_math, int marks_geog, int marks_biol)
{
	this->name_student = name_student;
	this->name_subject = name_subject;
	this->marks_math = marks_math;
	this->marks_geog = marks_geog;
	this->marks_biol = marks_biol;
}

void Group_Student::SetStudent(string name_student)
{
	this->name_student = name_student;
}

void Group_Student::SetSubject(string name_subject)
{
	this->name_subject = name_subject;
}

void Group_Student::SetMath(int marks_math)
{
	this->marks_math = marks_math;
}

void Group_Student::SetGeog(int marks_geog)
{
	this->marks_geog = marks_geog;
}

void Group_Student::SetBiol(int marks_biol)
{
	this->marks_biol = marks_biol;
}

string Group_Student::GetStudent()
{
	return name_student;
}

string Group_Student::GetSubject()
{
	return name_subject;
}

int Group_Student::GetMath()
{
	return marks_math;
}

int Group_Student::GetGeog()
{
	return marks_geog;
}

int Group_Student::GetBiol()
{
	return marks_biol;
}