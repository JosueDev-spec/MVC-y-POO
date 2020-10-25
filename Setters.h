#ifndef SETTERS_H
#define SETTERS_H
class Setter{
private:
	string nom_Atributo;
	string tipodeAtributo;
	
public:
	Setter(string atr,string tipo){
		nom_Atributo=atr;
		tipodeAtributo=tipo;
	}
	void setNombre_Atributo(string _nom_Atributo){
		nom_Atributo=_nom_Atributo;
	}
	string getNonbre_Atributo(){
		return nom_Atributo;
	}
	string getTipo(){
		return tipodeAtributo;
	}
	void setTipo(string _tipodeAtributo){
		tipodeAtributo=_tipodeAtributo;
	}
};
#endif
