#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;


void wagecalculation(int employeetype, int &fulltimeempmonthlysalary, int &parttimeempmonthlysalary , int &totalhrswork, int &totalworkeddays){

    switch(employeetype){
        case 1:
            //cout << "Employee is Full Time and his wage is "<< " " << 8 * 20 << endl;
            fulltimeempmonthlysalary += 8*20;
            totalhrswork = totalhrswork + 8;
            totalworkeddays++;
            break;

        default :
            //cout << "Employee is Part Time and his wage is" << " " << 4 * 20 << endl;
            parttimeempmonthlysalary += 4*20;
            totalhrswork = totalhrswork + 4;
            totalworkeddays++;

    }

}

int main(){

    cout << "Welcome to Employee-Wage-Computation" << endl;

    int parttimeempmonthlysalary = 0;
    int fulltimeempmonthlysalary = 0;
    int totalhrs = 100;
    int totalworkingdays = 20;

    int totalhrswork = 0;
    int totalworkeddays = 0;
    int i = 1;

    srand(time(0));


    while(totalhrs > totalhrswork && totalworkingdays > totalworkeddays){
        int randombit = rand() % 2;
        
        switch(randombit){

            case 0:
                cout << "Day" << " " << i++ << " " << "Employee is Absent" << endl;
                totalworkeddays++;
                break;
            default :
                cout << "Day" << " " << i++ << " " <<"Employee is Present" << endl;

                int employeetype = rand() % 2;
                wagecalculation(employeetype, parttimeempmonthlysalary, fulltimeempmonthlysalary , totalhrswork, totalworkeddays);

        }
    }

        
    cout << "Monthly salary of full time employee is" << " "  << fulltimeempmonthlysalary << endl;
    cout << "Monthly salary of part time employee is" << " " << parttimeempmonthlysalary << " " << endl;

    return 0;
}