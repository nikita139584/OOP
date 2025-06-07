#pragma once
#include <iostream>
using namespace std;
class Book
{
private:
	int num_chapters = 1;
	string color;
	string num_pages;
	string size;
	string genre;
public:
	void Set_num_chapters(int new_num_chapters);
		int Get_num_chapters();
};

