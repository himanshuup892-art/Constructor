#include <iostream>
#include <string>
using namespace std;

// Constructor
class Banking {
private:
    double deposite;

public:
    Banking() {
        mode_of_payment = "cash";
    }

    string Username;
    string city;
    int Ac_number;
    string mode_of_payment;
    string name;          

    void changemode(string newmode_of_payment) {
        mode_of_payment = newmode_of_payment;
    }

    void setdeposite(double S) {
        deposite = S;
    }

    double getdeposite() {
        return deposite;
    }
};

int main() {
    Banking b1;

    b1.name = "SBI";
    b1.setdeposite(50000);

    cout << b1.name << endl;
    cout << b1.getdeposite() << endl;
    cout << b1.mode_of_payment << endl;

    return 0;
}