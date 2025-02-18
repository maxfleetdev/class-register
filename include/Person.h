#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person {
public:
	virtual ~Person();

	virtual int get_age();
	virtual void set_age(int age);

	virtual std::string get_name();
	virtual void set_name(std::string name);

protected:
	int m_age = 0;
	std::string m_name;
};

#endif