#ifndef EVALUATION_H
#define EVALUATION_H

#include "../Instance/Instance.h"

// TODO: replace precision with some other evaluation indecies
void Evaluation (double &precision, const vector<int> &predictions, const vector<Instance> &instances);

#endif