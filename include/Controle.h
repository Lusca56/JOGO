#if !defined(_CONTROLE_H)
#define _CONTROLE_H

#include "../include/heroi.h"
#include "../include/vilao.h"

class Controle {
private:
	int ntile;
	int caindo;
	int pulando;
	int PLimit;
	int vly;
	int grv;

public:
	Controle(int v, int g);
	~Controle();
	void control(heroi* ph, vilao* pv);

};

#endif  //_CONTROLE_H
