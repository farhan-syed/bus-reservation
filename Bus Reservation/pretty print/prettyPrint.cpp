//
//  prettyPrint.cpp
//  Bus Reservation
//
//  Created by Farhan Syed on 5/31/20.
//  Copyright © 2020 Farhan Syed. All rights reserved.
//

#include "prettyPrint.hpp"
#include <iomanip>

void prettyPrint(string busNumber, string driver, string timeLeaving, string timeArriving, string leavingFrom, string destination){
    
    const int width = 13;
    const string sep = " |";
    const float total_width = width * 6.8 + sep.size();
    const string line = sep + string(total_width-1, '-') + '|';
    
    
    cout << line << '\n' << sep << setw(width) << "Bus Number" << sep << setw(width) << "Driver" << sep
    << setw(width) << "Departure" << sep << setw(width) << "Arrival" << sep
    << setw(width) << "From" << sep << setw(width) << "To" << sep
    << '\n' << line << '\n';
    
    for (int i = 0; i < 1; ++i){
        cout << sep << setw(width) << busNumber << sep << setw(width) << driver << sep
          << setw(width) << timeLeaving << sep << setw(width) << timeArriving << sep
          << fixed << setprecision(2)
          << setw(width) << leavingFrom << sep << setw(width) << destination << sep
        << '\n' ;
    }
    
    cout << line << '\n' << endl;
    
}

void prettyPrintSeatChart(string array[11]){

    cout << "ARRAY : " << array[0];
    
    const int width = 13;
    const string sep = " |";
    const float total_width = width * 11.4 + sep.size();
    const string line = sep + string(total_width-1, '-') + '|';
    
    
    cout << line << '\n' << sep << setw(width) << "1" << sep << setw(width) << "2" << sep
    << setw(width) << "3" << sep << setw(width) << "4" << sep
    << setw(width) << "5" << sep << setw(width) << "6" << sep
    << setw(width) << "7" << sep << setw(width) << "8" << sep
    << setw(width) << "9" << sep << setw(width) << "10" << sep
    << '\n' << line << '\n';
    
    for (int i = 0; i < 1; ++i){
        cout << sep << setw(width) << array[i] << sep << setw(width) << array[i] << sep
          << setw(width) << array[i] << sep << setw(width) << array[i] << sep
          << fixed << setprecision(2)
          << setw(width) << array[i] << sep << setw(width) << array[i] << sep
        << setw(width) << array[i] << sep << setw(width) << array[i] << sep
        << setw(width) << array[i] << sep << setw(width) << array[i] << sep
        << '\n' ;
    }
    
    cout << line << '\n' << endl;
    
    
}
