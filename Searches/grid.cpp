#include "grid.h"

Grid::Grid()
{
    gridWidth = 50;
    gridHeight = 50;
    for (int i = 0; i < gridWidth; ++i){
        std::vector<Node*> row;
        for (int j = 0; j < gridHeight; ++j){
            Node* currentNode = new Node(i, j);
            row.push_back(currentNode);
        }
        grid.push_back(row);
    }
}

Grid::Grid(int width, int height)
{
    gridWidth =width;
    gridHeight = height;
    for (int i = 0; i < gridWidth; ++i){
        std::vector<Node*> row;
        for (int j = 0; j < gridHeight; ++j){
            Node* currentNode = new Node(i, j);
            row.push_back(currentNode);
        }
        grid.push_back(row);
    }
}

Node* Grid::getNode(int row, int col)
{
    return grid[row][col];
}
