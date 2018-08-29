#ifndef GRID_H
#define GRID_H

#include <vector>
#include "Node.h"

class Grid
{
public:
    Grid();
    Grid(int width, int height);
    Node* getNode(int row, int col);

private:
    int gridWidth;
    int gridHeight;
    std::vector<std::vector<Node*>> grid;
};

#endif // GRID_H
