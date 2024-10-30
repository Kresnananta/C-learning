#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "thequickbrownfoxjumpsoverthelazydog";
    string hasil;

    for (char c : s) {
        c = toupper(c);

        if (c == 'Z'){
            c = 'A';
        } else{
            c++;
        }
        hasil = hasil + c;
    }
    
    cout << hasil;;
    cout << endl;
    return 0;
}
