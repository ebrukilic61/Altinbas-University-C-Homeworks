/*
Questions:
1) Modify class GradeBook as follows:
a) Include a second-string data member that represents the course instructor’s name.
b) Provide a set function to change the instructor’s name and a get function to retrieve it.
c) Modify the constructor to specify course name and instructor name parameters.
d) Modify function display Message to output the welcome message and course name,
then the string "This course is presented by: " followed by the instructor’s name.
Use your modified class in a test program that demonstrates the class’s new capabilities.
*/

#include <iostream>

using namespace std;

class GradeBook
{
private:

    string courseInstructor;
    string courseName;

public:

    void setcourseInstructor(string name)
    {
        courseInstructor = name;
    }
    string getcourseInstructor()
    {
        return courseInstructor;
    }

    void setcourseName(string course)
    {
        courseName = course;
    }
    string getcourseName()
    {
        return courseName;
    }
};

int main()
{
    GradeBook myClass;

    myClass.setcourseName("CE102 C++ Programming Course");
    myClass.setcourseInstructor("Hakan Koyuncu");

    cout << "Welcome to the " << myClass.getcourseName() << "!" << endl;
    cout << "This course presented by " << myClass.getcourseInstructor() << ".";

    return 0;
}
