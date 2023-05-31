#include <iostream>

using namespace std;
union employee
{
    char fav_char;
    int fav_no;
    string fav_game;
} arbaz;

int main()
{
    // Stucture is a Data Type used to store different type of data.
    // union employee arbaz;
    // arbaz.fav_char = 'A';
    arbaz.fav_no = 24018;
    // arbaz.fav_game = "Chess";

    cout << "Arbaz Char: " << arbaz.fav_char << endl;
    cout << "Sizeof(fav_Char):" << sizeof(arbaz.fav_char) << endl;
    cout << "Arbaz no: " << arbaz.fav_no << endl;
    cout << "Sizeof(fav_no):" << sizeof(arbaz.fav_no) << endl;
    cout << "Arbaz game: " << arbaz.fav_game << endl;
    cout << "Sizeof(fav_game):" << sizeof(arbaz.fav_game) << endl;

    cout << "total size of arbaz: " << sizeof(arbaz);
    return 0;
}