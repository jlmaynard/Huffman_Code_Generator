//
//  Huffman.cpp
//  theHuff
//
//

#include "Huffman.h"

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <cassert>
#include <vector>

using namespace std;

// Constructor with default arguments opening input and ouput file streams
Huffman::Huffman() : _inFile("message.txt"), _outFile("messageCode.txt")
{
   assert(_inFile.good()); //error checking
   assert(_outFile.good()); 
}

// Destructor to close files when object dies
Huffman::~Huffman()
{
   _inFile.close();
   _outFile.close(); 
}

void Huffman::calcFreq()
{
   // The total number of characters in the file
   _numChar = 0;
   
   // Initialize a table of 256 rows
   
   rowData r;
   
   for (int i=0; i<256; i++)
   {
      _outTable.push_back(r); 
   }

   
   // Read the character from the file stream
   char _ch = _inFile.get();
   
   cout << "*** The input file looks like this... ***" << endl; 
   
   // If the char is not the end of file then...
   do
   {
      cout << _ch;//DEBUG
      
      // Update table with new character and count
      _outTable[_ch]._ch = _ch;
      _outTable[_ch]._count++;
      
      //get the next char from file
      _ch = _inFile.get();
      _numChar++;
      
   } while (_ch != EOF);//end while !EOF
   
   // Calculate frequencies for each character based on total chars
   
   for (int i=0; i<256; i++)
   {
      _outTable[i]._freq = (_outTable[i]._count / (double)_numChar);
   }
   
//   _outTable[106]._freq = .5;
   
}//end calcFreq()

void Huffman::makeCode() //not war
{
   
}
void Huffman::writeResults()
{
   cout << "\n\nThe total number of characters in file = " << _numChar << endl;
   
   //
   // Output to terminal
   //
   cout << "\n"; 
   cout << left << setw(10) << "Freq" << setw(10)
   << "Code" << setw(10) << "Char" << setw(10) << "Count" << endl;
   
   for (int i = 0; i < _outTable.size(); i++) //rows
   {
      cout << left << setw(10) << _outTable[i]._freq << setw(10)
      << _outTable[i]._code << setw(10) << _outTable[i]._ch
      << setw(10) << _outTable[i]._count<< endl;
   }
   
   //
   // Output to file "messageCode.txt"
   //
   _outFile << left << setw(10) << "Freq" << setw(10)
   << "Code" << setw(10) << "Char" << endl;
   
   for (int i = 0; i < _outTable.size(); i++) //rows
   {
      _outFile << left << setw(10) << _outTable[i]._freq << setw(10)
      << _outTable[i]._code << setw(10) << _outTable[i]._ch << endl;
   }
   
   
}//end writeResults()