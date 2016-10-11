/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Bed.hpp
 * Author: Uma
 *
 * Created on October 11, 2016, 2:01 PM
 */

#ifndef BED_HPP
#define BED_HPP

class Bed {
public:
    Bed();
    Bed(const Bed& orig);
    virtual ~Bed();
    int getBedSize();
private:
    int bedSize;

};

#endif /* BED_HPP */

