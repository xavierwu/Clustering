#ifndef DATA_PREPROCESSING_H
#define DATA_PREPROCESSING_H

#include "../Instance/Instance.h"

/* Suppose the dataFile is in format: feature1 feature2 ... featureN realCategory */
void DataPreprocessing (vector<Instance> &instances, const string &dataFile);

#endif