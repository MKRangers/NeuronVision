#include "core\graph\nvSegmentGenerator.h"

#include <iostream>

using namespace std;
using namespace nv;

int main()
{
	NeuronSP n = std::make_shared<Neuron>("D:\\Work\\Connectome_refinement\\FINAL_2873Cells_SWCfiles\\15257_2226-X16029-Y23953_reg_xy25z25_xy0z0.swc");
	SegmentGenerator generator;
	generator.setUpTrueSegments(n);
	const vector<Neuron::Segment>& trueSegments = generator.getTrueSegments();
	cout << "True segments num: " << trueSegments.size() << endl;
	system("pause");
	return 0;
}