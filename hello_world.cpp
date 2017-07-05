#include<iostream>

using namespace std;

int main(int argc, char* argv[]){
  
  switch(argv[1][0]){
  case '1' :
    cout << "\n    Hello sun.\n\n";
    break;
  case '2' :
    cout << "\n    Hello moon.\n\n";
    break;
  case '3':
    cout << "\n    Hello stars.\n\n";
    break;
  default :
    cout << "\n    Hello world.\n\n";
  }
  
}
