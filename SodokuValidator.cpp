#include <iostream>
#include <fstream>


using namespace std;

bool LoadFile(string filename, int data[][9]){
  ifstream infile;
  infile.open(filename);
  int numTemp;
  bool loadTrue = true;
  if(infile){
    for(int r = 0; r < 9;r++ ){
      for(int c = 0; c < 9 ;c++){
        if(infile >> numTemp)
          data[r][c] = numTemp;
        else 
          return 0;
      } 
    }
  }
  else if(data[0][0] == data[0][1]) 
  {
    loadTrue = false;
  }
  
 
  return loadTrue;     
}


bool TestRow(const int data[][9] , int row){
  int temp ,int1 = 0 , int2 = 0, int3 = 0, int4 = 0, int5 = 0 , int6 = 0, int7 = 0, int8 = 0, int9 = 0;
  for(int c = 0; c < 9; c++){
    temp = data[row][c];
    switch(temp){
      case 1:
        int1++;
        if(int1 != 1){return 0;}
        break;
      case 2:
        int2++;
        if(int2 != 1){return 0;}
        
        break;
      case 3:
        int3++;
        if(int3 != 1){return 0;}
        
        break;
      case 4:
        int4++;
        if(int4 != 1){return 0;}
          
        break;
      case 5:
        int5++;
        if(int5 != 1){return 0;}
          
        break;
      case 6:
        int6++;
        if(int6 != 1){return 0;}
          
        break;
      case 7:
        int7++;
        if(int7 != 1){return 0;}
          
        break;
      case 8:
        int8++; 
        if(int8 != 1){return 0;}
         
        break;
      case 9:
        int9++;
        if(int9 != 1){return 0;}
        
        break;
    }
  }
  
  return 1;
}



bool TestColumn(const int data[][9], int col){
  int temp, int1 = 0 , int2 = 0, int3 = 0, int4 = 0, int5 = 0 , int6 = 0, int7 = 0, int8 = 0, int9 = 0;
  for(int r = 0; r < 9; r++){
    temp = data[r][col];
    switch(temp){
      case 1:
        int1++;
        if(int1 != 1){return 0;}
        break;
      case 2:
        int2++;
        if(int2 != 1){return 0;}
        
        break;
      case 3:
        int3++;
        if(int3 != 1){return 0;}
        
        break;
      case 4:
        int4++;
        if(int4 != 1){return 0;}
          
        break;
      case 5:
        int5++;
        if(int5 != 1){return 0;}
          
        break;
      case 6:
        int6++;
        if(int6 != 1){return 0;}
          
        break;
      case 7:
        int7++;
        if(int7 != 1){return 0;}
          
        break;
      case 8:
        int8++; 
        if(int8 != 1){return 0;}
         
        break;
      case 9:
        int9++;
        if(int9 != 1){return 0;}
        
        break;
      }
  }
  return 1;
}



