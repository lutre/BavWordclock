#ifndef Snake_h
#define Snake_h

#include "Arduino.h"
#include "XY.h"
#include <LinkedList.h>

class Snake
{
  public:
    enum eDirection{Left, Up, Right, Down };
    Snake();
    ~Snake();
    void setMatrix(int matrixWidthIn, int matrixHeightIn);
    int getLength();
//    void gameActive;
    //void moveHead(Direction direction);
    void MoveSnake();
    void SetActiveDivection(Snake::eDirection);
    bool gameOver;
    void NewGame();
    LinkedList<XY> snakeBody;
    XY food;

  private:
    //matrix dimesions
    int matrixHeight;
    int matrixWidth;
    int snakeLength;
    XY head;
    bool snakeJustGotFood;
    eDirection activeDirection;
    void setRandomFood();
    void recalculateBody(); 
    void checkIfValid();
};

#endif

