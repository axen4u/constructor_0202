#include <iostream>
#include <string>
using namespace std;

class Mahasiswa
{
public:
    int nim;
    string nama;

    public:
    Mahasiswa()
    {
        nim = 0;
        nama = "";

        Mahasiswa(int iNim)

        nim = iNim
    }
};
Mahasiswa(string iNama)
{
    nama= iNama;
};
Mahasiswa(int iNim, string iNama)
{
    nim = inim;
    nama = iNama;
};
void cetak(){
    cout << "Nim" = "<< Nim << endl"
    cout << "Nama" = "<< nama << endl"
    cout << endl;
};




int main()
{
  mahasiswa mhs1;
  mahasiswa mhs2(20);
  mahasiswa mhs3("indra");
  mahasiswa mhs4(30, "fauzan");

  mhs1.cetak();
  mhs1.cetak();
  mhs1.cetak();
  mhs1.cetak();

  return 0;
}