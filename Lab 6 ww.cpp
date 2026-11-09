//WONG PEI TECK 
#include <iostream>
using namespace std;

void displayHeader();
double getScore();
char getGrade(double avg);
void displayResult(double, char);

int main() {
    double total = 0, avg;
    char grade;

    displayHeader();
    for (int i = 0; i < 5; i++)
        total += getScore();
    avg = total / 5;
    grade = getGrade(avg);
    displayResult(avg, grade);
    return 0;
}

void displayHeader() {
    cout << "Find Average for 5 Scores" << endl;
    cout << "------------------------------" << endl;
}

double getScore() {
    double score;
    do {
        cout << "Enter score: ";
        cin >> score;
        if (score < 0 || score > 100)
            cout << "!!! INVALID SCORE" << endl;
    } while (score < 0 || score > 100);
    return score;
}

char getGrade(double avg) {
    if (avg >= 80) return 'A';
    else if (avg >= 65) return 'B';
    else if (avg >= 50) return 'C';
    else if (avg >= 40) return 'D';
    else return 'F';
}

void displayResult(double avg, char grade) {
    cout << "The average score is " << avg << endl;
    cout << "The average grade is " << grade << endl;
    cout << "------------------------------" << endl;
}