#ifndef nvFEATURESTRUCTS_H
#define nvFEATURESTRUCTS_H

#include "nmNeuron.h"

namespace nv
{
	struct SegmentFeature
	{
		
		int segmentID = -1;
		int segmentType = -1;
		double length = 0.0;
		double averageRadius = 0.0;
		int nodesNum = 0;
		int bifurcationPointsNum = 0;
		int endPointsNum = 0;
	};
}

#endif
