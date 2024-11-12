#include <iostream>
using namespace std;

void pascal() {
    int liczba_wierszy;
    while(true) {
        cout << "Wpisz liczbe wierszy: ";
        cin >> liczba_wierszy;
        if (liczba_wierszy <= 0) {
            cout << "Wpisz dodatnia liczbe wierszy!\n\n";
        } else {
            break;
        }
    }
    int poprzedni_wiersz[liczba_wierszy] = {1, 1};
    cout << "\n";
    for (int i = 1;i<liczba_wierszy + 1;i++) {
        for (int x = 0;x < (liczba_wierszy - i);x++) {
            cout << " ";
        }
        int nowy_wiersz[liczba_wierszy];
        for (int j=0;j<i;j++) {
            if (i == 1 || i == 2) {
                cout << "1 ";
                nowy_wiersz[j] = 1;
            } else {
                if (j != 0 && j != i-1) {
                    cout << poprzedni_wiersz[j] + poprzedni_wiersz[j-1] << " ";
                    nowy_wiersz[j] = poprzedni_wiersz[j] + poprzedni_wiersz[j-1];
                } else {
                    cout << "1 ";
                    nowy_wiersz[j] = 1;
                }
            }
        }
        for(int x = 0;x < liczba_wierszy;x++) {
            poprzedni_wiersz[x] = nowy_wiersz[x];
        }
        cout << "\n";
    }
}

int main()
{
    pascal();
}
