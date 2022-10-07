#include <iostream>
#include <string>

using namespace std;

int main()
{
    std::string nama;
    int a, b, c, e;
    cout << "Program Hitung Nilai Rata-Rata" << endl;
    cout << "Nama Siswa : ";
    std::getline(std::cin, nama);

    cout << "Nilai Pertandingan I    : ";
    cin >> a;
    cout << "Nilai Pertandingan II   : ";
    cin >> b;
    cout << "Nilai Pertandingan III  : ";
    cin >> c;

    e = (a + b + c) / 3;

    std::cout << "Siswa yang bernama " << nama << std::endl;
    cout << "Memperoleh nilai rata-rata " << e << " dari hasil perlombaan yang diikutinya" << endl;

    if (e >= 85)
        cout << "Maka mendapat hadiah Komputer Core i5" << endl;
    else if (e >= 70)
        cout << "Maka mendapat hadiah Uang sebesar Rp. 2.500.000,-" << endl;
    else
        cout << "Maka mendapat hadiah Hiburan" << endl;
    getchar();
}