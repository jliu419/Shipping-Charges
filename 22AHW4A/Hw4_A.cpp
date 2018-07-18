/**
PART A
Shipping Charges (Chapter 4, Project 13 – 7th edition, Project 15 – 8th edition):

    @author Jiaming Liu
    @date July 14th 2018
 */

#include <iostream>
#include <iomanip>

using namespace std;


int main()
{
    // VARIABLES
    double weight, cost, rate;
    int distance;
    
    // CONSTANTS
    const double WEIGHTTYPE1 = 1.5;
    const double WEIGHTTYPE2 = 7.5;
    const double RATELEVEL1 = 1.1;
    const double RATELEVEL2 = 3.7;
    
    // PRINTING INFO
    cout << "Print Info: 1" << endl;
    cout << "~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~" << endl;
    cout << "~*~ Jiaming Liu                           ~*~" << endl;
    cout << "~*~ CIS 22A, Summer 2018, De Anza College ~*~" << endl;
    cout << "~*~ xcode                                 ~*~" << endl;
    cout << "~*~ Homework 4: Shipping Charges          ~*~" << endl;
    cout << "~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~" << endl;
    cout << endl << endl;
    
    
    // The requirement is to print 4 values, weight, distance, rate, cost
    
    // first get the weight and distance // test if they are valid before moving on
    cout << "enter the weight of the package, no more than 7.5: ";
    cin >> weight;
    cout << "enter the distance of the place you are planning to ship from here: ";
    cin >> distance;
    
    if (distance <= 0 || weight > WEIGHTTYPE2 || weight <= 0)
    {
        cout << "Incorrect input\n\n";
        return 0; // stop the program
    }
    
    // then get rate
    rate = weight <= WEIGHTTYPE1 ? RATELEVEL1: RATELEVEL2;
    
    // now get cost by multiplying rate * distance/500
    // this is correct true except when distance is exactly divisible over 500, that case doesn't need to add one
    if (distance % 500 == 0) // if it is divisible by 0
    {
        cost = rate * distance/500;
    }
    else
    {
        cost = rate * (static_cast<int>(1.0*distance/500) + 1);
    }
    
    cout << "\n-------- ---------- ---------------------------- --------" << endl;
    cout << "   Weight   Distance   Rate per 500 Miles Shipped   Charge" << endl;
    cout << "  ======== ========== ============================ ========" << endl;
    cout << "    " << weight << "      " << distance << setprecision(2) << fixed << "                    " << rate << "              " << cost << endl << endl;
    
    return 0;
}

