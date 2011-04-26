#include "textAreas.h"

gLABText::gLABText() {}

uint8_t gLABText::DefineArea(
  predefinedLABArea selection,
  textMode          mode) {

  uint8_t    x1, y1, x2, y2;
  TareaToken tok;

  tok.token = selection;

  x1 = tok.coord.x1;
  y1 = tok.coord.y1;
  x2 = tok.coord.x2;
  y2 = tok.coord.y2;

  return(this->DefineArea(x1, y1, x2, y2, mode));
}