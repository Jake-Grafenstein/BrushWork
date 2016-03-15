#ifndef PEN_H
#define PEN_H
//
// Project: BrushWorkApp
// Title: Pen.h
// Author: Jacob Grafenstein
// Author URI: https://github.com/Jake-Grafenstein
// Description: A header file for hte Pen class. Inherits from Tool.
//

class Tool;

class Pen: public Tool
{
public:
  Pen();
  virtual ~Pen();
};

#endif
