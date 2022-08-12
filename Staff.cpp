/*
 Учебный проект Staff Project.
 Изучение механизма виртуальных функций на примере
 массива объектов "Персонал"
*/
#include <iostream>
#include "Chief.h"
#include "Engineer.h"
#include "Service.h"


int main()
{
    top::Chief gen_dir("Steve Bobs", "General director");
    top::Engineer modeler("Iron Mask", "Construction modeler");
    top::Service cleaner("Nancy Perochi", "Floors washer");
    gen_dir.do_the_job();
    modeler.do_the_job();
    cleaner.do_the_job();
}

