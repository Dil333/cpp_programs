#include<iostream>
#include<conio.h>
using namespace std;
bool gameover;
int width=20;
int height=20;
int x,y,fruitx,fruity,score;
enum eDirection{STOP=0,LEFT,RIGHT,UP,DOWN};
eDirection dir;
void setup(){
gameover=false;
dir=STOP;
x=width/2;
y=height/2;
fruitx=rand()%width;
fruity=rand()%height;
score=0;
}
void draw(){
    system("cls");
    for(int i=0;i<width;i++){
        cout<<"#"<<endl;
}
for(int i=0;i<height;i++){
    for(int j=0;j<width;j++){
        if(j==0)
            cout<<"#";
            cout<<" ";
    
        if(j==width-1)
            cout<<" #";
    }
        cout<<endl;
    }
        for(int i=0;i<width;i++){
        cout<<"#"<<endl;
    }
}
void logic(){

}
void input(){

}
int main(){
    setup();
    while(!gameover){
        draw();
        logic();
        input();
    }
    return 0;
}