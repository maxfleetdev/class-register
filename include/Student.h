#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"

class Student : public Person {
public:
	Student(int id, int age, std::string name);
	Student();
	~Student();

	int get_student_id();
	void set_student_id(int id);

protected:
	int m_student_id = 0;
};

#endif