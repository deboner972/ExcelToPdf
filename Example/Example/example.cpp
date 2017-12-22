#include "example.h"
#include "ui_example.h"
#include <QFileDialog>
#include <QString>
#include <QPushButton>

Example::Example(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
}

Example::~Example()
{

}

QString paramSourceBookPath;
QString paramSourceBookName;
QString paramExportFilePath;
QString paramExportFileName;
