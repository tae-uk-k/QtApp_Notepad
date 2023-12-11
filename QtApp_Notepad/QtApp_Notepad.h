#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QtApp_Notepad.h"

class QtApp_Notepad : public QMainWindow
{
    Q_OBJECT

public:
    QtApp_Notepad(QWidget *parent = nullptr);
    ~QtApp_Notepad();

private:
    Ui::QtApp_NotepadClass ui;
public slots:
    void newFile();
    void openFile();
    void saveFile();
};
