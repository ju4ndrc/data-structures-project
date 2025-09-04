#include <iostream>
using namespace std;
struct Temp{

    float hora;
    float humedad;
    Temp* enlace;
    
};

void insertarFinal(Temp* &cab, float hora, float humedad){
    Temp* nuevaTemp = new Temp{hora, humedad};

    if(cab == NULL){
        cab = nuevaTemp;
    }else{
        while(cab -> enlace != NULL){
            cab = cab -> enlace;
        }
        cab->enlace = nuevaTemp;
        
    }
}

void mostrarTemp(Temp* cab){
    while (cab != NULL){

        cout<<"\n Hora:"<<cab->hora<<" Humedad:"<<cab->humedad<<endl;
        cab = cab -> enlace;
    }
    
}
int main(){

    Temp* tempLista = NULL;



    float hora, humedad;
    int op;
    while (op == 1){
        cout<<"\n*******************\n";
        
        cout<<"\n*****Ingrese la hora*****\n";
        
        cin>>hora;
        
        cout<<"\n*****Ingrese la humedad*****\n";
        
        cin>>humedad;
        
        cout<<"\n*******************\n";
        
        insertarFinal(tempLista,hora,humedad);

        cout<<"\n***Para mas temperaturas digite 1 sino cualquier numero****\n";
        cin>>op;
        cout<<"\n*******************\n";
        
    }
    
    mostrarTemp(tempLista);

    return 0;
}