#include "Box.h"

// Implement setters and 
 void Box::setLength(int Len)
{
  length=Len;
  
}
void Box::setWidth(int wid)
{
  width=wid;
}
void Box::setHeight(int hei)
{
   height=hei;
}
int Box::getLength()
{
  return length;
}
int Box::getWidth()
{
  return width;
}
int Box::getHeight()
{
  return height; 
}

// Implemenet the calcVolume() unction
int Box::calcVolume() {
  return length*width*height;
}
