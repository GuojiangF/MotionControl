#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QGit.h"

class QGit : public QMainWindow
{
	Q_OBJECT

public:
	QGit(QWidget *parent = Q_NULLPTR);

private:
	Ui::QGitClass ui;
};
