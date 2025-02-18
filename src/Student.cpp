#include "Student.h"

Student::Student(int id, int age, std::string name) {
	m_student_id = id;
	m_age = age;
	m_name = name;
}

Student::Student() {}

Student::~Student() {}

int Student::get_student_id() {
	return m_student_id;
}

void Student::set_student_id(int id) {
	m_student_id = id;
}