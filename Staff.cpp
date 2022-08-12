/*
 Учебный проект Staff Project.
 Изучение механизма виртуальных функций на примере
 массива объектов "Персонал"
*/
#include <iostream>
#include <vector>
#include "Staff.h"
#include "Chief.h"
#include "Engineer.h"
#include "Service.h"


int main()
{
	std::vector<top::Staff*> the_team;
	// gathering the team
	the_team.push_back(new top::Chief("Donald Dump", "CEO"));
	the_team.push_back(new top::Chief("Bill Greeks", "CTO"));
	the_team.push_back(new top::Engineer("Nikola Kresla", "Powerman"));
	the_team.push_back(new top::Engineer("Thomas Bedisson", "Mechanics"));
	the_team.push_back(new top::Service("James Rond", "Sequrity man"));
	the_team.push_back(new top::Service("Joe Briden", "Windows washer"));
	// now let's do the job
	for (int i = 0; i < the_team.size(); i++) {
		the_team[i]->do_the_job();
	}


}
