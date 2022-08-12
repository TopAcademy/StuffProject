/*
 Класс "Celebrater"
 Наследуется от класса Service.
 Описывает состояние и функционал
 сущности "Обслуживающий персонал - организатор праздников"
*/
#pragma once
#include "Service.h"

namespace top
{
	/*-----------------------------------------*/
	class Celebrater : public Service
	{
	protected:
		std::string fun_tools;
	public:
		Celebrater(const std::string& name, const std::string& job, const std::string& tools) : Service(name, job) { fun_tools = tools; }
		virtual void do_the_job();
	};
	/*-----------------------------------------*/

	// Метод "Делай работу"
	void Celebrater::do_the_job()
	{
		std::cout << ":-) I am " << person_name << ". I make holidays with my tools: " << fun_tools << std::endl;
	}

} // end of "top" namespace
