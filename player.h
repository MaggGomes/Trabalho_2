#ifndef PLAYER_H
#define PLAYER_H

#include "bomb.h"
#include "board.h"

class Player
{
public:
	Player(string boardFilename, string playerName);
	string getPlayerNam() const; // Mostra nome do jogador (para debugging)
	void showBoard() const; // Mostra o tabuleiro do jogador
	Bomb getBomb() const; // Pergunta pelas coordenadas da bomba e coloca bomba
	void attackBoard(const Bomb &b); // "Recebe" a bomba do adversário
	// Atualiza o tabuleiro tabuleiro tendo em conta o dano da bomba e se o navio se move
	
private:
	string name; // Nome do jogador
	Board board; // Tabuleiro do jogador
};

#endif // PLAYER_H