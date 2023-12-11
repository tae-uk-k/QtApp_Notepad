#include "QtApp_Notepad.h"
#include<qmessagebox.h>
#include <QMessageBox>

QtApp_Notepad::QtApp_Notepad(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    connect(ui.actionNew, SIGNAL(triggered()), this, SLOT(newFile()));
    connect(ui.actionOpen, SIGNAL(triggered()), this, SLOT(openFile()));
    connect(ui.actionSave, SIGNAL(triggered()), this, SLOT(saveFile()));

}

QtApp_Notepad::~QtApp_Notepad(){

}
void QtApp_Notepad::newFile() {
    QMessageBox msgBox;
    msgBox.setText("action new file");
    msgBox.setStandardButtons(QMessageBox::Ok| QMessageBox::Cancel);
    msgBox.setDefaultButton(QMessageBox::Ok);

    if (msgBox.exec() == QMessageBox::Ok) {
		msgBox.close();
	}
}
void QtApp_Notepad::openFile() {
    QMessageBox msgBox;
    msgBox.setText("action open file");
    msgBox.setStandardButtons(QMessageBox::Ok | QMessageBox::Cancel);
    msgBox.setDefaultButton(QMessageBox::Ok);

    if (msgBox.exec() == QMessageBox::Ok) {
		msgBox.close();
	}
}
void QtApp_Notepad::saveFile() {
    QMessageBox msgBox;
    msgBox.setText("action save file");
    msgBox.setStandardButtons(QMessageBox::Ok | QMessageBox::Cancel);
    msgBox.setDefaultButton(QMessageBox::Ok);

    if (msgBox.exec() == QMessageBox::Ok) {
        msgBox.close();
    }
}