//
//  availableBuses.cpp
//  Bus Reservation
//
//  Created by Farhan Syed on 5/31/20.
//  Copyright © 2020 Farhan Syed. All rights reserved.
//

#include <fstream>
#include "availableBuses.hpp"
#include "prettyPrint.hpp"

void availableBuses(){
    
    string busNumber, driver, timeOut, timeIn, from, to;

    ifstream bus("bus.txt");

    while (bus >> busNumber >> driver >> timeOut >> timeIn >> from >> to) {
        
        prettyPrint(busNumber, driver, timeOut, timeIn, from, to);

    }
    
    bus.close();
    
}
