#include <iostream>
#include "Data.h"

using namespace std;

Data::Data()
{


}

void Data::avancarDia(){
    if (mes == 2){
        if (dia > 28){
            cout << "Dia incorreto, Digite novamente" << endl;
            return;
        } else if (dia == 28) {
            dia = 1;
            mes = 3;
            cout << dia << "/" << mes << "/" << ano << endl;
        } else {
            dia += 1;
        }
    } else if (mes < 1 || mes > 12 || dia > 31 || dia < 0){
            cout << "Mes ou dia incorreto, digite novamente" << endl;
            return;
    } else if (dia == 31) {
        if (mes == 12){
            dia = 1;
            mes = 1;
            ano +=1;
            cout << dia << "/" << mes << "/" << ano << endl;
        }
        }
        if (dia == 31) {
            dia = 1;
            mes += 1;
            cout << dia << "/" << mes << "/" << ano << endl;
        } else if (dia < 31 && dia > 0){
            cout << dia << "/" << mes << "/" << ano << endl;
            dia += 1;
        }
}

Data::~Data()
{

}
