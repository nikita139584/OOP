#pragma once
#include <iostream>
using namespace std;
class Table
{
private:
	int the_number_of_legs_on_the_table = 4;
	string color;
	string material;
	string name;
public:
	int GetThenumber();
		void SetThenumber(int new_the_number_of_legs_on_the_table);
};