//
//  rowData.h
//  theHuff
//

#include <iostream>
#include <string>

using namespace std;

#ifndef theHuff_rowData_h
#define theHuff_rowData_h

class rowData
{
public:
   // constructors
   rowData(); 
   rowData(double freq, string code, char ch, int count);
   
   double _freq;
   string _code;
   char _ch;
   int _count; 
};

#endif
