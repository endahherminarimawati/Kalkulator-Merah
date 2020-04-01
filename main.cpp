#include <iostream>
using namespace std;

class Kalkulator
{
public:
    int x, y;

    //pertambahan
    void pertambahan()
    {
        cout << "Pertambahan" << endl;
        cout << "Masukkan Nilai X  : ";
        cin >> x;
        cout << "Masukkan Nilai Y  : ";
        cin >> y;
        cout << "Hasil Pertambahan : " << x + y << endl;
    };

    //pengurangan
    void pengurangan()
    {
        cout << "Pengurangan" << endl;
        cout << "Masukkan Nilai X  : ";
        cin >> x;
        cout << "Masukkan Nilai Y  : ";
        cin >> y;
        cout << " Hasil Pengurangan : " << x - y << endl;
    };

    // pembagian
    void pembagian()
    {
        cout << "PEMBAGIAN" << endl;
        cout << "==========" << endl;
        cout << " X : ";
        cin >> x;
        cout << " Y : ";
        cin >> y;

        cout << " Hasil : " << x / (float)y << endl;
    };

    // perkalian
    void perkalian()
    {
        cout << "Perkalian" << endl;
        cout << "Masukkan Nilai X  : ";
        cin >> x;
        cout << "Masukkan Nilai Y  : ";
        cin >> y;
        cout << "Hasil Perkalian : " << x * y << endl;
    }
};

main()
{
awal:
    Kalkulator kalk;
    // nanti tinggal running aja methodnya
    // contoh kalk.pertambahan();
    cout << "=========== Kalkulator Sederhana" << endl;
    cout << "Pilihan Operasi" << endl;
    cout << "1. Pertambahan" << endl;
    cout << "2. Pengurangan" << endl;
    cout << "3. Perkalian" << endl;
    cout << "4. Pembagian" << endl;
pilihan:
    cout << "Pilih : ";
    int pil;
    cin >> pil;

    switch (pil)
    {
    case 1:
        kalk.pertambahan();
        break;

    case 2:
        kalk.pengurangan();
        break;

    case 3:
        kalk.perkalian();
        break;

    case 4:
        kalk.pembagian();
        break;

    default:
        cout << "Salah Input!";
        goto pilihan;
    }

    char y;

    cout << "Apakah Anda ingin mengulang lagi [y/n] ? ";
    cin >> y;

    if (y == 'y')
    {
        goto awal;
    }
    else
    {

        cout << endl;
        cout << "Terimakasih" << endl;
    }
}