bool TestBox(const int data[][9], int box){
  int  temp, int1 = 0 , int2 = 0, int3 = 0, int4 = 0, int5 = 0 , int6 = 0, int7 = 0, int8 = 0, int9 = 0;
  switch (box) {
    case 1:
      int1 = 0 , int2 = 0, int3 = 0, int4 = 0, int5 = 0 , int6 = 0, int7 = 0, int8 = 0, int9 = 0;
      for (int row = 0; row < 3; row++) {
        for (int column = 0; column < 3; column ++) {
          
          temp = data[row][column];
          switch(temp){
            case 1:
              int1++;
              if(int1 != 1){return false;}
              break;
            case 2:
              int2++;
              if(int2 != 1){return false;}
              
              break;
            case 3:
              int3++;
              if(int3 != 1){return 0;}
              
              break;
            case 4:
              int4++;
              if(int4 != 1){return 0;}
                
              break;
            case 5:
              int5++;
              if(int5 != 1){return 0;}
                
              break;
            case 6:
              int6++;
              if(int6 != 1){return 0;}
                
              break;
            case 7:
              int7++;
              if(int7 != 1){return 0;}
                
              break;
            case 8:
              int8++; 
              if(int8 != 1){return 0;}
               
              break;
            case 9:
              int9++;
              if(int9 != 1){return 0;}
              
              break;
            }
        
            }
          } 
          break;
      
    case 2:
      int1 = 0 , int2 = 0, int3 = 0, int4 = 0, int5 = 0 , int6 = 0, int7 = 0, int8 = 0, int9 = 0;
        for (int row = 0; row < 3; row++) {
        for (int column = 3; column < 6; column ++) {
          
          temp = data[row][column];
          switch(temp){
            case 1:
              int1++;
              if(int1 != 1){return 0;}
              break;
            case 2:
              int2++;
              if(int2 != 1){return 0;}
              
              break;
            case 3:
              int3++;
              if(int3 != 1){return 0;}
              
              break;
            case 4:
              int4++;
              if(int4 != 1){return 0;}
                
              break;
            case 5:
              int5++;
              if(int5 != 1){return 0;}
                
              break;
            case 6:
              int6++;
              if(int6 != 1){return 0;}
                
              break;
            case 7:
              int7++;
              if(int7 != 1){return 0;}
                
              break;
            case 8:
              int8++; 
              if(int8 != 1){return 0;}
               
              break;
            case 9:
              int9++;
              if(int9 != 1){return 0;}
              
              break;
            }
        
            }
          } 
          break;

    case 3:
      int1 = 0 , int2 = 0, int3 = 0, int4 = 0, int5 = 0 , int6 = 0, int7 = 0, int8 = 0, int9 = 0;
      for (int row = 0; row < 3; row++) {
        for (int column = 6; column < 9; column ++) {
          
          temp = data[row][column];
          switch(temp){
            case 1:
              int1++;
              if(int1 != 1){return 0;}
              break;
            case 2:
              int2++;
              if(int2 != 1){return 0;}
              
              break;
            case 3:
              int3++;
              if(int3 != 1){return 0;}
              
              break;
            case 4:
              int4++;
              if(int4 != 1){return 0;}
                
              break;
            case 5:
              int5++;
              if(int5 != 1){return 0;}
                
              break;
            case 6:
              int6++;
              if(int6 != 1){return 0;}
                
              break;
            case 7:
              int7++;
              if(int7 != 1){return 0;}
                
              break;
            case 8:
              int8++; 
              if(int8 != 1){return 0;}
               
              break;
            case 9:
              int9++;
              if(int9 != 1){return 0;}
              
              break;
            }
        
            }
          } 
          break;

    case 4:
      int1 = 0 , int2 = 0, int3 = 0, int4 = 0, int5 = 0 , int6 = 0, int7 = 0, int8 = 0, int9 = 0;
      for (int row = 3; row < 6; row++) {
        for (int column = 0; column < 3; column ++) {
          
          temp = data[row][column];
          switch(temp){
            case 1:
              int1++;
              if(int1 != 1){return 0;}
              break;
            case 2:
              int2++;
              if(int2 != 1){return 0;}
              
              break;
            case 3:
              int3++;
              if(int3 != 1){return 0;}
              
              break;
            case 4:
              int4++;
              if(int4 != 1){return 0;}
                
              break;
            case 5:
              int5++;
              if(int5 != 1){return 0;}
                
              break;
            case 6:
              int6++;
              if(int6 != 1){return 0;}
                
              break;
            case 7:
              int7++;
              if(int7 != 1){return 0;}
                
              break;
            case 8:
              int8++; 
              if(int8 != 1){return 0;}
               
              break;
            case 9:
              int9++;
              if(int9 != 1){return 0;}
              
              break;
            }
        
            }
          } 
          break;

    case 5:
      int1 = 0 , int2 = 0, int3 = 0, int4 = 0, int5 = 0 , int6 = 0, int7 = 0, int8 = 0, int9 = 0;
      for (int row = 3; row < 6; row++) {
        for (int column = 3; column < 6; column ++) {
          
          temp = data[row][column];
          switch(temp){
            case 1:
              int1++;
              if(int1 != 1){return 0;}
              break;
            case 2:
              int2++;
              if(int2 != 1){return 0;}
              
              break;
            case 3:
              int3++;
              if(int3 != 1){return 0;}
              
              break;
            case 4:
              int4++;
              if(int4 != 1){return 0;}
                
              break;
            case 5:
              int5++;
              if(int5 != 1){return 0;}
                
              break;
            case 6:
              int6++;
              if(int6 != 1){return 0;}
                
              break;
            case 7:
              int7++;
              if(int7 != 1){return 0;}
                
              break;
            case 8:
              int8++; 
              if(int8 != 1){return 0;}
               
              break;
            case 9:
              int9++;
              if(int9 != 1){return 0;}
              
              break;
            }
        
            }
          } 
          break;

    case 6:
      int1 = 0 , int2 = 0, int3 = 0, int4 = 0, int5 = 0 , int6 = 0, int7 = 0, int8 = 0, int9 = 0;
      for (int row = 3; row < 6; row++) {
        for (int column = 6; column < 9; column ++) {
          
          temp = data[row][column];
          switch(temp){
            case 1:
              int1++;
              if(int1 != 1){return 0;}
              break;
            case 2:
              int2++;
              if(int2 != 1){return 0;}
              
              break;
            case 3:
              int3++;
              if(int3 != 1){return 0;}
              
              break;
            case 4:
              int4++;
              if(int4 != 1){return 0;}
                
              break;
            case 5:
              int5++;
              if(int5 != 1){return 0;}
                
              break;
            case 6:
              int6++;
              if(int6 != 1){return 0;}
                
              break;
            case 7:
              int7++;
              if(int7 != 1){return 0;}
                
              break;
            case 8:
              int8++; 
              if(int8 != 1){return 0;}
               
              break;
            case 9:
              int9++;
              if(int9 != 1){return 0;}
              
              break;
            }
        
            }
          } 
          break;

    case 7:
      int1 = 0 , int2 = 0, int3 = 0, int4 = 0, int5 = 0 , int6 = 0, int7 = 0, int8 = 0, int9 = 0;
      for (int row = 6; row < 9; row++) {
        for (int column = 0; column < 3; column ++) {
          int temp;
          temp = data[row][column];
          
          switch(temp){
            
            case 1:
              
              int1++;
              if(int1 != 1){return false;}
              break;
            case 2:
              int2++;
              if(int2 != 1){return false;}
              
              break;
            case 3:
              ++int3;
              if(int3 != 1){return false;}
              
              break;
            case 4:
              int4++;
              if(int4 != 1){return false;}
                
              break;
            case 5:
              int5++;
              if(int5 != 1){return false;}
                
              break;
            case 6:
              int6++;
              if(int6 != 1){return false;}
                
              break;
            case 7:
              int7++;
              if(int7 != 1){return false;}
                
              break;
            case 8:
              int8++; 
              if(int8 != 1){return false;}
               
              break;
            case 9:
              int9++;
              if(int9 != 1){return false;}
              
              break;
            }
        
            }
          } 
          break;

    case 8:
      int1 = 0 , int2 = 0, int3 = 0, int4 = 0, int5 = 0 , int6 = 0, int7 = 0, int8 = 0, int9 = 0;
      for (int row = 6; row < 9; row++) {
        for (int column = 3; column < 6; column ++) {
  
          temp = data[row][column];
          switch(temp){
            case 1:
              int1++;
              if(int1 != 1){return 0;}
              break;
            case 2:
              int2++;
              if(int2 != 1){return 0;}
              
              break;
            case 3:
              int3++;
              if(int3 != 1){return 0;}
              
              break;
            case 4:
              int4++;
              if(int4 != 1){return 0;}
                
              break;
            case 5:
              int5++;
              if(int5 != 1){return 0;}
                
              break;
            case 6:
              int6++;
              if(int6 != 1){return 0;}
                
              break;
            case 7:
              int7++;
              if(int7 != 1){return 0;}
                
              break;
            case 8:
              int8++; 
              if(int8 != 1){return 0;}
               
              break;
            case 9:
              int9++;
              if(int9 != 1){return 0;}
              
              break;
            }
        
            }
          } 
          break;

    case 9:
      int1 = 0 , int2 = 0, int3 = 0, int4 = 0, int5 = 0 , int6 = 0, int7 = 0, int8 = 0, int9 = 0;
      for (int row = 6; row < 9; row++) {
        for (int column = 6; column < 9; column ++) {
          
          temp = data[row][column];
          switch(temp){
            case 1:
              int1++;
              if(int1 != 1){return 0;}
              break;
            case 2:
              int2++;
              if(int2 != 1){return 0;}
              
              break;
            case 3:
              int3++;
              if(int3 != 1){return 0;}
              
              break;
            case 4:
              int4++;
              if(int4 != 1){return 0;}
                
              break;
            case 5:
              int5++;
              if(int5 != 1){return 0;}
                
              break;
            case 6:
              int6++;
              if(int6 != 1){return 0;}
                
              break;
            case 7:
              int7++;
              if(int7 != 1){return 0;}
                
              break;
            case 8:
              int8++; 
              if(int8 != 1){return 0;}
               
              break;
            case 9:
              int9++;
              if(int9 != 1){return 0;}
              
              break;
            }
        
            }
          } 
          break;
  }
  return true;
}

