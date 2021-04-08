//
//  install.cpp
//  Bus Reservation
//
//  Created by Farhan Syed on 5/31/20.
//  Copyright © 2020 Farhan Syed. All rights reserved.
//

#include "install.hpp"
#include <fstream>


void install(){

 // Create a text file

    string busNumber, driverName, departureTime, arrivalTime, destinationFrom, destinationTo;

    cout << "Enter Bus No.: ";
    cin >> busNumber;

    cout << "Driver Name: ";
    cin >> driverName;

    cout << "Departure Time: ";
    cin >> departureTime;

    cout << "Arrival Time: ";
    cin >> arrivalTime;

    cout << "From: ";
    cin >> destinationFrom;

    cout << "To: ";
    cin >> destinationTo;


    // Create and open a text file
    ofstream dataOut;
    dataOut.open("bus.txt", std::ios_base::app);

    // Write to the file

    dataOut << busNumber + " ";
    dataOut << driverName + " ";
    dataOut << departureTime + " ";
    dataOut << arrivalTime + " ";
    dataOut << destinationFrom + " ";
    dataOut << destinationTo;
    dataOut << endl;
    dataOut << endl;
    // Close the file
    dataOut.close();


}
