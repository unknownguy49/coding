#include <iostream>
#include <string>
using namespace std;

class Employee {
protected:
    string employeeID;
    string department;
public:
    Employee(string id, string dept) : employeeID(id), department(dept) {}
    void showEmployeeInfo() {
        cout << "Employee ID: " << employeeID << endl;
        cout << "Department: " << department << endl;
    }
};

class Service {
protected:
    int yearsOfService;
public:
    Service(int years) : yearsOfService(years) {}
    void showServiceInfo() {
        cout << "Years of Service: " << yearsOfService << endl;
    }
};

class Student {
protected:
    string studentID;
    string major;
public:
    Student(string id, string maj) : studentID(id), major(maj) {}
    void showStudentInfo() {
        cout << "Student ID: " << studentID << endl;
        cout << "Major: " << major << endl;
    }
};

class Person : public Employee, public Service, public Student {
private:
    string name;
public:
    Person(string n, string empID, string dept, int years, string stuID, string maj)
        : name(n), Employee(empID, dept), Service(years), Student(stuID, maj) {}

    void showPersonInfo() {
        cout << "Name: " << name << endl;
        showEmployeeInfo();
        showServiceInfo();
        showStudentInfo();
    }
};

int main() {
    Person p("Dibyadyuti Dutta", "UG149", "Web Development", 3, "ST149", "Computer Science");
    p.showPersonInfo();
    return 0;
}
