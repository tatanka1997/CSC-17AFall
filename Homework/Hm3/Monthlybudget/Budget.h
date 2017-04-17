/* 
 * File:   Budget.h
 * Author: erikn
 *
 * Created on March 29, 2017, 3:08 PM
 */

#ifndef BUDGET_H
#define BUDGET_H

struct Budg{
    float hous, //Housing
          util, //Utilities
          hexp, //Household expenses
          trns, //Transportation
          food, //Food
          meds, //Medical
          insr, //Insurance
          entr, //Entertainment
          clot, //Clothing
          misc; //Miscellaneous
    float totl=0.00f; //Total monthly spending
};

#endif /* BUDGET_H */

