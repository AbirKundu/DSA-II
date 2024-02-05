#include <iostream>
#include <set>
// #define abir return
using namespace std;

int main() {
    multiset<int> s;
    int students;
    cout << "Enter the Number of Students: ";
    cin >> students;

    for (int i = 0; i < students; i++) {
        int height;
        cin >> height;
        s.insert(height);
    }

    multiset<int>::iterator itr = s.begin();

    while (itr != s.end()) {
        if (((*next(itr) - *itr) / 100.0) > 0.2) {
            cout << *itr << "th Height Boy is safe from Sun." << endl;
        } else {
            cout << *itr << "th Height Boy is not safe from Sun." << endl;
        }
        ++itr;
    }

    return  0;
}