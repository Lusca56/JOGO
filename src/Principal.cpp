#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include "../include/Principal.h"

using namespace std;

Principal::Principal() {

}

Principal::~Principal() {

}

void Principal::Executar() {

    while(true){
        //Criacao do Menu
        inicializar();

    }



}

void Principal :: inicializar(){

        int opcao;
        char name[30];


        cout << " -------------- Um Goku diferente --------------" << endl;
        cout << " -------- Jogo de Programacao Avancada I -------"<< endl;
        cout << " ---------------- Goku de Arma -----------------" << endl<< endl;
        cout << " -----  Digite 1 para inserir 1o Jogador -------" << endl;
        cout << " -----  Digite 2 para inserir 2o Jogador -------" << endl;
        cout << " --- Digite 3 para ver jogadores Cadastrados ---" << endl;
        cout << " --- Digite 4 para ver pontuacao de jogadores --" << endl;
        cout << " --------- Digite 5 para iniciar o jogo --------" << endl;
        cin  >> opcao;

        switch(opcao){
            case 1:

                cout << "Digite o nome do jogador: ";
                cin >> name;
                //gets(name);
                pmenu.IncluaUsuario(&um, name);
                cout << endl;
                break;
            case 2:

                cout << "Digite o nome do jogador: ";
                scanf("%s", name);
                //gets(name);
                pmenu.IncluaUsuario(&dois, name);

                break;
            case 3:
                pmenu.listeUsuarios();
                break;
            case 4:
                pmenu.listePontuacao();
                break;
            case 5:
                cout << "jogando" << endl;
                break;
            default:
                cout << "opcao invalida" << endl;
                break;
        }

        fflush(stdin);
        getchar();
        system("cls");

}

