#ifndef _BUILDER_H_
#define _BUILDER_H_
#include <vector>
#include <string>
#include "info.h"
#include "Vertex.h"
#include "Edge.h"
#include "Dice.h"

class Builder{
    const std::string builderName;
    std::vector<int> builderResources; // vector of the number of resources
                                       // that the builder has in the order of
                                       // Brick, Energy, Glass, Heat, Wifi, Park
    std::vector<Vertex*> builderResidences; // vector of the vertices that the builder
                                           // has a residence on
    std::vector<Edge*> builderRoads; // vector of the edges that the builder has a road on
    BUILDER_STATE builderState;
    bool firstRound;
    int builderPoint;
    Dice builderDice;

    public:
    std::string getBuilderName();
    std::vector<int> getBuilderResources();
    std::vector<Vertex*> getBuilderResidences();
    std::vector<Edge*> getBuilderRoads();
    BUILDER_STATE getBuilderState();
    bool isFirstRound();
    int getBuilderPoint();
    Dice getDice();
    void updateBuilderResources(std::vector<int> update);
    void setResidences(const int position);
    void setRoads(const int position);
    void setBuilderState();
    void setFirstRound();
    void updateBuilderPoint(int update);
    void setDice(Dice* dice);

};


#endif
