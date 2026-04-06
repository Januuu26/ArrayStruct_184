#include <iostream>
using namespace std;

int main() {
    int aku[5] = {1, 2, 3, 4, 5};

    int kamu[5];

    cout << "Data pada index 1 = " << aku[1] << endl;
    
    aku[1] = 10;
    cout << endl;
    cout << "Data pada index 1 = " << aku[1] << endl;

    cout << "Data index 0 =";
    cin >> kamu[0];

    cout << "Data index 1 =";
    cin >> kamu[1];

    cout << "Data index 2 =";
    cin >> kamu[2];

    cout << "Data index 3 =";
    cin >> kamu[3];

    cout << "Data index 4 =";
    cin >> kamu[4];
}

