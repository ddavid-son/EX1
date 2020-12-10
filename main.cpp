#include "county.h"
#include "party.h"`
#include "person.h"
#include "registry.h"
#include "state.h"
#include "iostream"

using namespace ELC;
using namespace std;

void menu()
{
    bool flag = true;

    while (flag)
    {
        cout << "main menu :" << endl;
        cout << "1. addcounty. " << endl;
        cout << "2. addperon. " << endl;
        cout << "3. addparty. " << endl;
        cout << "4. print all county " << endl;
        cout << "5. print registry " << endl;
        cout << "6. print all parties " << endl;
        cout << "7. vote " << endl;
        cout << "8. show results " << endl;
        cout << "9. Exit " << endl;

        int op;
        cin >> op;

        switch (op)
        {
        case 1:
            cout << "enter county name and number of reps :" << endl;
            int repnum;
            char *name = new char[5];
            cin >> name;
            cin >> repnum;
            // code
            break;
        case 2:
            cout << "enter name , id , year of birth and county number" << endl;
            int id, YOB, cou_num;
            char *name = new char[20]; // better in a more accurate function
            cin >> name;
            cin >> id >> YOB >> cou_num;
            // code
            break;
        case 3:
            char *name = new char[5];
            int id;
            cout << "enter party name and leader id " << endl;
            cin >> name;
            cin >> id;
            // code
            break;
        case 4:
            cout << "enter new rep id, serial number of the party and county" << endl;
            int id, party, county;
            cin >> id >> party >> county;
            // code
            break;
        case 5:
            //code
            break;
        case 6:
            // code
            break;
        case 7:
            // code
            break;
        case 8:
            // code
            break;
        case 9:
            // code
            break;
        case 10:
            flag = false;
            break;

        default:
            break;
        } // switch

    } // while loop
}

int main()
{

    menu();
}