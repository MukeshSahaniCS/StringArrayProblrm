#include<iostream>
#include<vector>
using namespace std;

int getLenght(char name[]){
    int count = 0;
    for(int i=0;name[i] !='\0';i++){
        count++;
    }
    return count;
}

int main(){
    char name[20];
    cout<<"Enter your name : ";
    cin>>name;
    cout<<"Your name is ";
    cout<<name<<endl;

    cout<<"Length: "<<getLenght(name)<<endl;

}