#include <iostream>
#include <string>
using namespace std;

struct detailAlamat
{
    string kota;
    string desa;
};

struct orang
{
    string nama;
    detailAlamat alamat;
    int umur;
};

int main()
{
    orang mhs;
    cout << "Nama : ";
    cin >> mhs.nama;
    cout << "Alamat desa : ";
    cin >> mhs.alamat.desa;
    cout << "Alamat kota : ";
    cin >> mhs.alamat.kota;
    cout << "Umur : ";
    cin >> mhs.umur;
    cout << endl;

    cout << "Nama : " << mhs.nama << endl;
    cout << "Alamat : " << mhs.alamat.desa << endl;
    cout << "Alamat : " << mhs.alamat.kota << endl;
    cout << "Umur : " << mhs.umur << endl;
}