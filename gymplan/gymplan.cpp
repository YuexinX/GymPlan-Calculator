//
//  main.cpp
//  gymplan
//
//  Created by Time Thief on 7/3/22.
//

#include <iostream>
#include <string>
using namespace std;


int main()
{
    double planCost=0, extra_everyday=0, extra_access=0, discount=0, disc_auto=0, disc_paper=0;
    int count=10, num1=1, num2=2, num3=3, num4=4, num5=5, num6=6;//check error inputs
    //ask for kind of Plan
    string plan;
    cout << "What kind of gym membership plan do you want to buy?";
    getline(cin,plan);
    //check the type of plan and return the planCost
    if (plan == "Executive")
    {
        planCost = 100.00;
    }
    else if (plan == "Basic")
    {
        planCost = 50.00;
    }
    else
    {
        if (num1 < count)
        {
            count = num1;
        }
    }
    //ask for the type of membership
    string membership;
    cout << "What type of gym membership do you want to buy?";
    getline(cin, membership);
    //check the type of membership and return the discount
    if (membership == "Adult")
    {
         discount = 0.00;
    }
    else if (membership == "Child")
    {
         discount = 0.50;
    }
    else if (membership == "Senior")
    {
         discount = 0.25;
    }
    else
    {
        if (num2 < count)
        {
            count = num2;
        }
    }
    //ask for days of workout
    string daysWorkout;
    cout << "Which days do you want to workout?";
    getline(cin,daysWorkout);
    //check the day and apply extra charge
    if ((daysWorkout == "Odd" )||(daysWorkout == "Even"))
    {
         extra_everyday = 0.00;
    }
    else if (daysWorkout == "Everyday")
    {
         extra_everyday = 25.00;
    }
    else
    {
        if (num3<count)
        {
            count = num3;
        }
    }
    //ask for number of facilities access
    string facilities;
    cout << "which facilities do you want to access to?";
    getline(cin,facilities);
    //check facilities and apply extra charge
    if (facilities == "Just One")
    {
         extra_access = 0.00;
    }
    else if (facilities == "Regional")
    {
         extra_access = 30.00;
    }
    else if (facilities == "National")
    {
         extra_access = 50.00;
    }
    else
    {
        if (num4<count)
        {
            count=num4;
        }
    }
    // are you on autopay
    string autopay;
    cout << "Are you on autopay?";
    getline(cin,autopay);
    //check if have autopay and apply discounts
    if (autopay == "Yes")
    {
         disc_auto = 2.00;
    }
    else if (autopay == "No")
    {
         disc_auto = 0.00;
    }
    else
    {
        if (num5<count)
        {
            count = num5;
        }
    }
    //are you on paperless billing
    string paperless;
    cout << "Are you on paperless billing?";
    getline(cin,paperless);
    //check if have paperless and apply discounts
    if (paperless == "Yes")
    {
         disc_paper = 3.00;
    }
    else if (paperless == "No")
    {
         disc_paper = 0.00;
    }
    else
    {
        if(num6<count)
        {
            count = num6;
        }
    }
    //calculate the mmebership: (planCost + extra_everyday + extra_access)*(1-Discount)-(disc_auto+disc_paper)
    //check for the first error input and the message that should be printed.
    switch (count)
    {
        case 1:
            cout << "Your kind of membership plan is not valid!\n";
            break;
        case 2:
            cout << "Your type of membership is not valid!\n";
            break;
        case 3:
            cout << "Your membership days are not valid!\n";
            break;
        case 4:
            cout << "Your facilities choice is not valid!\n";
            break;
        case 5:
            cout << "Your autopay is not valid!\n";
            break;
        case 6:
            cout << "Your paperless billing is not valid!\n";
            break;
        default:
            double total_cost = (planCost + extra_everyday + extra_access)*(1-discount) - (disc_auto + disc_paper);
            cout.setf(ios::fixed);
            cout.setf(ios::showpoint);
            cout.precision(2);
            
            cout << endl;
            cout << "Your " << plan << " gym membership costs $" << total_cost<<endl;
    }
    return (0);
}
