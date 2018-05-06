#if !defined(_MENU_H)
#define _MENU_H

#include "../include/Usuario.h"
#include "../include/ElUsuario.h"

class Menu {

private:

	int n_Usuario;
	int cont_Usuario;

public:
    Menu(int nU = 2);
	~Menu();

	ElUsuario* pElUsuarioPrim;
	ElUsuario* pElUsuarioAtual;

	void IncluaUsuario(Usuario* pu, char* name);
	void listeUsuarios();
	void listePontuacao();

	//void getUsuario(Usuario* pu);

};

#endif  //_MENU_H
