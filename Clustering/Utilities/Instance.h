#ifndef INSTANCE_H
#define INSTANCE_H

#include "Utilities.h"

const int DEFAULT_CATEGORY = -1;

class Instance
{
private:
	vector<double> features;
	int category;

public:
	Instance ();
	Instance (vector<double> &features, int category = DEFAULT_CATEGORY);

	void getFeatures (vector<double> &features) const;
	void setFeatures (const vector<double> &features);
	void getFeature (double &feature, const int &index) const;
	void setFeature (const double &newFeature, const int &index);
	void addFeature (const double &newFeature);
	void getCategory (int &category) const;
	void setCategory (const int &category);
};

#endif