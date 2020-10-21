#include <string>
#include "Empregado.hpp"
#include "Engenheiro.cpp"

class Vendedor : public Empregado {

	Vendedor::Vendedor(){}
	
	Empregado::Empregado(){}


  public:
    std::string nome;  	  
	
	double quotaTotalAnual() {

	  return quotaMensalVendas * 12;
	}

	double Vendedor:: getquotaMensalVendas(){
		return quotamensalvendas2;
	}

	double Vendedor:: quotaTotalAnual(){
		return getquotaMensalVendas*12;
	}

};

