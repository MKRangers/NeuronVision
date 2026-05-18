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
			std::vector<const Neuron::Segment*> getTrueNeuronSegments() const;
			std::vector<const Neuron::Segment*> getFalseNeuronSegments() const;

		private:
			std::vector<Neuron::Segment> mTrueNeuronSegments;
			std::vector<Neuron::Segment> mFalseNeuronSegments;

			// Neuron objects may be modified by this class by calling populateSegments if the segments are not populated when the neuron is created.
			// Also, neuron objects could also be owned by other classes or processes at the same time, so we use shared_ptr here.
			NeuronSP mTrueNeuron;
			std::vector<NeuronSP> mFalseNeurons;
	};

}

#endif