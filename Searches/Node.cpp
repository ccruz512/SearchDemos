#include "Node.h"
#include <iostream>
Node::Node()
{
    walkable = true;
    color = Qt::gray;
}

Node::Node(int i, int j)
{
    walkable = true;
    color = Qt::gray;
    width = 50;
    topLeft = std::make_pair(i * width, j * width);
    bottomRight = std::make_pair(topLeft.first + width, topLeft.second + width);
    std::cout << "(" << topLeft.first << " " << topLeft.second << ")";
    std::cout << ", (" << bottomRight.first << " " << bottomRight.second << ")" << std::endl;
}

QRectF Node::boundingRect() const
{
    return QRect(topLeft.first, topLeft.second, width, width);
}

void Node::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    QRectF rec = boundingRect();
    QBrush brush(Qt::blue);

    if (walkable)
    {
        brush.setColor(color);
    }
    else
    {
        brush.setColor(Qt::blue);
    }

    painter->fillRect(rec, brush);
    painter->drawRect(rec);
}

void Node::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    walkable = !walkable;
    update();
    QGraphicsItem::mousePressEvent((event));
}
