/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Room.h
 * Author: Uma
 *
 * Created on October 11, 2016, 1:56 PM
 */

#ifndef ROOM_H
#include "House.h"
#define ROOM_H

class Room : public House {
public:
    Room();
    Room(const Room& orig);
    virtual ~Room();
    
    int RoomSize();
private:
    int size;

};

#endif /* ROOM_H */

