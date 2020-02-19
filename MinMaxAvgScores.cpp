#include <iostream>
using namespace std;

const int NUM_STUDENTS=25;


int max(int data[], int dataLen);
int min(int data[], int dataLen);
float avaerage(int data[], int dataLen);


int main() {

  int scores[NUM_STUDENTS]={0};
  int numScores = 0;
  int inputValue;

  /////////////
  cout << "Enter a score (-1 when done): " ;
  cin >> inputValue;

  while (inputValue >=0 && numScores < NUM_STUDENTS){

    scores[numScores] = inputValue;
    numScores++;

    cout << "Enter a score (-1 when done): " ;
    cin >> inputValue;
  }
    /////////////


  int maxVal = max(scores, numScores);


  //////////////
  int minVal = min(scores,numScores);
  float avgVal = avaerage(scores, numScores);
  //////////////


  cout<<"Max score is" << maxVal << endl;
  cout<<"Min score is" << minVal << endl;
  cout<<"Average is" << avgVal << endl;


    return 0;

}
int max (int data[],int dataLen) {

  int currentMax = data[0];

  for (int i =1; i<dataLen;i++){

    if(data[i] > currentMax){
      currentMax= data[i];

    }
  }
  return currentMax;

}
int min (int data[],int dataLen) {

  int currentMin = data[0];

  for (int i =1; i<dataLen;i++){

    if(data[i] < currentMin){
      currentMin= data[i];

    }
  }
  return currentMin;

}
float avaerage(int data[], int dataLen) {

  float firstNum = data[0];

  for (int i =1; i<dataLen;i++){


    firstNum  = firstNum + data[i];

  }
  firstNum= firstNum/dataLen;
  return firstNum  ;

}
