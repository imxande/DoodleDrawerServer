#include <QCoreApplication>

int main(int argc, char *argv[]) {
  // init server
  QCoreApplication server(argc, argv);

  // event loop
  return server.exec();
}
