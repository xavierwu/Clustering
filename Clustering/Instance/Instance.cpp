#include "Instance.h"

Instance::Instance () : features (), category (DEFAULT_CATEGORY)
{
}

Instance::Instance (vector<double> &features, int category) : features (features), category (category)
{
}

void Instance::getFeatures (vector<double> &features) const
{
	features = this->features;
}

void Instance::setFeatures (const vector<double> &features)
{
	this->features = features;
}

void Instance::getFeature (double &feature, const int &index) const
{
	feature = this->features[index];
}

void Instance::setFeature (const double &newFeature, const int &index)
{
	this->features[index] = newFeature;
}

void Instance::addFeature (const double &newFeatures)
{
	this->features.push_back (newFeatures);
}

void Instance::getCategory (int &category) const
{
	category = this->category;
}

void Instance::setCategory (const int &category)
{
	this->category = category;
}
