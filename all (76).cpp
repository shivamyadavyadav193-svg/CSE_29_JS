#include <bits/stdc++.h>
using namespace std;

class student {
private:
    int rollno;
    int masks;

public:

    void setvalue(int s, int p) {
        rollno = s;
        masks = p;
    }

    void display() {
        cout << "Roll No: " << rollno << endl;
        cout << "Marks: " << masks << endl;
    }
};

int main() {

    student s;

    s.setvalue(50, 90);
    s.display();

    return 0;
}