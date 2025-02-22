#include <iostream>

using namespace std;

int main(){
    //define the conversion rates for each money
    int dollar_value{100};
    int quarter_value{25};
    int dime_value{10};
    int nickel_value{5};
    int penny_value{1};
   
    //define the currency
    int dollar{}, quarter{}, dime{}, nickel{}, penny{};
    
    // define other variables
    int balance{}, change_amt{};
    
    //input the amount and save
    cout << "Enter the amount in cents: ";
    cin >> change_amt;
    
    //calculate dollar
    dollar = change_amt/dollar_value;
    balance = change_amt % dollar_value;
    
    //calculate quarter
    quarter = balance/quarter_value;
    balance = balance % quarter_value;
    
    // calculate dime
    dime = balance/dime_value;
    balance = balance % dime_value;
    
    // calculate nickel
    nickel = balance/nickel_value;
    balance = balance % nickel_value;
    
    //calculate penny
    penny = balance/penny_value;
    balance = balance % penny_value;
    
    //Print the change
    cout << "You can provide the change as follows: " << endl;
    cout << "dollars: " << dollar << endl;
    cout << "quarters: " << quarter << endl;
    cout << "dimes: " << dime << endl;
    cout << "nickels: " << nickel << endl;
    cout << "pennies: " << penny << endl;
    
    
    return 0;
    }
