#if !defined(_USUARIO_H)
#define _USUARIO_H


class Usuario {
private:
	char nome[30];
	int checkpoint;
	int pontos;
	int vida;

public:
    Usuario();
    ~Usuario();

    void setNome(char *n);
    char* getNome();
    void setPontos(int p);
    int getPontos();
    void setVida(int v);
    int getVida();
    void setCheckpoint(int chk);
    int getCheckpoint();

};

#endif  //_USUARIO_H
