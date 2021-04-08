//
//  menu.cpp
//  Bus Reservation
//
//  Created by Farhan Syed on 5/31/20.
//  Copyright © 2020 Farhan Syed. All rights reserved.
//

#include <iostream>
#include "menu.hpp"
#include "install.hpp"
#include "reservation.hpp"
#include "showReservation.hpp"
#include "availableBuses.hpp"

void showMenu() {
    
    int selection;

    do {

        cout<< endl << "|--------------------------------------|";
        cout<< endl << "|        1 - Install Bus Info          |";
        cout<< endl << "|--------------------------------------|";
        cout<< endl << "|           2 - Reservation            |";
        cout<< endl << "|--------------------------------------|";
        cout<< endl << "|   3 - Show Reservation Information   |";
        cout<< endl << "|--------------------------------------|";
        cout<< endl << "|         4 - Buses Available          |";
        cout<< endl << "|--------------------------------------|";
        cout<< endl << "|               5 - Exit               |";
        cout<< endl << "|--------------------------------------|";
        cout<< endl << "Enter selection:  ";
        cin>>selection;
        
        cout << endl;
        
        switch(selection)

        {


        case 1 : install();
        break;
        case 2 : reservation();
        break;
        case 3 : showReservation();
        break;
        case 4 : availableBuses();
        break;
        case 5 :{cout<<"\n Exit \n";}
        break;
        default : cout<<"\n Invalid selection";

        }

        cout<<"\n";
        
    } while (selection != 5);
    
}
