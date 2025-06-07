#pragma once
#include <iostream>
using namespace std;
class Pen
{
private:
	int ink = 1;
	string color;
	string num_pages;
	string size;
	string thecoloroftheink;
public:
	void Set_ink(int new_ink);
		int Get_ink();
};

