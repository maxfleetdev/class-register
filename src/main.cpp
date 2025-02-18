#include <iostream>
#include <stdlib.h>
#include "Student.h"
#include "ClassRegister.h"

ClassRegister reg = ClassRegister();

void create_student();
void clear_buffer();
void get_console_input();
void remove_student();
void edit_student();
void clear_screen();

// creates a new student into the class register
void create_student() {
	int age, id = {};
	std::string name = {};

	// set name
	std::cout << "Enter Student's Name: ";
	std::getline(std::cin, name);

	// set age
	std::cout << "Enter Student's Age: ";
	std::cin >> age;

	// set id
	std::cout << "Enter Student's ID (e.g 1234): ";
	std::cin >> id;

	// add student to register
	Student stu = Student(id, age, name);
	reg.add_student(stu);
	std::cout << stu.get_name() << " with ID " << stu.get_student_id() << " added";
	
	// clear input buffer
	clear_buffer();
}

void remove_student() {
	int id = {};
	std::cout << "Enter Student's ID to remove: ";
	std::cin >> id;
	clear_buffer();

	Student student = reg.get_student(id);
	if (student.get_student_id() == id) {
		reg.remove_student(student);
		std::cout << "Student Removed: " << student.get_name() << ", " << id;
	}

	else {
		std::cout << "Student not found with ID: " << id;
	}
}

void edit_student() {

}

// clears the input buffer using cin.clear and ignore
void clear_buffer() {
	std::cin.clear();
	std::cin.ignore(10000, '\n');
}

void get_console_input() {
	// clear console screen and display options
	std::cout << 
		"\n========= REGISTER =========\n" <<
		"Input an option:\n" <<
		"1. Add Student\n" <<
		"2. Remove Student\n" <<
		"3. Check Class\n" <<
		"4. Exit\n\n" <<
		">> ";
	
	// get user input
	int input = {};
	std::cin >> input;
	clear_buffer();
	
	clear_screen();
	
	// find desired option
	switch (input) {
	case 1:
		create_student();
		break;
	case 2:
		remove_student();
		break;
	case 3:
		break;
	case 4:
		break;

	default:
		break;
	}
}

// clears the console screen
void clear_screen() {
	system("cls");
}

int main() {
	while (1) {
		get_console_input();
	}
	return 0;
}