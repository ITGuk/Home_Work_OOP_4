#include <iostream>
#include "Group_Student.h"

using namespace std;

void Menu()
{
    int check_menu = NULL;
    int check_add = 1;
    int size_group = 5;
    string temp_name = "";
    string temp_lesson = "";
    int grade_st = NULL;
    int count = NULL;
    bool checking = true;
    Group_Student** students = new Group_Student*[size_group];
    cout << "Group Students.\n";
    
    do
    {
        cout << "\t1-Add new student.\
        \n\t2-Evaluation table.\
        \n\t3-Exit.\n";
        cout << "Enter choise: "; cin >> check_menu;
        switch (check_menu)
        {
        case 1://Add new student.
            while (true)
            {
                Group_Student* studs = new Group_Student();
                cout << "Enter name and initials or 'Huk.A.M': ";
                cin >> temp_name;
                studs->SetStudent(temp_name);
                cout << "Enter grade or Math: ";
                cin >> grade_st;
                studs->SetMath(grade_st);
                cout << "Enter grade or biology: ";
                cin >> grade_st;
                studs->SetBiol(grade_st);
                cout << "Enter grade or Geography: ";
                cin >> grade_st;
                studs->SetGeog(grade_st);
                students[count] = studs;
                cout << "Add more student?(1-YES/0-NO): ";
                cin >> check_add;
                if (check_add == 1)
                {
                    count++;
                    continue;
                }
                else 
                {
                    break;
                }
            }
            break;
        case 2://Show all students and grade.
            for (int i = 0; i < size_group; i++)
            {
                cout << endl << endl;
                cout << "Student: " << students[i]->GetStudent() << endl;
                cout << "Grade Math: " << students[i]->GetMath() << endl;
                cout << "Grade Biology: " << students[i]->GetBiol() << endl;
                cout << "Grade Geography: " << students[i]->GetGeog() << endl;
                cout << endl;
            }

            break;
        case 3:
            checking = false;//Exit.
            break;
        default:
            break;
        }
    } while (checking);
}

int main()
{
    Menu();
}
