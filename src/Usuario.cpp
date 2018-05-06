#include "../include/Usuario.h"
#include <string.h>

Usuario :: Usuario(){
    strcpy(nome,"");
    vida = 10;
    pontos = 0;
}

Usuario :: ~Usuario(){}

void Usuario :: setNome(char* n){
    strcpy(nome,n);
}

char* Usuario :: getNome(){
    return nome;
}

void Usuario :: setPontos(int p){
    pontos = p;
}
int Usuario :: getPontos(){
    return pontos;
}
void Usuario :: setVida(int v){
    vida = v;
}
int Usuario :: getVida(){
    return vida;
}
void Usuario :: setCheckpoint(int chk)
{
    checkpoint = chk;
}
int Usuario :: getCheckpoint(){
    return checkpoint;
}
