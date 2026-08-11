#include <iostream>
using namespace std;

class Student {
    int roll_no;
    char name[50];
    int sub1, sub2, sub3, sub4, sub5;

public:

    void get_detail() {
        cout << "Enter roll number : ";
        cin >> roll_no;

        cout << "Enter name : ";
        cin >> name;

        cout << "Enter marks of 5 subjects : ";
        cin >> sub1 >> sub2 >> sub3 >> sub4 >> sub5;
    }

    void student_marks() {
        int total = sub1 + sub2 + sub3 + sub4 + sub5;

        cout << "Total marks of student = " << total;
        cout << "\nPercentage marks of student = "
             << (total / 500.0) * 100;
    }

    void grade() {
        int total = sub1 + sub2 + sub3 + sub4 + sub5;
        float percentage = (total / 500.0) * 100;

        if (percentage >= 90) {
            cout << "\nGrade = A";
        }
        else if (percentage >= 80) {
            cout << "\nGrade = B";
        }
        else if (percentage >= 70) {
            cout << "\nGrade = C";
        }
        else if (percentage >= 60) {
            cout << "\nGrade = D";
        }
        else {
            cout << "\nGrade = F";
        }
    }
};

int main() {
    Student s;

    s.get_detail();
    s.student_marks();
    s.grade();

    return 0;
}