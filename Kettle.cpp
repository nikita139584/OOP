#include "Kettle.h"
#include <iostream>
using namespace std;
void	Kettle::Set_temperature_heating(int Temperature_heating) {
	if (Temperature_heating < 0 || Temperature_heating > 100) {
		cout << "Incorrect value temperature heating. Please, enter 0-100.\n";
	}
	else {
		this->Temperature_heating = Temperature_heating;
	}
}
int Kettle::Get_temperature_heating() {
	return Temperature_heating;

}

