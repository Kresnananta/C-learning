#include <iostream>
using namespace std;

int main()
{
    int N = 10;

    for (int i = 1; i <= N; i++) {
        // cetak i buah "*"
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        for(int y = 10; y > i; y--){
            cout << ".";
        }

        cout << endl;
    }

    return 0;
}