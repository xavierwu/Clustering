#include "DataPreprocessing.h"

void DataPreprocessing (vector<Instance> &instances, const string &dataFile)
{
	ifstream fin;
	fin.open (dataFile, ios::in);
	string line = "";
	vector<double> features;
	int realCategory = -1;
	double tmp;

	while (std::getline (fin, line)) {
		features.clear ();
		stringstream ss (line);
		while (ss >> tmp)
			features.push_back (tmp);
		Instance instance;
		for (unsigned i = 0; i < features.size (); ++i) {
			if (i == features.size () - 1)
				instance.setCategory (features[i]);// NOTE: cast from double to int
			else
				instance.addFeature (features[i]);
		}
		instances.push_back (instance);
	}

	fin.close ();
}