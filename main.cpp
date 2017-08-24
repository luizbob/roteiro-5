#include <Data.h>
#include <iostream>

using namespace std;

int main()
{
    Data d1;

    cout << "Digite o dia: ";
    cin >> d1.dia;
    cout << "Digite o mes: ";
    cin >> d1.mes;
    cout << "Digite o ano: ";
    cin >> d1.ano;

    d1.avancarDia();

        return 0;
}
