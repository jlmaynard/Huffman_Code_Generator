//
//  rowData.cpp
//  theHuff
//

#include "rowData.h"

rowData::rowData() : _freq(0.0), _code("tbd"), _ch(' '), _count(0)
{
   // default constructor 
}

rowData::rowData(double freq, string code, char ch, int count)
{
   _freq = freq;
   _code = code;
   _ch = ch;
   _count = count; 
}

