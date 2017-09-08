#include <iostream>
#include <string>
using namespace std;
void print(string word){
  cout << word << endl;
}
void print(int word){
  cout << word << endl;
}
void print(float word){
  cout << word << endl;
}
int main(){
  for(int num = 1; num <= 20; num++){
  if(num % 2 == 0 and num % 3 == 0){
    print("ab");
  } else if(num % 2 == 0){
    print("a");
  } else if(num % 3 == 0){
    print("b");
  } else{
    print(num);
  }
}
  return 0;
}
