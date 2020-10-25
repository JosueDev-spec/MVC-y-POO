#ifndef INTERFAZ_H
#define INTERFAZ_H

#include <iostream>
using namespace std;

class Interfaz{
	public :
		Interfaz(){
			
		}
		void MostarBienevenida(){
			cout<<"\n\t\t\tBIENVENIDO\n";
		}
		int MostarMenu(){
			int opc;
			cout<<"1-\4Generar Setter\n2-\4Genarar Getter\n3-\4Generar Set y Get(Ambos) \n4-\4Salir"<<endl;
			cin>>opc;
			return opc;
		}
		string SolicitarNomAtr(){
			string nombre;
			cout<<"Escriba el nombre del Atributo\n";
			cin>>nombre;
			return nombre;
		}
		string SolicitarTipAtr(){
			string tipo;
			cout<<"Escriba el tipo(int/float/char/string....) de atributo\n";
			cin>>tipo;
			return tipo;
		}
		void  MostrarResultado(string respuesta){
			cout<<"El codigo es: \n\n\n";
			cout<<respuesta;
		}
		void MostarMensajeError(string error){
			cout<<"ERROR\n";
			cout<<error<<endl;
		}
		void MensajeDespedida(){
			cout<<"Proyecto Realizado por Josue Garcia\n";
		}
	
				
};
#endif
