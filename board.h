#ifndef BOARD_H
#define BOARD_H

#include <string>
#include <vector>
#include <fstream>

#include "ship.h"
#include "bomb.h"

using namespace std;

class Board
{
public:
	Board(const string &filename);   // Carrega o tabuleiro do ficheiro 'filename'
	int getLines() const; // Devolve número de linhas do tabuleiro
	int getColumns() const; // Devolve número de colunas do tabuleiro
	bool putShip(const Ship &s, vector<vector<int>> &b, const int &i);     // Adiciona um navio ao tabuleiro se possível
	void setBoard(); // Coloca os navios inicialmente no tabuleiro após leitura do ficheiro de configuração
	void moveShips();                // Tenta mover aleatoriamente todos os navios da frota
	bool attack(const Bomb &b);
	void display() const;            // Mostra o tabuleiro colorido durante o jogo
	void show() const;               // Mostra os atributos do tabuleiro (para debugging)
	friend ostream& operator<<(ostream& os, const Board& tab);
	// APAGAR SE NAO HOUVER ERROS AO CORRER O MOVESHIPS
	/*bool checkBoard();*/
private:
	int numLines, numColumns;        
	vector<Ship> ships;              // Vector com os navios que são colocados no tabuleiro
	vector<vector<int>> board;       // Cada elemento indica o índice de um navio no vector "ships"; -1 representa o mar
};

#endif // BOARD_H