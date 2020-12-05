#ifndef _INFO_H
#define _INFO_H

// Each state represents the type of residence built on the vertex
enum class VERTEX_STATE {NotOccupied, Basement, House, Tower};

// Each state represents the owner of the road built on the edge
enum class EDGE_STATE {NotOccupied, Blue, Red, Orange, Yellow};

// Type of the dice
enum class DICE_TYPE {Loaded, Fair};

// Active means it is currently the builder's turn to roll
enum class BUILDER_STATE {Active, Inactive};

// All resources
enum class RESOURCES {Brick, Energy, Glass, Heat, Wifi, Park};

// Name of the builders
enum class BUILDER_NAME {Blue, Red, Orange, Yellow};

#endif

