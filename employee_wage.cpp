#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;


void wagecalculation(int employeetype, int &fulltimeempmonthlysalary, int &parttimeempmonthlysalary){

    switch(employeetype){
        case 1:
            //cout << "Employee is Full Time and his wage is "<< " " << 8 * 20 << endl;
            fulltimeempmonthlysalary += 8*20;
            break;

        default :
            //cout << "Employee is Part Time and his wage is" << " " << 4 * 20 << endl;
            parttimeempmonthlysalary += 4*20;

    }

}

int main(){

    cout << "Welcome to Employee-Wage-Computation" << endl;

    int parttimeempmonthlysalary = 0;
    int fulltimeempmonthlysalary = 0;
    srand(time(0));

    for(int i=1; i<=20; i++){

        int randombit = rand() % 2;
        
        switch(randombit){

            case 0:
                cout << "Day" << " " << i << " " << "Employee is Absent" << endl;
                break;
            default :
                cout << "Day" << " " << i << " " <<"Employee is Present" << endl;

                int employeetype = rand() % 2;
                wagecalculation(employeetype, parttimeempmonthlysalary, fulltimeempmonthlysalary);

        }
    }

    cout << "Monthly salary of full time employee is" << " "  << fulltimeempmonthlysalary << endl;
    cout << "Monthly salary of part time employee is" << " " << parttimeempmonthlysalary << " " << endl;

    return 0;
}