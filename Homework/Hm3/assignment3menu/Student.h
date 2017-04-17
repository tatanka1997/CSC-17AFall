/* 
 * File:   Student.h
 * Author: erikn
 *
 * Created on March 29, 2017, 2:50 PM
 */

#ifndef STUDENT_H
#define STUDENT_H

struct Student{
    std::string name;    //Student name 
    int         stuID;   //Student ID
    int         *tests;  //Array of test scores
    int         tstSize; //Number of test scores
    float       avg;     //Average test score
    char        grade;   //Letter Grade
};

#endif /* STUDENT_H */