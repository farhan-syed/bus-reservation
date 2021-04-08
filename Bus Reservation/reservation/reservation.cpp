//
//  reservation.cpp
//  Bus Reservation
//
//  Created by Farhan Syed on 5/31/20.
//  Copyright © 2020 Farhan Syed. All rights reserved.
//

#include <fstream>
#include "reservation.hpp"
#include "prettyPrint.hpp"

void reservation(){

    string busNumber, driver, timeOut, timeIn, from, to;

    ifstream bus("bus.txt");

    while (bus >> busNumber >> driver >> timeOut >> timeIn >> from >> to) {

        prettyPrint(busNumber, driver, timeOut, timeIn, from, to);

    }

    string busNum, seatNumber, name;

    cout << "Enter Bus No.: ";
    cin >> busNum;

    cout << "Seat Number: 1-10: ";
    cin >> seatNumber;

    cout << "Name: ";
    cin >> name;

    ofstream dataOut;
    dataOut.open("passengers.txt", std::ios_base::app);

    

    dataOut << busNum + " ";
    dataOut << seatNumber + " ";
    dataOut << name + " ";

    dataOut << endl;
    
    cout << endl;
    cout << "Your reservation on bus no. " << busNum << " at seat num. " << seatNumber << " has been made.";
    
    dataOut.close();

}
