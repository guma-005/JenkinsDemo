/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Chair.hpp
 * Author: Uma
 *
 * Created on October 11, 2016, 1:59 PM
 */

#ifndef CHAIR_HPP
#define CHAIR_HPP

class Chair {
public:
    Chair();
    Chair(const Chair& orig);
    virtual ~Chair();
    int GetChairs();
private:
    int numberOfChairs;
};

#endif /* CHAIR_HPP */

