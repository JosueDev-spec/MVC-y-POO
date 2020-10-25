#ifndef GETTERS_H
#define GETTERS_H
class Getter{
private:
	string Nomb_atributo;
	string tipoAtr;
	
public:
	Getter(string atr,string tipo){
		Nomb_atributo=atr;
		tipoAtr=tipo;
	}
	void setNombre_Atributo(string atr){
		Nomb_atributo=atr;
		
	}
	string getNombre_Atributo(){
		return Nomb_atributo;
	}
	void setTipo(string _tipo){
		tipoAtr=_tipo;
	}
	string getTipo(){
		return tipoAtr;
	}
	
};
#endif
