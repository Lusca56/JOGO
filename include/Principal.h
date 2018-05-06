#if !defined(_PRINCIPAL_H)
#define _PRINCIPAL_H

#include "../include/Menu.h"
#include "../include/Usuario.h"

class Principal {

private:

    Menu pmenu;

    Usuario usuarios[4];

    void inicializar();

public:

	Principal();
	~Principal();

	void Executar();

};

#endif  //_PRINCIPAL_H
