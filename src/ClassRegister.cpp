#include <iostream>
#include "ClassRegister.h"

ClassRegister::ClassRegister() {
	m_student_register.clear();
}

ClassRegister::~ClassRegister() {
	m_student_register.clear();
}

void ClassRegister::add_student(Student &student) {
	m_student_register.push_back(student);
}

void ClassRegister::remove_student(Student &student) {
	int index = get_student_index(student);
	
	if (index > -1) {
		m_student_register.erase(m_student_register.begin() + index);
	}
}

Student ClassRegister::get_student(int id) {
	for (int i = 0; i < m_student_register.size(); i++) {
		if (m_student_register[i].get_student_id() == id) {
			return m_student_register[i];
		}
	}
	return Student();
}

// internal function
int ClassRegister::get_student_index(Student& student) {
	for (int i = 0; i < m_student_register.size(); i++) {
		if (m_student_register[i].get_student_id() == student.get_student_id()) {
			return i;
		}
	}
	return -1;
}