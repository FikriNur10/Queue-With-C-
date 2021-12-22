// Queue Linked List //
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <iomanip>
#include <bits/stdc++.h>
using namespace std;

struct JumData{
  int data;

  // pointer next
  JumData *next;
};

int Max = 10;
JumData *head, *tail, *cur, *del, *newNode;

// menghitung linked list
int Hitung()
{
  if( head == NULL ){
    return 0;
  }else{
    int banyak = 0;
    cur = head;
    while( cur != NULL ){
      cur = cur->next;
      banyak++;
    }
    return banyak;
  }
}

// isFull Linked List
bool isFullLinkedList()
{
  if( Hitung() == Max ){
    return true;
  }else{
    return false;
  }
}

// isEmpty Linked List
bool isEmptyLinkedList()
{
  if( Hitung() == 0 ){
    return true;
  }else{
    return false;
  }
}

// enqueue / penambahan
void enqueue( int data ){

  if(isFullLinkedList()){
    cout << "Antrian Penuh!!!" << endl;
  }else{
    
    if( isEmptyLinkedList() ){
      head = new JumData();
      head->data = data;
      head->next = NULL;
      tail = head;
    }else{
      newNode = new JumData();
      newNode->data = data;
      newNode->next = NULL;
      tail->next = newNode;
      tail = newNode;
    }

  }

}

// untuk menghapus linked list 
void dequeueLL()
{
  if( isEmptyLinkedList() ){
    cout << "Data Antrian Kosong!!" << endl;
  }else{
    del = head;
    head = head->next;
    del->next = NULL;
    delete del;
  }
}

// untuk menampilkan semua data linked list
void viewLL()
{
  cout << "Data Antrian : " << endl;
  if( isEmptyLinkedList() ){
    cout << "Data Antrian Kosong!!" << endl;
  }else{
    cout << "Banyak data antrian : " << Hitung() << endl;
    cur = head;
    int nomor = 1;
    while( nomor <= Max ){
      
      if( cur != NULL ){
      	int i = 0;
        cout << nomor << "." << cur->data << endl;
        cur = cur->next;
      }else{
        cout << nomor << ". " << "(kosong)" << endl;
      }

      nomor++;
    }

  }
}


int main(){
	
	int rand();
	
	// perulangan untuk mengisi linked list
	for(int i = 0; i < Max; i++){
		
		enqueue(rand());
		
	}

	viewLL();
	dequeueLL();
	cout << "Data setelah di dequeue : " << endl;
	viewLL();
	
}
