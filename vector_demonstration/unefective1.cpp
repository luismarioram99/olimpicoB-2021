#include <bits/stdc++.h>

using namespace std;

class UnefectiveVector1{
  private:
    int size;
    int last;
    unsigned long long processCount;
    int* array;

  public:

    UnefectiveVector1(){
      size = 0;
      last = -1;
      processCount = 0;
    }

    void push_back(int _value){

      if(last+1 == size){

        int *temp = new int[size+1];
        processCount++;

        for (int i = 0; i < size; i++){

          temp[i] = array[i];
          processCount++;

        }

        size++;
        last++;

        temp[size - 1] = _value;

        array = temp;
        processCount++;

      }else{
        array[last++] = _value;
        processCount++;
      }
    }

    void resize(){
      size = 0;
      last = -1;
      processCount = 0;
      array = NULL;
    }

    unsigned long long count(){
      return processCount;
    }
};

int main(){

  srand (time(NULL));

  UnefectiveVector1 v1;

  int count;
  cin >> count;

  for (int i = 0; i < count; i++){
    for (int j = 0; j < i; j++){
      v1.push_back(rand());
    }
    cout << v1.count() << endl;
    v1.resize();
  }

  return 0;
}