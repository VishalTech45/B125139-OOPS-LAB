
#include <iostream>
#include <string>
using namespace std;

class Exam {
    string studentName;
    string subject;
    float marks;
    float maxMarks;
  public:
    // constructor to initialize the Exam object
    Exam(string name, string sub, float m, float mm) {
        studentName = name;
        subject = sub;
        marks = m;
        maxMarks = mm;
    }

    // declare Result as a friend class
    friend class Result;

};

class Result {
  public:
    void displayResult( Exam &exam) {
        float percentage = (exam.marks / exam.maxMarks) * 100;
        cout << "--------Exam Result ------------" << endl;
        cout << "Student Name: " << exam.studentName << endl;
        cout << "Subject: " << exam.subject << endl;
        cout << "Marks Obtained: " << exam.marks << "/" << exam.maxMarks << endl;
        cout << "Percentage: " << percentage << "%" << endl;
        if (percentage >= 40) {
            cout << "Result: Pass" << endl;
        } else {
            cout << "Result: Fail" << endl;
        }
    }
    void calculatePercentage(const Exam &exam) {
        float percentage = (exam.marks / exam.maxMarks) * 100;
        cout << "Percentage: " << percentage << "%" << endl;
    }
     void checkPassFail(const Exam &exam) {
        float percentage = (exam.marks / exam.maxMarks) * 100;
        if (percentage >= 40) {
            cout << "The student has passed the exam." << endl;
        } else {
            cout << "The student has failed the exam." << endl;
        }
    }

    void displayCompleteResult(const Exam &exam) {
        float percentage = (exam.marks / exam.maxMarks) * 100;
        cout << "--------Complete Exam Result ------------" << endl;
        cout << "Student Name: " << exam.studentName << endl;
        cout << "Subject: " << exam.subject << endl;
        cout << "Marks Obtained: " << exam.marks << "/" << exam.maxMarks << endl;
        cout << "Percentage: " << percentage << "%" << endl;
        if (percentage >= 40) {
            cout << "Result: Pass" << endl;
        } else {
            cout << "Result: Fail" << endl;
        }
    }

};


int main(){
    string studentName, subject;
    float marks, maxMarks;

    cout << "Enter the student name: ";
    getline(cin, studentName);
    cout << "Enter the subject: ";
    getline(cin, subject);
    cout << "Enter the marks obtained: ";
    cin >> marks;
    cout << "Enter the maximum marks: ";
    cin >> maxMarks;

    // Create an object of Exam class and pass it to the friend class Result
    Exam exam(studentName, subject, marks, maxMarks);
    Result result;

    result.displayResult(exam); // object of Exam class is passed to the friend class Result
    result.calculatePercentage(exam);
    result.checkPassFail(exam);
    result.displayCompleteResult(exam);

    return 0;
}