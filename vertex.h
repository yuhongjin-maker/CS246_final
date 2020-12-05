#ifndef _VERTEX_H_
#define _VERTEX_H_
#include <vector>
#include "info.h"

class Vertex {
    public:

    //fields
    int vertexNumber;
    VERTEX_STATE vertexState;
    BUILDER_NAME vertexOwner;
    std::vector<BUILDER_NAME> whoCanBuild;

    //methods
    void setResidence();
    void upgrade();
};

#endif
