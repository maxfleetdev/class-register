#ifndef CLASS_REGISTER_H
#define CLASS_REGISTER_H

#include <vector>
#include "Student.h"

class ClassRegister {
public:
	ClassRegister();
	~ClassRegister();

	void add_student(Student &student);
	void remove_student(Student &student);
	Student get_student(int id);

protected:
	std::vector<Student> m_student_register;
	
	int get_student_index(Student& student);
};

#endif