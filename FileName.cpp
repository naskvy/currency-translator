#include <iostream>
using namespace std;
void exit() {
    int choice;

    //��������, ����� �� ������������ ���������� ������ ��������� ��� ���
    cout << "������ �� �� ����� �� ���������? " << endl;
    cout << "0. �� " << endl;
    cout << "1. ��� " << endl;
    cin >> choice;
    switch (choice) {
    case 0:
        cout << "�� ��������!" << endl;
        exit(0);
    case 1:
        cout << endl;
    }
}
void eur_rub() {
    double eur, rub;
    cout << "������� ������ ��� ���������� ���� ��� �������� � ����� / Enter the amount of Euros you need to convert to rubles: ";
    cin >> eur;
        rub = eur * 103.41;
        cout << eur << " ����(�) � ������ ���������� / euro(s) in rubles will be received - " << rub << " ������ " << endl;
        exit();
};
void rub_eur() {
    double rub, eur;
    cout << "������� ������ ��� ���������� ������ ��� �������� � ���� / Enter the amount of rubles you need to convert to euros: ";
    cin >> rub;
    eur = rub / 103.46;
    cout << rub << " ������ � ���� ���������� / rubles in euros is obtained - " << eur << " ���� " << endl;
    exit();
};
void usd_rub() {
    double usd, rub;
    cout << "������� ������ ��� �������� �������� ��� �������� � ����� / Enter the Dollar value you need to convert to Rubles: ";
    cin >> usd;
    rub = usd / 93.2;
    cout << usd << " �������� � ����� ���������� / Dollars in Rubles is obtained - " << rub << endl;
    exit();
};
void rub_usd() {
    double rub, usd;
    cout << "������� ������ ��� ���������� ������ ��� �������� � ������ / Enter the amount of Rubles you need to convert to a Dollar: ";
    cin >> rub;
    usd = rub * 93.2;
    cout << rub << " ������ � ������ ���������� / it turns out to be Rubles per Dollar - " << usd << endl;
    exit();
};
void cny_rub() {
    double rub, yan;
    cout << "������� ������ ��� ���������� ����� ��� �������� � ����� / Enter the amount of Yuan you need to convert to Rubles: ";
    cin >> yan;
    rub = yan / 13.09;
    cout << yan << " ����� � ����� ���������� / Yuan in Rubles is obtained -  " << rub << endl;
    exit();
};
void rub_cny() {
    double cny, rub;
    cout << "������� ������ ��� ���������� ������ ��� �������� � ���� / Enter the amount of Rubles you need to convert to a Yuan: ";
    cin >> rub;
    cny = rub * 13.09;
    cout << rub << " ������ � ���� ���������� / it turns out to be Rubles per Yuan - " << cny << endl;
    exit();
};
void cny_usd() {
    double cny, usd;
    cout << "������� ������ ��� ���������� ����� ��� �������� � ������� / Enter the amount of Yuan you need to convert to Dollars: ";
    cin >> cny;
    usd = cny * 7.02;
    cout << cny << " ����� � �������� ���������� / Yuan in Dollars is obtained - " << usd << endl;
    exit();
}
void cny_eur() {
    double cny, eur;
    cout << "������� ������ ��� ���������� ����� ��� �������� � ���� / Enter the amount of Yuan you need to convert to Euro: ";
    cin >> cny;
    eur = cny * 7.9;
    cout << cny << " ����� � ���� ���������� / Yuan in Euro is obtained - " << eur << endl;
    exit();
}
void usd_cny() {
    double usd, cny;
    cout << "������� ������ ��� ���������� �������� ��� �������� � ���� / Enter the amount of Dollars you need to convert to Yuan: ";
    cin >> usd;
    cny = usd / 7.02;
    cout << usd << " �������� � ���� ���������� / Dollars in Yuan is obtained - " << cny << endl;
    exit();
}
void usd_eur() {
    double usd, eur;
    cout << "������� ������ ��� ���������� �������� ��� �������� � ���� / Enter the amount of Dollars you need to convert to Euro: ";
    cin >> usd;
    eur = usd / 1.15;
    cout << usd << " �������� � ���� ���������� / Dollars in Euro is obtained - " << eur << endl;
    exit();
}
void eur_usd() {
    double usd, eur;
    cout << "������� ������ ��� ���������� ���� ��� �������� � ������� / Enter the amount of Euro you need to convert to Dollars: ";
    cin >> eur;
    usd = eur * 1.15;
    cout << eur << " ���� � ������� ���������� / Euro in Dollars is obtained - " << usd << endl;
    exit();
}
void eur_cny() {
    double cny, eur;
    cout << "������� ������ ��� ���������� ���� ��� �������� � ���� / Enter the amount of Euro you need to convert to Yuan: ";
    cin >> eur;
    cny = eur / 7.9;
    cout << eur << " ���� � ���� ���������� / Euro in Yuan is obtained - " << cny << endl;
    exit();
}

int main() {
    setlocale(LC_ALL, "RU");
    int choice;
    do {
        cout << "�������� � ����� �� ����� ������ ������ ���������: ";
        cout << "1. EUR -> RUB " << endl;
        cout << "2. RUB -> EUR " << endl;
        cout << "3. USD -> RUB " << endl;
        cout << "4. RUB -> USD " << endl;
        cout << "5. CNY -> RUB " << endl;
        cout << "6. RUB -> CNY " << endl;
        cout << "7. CNY -> USD " << endl;
        cout << "8. USD -> CNY " << endl;
        cout << "9. CNY -> EUR " << endl;
        cout << "10. EUR -> CNY " << endl;
        cout << "11. USD -> EUR " << endl;
        cout << "12. EUR -> USD " << endl;
        cout << "13. �������� ������ ���������: ";
        do {
            cout << "������� �� �����, ������� ��� ��������: " << endl;
            cin >> choice;
            if (choice < 1 || choice > 13) cout << "������ �������� ���! ";
        } while (choice < 1 || choice > 13);
        switch (choice) {
        case 1:
            eur_rub();
            break;
        case 2:
            rub_eur();
            break;
        case 3:
            usd_rub();
            break;
        case 4:
            rub_usd();
            break;
        case 5:
            cny_rub();
            break;
        case 6:
            rub_cny();
            break;
        case 7:
            cny_usd();
            break;
        case 8:
            usd_cny();
            break;
        case 9:
            cny_eur();
            break;
        case 10:
            eur_cny();
            break;
        case 11:
            usd_eur();
            break;
        case 12:
            eur_usd();
            break;
        case 13:
            cout << "�� ��������! ";
            break;
        } 
    } while (choice != 13);
    return 0;
}