#include <iostream>
#include "student.h"
#include<vector>
#include<algorithm>

using namespace std;

int main ()
{
    int selection = 0;
    vector<Student>studentList;
    string name;
    string nameToSearch;
    int age;
    vector<Student>::iterator test;

    do {
        cout<<endl;
        cout<<"Select"<<endl;
        cout<<"Add students = 0"<<endl;
        cout<<"Print all students = 1"<<endl;
        cout<<"Sort and print students according to Name = 2"<<endl;
        cout<<"Sort and print students according to Age = 3"<<endl;
        cout<<"Find and print student = 4"<<endl;
        cin>>selection;

        switch(selection) {
        case 0: {
            cout << "What is the students name?\n"; // Kysyy käyttäjältä uuden opiskelijan nimen
            cin >> name;
            cout << "How old is student " << name << "\n"; // Kysy käyttäjältä uuden opiskelijan iän
            cin >> age;
            studentList.push_back(Student(name,age)); // Lisää uuden student StudentList vektoriin.
            break;
        }
        case 1: {
            for (auto& student : studentList) {
                student.printStudentInfo();
            }
            // Tulosta StudentList vektorin kaikkien opiskelijoiden
            // nimet.
            break;
        }
        case 2: {
            sort(studentList.begin(), studentList.end(), [](Student& x, Student& y){
            string xName = x.getName();
            string yName = x.getName();

            return xName < yName;
            });

            for (auto& student : studentList) {
                student.printStudentInfo();
            }
            // Järjestä StudentList vektorin Student oliot nimen mukaan
            // algoritmikirjaston sort funktion avulla
            // ja tulosta printStudentInfo() funktion avulla järjestetyt
            // opiskelijat
            break;
        }
        case 3: {
            sort(studentList.begin(), studentList.end(), [](Student& x, Student& y){
            return x.getAge() > y.getAge();
            });

            for (auto& student : studentList) {
                student.printStudentInfo();
            }
            // Järjestä StudentList vektorin Student oliot iän mukaan
            // algoritmikirjaston sort funktion avulla
            // ja tulosta printStudentInfo() funktion avulla järjestetyt
            // opiskelijat
            break;
        }
        case 4: {
            cout << "Who are you looking for?\n";
            cin >> nameToSearch;
            auto it = find_if(studentList.begin(), studentList.end(),
            [&] (Student& s){

            return s.getName() == nameToSearch;
            });

            if (it != studentList.end()){
                cout << "Student found\n";
                it->printStudentInfo();
            }
            else {
                cout << "Student not found\n";
            }
            // Kysy käyttäjältä opiskelijan nimi
            // Etsi studentListan opiskelijoista algoritmikirjaston
            // find_if funktion avulla löytyykö käyttäjän antamaa nimeä
            // listalta. Jos löytyy, niin tulosta opiskelijan tiedot.
            break;
        }
        default:
            cout<< "Wrong selection, stopping..."<<endl;
            break;
        }
    }while(selection < 5);

    return 0;
}
