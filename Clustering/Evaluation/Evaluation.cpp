#include "Evaluation.h"

void Evaluation (double &precision, const vector<int> &predictions, const vector<Instance> &instances)
{
}

double getDaviesBouldinIndex (const double &numOfClusters)
{
	double dbi = 0.0;
	double sum = 0.0;
	for (unsigned i = 0; i < numOfClusters; ++i) {
		double max = 0.0;
		for (unsigned j = 0; j < numOfClusters; ++j) {
			if (j != i) {
				double tmp = (avgDis(cluster[i]) + avgDis(cluster[j])) / (dis (ci, cj));
				if (tmp > max)
					max = tmp;
			}
		}
	}
	dbi = sum / numOfClusters;
	return dbi;
}