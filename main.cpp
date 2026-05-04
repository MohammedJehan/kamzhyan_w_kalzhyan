#include <iostream>
#include <string>

using namespace std;

int main() {
    string cardID;

    cout << "Scan your card: ";
    cin >> cardID;

    if (cardID == "12345") {
        cout << "Access Granted ✔" << endl;
    } else {
        cout << "Access Denied x" << endl;
    }

    return 0;
}
