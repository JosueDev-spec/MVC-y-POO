#ifndef LOGICA_H
#define LOGICA_H
#include "Setters.h"
#include"Getters.h"
#include<sstream>
class Logica{
public:
	Logica(){
		
	}
	string CodificarSet(string atr,string tipo){
		stringstream codigoSet;
		Getter NuevoSetter(atr,tipo);
		codigoSet<<"void set"<<NuevoSetter.getNombre_Atributo()<<"("<<NuevoSetter.getTipo()<<"_"<<NuevoSetter.getNombre_Atributo()<<"){\n";
		codigoSet<<"\t"<<NuevoSetter.getNombre_Atributo()<<" = "<<"_"<<NuevoSetter.getNombre_Atributo()<<";\n}\n\n\n";
		
		return codigoSet.str();
	}
	string CodificarGet(string atr,string tipo){
		stringstream codigoGet;
		Setter NuevoGetter(atr,tipo);
		
		codigoGet<<NuevoGetter.getTipo()<<" "<<NuevoGetter.getNonbre_Atributo()<<"(){"<<"\n";
		codigoGet<<"\treturn "<<NuevoGetter.getNonbre_Atributo()<<";\n}\n\n\n";
		
		return codigoGet.str();
	}

	string Codificar_Set_and_Get(string atr,string tipo){
		stringstream ambos;
		string setter = CodificarSet(atr,tipo);
		
		string getter=CodificarGet(atr,tipo);
		
		ambos<<setter<<getter;
		return ambos.str();
	}
};
#endif
