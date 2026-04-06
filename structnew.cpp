#include <iostream>
#include <string>
using namespace std;

struct orang
{
    string nama;
    string alamat;
    int umur;
};

int main()
{
    orang mhs;
    cout << "Nama : ";
    cin >> mhs.nama;
    cout << "Alamat : ";
    cin >> mhs.alamat;
    cout << "Umur : ";
    cin >> mhs.umur;
    cout << endl;
}