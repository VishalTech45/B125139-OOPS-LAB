// Game Score Adjustment
// A game stores the scores of nplayers in an array.
// Write a function that receives a pointer to the scores and the number of players. The
// function should increase every score by 10.
// Display the scores before and after calling the function.
// Condition: The original array must be modified using pointers.

#include <iostream>
using namespace std;

void increaseScores(int *scores, int n) {
    int *ptr = scores;
    for (int i = 0; i < n; i++) {
        *ptr += 10;
        ptr++;
    }
}

int main() {
    int n;
    cout << "Enter number of players: ";
    cin >> n;

    int *scores = new int[n];

    cout << "Enter initial scores for " << n << " players:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> *(scores + i);
    }

    cout << "\nScores before update: ";
    for (int i = 0; i < n; i++) {
        cout << *(scores + i) << " ";
    }
    cout << endl;

    increaseScores(scores, n);

    cout << "Scores after update (+10): ";
    for (int i = 0; i < n; i++) {
        cout << *(scores + i) << " ";
    }
    cout << endl;

    delete[] scores;
    return 0;
}
