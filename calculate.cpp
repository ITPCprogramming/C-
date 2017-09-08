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
  float num1;
  string Operator;
  float num2;
  float result;
  cin >> num1;
  cin >> Operator;
  cin >> num2;
  if(Operator == "+"){
    result = num1 + num2;
    print(result);
  } else if(Operator == "-"){
    result = num1 - num2;
    print(result);
  } else if(Operator == "*"){
    result = num1 * num2;
    print(result);
  } else if(Operator == "/"){
    result = num1 / num2;
    print(result);
  } else{
    print("Некоректный оператор");
  }
  return 0;
}
