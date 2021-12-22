// Queue Array //
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <iomanip>
#include <bits/stdc++.h>
using namespace std;

int Max = 10, front = 0, back = 0;
int DataArr[10];


bool isFull(){
	if(back == Max){
		return true;
	}else{
		return false;
	}
	
}

bool isEmpty(){
	if(back == 0){
		return true;
	}else{
		return false;
	}
	
}

void enqueue(int Data){
	if(isFull()){
		cout << "Antrian Penuh!!" << endl;
	}else{
		if(isEmpty()){
			DataArr[0] = Data;
			front++;
			back++;
		}else{
			DataArr[back] = Data;
			back++;
			
		}
	}
	
}

// menghapus data queue
void dequeueArray(){
  if( isEmpty() ){
    cout << "Antrian kosong!!" << endl;
  }else{
    for( int i = 0; i < back; i++ ){
      DataArr[i] = DataArr[i+1];
    }
    back--;
  }
}


// untuk menampilkan data array
void viewArray()
{
  
  cout << "Data Array : " << endl;
  if( isEmpty()){
  	
    cout << "Antrian kosong!!" << endl;
    
  }else{
  	
    for(int i = 0; i < Max ;i++){
     
      if(DataArr[i] != 0){
     
        cout << i+1 << ". " << DataArr[i] << endl;
        
      }else{

        cout << i+1 << ". (kosong)" << endl;
      }
      
    }
    
  }
  
}



int main(void){
	
	int rand();
	
	//perulangan untuk memasukan data random
	for(int i = 0; i < Max; i++){
		
		enqueue(rand());
		
	}

	viewArray();
	dequeueArray();
	viewArray();
	
	return 0;
	
}
