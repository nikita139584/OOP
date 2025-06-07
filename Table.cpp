#include "Table.h"
#include <iostream>
using namespace std;
void Table::SetThenumber(int the_number_of_legs_on_the_table) {
	if (the_number_of_legs_on_the_table != 4) {
		cout << "Incorrect value for the number of legs on the table. Please, enter 4.\n";
	}
	else {
		this->the_number_of_legs_on_the_table = the_number_of_legs_on_the_table;
	}
}
int Table::GetThenumber() {
	return the_number_of_legs_on_the_table;
}