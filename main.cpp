#include <iostream>

using namespace std;

int main()
{
    float a,b,hasil;
    char math;

    cout << "selamat datang\n\n";

    //mulai operasi
    cout << "masukkan angka pertama: ";
    cin >> a;
    cout << "pilih *,/,+,- : ";
    cin >> math;
    cout << "masukkan angka kedua: ";
    cin >> b;

    cout << "\nHasilnya adalah ";

    if(math == '*'){
        hasil = a * b;
    }else if (math == '/'){
        hasil = a / b;
    }else if (math == '+'){
        hasil = a + b;
    }else if (math == '-'){
        hasil = a - b;
    }else{
        cout << "syntax error" << endl;
    }


    cout << "= " << hasil << endl;

    cin.get();
    return 0;

}
