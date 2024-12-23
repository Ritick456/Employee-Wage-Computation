#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;


void wagecalculation(int employeetype){

    switch(employeetype){
        case 1:
            cout << "Employee is Full Time and his wage is "<< " " << 8 * 20 << endl;
            break;
        default :
            cout << "Employee is Part Time and his wage is" << " " << 4 * 20 << endl;

    }

}

int main(){

    cout << "Welcome to Employee-Wage-Computation" << endl;

     srand(time(0));

        int randombit = rand() % 2; 
        
        switch(randombit){

            case 0:
                cout << "Employee is Absent" << endl;
                break;
            default :
                cout << "Employee is Present" << endl;

                int employeetype = rand() % 2;
                wagecalculation(employeetype);

                
        }

    return 0;
}