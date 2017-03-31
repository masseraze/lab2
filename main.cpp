#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include "lab2elo.h"
using namespace std;
int main(){
  int K,A,B;
  float S;
  Elo elo;
  ifstream inFile("file.in",ios::in);
   if(!inFile){
      cerr<<" FAILED OPENING! "<<endl;
      exit(1);
   }
  ofstream outFile("file.out",ios::out);
   if(!outFile){
      cerr<<" FAILED OPENING! "<<endl;
      exit(1);
   }
   inFile>>K>>A>>B;
   elo.setstart(K,A,B);  
   outFile<<A<<'\t'<<B<<endl;
   while(inFile>>S){
   elo.setstart(K,A,B);
   elo.setstart1(S);
   elo.eloelo();
   outFile<<elo.getstart1()<<'\t'<<elo.getstart2()<<endl;
   A=elo.getstart1();
   B=elo.getstart2();
  }

  return 0;
 } 

