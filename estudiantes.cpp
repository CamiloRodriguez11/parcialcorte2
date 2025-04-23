#include <iostream>
using namespace std;
int main(){
    
    int n;
    float nota1,nota2,nota3;
    float promedio;
    cout<<"Ingrese el numero de estudiantes: "<<endl;
    cin >> n;
    for (int a=1;a<=n;a++){
        
        cout<<"Ingrese el nombre del estudiante: "<<a<<endl;
        cout<<"Ingrese la primera nota: "<<endl;
        cin >> nota1;
        cout<<"Ingrese la segunda nota: "<<endl;
        cin >> nota2;
        cout<<"Ingrese la tercera nota: "<<endl;
        cin >> nota3;
        promedio = (nota1+nota2+nota3)/3;
        cout<<"El promedio del estudiante "<<a<<" es: "<<promedio<<endl;
        if (promedio >= 3.5){
            cout<<"Rendimiento aceptable"<<endl;
        }else{
            cout<<"Rendimiento bajo"<<endl;
        }
    }


}
