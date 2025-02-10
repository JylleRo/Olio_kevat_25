#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <string>
using namespace std;

class Student{
public:
    Student(string n,int a) { Name = n; Age = a; }
    void setAge(int a) { Age = a; }
    void setName(string n) { Name = n; }
    int getAge() { return Age; }
    string getName() { return Name; }
    void printStudentInfo(){
        cout << "Student " << Name << " Age " << Age << "\n";
    }
private:
    string Name;
    int Age;
};
#endif // STUDENT_H
