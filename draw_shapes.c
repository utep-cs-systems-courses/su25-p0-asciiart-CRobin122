#include <stdio.h>
#include "draw.h"

/* Prints a size x size square whose left col is at startCol */
void print_square(int leftCol, int size)
{
  int i, j;
  int endCol = leftCol + size;
  for (int row = 0; row < size; row++){
    int col;
    for (col = 0; col < leftCol; col++) putchar(' ');
    for (       ; col < endCol;  col++) putchar('*');
    putchar('\n');
  }
}

// Prints a triangle of specified height whose left edge is at col leftCol.
void print_triangle(int leftCol, int size)
{
  for (int row = 0; row <= size; row++) {
    int minCol = leftCol + size - row, maxCol = leftCol + size + row;
    int col;
    for (col = 0; col < minCol; col++) putchar(' ');
    for (       ; col <= maxCol; col++) putchar('*');
    putchar('\n');
  }
}
//prints a triangle using the triangle method and using some code from print_sqaure to make the base
void print_arrow(int leftCol, int size)
{
  print_triangle(leftCol, size);
  
  int baseHeight = size / 2;
  int baseWidth = size;

  int baseLeftCol = leftCol + size / 2;

  for(int row = 0; row < baseHeight; row++){
    int col;
    for(col = 0; col < baseLeftCol; col++) putchar(' ');
    for(       ; col < baseLeftCol + baseWidth; col++) putchar('*');
    putchar('\n');
  }
}
