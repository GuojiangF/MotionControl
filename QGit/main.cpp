#include "QGit.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QGit w;
	w.show();
	return a.exec();
}
