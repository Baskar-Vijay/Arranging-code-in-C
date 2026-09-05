#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> numbers = {1, 2, 3, 4, 5};
   vector<int>::iterator it = numbers.begin();
   vector <int>::iterator it2 = (numbers.end()-1);
  for (int num : numbers) {
    if (*it==num){
    cout <<"{"<< num ;
  }
    else if (*it2==num){
     cout <<","<< num << "}" ;
  }
   else {
    cout <<"," << num ;
  }
 
}
return 0;
}