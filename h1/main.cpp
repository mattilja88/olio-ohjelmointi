#include <iostream>

using namespace std;

void calcSum(int, int);
void calcDiv(int, int);
int retSum(int, int);
float retDiv(int,int);

int main()
{
    int lukuA;
    int lukuB;
    cout << "Anna luku a: ";
    cin >> lukuA;
    cout << "Anna luku b: ";
    cin >> lukuB;

    calcSum(lukuA, lukuB);
    calcDiv(lukuA, lukuB);
    cout << "Summa ret: " << retSum(lukuA, lukuB) << endl;
    cout << "Osamäärä ret: " << retDiv(lukuA, lukuB) << endl;
    return 0;
}

void calcSum(int luku1, int luku2) {
    int summa = luku1 + luku2;
    cout << "Summa calc: " << summa << endl;
}

void calcDiv(int luku1, int luku2) {
    if (luku2 == 0) {
        cout << "Virhe, jakaja ei voi olla nolla!" << endl;
    } else {
        float osamaara = static_cast<float>(luku1) / static_cast<float>(luku2);
        cout << "Osamäärä calc: " << osamaara << endl;
    }
}

int retSum(int luku1, int luku2) {
    return luku1 + luku2;
}

float retDiv(int luku1, int luku2) {
    if (luku2 == 0) {
        cout << "Virhe, jakaja ei voi olla nolla!" << endl;
        return 0.0f;
    } else {
        return static_cast<float>(luku1) / static_cast<float>(luku2);

    }
}
