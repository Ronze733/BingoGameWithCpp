#include "BingoBoard.h"

int** BingoBoard::getBoard()
{
	return board;
}

BingoBoard::BingoBoard(int line)
{
	this->line = line;
}

void BingoBoard::MakingBoard()
{
	this->board = new int* [line];
	for (int i = 0; i < line; i++)
	{
		this->board[i] = new int[line];
	}

	for (int i = 0; i < line; i++)
		for (int j = 0; j < line; j++)
			this->board[i][j] = line * i + j + 1;
}

void BingoBoard::DiscardBoard()
{
	for (int i = 0; i < this->line; i++)
		delete[] this->board[i];
	delete[] this->board;
}

void BingoBoard::ShowBoard()
{
	// std::cout << std::setw(2) << std::setfill('0') << number << std::endl;
	for (int i = 0; i < this->line; i++)
	{
		for (int j = 0; j < this->line; j++)
			std::cout << std::setw(2) << std::setfill(' ') << board[i][j] << " ";
		std::cout << std::endl;
	}
}
