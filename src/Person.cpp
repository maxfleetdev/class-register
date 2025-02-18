#include "Person.h"

Person::~Person() {}

int Person::get_age() {
	return m_age;
}

void Person::set_age(int age) {
	m_age = age;
}

std::string Person::get_name() {
	return m_name;
}

void Person::set_name(std::string name) {
	m_name = name;
}