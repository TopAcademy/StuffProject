/*
 Класс "Engineer"
 Наследуется от класса Staff.
 Описывает состояние и функционал
 сущности "Единица инженерного персонала"
*/
#pragma once
#include "Staff.h"

namespace top
{
	/*-----------------------------------------*/
	class Engineer: public Staff
	{
	public:
		Engineer(const std::string& name, const std::string& job) : Staff(name, job) {};
		virtual void do_the_job();
	};
	/*-----------------------------------------*/

	// Метод "Делай работу"
	void Engineer::do_the_job()
	{
		std::cout << ":-) I am " << person_name << ". I do the engineer job: " << job_title << std::endl;
	}

} // end of "top" namespace
