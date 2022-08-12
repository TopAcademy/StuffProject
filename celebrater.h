/*
 ����� "Celebrater"
 ����������� �� ������ Service.
 ��������� ��������� � ����������
 �������� "������������� �������� - ����������� ����������"
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

	// ����� "����� ������"
	void Celebrater::do_the_job()
	{
		std::cout << ":-) I am " << person_name << ". I make holidays with my tools: " << fun_tools << std::endl;
	}

} // end of "top" namespace
