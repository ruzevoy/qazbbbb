
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
