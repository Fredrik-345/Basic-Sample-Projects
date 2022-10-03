#include <iostream>
#include <conio.h>
#include <string>
using namespace std;
class Database
{
private:
    long int regis;
    string name;
    int ID;
    int totalmarks;
    string subject_code;
    int passcode;

public:
    void setdata(int registration_num, string candidate_name, int total_marks, string newsubjectcode, int pass_code)
    {
        regis = registration_num;
        name = candidate_name;
        totalmarks = total_marks;
        subject_code = newsubjectcode;
        passcode = pass_code;
    }

    int getregistration_number()
    {
        return regis;
    }
    string getcandidate_name()
    {
        return name;
    }
    int student_marks()
    {
        return totalmarks;
    }
    int getproctor_id()
    {
        return ID;
    }
    string getsubjectcode()
    {
        return subject_code;
    }
    int getpass_code()
    {
        return passcode;
    }

    
};
class Faculty
{
private:
    int facultyid;
    string name;
    string department;
    string designation;
    long long contact;
    int passcode1;

public:
    void setdata1(string name_prof, string department_prof, string position, long long contact_number, int faculty_id, int pass_code)
    {
        facultyid = faculty_id;
        name = name_prof;
        department = department_prof;
        designation = position;
        contact = contact_number;
        passcode1 = pass_code;
    }
    int faculty_login()
    {
        return facultyid;
    }
    int passcode11()
    {
        return passcode1;
    }
    string depart_ment()
    {
        return department;
    }
    string name_1()
    {
        return name;
    }
    string designa_tion()
    {
        return designation;
    }
    long long conta_ct()
    {
        return contact;
    }
};
int main()
{
    int count = 0, password;
    long int registrationnumber;
    system("cls");

    Database student1;
    Database student2;
    Database student3;
    student1.setdata(90712390, "Hitesh", 584, "CSE-HIT", 12390);
    student2.setdata(80112380, "Ganesh", 520, "ECE-HIT", 12380);
    student3.setdata(70912370, "Baisakhi", 546, "ME-HIT", 12370);

    Faculty professor1;
    Faculty professor2;
    Faculty professor3;
    professor1.setdata1("Mr. Rajesh Sengupta", "Computer Science And Engineering", "Assistant Professor", 7896784562, 5551, 6251);
    professor2.setdata1("Mrs. Barnali Roy", "Electronics And Communication Engineering", "Associate Professor", 9996394533, 5563, 3363);
    professor3.setdata1("Mr. Debdass Majhi", "Mechanical Engineering", " Professor", 7106722540, 5548, 4048);
    do
    {
        system("cls");
        cout << "***This is the official Student Database Management System***" << endl;
        cout << "Enter the passcode to login: " << endl;
        cin >> password;
        if (password == student1.getpass_code())
        {
            do
            {
                system("cls");
                cout << "----STUDENT DATABASE MANAGEMENT SYSTEM----" << endl;
                cout << "Select Options" << endl;
                cout << "1.Student Login" << endl;
                cout << "2.Faculty Login" << endl;
                cout << "3.Proctor Login" << endl;
                cout << "4.Admin View" << endl;
                cout << "5.Exit" << endl;
                cin >> count;
                switch (count)
                {
                case 1:
                    cout << "My name is: " << student1.getcandidate_name() << endl;

                    cout << "My registration number is: " << student1.getregistration_number() << endl;
                    cout << "My branch of Engineering is: " << student1.getsubjectcode() << endl;
                    cout << "My total marks about of 700 is: " << student1.student_marks() << endl;
                    getch();
                    
                case 2:
                    int pass_word;
                    cout << "\nEnter the faculty password to login: " << endl;
                    cin >> pass_word;
                    if (pass_word == professor1.passcode11())
                    {
                        cout << "My name is: " << professor1.name_1() << endl;
                        cout << "My department is: " << professor1.depart_ment() << endl;
                        cout << "My designation is: " << professor1.designa_tion() << endl;
                        cout << "My contact number is: " << professor1.conta_ct() << endl;
                        cout << "My Faculty ID: " << professor1.faculty_login() << endl;
                        getch();
                    }
                    else if (pass_word == professor2.passcode11())
                    {
                        cout << "\nMy name is: " << professor2.name_1() << endl;
                        cout << "My department is: " << professor2.depart_ment() << endl;
                        cout << "My designation is: " << professor2.designa_tion() << endl;
                        cout << "My contact number is: " << professor2.conta_ct() << endl;
                        cout << "My Faculty ID: " << professor2.faculty_login() << endl;
                        getch();
                    }
                    else if (pass_word == professor3.passcode11())
                    {
                        cout << "\nMy name is: " << professor3.name_1() << endl;
                        cout << "My department is: " << professor3.depart_ment() << endl;
                        cout << "My designation is: " << professor3.designa_tion() << endl;
                        cout << "My contact number is: " << professor3.conta_ct() << endl;
                        cout << "My Faculty ID: " << professor3.faculty_login() << endl;
                        getch();
                    }
                    else
                    {
                        cout << "Invalid password" << endl;
                    }

                    getch();
                    break;
                case 5:
                    exit(0);
                    getch();
                }
            } while (1);
        }
        else if (password == student2.getpass_code())
        {
            do
            {
                system("cls");
                cout << "----STUDENT DATABASE MANAGEMENT SYSTEM----" << endl;
                cout << "Select Options" << endl;
                cout << "1.Student Login" << endl;
                cout << "2.Faculty Login" << endl;
                cout << "3.Proctor Login" << endl;
                cout << "4.Admin View" << endl;
                cout << "5.Exit" << endl;
                cin >> count;
                switch (count)
                {
                case 1:
                    cout << "My name is: " << student2.getcandidate_name() << endl;

                    cout << "My registration number is: " << student2.getregistration_number() << endl;
                    cout << "My branch of Engineering is: " << student2.getsubjectcode() << endl;
                    cout << "My total marks about of 700 is: " << student2.student_marks() << endl;
                    getch();
                    break;
                case 2:
                    int pass_word;
                    cout << "Enter the faculty passowrd to login: " << endl;
                    cin >> pass_word;
                    if (pass_word == professor1.passcode11())
                    {
                        cout << "My name is: " << professor1.name_1() << endl;
                        cout << "My department is: " << professor1.depart_ment() << endl;
                        cout << "My designation is: " << professor1.designa_tion() << endl;
                        cout << "My contact number is: " << professor1.conta_ct() << endl;
                        cout << "My Faculty ID: " << professor1.faculty_login() << endl;
                        getch();
                    }
                    else if (pass_word == professor2.passcode11())
                    {
                        cout << "My name is: " << professor2.name_1() << endl;
                        cout << "My department is: " << professor2.depart_ment() << endl;
                        cout << "My designation is: " << professor2.designa_tion() << endl;
                        cout << "My contact number is: " << professor2.conta_ct() << endl;
                        cout << "My Faculty ID: " << professor2.faculty_login() << endl;
                        getch();
                    }
                    else if (pass_word == professor3.passcode11())
                    {
                        cout << "My name is: " << professor3.name_1() << endl;
                        cout << "My department is: " << professor3.depart_ment() << endl;
                        cout << "My designation is: " << professor3.designa_tion() << endl;
                        cout << "My contact number is: " << professor3.conta_ct() << endl;
                        cout << "My Faculty ID: " << professor3.faculty_login() << endl;
                        getch();
                    }
                    else
                    {
                        cout << "Invalid password" << endl;
                    }

                    getch();
                    break;
                }
            } while (1);
        }
        else if (password == student3.getpass_code())
        {
            do
            {
                system("cls");
                cout << "----STUDENT DATABASE MANAGEMENT SYSTEM----" << endl;
                cout << "Select Options" << endl;
                cout << "1.Student Login" << endl;
                cout << "2.Faculty Login" << endl;
                cout << "3.Proctor Login" << endl;
                cout << "4.Admin View" << endl;
                cout << "5.Exit" << endl;
                cin >> count;
                switch (count)
                {
                case 1:
                    cout << "My name is: " << student3.getcandidate_name() << endl;

                    cout << "My registration number is: " << student3.getregistration_number() << endl;
                    cout << "My branch of Engineering is: " << student3.getsubjectcode() << endl;
                    cout << "My total marks about of 700 is: " << student3.student_marks() << endl;
                    getch();
                    break;
                case 2:
                    int pass_word;
                    cout << "Enter the faculty passowrd to login: " << endl;
                    cin >> pass_word;
                    if (pass_word == professor1.passcode11())
                    {
                        cout << "My name is: " << professor1.name_1() << endl;
                        cout << "My department is: " << professor1.depart_ment() << endl;
                        cout << "My designation is: " << professor1.designa_tion() << endl;
                        cout << "My contact number is: " << professor1.conta_ct() << endl;
                        cout << "My Faculty ID: " << professor1.faculty_login() << endl;
                        getch();
                    }
                    else if (pass_word == professor2.passcode11())
                    {
                        cout << "My name is: " << professor2.name_1() << endl;
                        cout << "My department is: " << professor2.depart_ment() << endl;
                        cout << "My designation is: " << professor2.designa_tion() << endl;
                        cout << "My contact number is: " << professor2.conta_ct() << endl;
                        cout << "My Faculty ID: " << professor2.faculty_login() << endl;
                        getch();
                    }
                    else if (pass_word == professor3.passcode11())
                    {
                        cout << "My name is: " << professor3.name_1() << endl;
                        cout << "My department is: " << professor3.depart_ment() << endl;
                        cout << "My designation is: " << professor3.designa_tion() << endl;
                        cout << "My contact number is: " << professor3.conta_ct() << endl;
                        cout << "My Faculty ID: " << professor3.faculty_login() << endl;
                        getch();
                    }
                    else
                    {
                        cout << "Invalid password" << endl;
                    }

                    getch();
                    break;
                }
            } while (1);
        }
        else
        {
            cout << "Invalid passcode" << endl;
            getch();
        }
    } while (1);
    
    return 0;
}