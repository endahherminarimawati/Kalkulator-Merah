#include <iostream>
using namespace std;

class Kalkulator
{
public:
    int x, y;

    void pengurangan()
    {
        cout << "Masukkan Nilai X  : ";
        cin >> x;
        cout << "Masukkan Nilai Y  : ";
        cin >> y;
        cout << "Hasil Pertambahan : " << x - y << endl;
    }

};

main()
{
    Kalkulator kalk;

    // nanti tinggal running aja methodnya
    // contoh kalk.pertambahan();
}
