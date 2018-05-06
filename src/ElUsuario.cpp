#include <stdio.h>

#include "../include/ElUsuario.h"

ElUsuario::ElUsuario() {
    pProx = NULL;
    pAnte = NULL;
}

ElUsuario::~ElUsuario() {

}

void ElUsuario::setUsuario(Usuario* pu) {
    pAU = pu;
}

Usuario* ElUsuario::getUsuario() {
    return pAU;
}

char* ElUsuario::getNome() {
    pAU->getNome();
}

int* ElUsuario::getPOntos() {
    pAU->getPontos();
}

