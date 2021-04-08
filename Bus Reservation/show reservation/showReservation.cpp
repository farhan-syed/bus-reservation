//
//  showReservation.cpp
//  Bus Reservation
//
//  Created by Farhan Syed on 5/31/20.
//  Copyright © 2020 Farhan Syed. All rights reserved.
//

#include <fstream>
#include "showReservation.hpp"
#include "prettyPrint.hpp"
#include <string.h>

void extraData(string bus){
    
    ifstream passengers("passengers.txt");
    
    string busNumber, seatNumber, name;
    
    string array[11] = {};
    
    while(passengers >> busNumber >> seatNumber >> name){

        if (busNumber == bus){
            
            for (int i = 1; i < 11; i++){
                
                int convert = std::stoi(seatNumber);
                
                if (convert == i){
                    
                    array[convert] = name;
                    
                }
                
                
            }
            
        }

    }
    
    for (int i = 1; i < 11; i++){
        if (array[i].empty()){
            array[i] = "EMPTY";
        }
    }
    
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
    
    
        cout << sep << setw(width) << array[1] << sep << setw(width) << array[2] << sep
          << setw(width) << array[3] << sep << setw(width) << array[4] << sep
          << fixed << setprecision(2)
          << setw(width) << array[5] << sep << setw(width) << array[6] << sep
        << setw(width) << array[7] << sep << setw(width) << array[8] << sep
        << setw(width) << array[9] << sep << setw(width) << array[10] << sep
        << '\n' ;
    
    
    cout << line << '\n' << endl;
    
    passengers.close();
    
}


void showReservation(){
    
    string enteredNumber;
    
    cout << "Enter Bus Number: ";
    
    cin >> enteredNumber;
    
    cout << endl;
    
    string busNumber, driver, timeOut, timeIn, from, to;

    ifstream bus("bus.txt");

    while (bus >> busNumber >> driver >> timeOut >> timeIn >> from >> to) {
    
        if (busNumber == enteredNumber) {
            
            prettyPrint(busNumber, driver, timeOut, timeIn, from, to);

            ifstream passengers("passengers.txt");

            string selectedBusNumber, selectedSeatNumber, name;

            int takenSeats = 0;
            
            while (passengers >> selectedBusNumber >> selectedSeatNumber >> name) {
                
                if (busNumber == selectedBusNumber) {
                    
                    takenSeats++;
                    
                }

            }

            int seatsLeft = 10 - takenSeats;

            cout << endl;
            cout << "There are " << seatsLeft << " empty seats in Bus No: " << busNumber << endl;
            cout << endl;
            extraData(busNumber);

        }
        

    }
    
    bus.close();
    
}
