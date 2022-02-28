#include <vector>
#include "constants.h"


process getNext(std::vector<process> &myProcesses);

int getSize(std::vector<process> &myProcesses);

int handleMissingData(std::vector<process> &myProcesses);

void sort(const SORT_ORDER &mySortOrder,std::vector<process> &myProcesses);