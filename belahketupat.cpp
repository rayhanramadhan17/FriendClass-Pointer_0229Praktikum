#include <iostream>
using namespace std;

class BelahKetupat; // forward declaration

class LayangLayang {
private:
    double d1, d2, s1, s2;

public:
    void input() {
        cout << "Input diagonal 1 Layang-Layang: ";
        cin >> d1;
        cout << "Input diagonal 2 Layang-Layang: ";
        cin >> d2;
        cout << "Input sisi 1 Layang-Layang: ";
        cin >> s1;
        cout << "Input sisi 2 Layang-Layang: ";
        cin >> s2;
    }

    double luas() {
        return 0.5 * d1 * d2;
    }

