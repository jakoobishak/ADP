#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <vector>
#include "shape.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

    void drawShape(QPainter &painter, Shape &shape);
    QPainterPath path;

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

protected:
    void paintEvent(QPaintEvent *event) override;

private slots:


    void on_actionSquare_triggered();

    void on_actionCircle_triggered();

    void on_actionTriangle_triggered();

private:
    Ui::MainWindow *ui;
    std::vector<Shape> _shapeFromIndex;
};

#endif // MAINWINDOW_H
