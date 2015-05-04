#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include "variables.h"

// Declara��o de fun��es

void clrscr(void); // limpa o ecr�
void gotoxy(int x, int y); // posiciona o cursor na coluna 'x', linha 'y'
void setcolor(unsigned int color, unsigned int background_color); // defini��o da cor do texto & background
void impressaoTitulo(); // t�tulo do jogo
unsigned int getLinha(char &linha, const vector < vector <char> > &coordenadas); // converte coordenada linha "char" em "unsigned int"
unsigned int getColuna(char &coluna, const vector < vector <char> > &coordenadas); // converte coordenada coluna "char" em "unsigned int"
char getLowercase(char symbol, const vector < vector <char> > &coordenadas); // converte s�mbolo do navio de letra mai�scula pra letra min�scula
char RandomPosition(); // (0=�no move�, 1=�N�, 2=�S�, 3=�E�, 4=�W�)


#endif // FUNCTIONS_H