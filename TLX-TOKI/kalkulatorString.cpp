#include <iostream>
#include <string>
#include <vector>
using namespace std;

string kalkulator(char op, vector<string> data) {
    long long total;

    if(op == '+'){
        total = 0;
        for(int i = 0; i < data.size(); i++){
            total += stoi(data[i]);
        }
    }
    else if(op == '*'){
        total = 1;
        for(int i = 0; i < data.size(); i++){
            total *= stoi(data[i]);
        }
    }
    else{
        return "KESALAHAN";
    }
    return to_string(total);
}

// Fungsi main() di bawah tidak boleh diubah!
int main() {
    cout << kalkulator('+', {"1234567890", "0", "987654321", "314159265"}) << endl;
    cout << kalkulator('+', {"123", "456", "789", "111"}) << endl;
    cout << kalkulator('*', {"123", "456", "789", "111"}) << endl;
    cout << kalkulator('*', {"17", "8", "1945"}) << endl;
    cout << kalkulator('?', {"3", "2", "1"}) << endl;
    return 0;
}
