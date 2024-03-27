#include <iostream>
using namespace std;


void menu()
{
    cout << "- Начать игру" << endl;
    cout << "- Статистика" << endl;
    cout << "- Настройки" << endl;
    cout << "- Выйти\n";


}



void menu2() {

    char vibor;
    cout << "\n Выберите действие: ";
    cin >> vibor;

    system("cls");

    switch (vibor)
    {
    case '1':
        int back;
        cout << "+ | Крестики нолики\n\n";
        cout << "1 | Одиночная игра\n";
        cout << "2 | Два игрока \n\n";
        cout << "0 | Назад \n";
        cout << "> | Ввод: ";
        cin >> back;
        if (back == 0) {
            menu();
        }

        break;

    case '2':
        int back1;
        cout << "+ | Статистика\n\n";
        cout << "1 | Игрок 1 \t\t\t\t | Очки\n2 | Игрок 2 \t\t\t\t | Очки\n3 | Компьютер \t\t\t\t | Очки\n\n";
        cout << "0 | Назад \n";
        cout << "> | Ввод: ";
        cin >> back;
        if (back1 == 0) {
            menu();
        }
        break;

    case '3':
        int user;
        cout << "+ | Настройки игрока\n\n";
        cout << "1 | Игрок 1\n";
        cout << "2 | Игрок 2\n";
        cout << "> | Ввод: ";
        cin >> user;
        if (user == 1) {
            cout << "+ | Настройки игрока [1]\n\n";
            cout << "1 | Ник : \t\n";
            cout << "2 | Фигура : \t\n";
            cout << "3 | Цвет : \t\n";
        }
        else if (user == 2) {
            cout << "+ | Настройки игрока [2]\n\n";
            cout << "1 | Ник : \t\n";
            cout << "2 | Фигура : \t\n";
            cout << "3 | Цвет : \t\n";
        }
        break;

    case '4':
        cout << "Вы закрыли игру :(";

        break;
    }
}

int main() {
    setlocale(LC_ALL, "RU");

    menu();

    menu2();
}
