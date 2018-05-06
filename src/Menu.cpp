#include<stdio.h>
#include <iostream>

#include "../include/Menu.h"

using namespace std;

void Menu::IncluaUsuario(Usuario* pu, char* name) {

    ElUsuario* paux;
    paux = new ElUsuario();
    paux ->setUsuario(pu);

    if ( cont_Usuario< n_Usuario )
    {
        pu->setNome(name);
        if ( pElUsuarioPrim == NULL )
        {
            pElUsuarioPrim = paux;
            pElUsuarioAtual = paux;

        }
        else
        {
            pElUsuarioAtual->pProx = paux;
            paux->pAnte = pElUsuarioPrim;
            pElUsuarioAtual = paux;

        }
        cont_Usuario++;
        //cout << cont_Usuario << endl;
    }
    else
    {
        cout<< "Aluno nao incluido. Turma ja lotada com "<< n_Usuario << "alunos "<< endl;
    }
}

void Menu::listeUsuarios() {

    ElUsuario* paux;
    paux = pElUsuarioPrim;
    cout << "--------- Usuarios -----------" << endl;
    while ( paux != NULL )
    {
        cout << paux->getNome() << endl;
        paux = paux->pProx;
    }

}

void Menu::listePontuacao() {

    ElUsuario* paux;
    paux = pElUsuarioPrim;
    cout << "--------- Pontuacao -----------" << endl;
    while ( paux != NULL )
    {
        cout << paux->getNome() << ":      " << paux->getPOntos() <<  endl;
        paux = paux->pProx;
    }
}



Menu::Menu(int nU) {

    pElUsuarioPrim = NULL;
    pElUsuarioAtual= NULL;
    cont_Usuario = 0;
    n_Usuario = nU;

}

Menu::~Menu() {

    ElUsuario *paux1, *paux2;

    paux1 = pElUsuarioPrim;

    while ( paux1 != NULL )
    {
        paux2 = paux1->pProx;
        delete ( paux1 );
        paux1 = paux2;
    }

    pElUsuarioAtual = NULL;
    pElUsuarioPrim= NULL;

}

