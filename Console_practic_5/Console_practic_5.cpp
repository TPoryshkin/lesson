#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(1251);
    int m;
    char repeat;

    do {
        cout << "Введіть номер місяця (1-12): ";
        cin >> m;

        switch (m) {
        case 1:
            cout << "Наступний місяць: Лютий" << endl;
            break;
        case 2:
            cout << "Наступний місяць: Березень" << endl;
            break;
        case 3:
            cout << "Наступний місяць: Квітень" << endl;
            break;
        case 4:
            cout << "Наступний місяць: Травень" << endl;
            break;
        case 5:
            cout << "Наступний місяць: Червень" << endl;
            break;
        case 6:
            cout << "Наступний місяць: Липень" << endl;
            break;
        case 7:
            cout << "Наступний місяць: Серпень" << endl;
            break;
        case 8:
            cout << "Наступний місяць: Вересень" << endl;
            break;
        case 9:
            cout << "Наступний місяць: Жовтень" << endl;
            break;
        case 10:
            cout << "Наступний місяць: Листопад" << endl;
            break;
        case 11:
            cout << "Наступний місяць: Грудень" << endl;
            break;
        case 12:
            cout << "Наступний місяць: Січень" << endl;
            break;
        default:
            cout << "Невірний номер місяця!" << endl;
            break;
        }

        cout << "Бажаєте повторити? (y/n): ";
        cin >> repeat;

    } while (repeat == 'y' || repeat == 'Y');

    return 0;
}
