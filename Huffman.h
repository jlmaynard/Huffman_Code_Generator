//
//  aRow.h
//  theHuff
//
//
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

#include "rowData.h"

using namespace std;

#ifndef theHuff_Huffman_h
#define theHuff_Huffman_h

class Huffman
{
public:
   // Member Functions
   Huffman(); //constructor
   ~Huffman(); // destructor
   void calcFreq();
   void makeCode();
   void writeResults();
   
   // Data members
   ifstream _inFile;
   ofstream _outFile; 
   int _numChar;
   
   // rowData _data;
   
   vector<rowData> _outTable;
};

#endif
