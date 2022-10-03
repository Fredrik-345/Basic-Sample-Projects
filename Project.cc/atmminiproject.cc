#include <iostream>
#include <conio.h>
#include <string>
using namespace std;
/* Mini project- ATM
    Check balance
    Cash withdrawl
    User details
    Update mobile number */
class atm
{
private:
    long int account_no;
    string name;
    int PIN;
    double balance;
    string mobile_no;

public:
    void setdata(long int account_1, string name_1, int PIN_1, double BAL_1, string Mobile_1)
    {
        account_no = account_1;
        name = name_1;
        PIN = PIN_1;
        balance = BAL_1;
        mobile_no = Mobile_1;
    }
    long int getaccountno()
    {
        return account_no;
    }
    string getname()
    {
        return name;
    }
    int getpin()
    {
        return PIN;
    }
    double getbalance()
    {
        return balance;
    }
    string getmobileno()
    {
        return mobile_no;
    }
    void setmobile(string mobile_prev, string mobile_new)
    {
        if (mobile_prev == mobile_no)
        {
            mobile_no = mobile_new;
            cout << "Sucessfully updated mobile number." << endl;
            // getch();
        }     
        else
        {
            cout << "Incorrect !!! Old MObile Number. " << endl;
        }
    }

    void cashwithdrawl(int amount)
    {
        if (amount > 0 && amount < balance)
        {
            balance -= amount;
            cout << "Please collect your cash." << endl;
            cout << "Available balance: " << balance << endl;
        }
        else
        {
            cout << "Invalid input from user or insufficient balance." << endl;
        }
    }
};
int main()
{
    int count = 0, enterPIN;
    long int enteraccountno;
    system("cls");
    atm user1;
    user1.setdata(12345678, "Morgan", 3456, 90000.8, "8017859530"); // default data in the system
    do
    {
        system("cls"); // screen clear command
        cout << "**WELCOME TO ATM**" << endl;
        cout << "Enter your account number: " << endl;
        cin >> enteraccountno;
        cout << "Enter the PIN no." << endl;
        cin >> enterPIN;
        if ((enteraccountno == user1.getaccountno()) && (enterPIN == user1.getpin()))
        {
            do
            {
                int amount_1 = 0;
                string oldmobileno, newmobileno;
                system("cls");
                cout << "----Welcome to ATM----" << endl;
                cout << "Select Options" << endl;
                cout << "1.Check Balance" << endl;
                cout << "2.Cash Withdrawl" << endl;
                cout << "3.Show user details" << endl;
                cout << "4.Update Mobile Number." << endl;
                cout << "5.Exit" << endl;
                cin >> count;
                switch (count)
                {
                case 1:
                    cout << "Your balance is: " << user1.getbalance();
                   getch();
                    break;

                case 2:
                    cout << "Enter the amount: ";
                    cin >> amount_1;
                    user1.cashwithdrawl(amount_1);
                    getch();
                    break;
                case 3:
                    cout << "***User details are: " << endl;
                    cout << "--Account number is:  " << user1.getaccountno() << endl;
                    cout << "--Name: " << user1.getname() << endl;
                    cout << "--Balance: " << user1.getbalance() << endl;
                    cout << "--Mobile Number: " << user1.getmobileno() << endl;
                    getch();
                    break;

                case 4:
                    cout << "Enter the old mobile number: " << endl;
                    cin >> oldmobileno;
                    cout << "Enter the new mobile number: " << endl;
                    cin >> newmobileno;
                    user1.setmobile(oldmobileno,newmobileno);
                    getch();
                    break;

                case 5:
                    exit(0);

                default:
                    cout << "Enter the valid data!!" << endl;
                    getch();
                }
            } while (1);
        }
        else
        {
            cout << endl
                 << "User Details are Invalid !!! ";
              getch();
        }

    } while (1);

    return 0;
}