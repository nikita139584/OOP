#pragma once
#include <iostream>
using namespace std;
class Kettle
{
private:
	int Temperature_heating = 0;
	string color;
	string variety;
	string size;
public:
	void Set_temperature_heating(int new_temperature_heating);
	int Get_temperature_heating();
};

