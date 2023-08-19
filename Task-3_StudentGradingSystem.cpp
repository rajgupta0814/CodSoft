/*
Create a program that manages student grades. Allow the user
to input student names and their corresponding grades.
Calculate the average grade and display it along with the highest
and lowest grades
*/
#include <iostream>
#include <vector>
using namespace std;

class GradeManager {
public:
    vector<string> studentNames;
    vector<int> studentGrades;
    
    string studentName;
    int studentGrade = 0;
    int totalGrades = 0;
    double averageGrade = 0;
    int maxGrade = 0;
    int minGrade = 0;

    void inputStudentData(int numberOfStudents) {
        for (int i = 0; i < numberOfStudents; i++) {
            cout << "Enter the name of student " << i + 1 << " : ";
            cin >> studentName;

            cout << "Enter the grade of student " << i + 1 << " : ";
            cin >> studentGrade;

            studentNames.push_back(studentName);
            studentGrades.push_back(studentGrade);
        }

        maxGrade = studentGrades[0];
        minGrade = studentGrades[0];

        for (int i = 0; i < studentGrades.size(); i++) {
            if (studentGrades[i] > maxGrade) {
                maxGrade = studentGrades[i];
            } else if (studentGrades[i] < minGrade) {
                minGrade = studentGrades[i];
            }

            totalGrades += studentGrades[i];
        }
        
        averageGrade = static_cast<double>(totalGrades) / studentGrades.size();

        cout << "The average grade is " << averageGrade << endl;
        cout << "The highest grade is " << maxGrade << endl;
        cout << "The lowest grade is " << minGrade << endl;
    }
};

int main() {
    int numberOfStudents = 0;
    cout << "Enter the number of students: ";
    cin >> numberOfStudents;

    GradeManager gradeManager;
    gradeManager.inputStudentData(numberOfStudents);

    return 0;
}
