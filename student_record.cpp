#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int rollNumber;
    float marks;

public:

    Student(const string& studentName, int studentRollNumber, float studentMarks)
        : name(studentName), rollNumber(studentRollNumber), marks(studentMarks) {}

    void displayStudentDetails() const {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
        cout << "------------------------\n";
    }

    const string& getName() const { return name; }
    void setName(const string& studentName) { name = studentName; }

    int getRollNumber() const { return rollNumber; }
    void setRollNumber(int studentRollNumber) { rollNumber = studentRollNumber; }

    float getMarks() const { return marks; }
    void setMarks(float studentMarks) { marks = studentMarks; }
};

class StudentRecordSystem {
private:
    vector<Student> studentRecords;

public:

    void addStudent() {
        string name;
        int rollNumber;
        float marks;

        cout << "Enter student details:\n";
        cout << "Name: ";
        cin.ignore();
        getline(cin, name);

        cout << "Roll Number: ";
        cin >> rollNumber;

        cout << "Marks: ";
        cin >> marks;

        studentRecords.push_back(Student(name, rollNumber, marks));
        cout << "Student added successfully!\n";
    }

    void displayAllStudents() const {
        if (studentRecords.empty()) {
            cout << "No student records available.\n";
        } else {
            cout << "Student Details:\n";
            for (const auto& student : studentRecords) {
                student.displayStudentDetails();
            }
        }
    }
    void calculateAndDisplayAverageMarks() const {
        if (studentRecords.empty()) {
            cout << "No student records available.\n";
        } else {
            float totalMarks = 0;
            for (const auto& student : studentRecords) {
                totalMarks += student.getMarks();
            }

            float averageMarks = totalMarks / studentRecords.size();
            cout << "Average Marks of All Students: " << averageMarks << std::endl;
        }
    }
};

int main() {

    StudentRecordSystem recordSystem;

    recordSystem.addStudent();
    recordSystem.addStudent();
    recordSystem.addStudent();

    recordSystem.displayAllStudents();
    recordSystem.calculateAndDisplayAverageMarks();

    return 0;
}