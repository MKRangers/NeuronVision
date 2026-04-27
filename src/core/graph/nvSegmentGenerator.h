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

			void setUpTrueSegments(NeuronSP neuron);
			void setUpFalseSegments(NeuronSP neuron);
			const std::vector<Neuron::Segment>& getTrueSegments() const { return mTrueSegments; }
			const std::vector<Neuron::Segment>& getFalseSegments() const { return mFalseSegments; }

		private:
			std::vector<Neuron::Segment> mTrueSegments;
			std::vector<Neuron::Segment> mFalseSegments;

			NeuronSP mTrueNeuron;
			std::vector<NeuronSP> mFalseNeurons;
	};

}

#endif