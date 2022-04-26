#include "solitaire.hpp"



int solitaire::RandomGenerator(int i){
    int store = rand()%i;
    return store;
}
solitaire::solitaire(){
    for (int i = 1; i< 8;i++){

        Cols.push_back(columns(i,0));

    }
    for (int i=0; i<4;i++){
        if (i==1){
            finals[i] = finaldeck("hearts");
        }
        if (i==2){
            finals[i] = finaldeck("diamonds");
        }
        if (i==3){
            finals[i] = finaldeck("spades");
        }
        if (i==4){
            finals[i] = finaldeck("clubs");
        }
    }
    game_start();
}

void solitaire::fill_starter(){
    for (int i = 1; i<4;i++){
        for (int n = 1; n<14;i++){
            if (i==1){
                starter.push_back(hearts(0, n));
            }
            if (i==2){
                starter.push_back(spades(0, n));
            }
            if (i==3){
                starter.push_back(diamonds(0, n));
            }
            if (i==4){
                starter.push_back(clubs(0, n));
            }

        }
    }
}

void solitaire::game_start(){
    fill_starter();
    int rand = RandomGenerator(starter.size());
    for (int i =1; i<8;i++){
        for (int n =0; n<(i-1);n++){
            Cards c= starter[rand];
            Cols[i].add_hidden_card(c);
            // starter.remove(c);
            rand = RandomGenerator(starter.size());
        }
        Cards c = starter[rand];
        Cols[i].add_card(c);
        // starter.remove(c);
        rand = RandomGenerator(starter.size());
    }

    for (int i =0; i<starter.size();i++){
        //deck.add(starter[i]);
    }
}

void solitaire::solitaire_draw(){

    for (int i = 1; i< 8;i++){
        Cols[i].draw();
    }
    // deck draw 

    // finals draw 
   /* for (int i = 0; i <4;i++){
        finals[i].drawdeck(400,70);
    }*/


}

void solitaire_quit(){

}