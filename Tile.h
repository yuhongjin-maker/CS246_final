#ifndef _TILE_H_
#define _TILE_H_
#include "info.h"
#include "Vertex.h"
#include "Builder.h"
#include "Edge.h"

class Tile {
    public:
    RESOURCES resourceType;
    int tileNumber;
    int tileValue;
    std::vector<Vertex*> vertices;
    std::vector<Edge*> edges;
    std::vector<Builder*> builders;
    bool geeseExist;
};

#endif
