/**
 * @file Sphere.cpp
 * @author Yariv Barsheshat (yariv@barsheshat.com)
 * @brief basic test class for Sphere, to calculate volume and surface area.
 * @version 0.1
 * @date 2022-08-25
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "Sphere.h"
#include <iostream>
#include <cmath>
#include <string>

const double PI = 3.1415926535898;

using namespace std;

Sphere::Sphere(double rad){
    cout << "making a sphere now!" << endl;

    rad = radValidate(rad);

    rad_ = rad;
}

/**
 * @brief 
 * 
 * @return double 
 */
double Sphere::getRad(){
    return rad_;
}

double Sphere::getSurfaceArea(){
    return 4.0*PI*pow(rad_, 2);
}

double Sphere::getVolume(){
    return (4.0/3.0)*PI*pow(rad_, 3);
}

void Sphere::setRad(double rad){

    rad = radValidate(rad);
    rad_ = rad;
    return;
}

void Sphere::printDetails(){
    cout << "radius: " << getRad() << endl;
    cout << "area: " << getSurfaceArea() << endl;
    cout << "volume: " << getVolume() << endl;
    return;
}

double Sphere::radValidate(double rad){
    
    while (rad <= 0){
        cout << "ERROR: radius entered is non-positive\n" << endl;
        while (1){
            cout << "Please enter a numerical value for radius:";
            if (cin >> rad){
                break;
            } else {
                cout << "Invalid entry, please try again..." << endl;
                cin.clear();
                while (cin.get() != '\n') ;
            }
        }
    }

    return rad;
}