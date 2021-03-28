#include "Arduino.h"
#include "Snake.h"

Snake::Snake(){};

void Snake::NewGame(){
    XY body;
    body.X = matrixWidth/2;
    body.Y = matrixHeight/2;
    snakeBody.clear();
    snakeBody.add(body);
    snakeLength = 1;
    setRandomFood();
    SetActiveDivection(Snake::eDirection::Left);
    gameOver = false;
    //gameActive = true;
}

void Snake::setMatrix(int matrixWidthIn, int matrixHeightIn)
{
    matrixHeight = matrixHeightIn;
    matrixWidth = matrixWidthIn;
}

Snake::~Snake(){};


//return the snakeLength of the snake
int Snake::getLength()
{
    return snakeLength;
}

//set the food position
void Snake::setRandomFood()
{
    food.X = random(0, matrixWidth - 1);
    food.Y = random(0, matrixHeight - 1);
}

void Snake::SetActiveDivection(eDirection directionIn)
{

    if(((directionIn == Left && activeDirection == Right) ||
        (directionIn == Right && activeDirection == Left) ||
        (directionIn == Up && activeDirection == Down) ||
        (directionIn == Down && activeDirection == Up)) &&
        snakeLength > 1) {
           return;
       }
       else{
         activeDirection = directionIn;
       }
}

//updates the body of the snake
void Snake::recalculateBody()
{
    XY tempHead = snakeBody.get(0);

    //set new head position
    switch (activeDirection)
    {
    case Left:
        tempHead.X--;
        break;
    case Up:
        tempHead.Y++;
        break;
    case Right:
        tempHead.X++;
        break;
    case Down:
        tempHead.Y--;
        break;
    }

    //add the new head
    snakeBody.add(0, tempHead);

    //resize the snake body to the actal snakeLength
    for (int i = snakeLength; i < snakeBody.size(); i++)
    {
        snakeBody.remove(i);
    }
}

void Snake::checkIfValid()
{
    for (int i = 0; i < snakeLength; i++)
    {
        if (((snakeBody.get(0).X == snakeBody.get(i).X) && (snakeBody.get(0).Y == snakeBody.get(i).Y) && snakeLength > 3 && i > 0 )||
            (snakeBody.get(0).X < 0) || (snakeBody.get(0).X > matrixWidth-1) ||
            (snakeBody.get(0).Y < 0) || (snakeBody.get(0).Y > matrixHeight-1))
        {
            Snake::gameOver = true;
            //Snake::gameActive = false;
            Serial.println("move not valid");
            break;
        }
    }
}

void Snake::MoveSnake()
{
    //update the body
    recalculateBody();
    checkIfValid();

    //check if Snake got the food -> increase on next tick
    if ((food.X == snakeBody.get(0).X) && (food.Y == snakeBody.get(0).Y))
    {
        snakeLength++;
        setRandomFood();
    }
}
