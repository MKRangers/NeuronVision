#ifndef nvSEGMENTGENERATOR_H
#define nvSEGMENTGENERATOR_H

#include "nmNeuron.h"

#include <vector>

using namespace nm;

namespace nv
{

	class SegmentGenerator
	{
		public:
			SegmentGenerator() = default;
			~SegmentGenerator() = default;

			void setUpTrueNeuronSegments(NeuronSP neuron);
			void setUpFalseNeuronSegments(NeuronSP neuron);
			const std::vector<Neuron::Segment>& getTrueNeuronSegments() const { return mTrueSegments; }
			const std::vector<Neuron::Segment>& getFalseNeuronSegments() const { return mFalseSegments; }

		private:
			std::vector<Neuron::Segment> mTrueSegments;
			std::vector<Neuron::Segment> mFalseSegments;

			NeuronSP mTrueNeuron;
			std::vector<NeuronSP> mFalseNeurons;
	};

}

#endif