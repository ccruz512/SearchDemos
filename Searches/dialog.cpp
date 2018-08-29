#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    scene = new QGraphicsScene(this);
    ui->graphicsView->setScene(scene);

    myGrid = new Grid(25, 15);
    for (int i = 0; i < 25; ++i){
        for (int j = 0; j < 15; ++j){
            scene->addItem(myGrid->getNode(i, j));
        }
    }

    this->setFixedSize(26 * 50, 16 * 50);
    this->adjustSize();
}

Dialog::~Dialog()
{
    delete ui;
}
