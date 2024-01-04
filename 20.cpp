#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int* grades;
    int numGrades;

public:
    // Constructor
    Student(string studentName, int maxGrades) : name(studentName), numGrades(0) {
        grades = new int[maxGrades];
    }

    // Destructor
    ~Student() {
        delete[] grades;
    }

    // Method to add grades
    void addGrade(int grade) {
        if (numGrades < 10) { // Assuming a maximum of 10 grades
            grades[numGrades++] = grade;
        } else {
            cout << "Cannot add more than 10 grades.\n";
        }
    }

    // Method to calculate average grade
    float calculateAverageGrade() const {
        if (numGrades == 0) {
            return 0.0;
        }

        int total = 0;
        for (int i = 0; i < numGrades; ++i) {
            total += grades[i];
        }

        return static_cast<float>(total) / numGrades;
    }

    // Method to display student details and grades
    void displayStudentDetails() const {
        cout << "Student Name: " << name << "\n";
        cout << "Grades: ";
        for (int i = 0; i < numGrades; ++i) {
            cout << grades[i] << " ";
        }
        cout << "\n";
        cout << "Average Grade: " << calculateAverageGrade() << "\n";
    }
};

int main() {
    // Create a student object
    Student student1("John Doe", 10);

    // Add grades for the student
    student1.addGrade(85);
    student1.addGrade(90);
    student1.addGrade(78);

    // Display student details
    student1.displayStudentDetails();

    return 0;
}

