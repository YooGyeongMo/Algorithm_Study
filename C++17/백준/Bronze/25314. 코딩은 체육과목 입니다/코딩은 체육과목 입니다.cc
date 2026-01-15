#include <iostream>
#include <string>
using namespace std;

int main() {
   int N;
   cin >> N ;
   N /= 4;
   string str1 = "";

   for (int i =0; i<N; i++) {
      str1 += "long ";
   }
   cout << str1 +"int" << endl;
}