/**
 * @file main.cpp
 * @author Shantanu Parab (sparab@umd.edu)
 * @brief 
 * @version 0.1
 * @date 2022-10-09
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
#include "../include/AnalogSensor.hpp"

int main() {
    AnalogSensor lightSensor(5);
    std::cout << "Averaged sensor reading: " << lightSensor.Read() << std::endl;
    bool terminator = false;
    if ( terminator ) {
        std::cout << "DONE" << std::endl;
    }
    return 0;
}

