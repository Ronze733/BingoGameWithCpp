#pragma once
#include <iostream>
#include <iomanip>

class BingoBoard
{
private:
	int line;
	int** board;

public:
	int** getBoard();
	BingoBoard(int line);
	void MakingBoard();
	void DiscardBoard();
	void ShowBoard();
};

