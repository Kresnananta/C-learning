#include <iostream>
using namespace std;

int biaya(int all_bebek){
    int harga_bebek;

    if (all_bebek < 10) {
        harga_bebek = 100000;
    } else if (all_bebek >= 10 && all_bebek <= 50) {
        harga_bebek = 75000;
    } else {
        harga_bebek = 50000;
    }
    return all_bebek * harga_bebek;
}

int main() {
    int jantan[4] = {0, 10, 50, 60};
    int betina[4] = {7, 80, 9, 40};

    for (int i = 0; i < 4; i++) {
        int biaya_jantan = biaya(jantan[i]);
        int biaya_betina = biaya(betina[i]);
        cout << biaya_jantan + biaya_betina << endl;
    }
    return 0;
}
