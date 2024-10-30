#include <iostream>
using namespace std;

int main() {
    bool lampu[101];
    int lampuNyala = 0;

    // Pada mulanya, seluruh lampu dalam kondisi mati.
    for (int i = 1; i <= 100; i++) {
        lampu[i] = false;
    }

    // Untuk setiap jam (pukul p),
    for (int p = 1; p <= 10; p++) {
        // untuk setiap lampu nomor i,
        for (int i = p; i <= 100; i += p) {
            // jika i merupakan kelipatan p,
            lampu[i] = !lampu[i]; // ngubah status lampunya ()
        }
    }

    // Hitung banyaknya lampu yang menyala,
    for (int i = 1; i <= 100; i++) {
        if (lampu[i]){
            lampuNyala++;
        }
    }

    cout << lampuNyala << endl;
    return 0;
}