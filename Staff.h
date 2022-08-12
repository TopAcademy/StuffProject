/*
 ����� "Staff"
 ��������� ������� ��������� � ����������
 �������� "������� ���������"
*/
#pragma once
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
		void do_the_job();
	}; 
	/*-----------------------------------------*/


	// �����������
	Staff::Staff(const std::string& name, const std::string& job)
	{
		person_name = name;
		job_title = job;
	}

	// ����� "�������� ������"
	void Staff::do_the_job()
	{
		std::cout << ":-) I am " << person_name << ". I don't know what to do!" << std::endl;
	}

} // end of "top" namespace