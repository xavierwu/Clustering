#ifndef EVALUATION_H
#define EVALUATION_H

#include "../Utilities/Instance.h"

// TODO: replace precision with some other evaluation indecies
void Evaluation (double &precision, const vector<int> &predictions, const vector<Instance> &instances);

// Internal Evaluation
/* Lower is better */
double getDaviesBouldinIndex ();
double getDunnIndex ();
double getSilhouetteCoefficient ();

// External Evaluation


#endif