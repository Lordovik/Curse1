#include "stdlib.h"
#include <locale.h>
#include "TestApp.h"
#include <QtWidgets/QApplication>



int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	TestApp w;
	w.show();
	return a.exec();
}
