#ifndef CONTROLADORA_H
#define CONTROLADORA_H
#include<conio.h>
#include"Logica.h"
#include"Interfaz.h"

class Controladora{
public:
	Controladora(){
		
	}
	void InciarApp(){
		Interfaz in;
		Logica log;
		int accion;
		string nombre;
		string tipo;
		string resultado;
		
		while(true){
			system("cls");
		
			
			in.MostarBienevenida();
			accion=in.MostarMenu();
			
			
			switch(accion){
				
			case 1://setter
				system("cls");
				nombre=in.SolicitarNomAtr();
				tipo=in.SolicitarTipAtr();
				resultado=log.CodificarSet(nombre,tipo);
				in.MostrarResultado(resultado);
				getch();
				break;
			case 2:
				//getter
				system("cls");
				nombre=in.SolicitarNomAtr();
				tipo=in.SolicitarTipAtr();
				resultado=log.CodificarGet(nombre,tipo);
				in.MostrarResultado(resultado);
				getch();
				break;
			case 3:
				system("cls");
				nombre=in.SolicitarNomAtr();
				tipo=in.SolicitarTipAtr();
				resultado=log.Codificar_Set_and_Get(nombre,tipo);
				in.MostrarResultado(resultado);
				getch();
				break;
			case 4:
				system("cls");
				system("color 70");
				in.MensajeDespedida();
				exit(1);
				break;
			default:
				system("cls");
				in.MostarMensajeError("Opcion no valida");
				getch();
				break;
			}
		}
	}
};


#endif
