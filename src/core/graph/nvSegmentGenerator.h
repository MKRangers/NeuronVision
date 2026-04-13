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


		private:
			std::vector<Neuron::Segment> mTrueSegments;
			std::vector<Neuron::Segment> mFalseSegments;

			NeuronSP mTrueNeuron;
			std::vector<NeuronSP> mFalseNeurons;
	};

}

#endif