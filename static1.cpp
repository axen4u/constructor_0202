#include <iostream>
#include <string>
using namespace std;

class Mahasiswa 
{
private:
    static int nim;
public:
    int id;
    string nama;

    void setID();
    void printAll();

    static void setNim(int pNim) { nim = pNim; /Definisi Function/ }
    static int getNim() { return nim;/Definisi Function/ }

    Mahasiswa(string pnama)  
    { 
        nama = pnama;
        setID(); 
    }
};

int Mahasiswa::nim = 202;

void Mahasiswa::setID() 
{
    id = ++nim;
}

void Mahasiswa::printAll() 
{
    cout << "ID =" << id << endl;
    cout << "Nama =" << nama << endl;
    cout << endl;
}

int main() 
{
    Mahasiswa mhs1("budi papilo");
    Mahasiswa mhs2("rahmat kurniawan");
    Mahasiswa::setNim(202);   //mengakakses nim melalui static member function "setNim"
    Mahasiswa mhs3("srigani");
    Mahasiswa mhs4("Joko tingkir");

    mhs1.printAll();
    mhs2.printAll();
    mhs3.printAll();
    mhs4.printAll();

    cout << "akses dari luar object = " << Mahasiswa::getNim() << endl; //Mengakses nim
    system("pause");

    return 0;
}