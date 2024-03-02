#include <iostream>
#include <vector>

using namespace std;

int main() {
  
    vector<int> grades;

   
    grades.push_back(93);
    grades.push_back(81);
    grades.push_back(67);

   
    cout << "Initial Grades:" << endl;
    for (int grade : grades) {
        cout << grade << " ";
    }
    cout << endl;

    
    int newGrade;
    char choice;
    do {
        cout << "Enter a new grade: ";
        cin >> newGrade;
        grades.push_back(newGrade);
        cout << "Do you want to add another grade? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    
    cout << "Updated Grades:" << endl;
    for (int grade : grades) {
        cout << grade << " ";
    }
    cout << endl;

    
    int SerNo;
    cout << "Enter the serial number of the record you want to find (starting from 0): ";
    cin >> SerNo;
    if (SerNo >= 0 && SerNo < grades.size()) {
        cout << "Grade at serial number " << SerNo << ": " << grades[SerNo] << endl;
    }
    else {
        cout << "Invalid serial number!" << endl;
    }

    return 0;
}