/*
 Print Info: 1
 ~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~
 ~*~ Jiaming Liu                           ~*~
 ~*~ CIS 22A, Summer 2018, De Anza College ~*~
 ~*~ xcode                                 ~*~
 ~*~ Homework 4: Shipping Charges          ~*~
 ~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~
 
 
 enter the weight of the package, no more than 7.5: 1.5
 enter the distance of the place you are planning to ship from here: 500
 
 -------- ---------- ---------------------------- --------
 Weight   Distance   Rate per 500 Miles Shipped   Charge
 ======== ========== ============================ ========
 1.5      500                    1.10              1.10
 
 Program ended with exit code: 0
 
 Print Info: 1
 ~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~
 ~*~ Jiaming Liu                           ~*~
 ~*~ CIS 22A, Summer 2018, De Anza College ~*~
 ~*~ xcode                                 ~*~
 ~*~ Homework 4: Shipping Charges          ~*~
 ~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~
 
 
 enter the weight of the package, no more than 7.5: 1.5
 enter the distance of the place you are planning to ship from here: 501
 
 -------- ---------- ---------------------------- --------
 Weight   Distance   Rate per 500 Miles Shipped   Charge
 ======== ========== ============================ ========
 1.5      501                    1.10              2.20
 
 Program ended with exit code: 0
 
 Print Info: 1
 ~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~
 ~*~ Jiaming Liu                           ~*~
 ~*~ CIS 22A, Summer 2018, De Anza College ~*~
 ~*~ xcode                                 ~*~
 ~*~ Homework 4: Shipping Charges          ~*~
 ~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~
 
 
 enter the weight of the package, no more than 7.5: 1.5
 enter the distance of the place you are planning to ship from here: 999
 
 -------- ---------- ---------------------------- --------
 Weight   Distance   Rate per 500 Miles Shipped   Charge
 ======== ========== ============================ ========
 1.5      999                    1.10              2.20
 
 Program ended with exit code: 0
 
 Print Info: 1
 ~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~
 ~*~ Jiaming Liu                           ~*~
 ~*~ CIS 22A, Summer 2018, De Anza College ~*~
 ~*~ xcode                                 ~*~
 ~*~ Homework 4: Shipping Charges          ~*~
 ~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~
 
 
 enter the weight of the package, no more than 7.5: 1.5
 enter the distance of the place you are planning to ship from here: 1000
 
 -------- ---------- ---------------------------- --------
 Weight   Distance   Rate per 500 Miles Shipped   Charge
 ======== ========== ============================ ========
 1.5      1000                    1.10              2.20
 
 Program ended with exit code: 0
 
 Print Info: 1
 ~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~
 ~*~ Jiaming Liu                           ~*~
 ~*~ CIS 22A, Summer 2018, De Anza College ~*~
 ~*~ xcode                                 ~*~
 ~*~ Homework 4: Shipping Charges          ~*~
 ~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~
 
 
 enter the weight of the package, no more than 7.5: 1.5
 enter the distance of the place you are planning to ship from here: 1001
 
 -------- ---------- ---------------------------- --------
 Weight   Distance   Rate per 500 Miles Shipped   Charge
 ======== ========== ============================ ========
 1.5      1001                    1.10              3.30
 
 Program ended with exit code: 0
 
 Print Info: 1
 ~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~
 ~*~ Jiaming Liu                           ~*~
 ~*~ CIS 22A, Summer 2018, De Anza College ~*~
 ~*~ xcode                                 ~*~
 ~*~ Homework 4: Shipping Charges          ~*~
 ~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~
 
 
 enter the weight of the package, no more than 7.5: 1.5
 enter the distance of the place you are planning to ship from here: 1500
 
 -------- ---------- ---------------------------- --------
 Weight   Distance   Rate per 500 Miles Shipped   Charge
 ======== ========== ============================ ========
 1.5      1500                    1.10              3.30
 
 Program ended with exit code: 0
 
 Print Info: 1
 ~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~
 ~*~ Jiaming Liu                           ~*~
 ~*~ CIS 22A, Summer 2018, De Anza College ~*~
 ~*~ xcode                                 ~*~
 ~*~ Homework 4: Shipping Charges          ~*~
 ~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~
 
 
 enter the weight of the package, no more than 7.5: 1.5
 enter the distance of the place you are planning to ship from here: 1501
 
 -------- ---------- ---------------------------- --------
 Weight   Distance   Rate per 500 Miles Shipped   Charge
 ======== ========== ============================ ========
 1.5      1501                    1.10              4.40
 
 Program ended with exit code: 0
 
 Print Info: 1
 ~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~
 ~*~ Jiaming Liu                           ~*~
 ~*~ CIS 22A, Summer 2018, De Anza College ~*~
 ~*~ xcode                                 ~*~
 ~*~ Homework 4: Shipping Charges          ~*~
 ~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~
 
 
 enter the weight of the package, no more than 7.5: 7.5
 enter the distance of the place you are planning to ship from here: 200
 
 -------- ---------- ---------------------------- --------
 Weight   Distance   Rate per 500 Miles Shipped   Charge
 ======== ========== ============================ ========
 7.5      200                    3.70              3.70
 
 Program ended with exit code: 0
 
 Print Info: 1
 ~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~
 ~*~ Jiaming Liu                           ~*~
 ~*~ CIS 22A, Summer 2018, De Anza College ~*~
 ~*~ xcode                                 ~*~
 ~*~ Homework 4: Shipping Charges          ~*~
 ~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~
 
 
 enter the weight of the package, no more than 7.5: 7.5
 enter the distance of the place you are planning to ship from here: 520
 
 -------- ---------- ---------------------------- --------
 Weight   Distance   Rate per 500 Miles Shipped   Charge
 ======== ========== ============================ ========
 7.5      520                    3.70              7.40
 
 Program ended with exit code: 0
 */


