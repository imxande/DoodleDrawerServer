#ifndef GAMEMANAGER_H
#define GAMEMANAGER_H

#include <QObject>

class GameManager : public QObject {
  Q_OBJECT  

public:
  explicit GameManager(QObject *parent = nullptr);
  ~GameManager();

signals:
  void testSignal();
};

#endif // GAMEMANAGER_H
