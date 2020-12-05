#ifndef _EDGE_H_
#define _EDGE_H_
#include <vector>
#include "info.h"

class Edge {
    public:

    // fields
    int edgeNumber;
    BUILDER_NAME edgeOwner; // builder of this road
    std::vector<BUILDER_NAME> whoCanBuild; // vector of builder who can build on this edge

    // methods
    // builds a road for the owner and updates the info of the edge
    void setRoad();
};

#endif
