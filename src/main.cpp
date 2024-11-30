#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[]) {
  // init server
  QCoreApplication a(argc, argv);

  // sanity check
  qDebug() << "Application runing...";

  // event loop
  return a.exec();
}
