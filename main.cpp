#include <iostream>
using namespace std;

#include "student.h"

int main(int argc, char* argv[]) {
 
  int n= (argc-1)/3;//n is number of student(argc will be 3 for each student(cus we have 3 input for each student) 
  student *pt_std=new student[n];//pointer_std create new array of student
  int i;
  //./aout monkey 20 3.5 Art 15 2.5
  for(i=1;i<argc;i+=3){
    (*pt_std).set_all(argv[i],atoi(argv[i+1]),atof(argv[i+2]));
    pt_std++;
   }
  /*put them in 2 different loops*/
  for(i=1;i<argc;i+=3){
    pt_std--;
  } //move pointer back to starting point
  
  for(i=0;i<n;i++){  
    pt_std->print_all();
    pt_std++;
  }  

  for(i=1;i<argc;i+=3){
    pt_std--;
  }//move pointer back to starting point


  float high=pt_std[0].get_score();
  for(i=0;i<n;i++){
    if(pt_std[i].get_score()>high){
        high=pt_std[i].get_score();
    }
  }
  cout<<endl<<"HIGHEST SCORE"<<endl;
  for(i=0;i<n;i++){
    if(pt_std[i].get_score()==high){
      pt_std[i].print_all();
    }
  }

  
 // pt_std-=n; //move pointer back to starting point
  delete [] pt_std;
  //name =oat
  //age =21
  //score=55
  //print all info


  }
  
  


