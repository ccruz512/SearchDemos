#ifndef NODE_H
#define NODE_H

#include <QPainter>
#include <QGraphicsItem>
#include <utility>

class Node : public QGraphicsItem
{
public:
    Node();
    Node(int i, int j);

    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

private:
    bool walkable;
    QColor color;
    std::pair<int, int> topLeft;
    std::pair<int, int> bottomRight;
    int width;

protected:
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
};

#endif // NODE_H
