/*dsps assig:09,singly linked list (Charity)*/
#include<iostream>
#include<cstring>
using namespace std;
int n,i;
class donar{


string name,add;
int amt,cn;

donar *next;

public:
void accept();
void displaycount();
void search();
void update();
void remove();








}*start=NULL,*temp=NULL;

void donar:: accept(){

donar*temp;
 donar*nnode;
nnode=new donar;
cout<<"\nEnter donar details name,address,amount,contactno.";
cin>>nnode->name>>nnode->add>>nnode->amt>>nnode->cn;
nnode->next=NULL;
if(start==NULL){


start=nnode;




}
else{
temp=start;
while(temp->next!=NULL){


temp=temp->next;





}
temp->next=nnode;

}




}

void donar::displaycount(){
int count=0;
donar*temp;
temp=start;                  


while(temp!=NULL){

cout<<"\n"<<temp->name<<"\t"<<temp->add<<"\t"<<temp->amt<<"\t"<<temp->cn;
temp=temp->next;
count++;


}
cout<<"\ncount is"<<count;

}
void donar::search(){
donar*temp;
int f=0;
string nn;
cout<<"\nEnter name which you want to search";
cin>>nn;
temp=start;
while(temp!=NULL){
if(temp->name==nn){
f=1;

cout<<"\n"<<temp->name<<"\t"<<temp->add<<"\t"<<temp->amt<<"\t"<<temp->cn;




break;
}

temp=temp->next;


}




if(f==0)


cout<<"\nNot Found";




}
void donar::update() {
    donar*temp;
    int f = 0;
    string nn;
    cout << "\nEnter name of the donar you want to update: ";
    cin >> nn;
    temp = start;

while (temp != NULL) {
if (temp->name== nn) {
  f = 1;
    cout << "\nEnter new donar details (name,address,amount,contactno.): ";
     cin >> temp->name >> temp->add >> temp->amt >> temp->cn;
     cout << "\nDonar details updated successfully!";
 break;
        }
        temp = temp->next;
    }

    if (f == 0)
        cout << "\nNot Found";
}
void donar::remove() {
    donar *temp = start;
    donar*prev = NULL;
 string nn;
 int found = 0;

    cout << "\nEnter the name of the donar you want to delete: ";
    cin >> nn;

    
while (temp != NULL) {
if (temp->name == nn) {
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
 cout << "\ndonar " << nn << " not found.";
}



int main(){
donar s;
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
cout<<"\n"<<"Name"<<"\t"<<"Address"<<"\t"<<"amount"<<"\t"<<"contact number";

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