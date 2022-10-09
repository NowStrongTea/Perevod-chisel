#include <iostream>
#include <Windows.h>
using namespace std;

int main(){
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int number = 0;
    cout << "Enter sum from 1 to 999999:";
    cin >> number;
    if (number <= 0 || number > 999999)
        cout << "The sum is not included in the range";
    else{
        cout << "You have entered:";
        if ((number / 100000) % 10 == 1) cout << "Sto ";
        else if ((number / 100000) % 10 == 2) cout << "Dvesty ";
        else if ((number / 100000) % 10 == 3) cout << "Trista ";
        else if ((number / 100000) % 10 == 4) cout << "Chetiresta ";
        else if ((number / 100000) % 10 == 5) cout << "Pyatsot ";
        else if ((number / 100000) % 10 == 6) cout << "Shestsot ";
        else if ((number / 100000) % 10 == 7) cout << "Semsot ";
        else if ((number / 100000) % 10 == 8) cout << "Vosemsot ";
        else if ((number / 100000) % 10 == 9) cout << "Devyatsot ";

        if (((number / 10000) % 10) == 1){
            if (number % 10000 == 0) cout << "Desyat ";
            else if (number / 1000 == 11) cout << "Odinnadsat ";
            else if (number / 1000 == 12) cout << "Dvenadsat ";
            else if (number / 1000 == 13) cout << "Trinadsat ";
            else if (number / 1000 == 14) cout << "Chetirnadsat ";
            else if (number / 1000 == 15) cout << "Pyatnadsat ";
            else if (number / 1000 == 16) cout << "Shestnadsat ";
            else if (number / 1000 == 17) cout << "Semnadsat ";
            else if (number / 1000 == 18) cout << "Vosemnadsat ";
            else if (number / 1000 == 19) cout << "Devyatnadsat ";
        }

        if (((number / 10000)% 10) == 2) cout << "Dvatsat ";
        else if (((number / 10000)% 10) == 3) cout << "Tridsat ";
        else if (((number / 10000)% 10) == 4) cout << "Sorok ";
        else if (((number / 10000)% 10) == 5) cout << "Pyatdesyat ";
        else if (((number / 10000)% 10) == 6) cout << "Shestdesyat ";
        else if (((number / 10000)% 10) == 7) cout << "Semdesyat ";
        else if (((number / 10000)% 10) == 8) cout << "Vosemdesyat ";
        else if (((number / 10000)% 10) == 9) cout << "Devyanosto ";

        if ((number / 1000) % 10 == 1) cout << "Odna tysacha ";
        else if ((number / 1000) % 10 == 2) cout << "Dve tysachi ";
        else if ((number / 1000) % 10 == 3) cout << "Tri tysachi ";
        else if ((number / 1000) % 10 == 4) cout << "Chetyre tysachi ";
        else if ((number / 1000) % 10 == 5) cout << "Pyat tysach ";
        else if ((number / 1000) % 10 == 6) cout << "Shest tysach ";
        else if ((number / 1000) % 10 == 7) cout << "Sem tysach ";
        else if ((number / 1000) % 10 == 8) cout << "Vosem tysach ";
        else if ((number / 1000) % 10 == 9) cout << "Devyat tysach ";
        else if ((number / 1000) % 10 == 0) cout << "Tisyach";


        if ((number / 100) % 10 == 1) cout << "Sto ";
        else if ((number / 100) % 10 == 2) cout << "Dvesty ";
        else if ((number / 100) % 10 == 3) cout << "Trista ";
        else if ((number / 100) % 10 == 4) cout << "Chetiresta ";
        else if ((number / 100) % 10 == 5) cout << "Pyatsot ";
        else if ((number / 100) % 10 == 6) cout << "Shestsot ";
        else if ((number / 100) % 10 == 7) cout << "Semsot ";
        else if ((number / 100) % 10 == 8) cout << "Vosemsot ";
        else if ((number / 100) % 10 == 9) cout << "Devyatsot ";

        if ((number / 10) % 10 == 1)
        {
            if (number % 10 == 0) cout << "Desyat rubley ";
            else if (number % 10 == 1) cout << "Odinnadcat rubley ";
            else if (number % 10 == 2) cout << "Dvenadcat rubley ";
            else if (number % 10 == 3) cout << "Trinadcat rubley ";
            else if (number % 10 == 4) cout << "Chetirnadcat rubley ";
            else if (number % 10 == 5) cout << "Pyatnadcat rubley ";
            else if (number % 10 == 6) cout << "Shestnadcat rubley ";
            else if (number % 10 == 7) cout << "Semnadcat rubley ";
            else if (number % 10 == 8) cout << "Vosemnadcat rubley ";
            else if (number % 10 == 9) cout << "Devyatnadcat rubley ";
        }

        if ((number / 10) % 10 == 2) cout << "Dvadcat ";
        else if ((number / 10) % 10 == 3) cout << "Tridcat ";
        else if ((number / 10) % 10 == 4) cout << "Sorok ";
        else if ((number / 10) % 10 == 5) cout << "Pyatdecyat ";
        else if ((number / 10) % 10 == 6) cout << "Shestdecyat ";
        else if ((number / 10) % 10 == 7) cout << "Semdecyat ";
        else if ((number / 10) % 10 == 8) cout << "Vosemdecyat ";
        else if ((number / 10) % 10 == 9) cout << "Devyanocto ";

        if ((number / 10) % 10 != 1)
        {
            if (number % 10 == 0) cout << "Rubley";
            else if (number % 10 == 1) cout << "Odin rubl";
            else if (number % 10 == 2) cout << "Dva rublya ";
            else if (number % 10 == 3) cout << "Tri rublya ";
            else if (number % 10 == 4) cout << "Chetire rublya ";
            else if (number % 10 == 5) cout << "Pyat rubley ";
            else if (number % 10 == 6) cout << "Shest rubley ";
            else if (number % 10 == 7) cout << "Sem rubley ";
            else if (number % 10 == 8) cout << "Vosem rubley ";
            else cout << "Devyat rubley ";
        }

    }
    cout << endl << endl;
    return 0;
}