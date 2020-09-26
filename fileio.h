/*
 * fileio.h
 *
 *  Created on: Sep 23, 2020
 *      Author: dylan
 */

#ifndef FILEIO_FILEIO_H
#define FILEIO_FILEIO_H

#include <string>
#include <vector>
#include "../includes/constants.h"

int loadData(const std::string filename, std::vector<process> &myProcesses);

//attempt to create or open file 'filename' to write all data to
//returns SUCCESS if all goes well or COULD_NOT_OPEN_FILE
int saveData(const std::string filename, std::vector<process> &myProcesses);

#endif /* FILEIO_H_ */
