#include "nvSegmentGenerator.h"

using namespace std;
using namespace nm;

namespace nv
{
	void SegmentGenerator::setUpTrueNeuronSegments(NeuronSP neuron)
	{
		mTrueNeuron = neuron;
		mTrueNeuron->populateSegments();
		mTrueNeuronSegments = mTrueNeuron->getSegments();
		for (auto& seg : mTrueNeuronSegments)
		{
			if (!seg.empty())
				seg.pop_front();
		}
	}

	void SegmentGenerator::setUpFalseNeuronSegments(NeuronSP neuron)
	{
		mFalseNeurons.push_back(neuron);
		mFalseNeurons.back()->populateSegments();
		const vector<Neuron::Segment>& segments = mFalseNeurons.back()->getSegments();
		mFalseNeuronSegments.insert(mFalseNeuronSegments.end(), segments.begin(), segments.end());
		for (auto& seg : mFalseNeuronSegments)
		{
			if (!seg.empty())
				seg.pop_front();
		}
	}

	vector<const Neuron::Segment*> SegmentGenerator::getTrueNeuronSegments() const
	{
		vector<const Neuron::Segment*> segments;
		for (const auto& seg : mTrueNeuronSegments)
			segments.push_back(&seg);
		
		return segments;
	}

	vector<const Neuron::Segment*> SegmentGenerator::getFalseNeuronSegments() const
	{
		vector<const Neuron::Segment*> segments;
		for (const auto& seg : mFalseNeuronSegments)
			segments.push_back(&seg);
		
		return segments;
	}

}