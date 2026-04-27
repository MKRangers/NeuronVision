#include "nvSegmentGenerator.h"

using namespace std;

namespace nv
{
	void SegmentGenerator::setUpTrueSegments(NeuronSP neuron)
	{
		mTrueNeuron = neuron;
		mTrueNeuron->populateSegments();
		mTrueSegments = mTrueNeuron->getSegments();
		for (auto& seg : mTrueSegments)
		{
			if (!seg.empty())
				seg.pop_front();
		}
	}

	void SegmentGenerator::setUpFalseSegments(NeuronSP neuron)
	{
		mFalseNeurons.push_back(neuron);
		mFalseNeurons.back()->populateSegments();
		const vector<Neuron::Segment>& segments = mFalseNeurons.back()->getSegments();
		mFalseSegments.insert(mFalseSegments.end(), segments.begin(), segments.end());
		for (auto& seg : mFalseSegments)
		{
			if (!seg.empty())
				seg.pop_front();
		}
	}

}