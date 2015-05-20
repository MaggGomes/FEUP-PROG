#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>



#include "bomb.h"
#include "board.h"

class Player
{
public:
	Player(string boardFilename, string playerName);
	string getPlayerName() const; // Mostra nome do jogador (para debugging)
	void showBoard() const;       // Mostra o tabuleiro do jogador
	bool validcoord(string &pos)
	Bomb getBomb() const;         // Pergunta pelas coordenadas da bomba e coloca bomba
	void attackBoard(const Bomb &b); // "Recebe" a bomba do adversário
	// Atualiza o tabuleiro tabuleiro tendo em conta o dano da bomba e se o navio se move
	
private:
	string name; // Nome do jogador
	Board board; // Tabuleiro do jogador
};

#endif // PLAYER_H