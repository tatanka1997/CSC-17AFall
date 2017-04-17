/* 
 * File:   movieproft.h
 * Author: erikn
 *
 * Created on March 29, 2017, 10:28 AM
 */

#ifndef MOVDATA_H
#define MOVDATA_H

struct MovData{
    string title; //Movie title
    string drctr; //Director
    int    year;  //Year released
    short  runtm; //Runtime in minutes
    short  bdgt;  //Movie Budget (in millions)
    short  grss;  //Gross Earnings (in millions)
};

#ifdef __cplusplus
extern "C" {
#endif




#ifdef __cplusplus
}
#endif

#endif /* MOVDATA_H */


