#include "stdafx.h"

void ScreenClear()
{
    system(CLEAR_SCREEN);
}

int main()
{
    string str;
    int play;
    while (true) {
        cout << "컴퓨터와 하시려면 1 둘이서 하시려면 2를 눌러주세요 : " << endl;
        try {
            cin >> play;

            if (cin.fail()) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                throw runtime_error("1과 2 사이의 숫자만 입력해 주세요");
            }

            if (play != 1 && play != 2) {
                throw runtime_error("1과 2 사이의 숫자만 입력해 주세요");
            }

            break;
        }
        catch (const exception& e) {
            cout << e.what() << endl;
            cout << "계속 하시려면 아무키나 입력해 주세요" << endl;
            cin >> str;

            // 콘솔 화면을 지움 (Linux/Unix: clear, Windows: cls)
            ScreenClear(); // 또는 system("cls");
        }
    }

    ScreenClear();

    // 게임 시작

    BingoBoard board = BingoBoard(5);
    board.MakingBoard();
    board.ShowBoard();

    board.DiscardBoard();


    return 0;
}