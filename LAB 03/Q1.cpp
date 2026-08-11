 #include <iostream>
using namespace std;

int main() {
    // Dynamic memory allocation for a single integer
    int* ptr = new int;

    cout << "Enter an integer value: ";
    cin >> *ptr;

    cout << "Stored Value: " << *ptr << endl;
    cout << "Memory Address: " << ptr << endl;

    // Release allocated memory
    delete[] ptr;
    ptr = nullptr;

    cout <<"Checking delete or not :"<<endl;
    if (ptr == nullptr) {
        cout << "Memory has been successfully released." << endl;
    } else {
        cout << "Memory release failed." << endl;
    }

    return 0;
}