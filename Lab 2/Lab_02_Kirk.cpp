#include <iostream>
#include <string>
using namespace std;

int main ()
{
    // variable declarations
    string name;
    double studyHours;
    // prompts and inputs
    cout << "Please type your first name: " << endl;
    cin >> name;
    cout << "Please enter the number of hours you plan to study for this week's exam, i.e. 5.3: " << endl;
    cin >> studyHours;
    cout << "Hello, " << name << "! on Saturday, you need to study " << studyHours<< " hours for the exam." << endl;

    return 0;
}
