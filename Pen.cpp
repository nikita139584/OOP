#include <iostream>
using namespace std;
#include "Pen.h"
void Pen::Set_ink(int ink) {
	if (ink <= 1 || ink >= 3) {
		cout << "The pen can contain from 1 to 3 grams of ink.\n";

	}
	else {
		this->ink = ink;
	}
}
int Pen::Get_ink() {
	return ink;

}