void Display(const int data[][9]){
  for(int r = 0; r < 9;r++ ){
      for(int c = 0; c < 9 ;c++){
        cout << data[r][c];
      } 
    cout << endl;
    }
    
  
}


int main(){
  string name;
  ifstream infile;
  int arrData[9][9]={0};
  
  
  cout << "Enter the filename:" << endl;
  cin >> name;
  

  if(infile){
    bool isValid = true;
    if(!LoadFile(name, arrData)){
      cout << "Error reading file." << endl;
      return 0;
    }
    Display(arrData);
    
    for(int c = 0;c < 9;c++){
      if(!TestRow(arrData, c)){
        cout << "Row " << (c + 1) << " is invalid." << endl;
        isValid = false;
      }
    } 
   
    for(int c = 0;c < 9;c++){
      if(!TestColumn(arrData, c)){
        cout << "Column " << (c + 1) << " is invalid." << endl;
        isValid = false;
      }
    }
  
    for(int c = 0;c < 9;c++){
      if(!TestBox(arrData, (c+1))){
        cout << "Box " << (c + 1) << " is invalid." << endl;
        isValid = false;
      }
    }
    if(isValid)
      cout << "The solution is valid." << endl;
  
  }
  else 
  {
    cout << "Error reading file." << endl;
  }
    

  return 0;
}