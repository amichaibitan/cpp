#include <cstdio>
#include <string>
#include <iostream>
#include <stdexcept>
using namespace std;

namespace ariel{


void hat(int n){
    if(n==1){
        cout << "_===_";
    }
    if(n==2){
        cout << " ___ \n.....";
    }
    if(n==3){
          cout << " _ \n/_\\";
    }
    if(n==4){
         cout << " ___ \n(_*_)";
       }
   }

void nose(int n){
    if(n==1){
         cout << ",";
    }
    if(n==2){
         cout <<".";
    }
    if(n==3){
         cout <<"_";
    }
    if(n==4){
         cout << " ";
       }
    }

    void l_eye(int n){
        if(n==1){
         cout << "(.";
       }
    if(n==2){
         cout << "(o";
       }
    if(n==3){
         cout << "(O";
       }
    if(n==4){
         cout << "(-";
        }
    }

     void R_Eye(int n){
        if(n==1){
         cout << ".)";
       }
    if(n==2){
         cout << "o)";
       }
    if(n==3){
         cout << "O)";
       }
    if(n==4){
         cout << "-)";
        }
    }

     void l_arm(int n){
        if(n==1){
         cout << "<";
       }
    if(n==2){
         cout << "\\";
       }
    if(n==3){
         cout << "/";
       }
    if(n==4){
         cout << " ";
        }
    }

     void r_arm(int n){
        if(n==1){
         cout << ">";
       }
    if(n==2){
         cout << "/";
       }
    if(n==3){
         cout << "\\";
       }
    if(n==4){
         cout << " ";
        }
    }

     void torso(int n){
        if(n==1){
         cout << " : ";
       }
    if(n==2){
         cout <<"] [";
       }
    if(n==3){
         cout << "> <";
       }
    if(n==4){
         cout << "   ";
        }
    }

     void base(int n){
        if(n==1){
         cout << "( : )";
       }
    if(n==2){
         cout << "(" ")";
       }
    if(n==3){
         cout << "(___)";
       }
    if(n==4){
         cout << "(   )";
        }
    }

     string snowman (int n){
        std::string str=string();
        return str;
    }
}  

    



