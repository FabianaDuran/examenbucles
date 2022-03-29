#include <iostream>
using namespace std;

int main(){

    float alumnos = 0;
    float aprobados = 0;
    float reprobados = 0;
    float temp = 0;
    float notasTotales = 0;

    while (1>0){
        cout << "Ingrese la nota del estudiante, o 0 para salir: ";
        cin >> temp;
        if (temp <= 20 && temp > 0){
            if(temp >= 10 ){
                aprobados++;
                if (temp >= 19) cout << "Esta nota es sobresaliente" << endl;
                else if (temp >= 16) cout << "Esta nota es muy buena" << endl;
                else if (temp >= 13) cout << "Esta nota es buena" << endl;
                else cout << "Esta nota es regular" << endl;
            }
           else{
               reprobados++;
               if (temp >= 6) cout << "Esta nota es mejorable" << endl;
               else cout << "Esta nota es deficiente" << endl;
            }
            notasTotales += temp;
        }
        else if (temp == 0) break;
        else{
            cout << "nota erronea, intente con otra." << endl;
            continue;
        }
        alumnos++;
    }
    cout << "Cantidad de alumnos en la seccion: " << alumnos << endl;
    cout << "Cantidad de alumnos aprobados: " << aprobados << endl;
    cout << "Cantidad de alumnos reprobados: " << reprobados << endl;
    cout << "Promedio de notas: " << (notasTotales/alumnos) << endl;
    return 0;
}
