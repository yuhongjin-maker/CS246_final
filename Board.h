#ifndef _BOARD_H_
#define _BOARD_H_
#include <vector>
#include "Builder.h"
#include "Tile.h"
#include "TextDisplay.h"

class Board {
    public:
    std::vector<Tile*> tiles;
    std::vector<Vertex*> vertices;
    std::vector<Edge*> edges;
    std::vector<Builder*> builders;
    bool geeseCanSteal;

    void init();
    void createTextDisplay();
    void buildRoad(const int edgeNum);
    void buildResidence(const int vertexNum);
    void tradingResource(const std::string builderName, const std::string resourceOne, const std::string resourceTwo);
    void nextBuilder();
    void saveFile(std::string fileName);
    void acceptInput(const std::string inputCommand);
    void geeseDropResrouce();
    void geesePlace(int tileNum);
    void geeseStealResource();
    void setDiceType(std::string diceType);
};

#endif
