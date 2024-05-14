#include <iostream>
using namespace std;

class mahasiswa
{
public:
    static int nim;
    int id;
    string nama;

    void setID();

    void printAll();
    mahasiswa(string pnama)
    {
        nama = pnama;
        setID();
    }
};

int mahasiswa::nim = 202;

void mahasiswa::setID()
{
    id = ++nim;
}

void mahasiswa::printAll()
{
    cout << "ID    = " << id << endl;
    cout << "Nama  = " << nama << endl;
    cout << endl;
}

int main()
{
    mahasiswa mhs1("upin");
    mahasiswa mhs2("ipin");
    mahasiswa mhs3("jarjit");
    mahasiswa mhs4("ehsan");


    mhs1.printAll();

    mhs2.printAll();
    mhs3.printAll();
    mhs4.printAll();
    return 0;
}