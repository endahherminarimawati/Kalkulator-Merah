#include <iostream>
using namespace std;

class Kalkulator
{
public:
    int x, y;

    //pertambahan
    void pertambahan()
    {
        cout << "Masukkan Nilai X  : ";
        cin >> x;
        cout << "Masukkan Nilai Y  : ";
        cin >> y;
        cout << "Hasil Pertambahan : " << x + y << endl;
    }

    //pengurangan
    void pengurangan()
    {
        cout << "Masukkan Nilai X  : ";
        cin >> x;
        cout << "Masukkan Nilai Y  : ";
        cin >> y;
        cout << " Hasil Pengurangan : " << x - y << endl;
    }

    // fungsi-pembagian
    void pembagian()
    {
        cout << "PEMBAGIAN" << endl;
        cout << "==========" << endl;
        cout << " X : ";
        cin >> x;
        cout << " Y : ";
        cin >> y;

        cout << " Hasil : " << x / (float)y;
    };
};

main()
{
    Kalkulator kalk;
    // nanti tinggal running aja methodnya
    // contoh kalk.pertambahan();
}
