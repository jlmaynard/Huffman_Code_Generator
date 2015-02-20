////////////////////////////////////////////////////////////////////////////////
//  main.cpp
//  theHuff
//
//  Created by Jason L Maynard on 7/16/13.
//  Project 3
////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <fstream> 
#include <string> 

#include "Huffman.h"

using namespace std; 

/*******************************************************************************
 MAIN FUNCTION DRIVES THE PROGRAM
 ******************************************************************************/
int main()
{   
   // STEP 1 - READ INPUT FILE
   string fileName = "message.txt";
   Huffman huff;
      
   // STEP 2 - CALCULATE CHAR FREQUENCY
   huff.calcFreq();   
  
   // STEP 3 - CONSTRUCT HUFFMAN CODE
   huff.makeCode();
   
   // STEP 4 - WRITE RESULTS TO FILE
   huff.writeResults();
   
}//end main ********************************************************************











