// Name: Austin Bland
// Program Purpose: To calculate a car payment
// Date: 10-5-18

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float total;
    float price;
    string name;
    string road_name;
    string city;
    string state;
    int zip;
    int account_number;
    float interest = 0.04;
    int months;
    float price_with_interest;
    
    cout << fixed << showpoint; //fixes the decimal and shows it
    cout << setprecision(2); //sets the precision to two numbers after the decimal point

    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter your road name: ";
    cin >> road_name;

    cout << "Enter your city: ";
    cin >> city;

    cout << "Enter your state: ";
    cin >> state;

    cout << "Enter your ZIP code: ";
    cin >> zip;

    cout << "Enter your account number: ";
    cin >> account_number;

    cout << "Enter price of vehicle: ";
    cin >> price;

    cout << "Enter how many months for payment: ";
    cin >> months;


    price_with_interest = price * interest + price;
    total = price_with_interest / months;

    system("clear");
    cout << "Receipt for Car Payment: " << endl;
    cout << "\n";
    cout << "Name: " << name;
    cout << "\t\t" "Road Name: " << road_name << endl;
    cout << "City: " << city;
    cout << "\t\t" "State: " << state << endl;
    cout << "ZIP:  " << zip;
    cout << "\t\t" "Account Number: " << account_number << endl;
    cout << "\n";
    cout << "Price: $" << price;
    cout << "\t" "Months: " << months << endl;
    cout << "\n";
    cout << "Total Monthly Payment Amount: $" << total << endl;

    return 0;
}