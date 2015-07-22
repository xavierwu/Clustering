#include "DataPreprocessing/DataPreprocessing.h"
#include "KMeans/KMeans.h"
#include "Evaluation/Evaluation.h"

int main (int argc, char **argv)
{
	string dataFile = "Dataset/smileface.txt";
	vector<Instance> instances;
	DataPreprocessing (instances, dataFile);

	vector<int> predictions;
	KMeans (predictions, instances);

	double precision = 0.0;
	Evaluation (precision, predictions, instances);

	std::cout << precision << std::endl;

	return 0;
}