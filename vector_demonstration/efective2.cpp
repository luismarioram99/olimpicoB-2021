#include <bits/stdc++.h>

using namespace std;

class Efective{
  private:
    int size;
    int last;
    unsigned long long processCount;
    int* array;

  public:


    Efective(){
      size = 1;
      last = 0;
      processCount = 0;
      array = new int[1];
    }

    Efective(int _size){
      size = _size;
      last = 0;
      array = new int[size];
      processCount = 1;
    }

    void push_back(int _value){

      if(last == size){

        int *temp = new int[2*size];
        processCount++;

        for (int i = 0; i < size; i++){

          temp[i] = array[i];
          processCount++;

        }

        size = 2*size;
        last++;

        temp[size - 1] = _value;
        processCount++;

        array = temp;
        processCount++;

      }else{
        array[last++] = _value;
        processCount++;
      }
    }


    void resize(){
      size = 1;
      last = 0;
      processCount = 0;
      array = new int[1];
    }

     void resize(int _size){
      size = _size;
      last = 0;
      array = new int[size];
      processCount = 1;
    }

    unsigned long long count(){
      return processCount;
    }
};

int main(){

  srand (time(NULL));

  Efective v1;

  int count;
  cin >> count;

  for (int i = 0; i < count; i++){
    v1.resize(i);
    for (int j = 0; j < i; j++){
      v1.push_back(rand());
    }
    cout << v1.count() << endl;
    
  }

  return 0;
}