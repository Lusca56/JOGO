//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : Personagens.h
//  @ Date : 05/05/2018
//  @ Author :
//
//


#if !defined(_PERSONAGENS_H)
#define _PERSONAGENS_H


class Personagens {
public:
	Personagens();
	void setAtributos(int x, int y, int w, int h, int tx, int ty);
	int getVida();
	int getTamanhox();
	int getTamanhoy();
	int getWidth();
	int getHeigth();
	virtual ~Personagens();

protected:
	int vida;
	int width;
	int hegth;
	int tx;
	int ty;
};

#endif  //_PERSONAGENS_H
