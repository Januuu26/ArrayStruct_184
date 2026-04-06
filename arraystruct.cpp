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
    for (int i = 0; i < 3; i++)
    {
    cout << "Data ke-" << i+1 << endl;
    cout << "Nama : ";
    getline(cin, mhs.nama);
    cout << "Alamat desa : ";
    getline(cin, mhs.alamat.desa);
    cout << "Alamat kota : ";
    getline(cin, mhs.alamat.kota);
    cout << "Umur : ";
    cin >> mhs.umur;
    cout << endl;
    }

    for (int i = 0; i < 3; i++)
    {       
    cout << "Nama : " << mhs.nama << endl;
    cout << "Alamat : " << mhs.alamat.desa << endl;
    cout << "Alamat : " << mhs.alamat.kota << endl;
    cout << "Umur : " << mhs.umur << endl;
    }
}