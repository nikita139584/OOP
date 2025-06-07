#include <iostream>
#include "Book.h"
using namespace std;

void Book::Set_num_chapters(int num_chapters) {
    if (num_chapters <= 0) {
        cout << "There can't be less than one chapter in a book.\n";
    }
    else {
        this->num_chapters = num_chapters;
    }
}

int Book::Get_num_chapters() {
    return num_chapters;
}
