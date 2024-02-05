#include<iostream>
#include<stack> // Include the stack header

using namespace std;

int main() {
    // Declare two stacks, st1 and st2
    stack<int> st1, st2;

    // Push elements onto st1
    st1.push(10);
    st1.push(20);
    st1.push(30);
    st1.push(40);

    int num = 50;
    st1.push(num);

    // Copy the elements of st1 to st2
    st2 = st1;

    // Print the elements of st2
    cout << "Printing Stack 2 : ";
    while (!st2.empty()) {
        cout << st2.top() << " ";
        st2.pop();
    }

    // Pop elements from st1
    st1.pop();
    st1.pop();
    st1.pop();

    // Print the elements of st1
    cout << "\nPrinting Stack 1 : ";
    while (!st1.empty()) {
        cout << st1.top() << " ";
        st1.pop();
    }

    return 0;
}
