#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <fstream>

#include "player.h"
#include "variables.h"

using namespace std;

// Declaração de funções

void clrscr(void); // Limpa o ecrâ
void gotoxy(int x, int y); // Posiciona o cursor na coluna 'x', linha 'y'
void setcolor(unsigned int color, unsigned int background_color); // Definição da cor do texto & background
void impressaoTitulo(); // Título do jogo
char randomPosition(); // (0=“não se move”, 1=‘N’, 2=‘S’, 3=’E’, 4=’W’)
bool rotation(); // Roda o navio (true=roda,false=mantém a orientação)
string getPlayername(); // Pergunta pelo nome do jogador
string getFilename(); // Pergunta pelo nome do ficheiro de configuração do tabuleiro
void createMenu(); // FALTA COMPLETAR - MENU ALTERNATIVO
vector<Score> atScore(Score &sc, vector<Score> &vcs);
void createScoreDoc(vector<Score> &vcs);
vector<Score> readScore();
void showScore();


#endif // FUNCTIONS_H