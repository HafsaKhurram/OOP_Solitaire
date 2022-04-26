/*#include "deck.hpp"
#include <string>
#include <iostream>
using namespace std;


    Deck::Deck();
    //constructor overloading
    Deck::Deck(int t,int s,int p):top(t),size(s),position(p){
        Deck=new Stack();
    }

    bool Deck::isEmpty() {
            if(top==-1){
                cout<<"deck empty"<<endl;
                return true;
                }
            else{
                return false;
                }
        }
    
    bool Deck::isFull(){
            if(top==size-1){
                cout<<"deck full"<<endl;
                return true;}
                else{
                    return false;
                    }
                }
                
    int Deck::getSize(){
        return size;
        }


    void Deck:: add(Card X){
        if(!IsFull()){
            deck[top+1]=X;
            top++;
            }
            }

    void Deck::remove(){
        if(!IsEmpty()){
            top--;
            }
            return deck[top+1];
            }
    

    void Deck::draw() {
	show = 3;
	if (position < v.size() - 3) {
		this->position += 3;
	} else {
		this->position = 0;
	}
    }


bool Deck::click_deck(int x, int y){
    if (x==start_x and y ==start_y){
        return true;
    }
    else{
        return false;
    }

}

void Deck:: shuffle(){
    int i;
    while (!deck.IsEmpty()){
        i = rand()%deckofCards.getSize();
        shuffled.add(deck.remove(i));
        }
    }*/