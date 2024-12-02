/* Arti Auti , dsps assig:10,doubly linked list (Music)*/
#include<iostream>
#include<cstring>
using namespace std;
int n,i;
class music {


string artist,album;
int track,ryear;

music *next ,*prev;

public:
void accept();
void displaycount();
void search();
void update();
void remove();








}*start=NULL,*end=NULL;

void music:: accept(){

music*temp;
music *end;
 music*nnode;
nnode=new music;
cout<<"\nEnter Trackno,Artist,Album,,releasyear";
cin>>nnode->track>>nnode->artist>>nnode->album>>nnode->ryear;
nnode->next=NULL;
nnode->prev=NULL;
if(start==NULL){


start=nnode;

end=nnode;


}
else{
temp=start;
while(temp->next!=NULL){


temp=temp->next;





}
temp->next=nnode;
nnode->prev=temp;

}


end=temp;

}

void music::displaycount(){
int count=0;
music*temp;
temp=start;                  


while(temp!=NULL){

cout<<"\n"<<temp->track<<"\t"<<temp->artist<<"\t"<<temp->album<<"\t"<<temp->ryear;
temp=temp->next;
//temp=temp->prev;
count++;


}
cout<<"\ncount is"<<count;

}
void music::search(){
music*temp;
int f=0;
int t;
cout<<"\nEnter track which you want to search";
cin>>t;
temp=start;
while(temp!=NULL){
if(temp->track==t){
f=1;

cout<<"\n"<<temp->track<<"\t"<<temp->artist<<"\t"<<temp->album<<"\t"<<temp->ryear;




break;
}

temp=temp->next;


}




if(f==0)


cout<<"\nNot Found";




}
void music::update() {
    music*temp;
    int f = 0;
    int t;
    cout << "\nEnter track of the music you want to update: ";
    cin >>t;
    temp = start;

while (temp != NULL) {
if (temp->track== t) {
  f = 1;
    cout << "\nEnter new music details (track,Artist,Album,releaseyear): ";
     cin >> temp->track >> temp->artist >> temp->album >> temp->ryear;
     cout << "\nmusic details updated successfully!";
 break;
        }
        temp = temp->next;
    }

    if (f == 0)
        cout << "\nNot Found";
}
void music::remove() {
    music*temp = start;
    music*prev = NULL;
 int t;
 int found = 0;

    cout << "\nEnter the track of the music you want to delete: ";
    cin >> t;

    
while (temp != NULL) {
if (temp->track == t) {
  found = 1;

            
if (temp == start) {
  start = temp->next;
            } 
else {
                
   prev->next = temp->next;
            }
delete temp;
  cout << "\n deleted successfully!";
   break;
        }
        
  prev = temp;
   temp = temp->next;
    }

if (!found)
 cout << "\nmusic " << t << " not found.";
}



int main(){
music s;
int ch;

do{

cout<<"\n menu";
cout<<"\n1.accept\n2.display\n3.search\n4.update\n5.remove";
cout<<"\nEnter the choice:";
cin>>ch;
switch(ch){


case 1:

s.accept();
break;
case 2:
cout<<"\n"<<"track"<<"\t"<<"Artist"<<"\t"<<"Album"<<"\t"<<"releaseyear";

s.displaycount();
break;
case 3:
s.search();
break;
case 4:
s.update();
break;
case 5:
s.remove();
break;
}
}while(ch!=0);

return 0;






}