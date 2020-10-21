#include <string>
#include "Empregado.hpp"

class Engenheiro : public Empregado {

     Engenheiro::Engenheiro(){}
     
     Empregado::Engenheiro(){}

  public:
    std::string nome;  
	int projetos;
	
  int Engenheiro::getprojetos(){
    return projetos;
  }

  int Empregado::getprojetos(){
    return projetos;
  }

};

