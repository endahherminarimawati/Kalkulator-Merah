#include <iostream>
using namespace std;

class Kalkulator
{
public:
    int x, y;

    void pertambahan()
    {
        cout << "Masukkan Nilai X  : ";
        cin >> x;
        cout << "Masukkan Nilai Y  : ";
        cin >> y;
        cout << "Hasil Pertambahan : " << x + y << endl;
    }

    // pengurangan
    void pengurangan()
    {
        cout << "Masukkan Nilai X  : ";
        cin >> x;
        cout << "Masukkan Nilai Y  : ";
        cin >> y;
        cout << " Hasil Pengurangan : " << x - y << endl;

        // pembagian
    };

    main()
    {
        Kalkulator kalk;
        // nanti tinggal running aja methodnya
        // contoh kalk.pertambahan();
    }
