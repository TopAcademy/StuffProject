/*
 ����� "Chief"
 ����������� �� ������ Staff.
 ��������� ��������� � ����������
 �������� "������� ������������ ���������"
*/
#pragma once
#include "Staff.h"

namespace top
{
	/*-----------------------------------------*/
	class Chief : public Staff
	{
	public:
		Chief(const std::string& name, const std::string& job) : Staff(name, job) {};
		virtual void do_the_job();
	};
	/*-----------------------------------------*/

	// ����� "����� ������"
	void Chief::do_the_job()
	{
		std::cout << ":-) I am " << person_name << ". I do the management job: " << job_title << std::endl;
	}

} // end of "top" namespace
