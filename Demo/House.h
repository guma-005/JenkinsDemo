/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   House.h
 * Author: Uma
 *
 * Created on October 10, 2016, 4:51 PM
 */

#ifndef HOUSE_H
#define HOUSE_H

#include <iostream>
using namespace std;

class House {
public:
    House();
    House(const House& orig);
    virtual ~House();
    
    std::string WhoAreYou();
private:

};

#endif /* HOUSE_H */

