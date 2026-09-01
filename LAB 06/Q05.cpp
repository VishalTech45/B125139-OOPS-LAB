// Museum Visitor Update
// A museum stores the number of visitors for the day.
// Write a function:
// void updateVisitors(int *count);
// The function should accept the number of newly arrived visitors and update the original
// visitor count through the pointer.
// Display the visitor count before and after calling the function.

#include<iostream>
using namespace std ;

void updateVisitors(int *count) {
    int new_visitor;
    cout << "Enter number of newly arrived visitors: ";
    cin >> new_visitor;
    *count += new_visitor;
}

int main() {
    int vist_count = 45;
    int *count = &vist_count ;

    cout << "Visitor count before update: " << *count << endl;
    
    updateVisitors(&vist_count);

    cout << "Visitor count after update:  " << *count << endl;

    return 0;
}