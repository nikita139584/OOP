#include "Table.cpp"
#include "Bed.cpp"
#include "Kettle.cpp"
#include "Pen.cpp"
#include "Book.cpp"

int main() {
	 
	Table stol;
	stol.SetThenumber(44);
	cout << "the number of legs on the table:"<<stol.GetThenumber()<< "\n";

	Bed krovat;
	krovat.SetThenumber(44);
	cout << "the number of legs on the bed:" << krovat.GetThenumber() << "\n";

	Kettle philips;
	philips.Set_temperature_heating(4345);
	cout << "the number of temperature heating:" << philips.Get_temperature_heating() << "\n";

	Book War_and_peace;
	War_and_peace.Set_num_chapters(3);
	cout << "the number of chapters:" << War_and_peace.Get_num_chapters() << "\n";

	Pen ProEcoPen;
		ProEcoPen.Set_ink(2);
		cout << "the number of chapters:" << ProEcoPen.Get_ink() << "\n";
}
