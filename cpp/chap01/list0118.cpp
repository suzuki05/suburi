#include <string>
#include <iostream>

using namespace std;

int main(){
  string name;
  cout << "お名前は:";
  cin >> name; //スペース無視

  cout << "こんにちは" << name << "さん。\n";
}
