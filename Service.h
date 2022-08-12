/*
 ����� "Service"
 ����������� �� ������ Staff.
 ��������� ��������� � ����������
 �������� "������� �������������� ���������"
*/
#pragma once
#include "Staff.h"

namespace top
{
	/*-----------------------------------------*/
	class Service : public Staff
	{
	public:
		Service(const std::string& name, const std::string& job) : Staff(name, job) {};
		virtual void do_the_job();
	};
	/*-----------------------------------------*/

	// ����� "����� ������"
	void Service::do_the_job()
	{
		std::cout << ":-) I am " << person_name << ". I do the service job: " << job_title << std::endl;
	}

} // end of "top" namespace
