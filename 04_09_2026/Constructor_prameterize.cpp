#include <iostream>
#include <string>
using namespace std;

// Multiple constructors with same name but different parameters
class Banking {

private:
    double deposite;

public:

    // Default constructor
    Banking() {
        Mode_of_payment = "cash";
        cout << "This is constructor called!" << endl;
    }

    // Parameterized constructor
    Banking(string u, string c, string mop, long long Ac, double dep) {
        Username = u;
        city = c;
        Mode_of_payment = mop;
        Ac_number = Ac;
        deposite = dep;
    }

    string Username;
    string city;
    string Mode_of_payment;
    long long Ac_number;

    void getInfo() {
        cout << "Username: " << Username << endl;
        cout << "City: " << city << endl;
        cout << "Mode of payment: " << Mode_of_payment << endl;
        cout << "Account number: " << Ac_number << endl;
        cout << "Deposit: " << deposite << endl;
    }
};

int main() {

    Banking b1(
        "Himanshu",
        "Varanasi",
        "Cash",
        5551954962111852LL,
        1000000
    );

    b1.getInfo();

    return 0;
}