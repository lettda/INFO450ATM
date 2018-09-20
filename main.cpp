#include <iostream>
#include <cmath>
using namespace std;


int main()
{
    double input; //declare variable to store use input for desired withdraw amount as double to preserve any entered change (i.e $55.33)
    string confirm; //declare variable to check store user input to run again or not
    do {
        do { //Ask for valid user withdraw amount
            cout << "Please enter an amount to withdraw from yor account.\n Minimum withdrawl amount: $1" << endl;
            cin >> input; //save user input into withdrawAmount variable
        } while (input < 1); //continue to ask for input if number entered was less than $1
        int withdrawAmount = input; //declare variable to store input value as an integer
        
        
        //Print greatest # of bills that can be taken from the withdrawlAmount
        if (withdrawAmount / 50 != 0 ) {
            cout << "$50 bills: "<< withdrawAmount / 50 << endl; //Print number of $50 bills
        }
        withdrawAmount = fmod(withdrawAmount, 50);
        if ((withdrawAmount %= 50) / 20 != 0) {
            cout << "$20 bills: " << (withdrawAmount %= 50) / 20 << endl; // Divide overall withdraw amount by previous bill size and then new bill size
        }
        withdrawAmount = fmod(withdrawAmount, 20);
        if ((withdrawAmount %= 20) / 10 != 0) {
            cout << "$10 bills: " << (withdrawAmount %= 20) / 10 << endl; //Print number of $10 bills
        }
        withdrawAmount = fmod(withdrawAmount, 10);
        if ((withdrawAmount %= 10) / 5 != 0) {
            cout << "$5 bills: " << (withdrawAmount %= 10) / 5 << endl;//Print number of $5 bills
        }
        withdrawAmount = fmod(withdrawAmount, 5);
        if ((withdrawAmount %= 5) / 1 != 0) {
            cout << "$1 bills: " << (withdrawAmount %= 5) / 1 << endl; //Print number of $1 bills
        }
        withdrawAmount = fmod(withdrawAmount, 1);
        if (input -int(input) != 0) {
            cout << "Remaining: " << input -int(input) << endl; //Pirnt any change left over
        }
        cout << "Would you like to withdraw any more?\n Enter: yes or no" << endl; //Ask user to continue or end
        cin >> confirm;
    } while (confirm == "yes");
    
    return 0;
}
