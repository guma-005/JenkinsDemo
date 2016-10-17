/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   testHouse.cpp
 * Author: Uma
 * 
 * Created on October 17, 2016, 10:26 AM
 */

#include "testHouse.hpp"
#define BOOST_TEST_MODULE MyTest

//#include "boost/test/unit_test.hpp"
#define BOOST_TEST_MAIN
#define BOOST_TEST_STATIC_LINK
#define BOOST_AUTO_TEST_MAIN


#include <boost/test/auto_unit_test.hpp>
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(MasterSuite)
BOOST_AUTO_TEST_CASE(test1)
{
    cout<<" Entered into test class "<<endl;
    
    Bed myBed;
    myBed.bedSize = 10;
   
    int size = 15;
    //BOOST_CHECK( test_object.is_valid() );
    BOOST_CHECK_EQUAL(myBed.getBedSize(), size);
}
BOOST_AUTO_TEST_SUITE_END()
