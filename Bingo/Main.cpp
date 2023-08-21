#include "stdafx.h"

int main()
{
    string str;
    int play;
    while (true) {
        cout << "��ǻ�Ϳ� �Ͻ÷��� 1 ���̼� �Ͻ÷��� 2�� �����ּ��� : " << endl;
        try {
            cin >> play;

            if (cin.fail()) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                throw runtime_error("1�� 2 ������ ���ڸ� �Է��� �ּ���");
            }

            if (play != 1 && play != 2) {
                throw runtime_error("1�� 2 ������ ���ڸ� �Է��� �ּ���");
            }

            break;
        }
        catch (const exception& e) {
            cout << e.what() << endl;
            cout << "��� �Ͻ÷��� �ƹ�Ű�� �Է��� �ּ���" << endl;
            cin >> str;

            // �ܼ� ȭ���� ���� (Linux/Unix: clear, Windows: cls)
            system("cls"); // �Ǵ� system("cls");
        }
    }

    system("cls");

    // ���� ����

    BingoBoard board = BingoBoard(5);
    board.MakingBoard();
    board.ShowBoard();

    board.DiscardBoard();


    return 0;
}