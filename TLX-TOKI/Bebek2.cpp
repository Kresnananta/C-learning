#include <iostream>
using namespace std;

int main() {
    int jantan = 1, betina = 1;
    int tanggal = 1;

    while (betina <= (jantan * 10)) {
        betina += tanggal;
        jantan++;
        tanggal++;
        
    }

    cout << tanggal << endl;

    return 0;
}