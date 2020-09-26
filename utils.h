/*
 * utils.h
 *
 *  Created on: Sep 23, 2020
 *      Author: dylan
 */

#ifndef INCLUDES_USR_UTILS_H_
#define INCLUDES_USR_UTILS_H_
#include <iostream>
#include <string>
#include <vector>
#include "../includes/constants.h"

void sortData(const SORT_ORDER &mySortOrder,std::vector<process> &myProcesses);

//gets the next process from the vector, then removes it from the vector
//returns removed process
process getNext(std::vector<process> &myProcesses);

//returns the number of entries in the vector
int getSize(std::vector<process> &myProcesses);

//attempt to correct missing data
//if cannot correct, then drop row
//return number of rows in myProcesses
int handleMissingData(std::vector<process> &myProcesses);




#endif /* UTILS_H_ */