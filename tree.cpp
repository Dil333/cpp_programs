#include<iostream>
using namespace std;
void insert(int,int);
void display(int);
void delte(int);
void search(int);
int search1(int,int);
int tree[40],t=1,s,x,i;
int main(){
    int ch,y;
    for(i=1;i<40;i++){
        tree[i]=-1;
    }
    while(1){
        cout<<"1.insert\n2.delete\n3.display\n4.search\n5.exit\nenter your choice:";
        cin>>ch;
        switch(ch){
            case 1:
            cout<<"enter element to insert:";
            cin>>ch;
            insert(1,ch);
            break;
            case 2:
            cout<<"enter the elelment to delete:";
            cin>>x;
            y=search(1);
            if(y!=-1) delte(y);
            else cout<<"no element fount in tree";
            break;
            case 3:
            display(1);
            cout<<"\n";
            for(i=0;i<32;i++)
            cout<<i;
            cout<<"\n";
            break;
            case 4:
            cout<<"enter the element to search:";
            cin>>x;
            y=search(1);
            if(y==-1)cout<<"no such element found in tree";
            else cout<<"is in"<<y<<"position";
            break;
            case 5:
            exit(0);
        }
        return 0;
    }
}
void insert(int s,int ch){
    int x;
    if(t==1){
        tree[t++]=ch;
        return;
    }
    x=search1(s,ch);
    if(tree[x]>ch)
    tree[2*x]=ch;
    else
    tree[2*x+1]=ch;
    t++;
}
void delte(int x){
    if(tree[2*x]==-1 && tree[2*x+1]==-1)
    tree[x]=-1;
    else if(tree[2*x]==-1){
        tree[x]=tree[2*x+1];
        tree[2*x+1]=-1;
    }
    else if(tree[2*x+1]==-1){
        tree[x]=tree[2*x];
        tree[2*x]=-1;
    }
    else{
        tree[x]=tree[2*x];
        delte(2*x);
    }
    t--;
}
void search(int s){
if(t==1){
    cout<<"no element in tree";
    return -1;
}
if(tree[s]==-1)
return tree[s];
if(tree[s]>x)
search(2*s+1);
else 
return s;
}
void display(int s){
    if(t==1){
        cout<<"no element in tree";
        return;
    }
    for(int i=1;i<40;i++)
        if(tree[i]==-1)
        cout<<" ";
        else cout<<tree[i];
        return ;
}
    int search1(int s,int ch){
        if(t==1){
            cout<<"no element in tree";
            return -1;
        }
        if(tree[s]==-1)
        return s/2;
        if(tree[s]>ch)
        search(2*s,ch);
    }
