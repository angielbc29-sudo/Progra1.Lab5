#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_PruebaQT2.h"

class PruebaQT2 : public QMainWindow
{
    Q_OBJECT

public:
    PruebaQT2(QWidget *parent = nullptr);
    ~PruebaQT2();

private:
    Ui::PruebaQT2Class ui;
};

