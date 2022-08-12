/*
 Класс "Staff"
 Описывает базовое состояние и функционал
 сущности "Единица персонала"
*/
#pragma once
#include <iostream>
#include <string>

namespace top
{
	/*-----------------------------------------*/
	class Staff
	{
	protected:
		std::string person_name;
		std::string job_title;
	public:
		Staff(const std::string&, const std::string&);
		virtual void do_the_job() = 0;
	}; 
	/*-----------------------------------------*/


	// Конструктор
	Staff::Staff(const std::string& name, const std::string& job)
	{
		person_name = name;
		job_title = job;
	}

} // end of "top" namespace