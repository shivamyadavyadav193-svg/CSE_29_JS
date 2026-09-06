#include<iostream>

using namespace std;
class bankaccount {
    private: int balance;

    int amt;
    public: void deposite(int b, int a) {
        balance = b;

        amt = a;
        balance = balance + amt;

    }
    void withddraw(int b, int a) {

        balance = b;
        amt = a;

        balance = balance - amt;
    }
    void display() {
        cout << "balance:" << balance << endl;

    }
};
int main() {
    bankaccount b1;
    b1.deposite(1000, 500);
    b1.display();
    b1.withddraw(1000, 300);
    b1.display();
    b1.deposite(600, 800);
    b1.display();
    return 0;
}