#if !defined(_ELUSUARIO_H)
#define _ELUSUARIO_H

#include "../include/Usuario.h"

class ElUsuario {

private:
    Usuario* pAU;

public:

    ElUsuario();
	~ElUsuario();

	ElUsuario* pProx;
	ElUsuario* pAnte;

	char* getNome();
	int* getPOntos();
	void setUsuario(Usuario* pu);
	Usuario* getUsuario();

};

#endif  //_ELUSUARIO_H
