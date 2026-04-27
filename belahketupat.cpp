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

    double keliling() {
        return 2 * (s1 + s2);
    }

    void output() {
        cout << "Luas Layang-Layang: " << luas() << endl;
        cout << "Keliling Layang-Layang: " << keliling() << endl;
    }

    friend double kelilingBelahKetupat(BelahKetupat b, LayangLayang l);
};

class BelahKetupat {
private:
    double d1, d2, s;

public:
    void input() {
        cout << "Input diagonal 1 Belah Ketupat: ";
        cin >> d1;
        cout << "Input diagonal 2 Belah Ketupat: ";
        cin >> d2;
        cout << "Input sisi Belah Ketupat: ";
        cin >> s;
    }

    double luas() {
        return 0.5 * d1 * d2;
    }

    double keliling() {
        return 4 * s;
    }

    void output() {
        cout << "Luas Belah Ketupat: " << luas() << endl;
        cout << "Keliling Belah Ketupat: " << keliling() << endl;
    }

    friend double kelilingBelahKetupat(BelahKetupat b, LayangLayang l);
};
