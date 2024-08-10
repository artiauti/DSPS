#include<iostream>
using namespace std;
int n;
class book{
    public:
int cost;
char tt[10];
char author[10];
public:
void accept();
void display();
void asc();
void dec();
void dcostless();
void counts();
void deletT();
void delet();

}b[100],c[100];

void book::accept(){
    cout<<"enter costs:";
    cout<<"enter the title of the book:";
    cout<<"enter auther:";
    cin>>cost>>tt>>author;
}
void book::display(){
    cout<<"\n"<<"title"<<"\t"<<"cost"<<"\t"<<"author";

}
void book :: asc(){
    book c;
    int i,j;
    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
            if(b[i].cost>b[j].cost){
                c=b[i];
                b[i]=b[j];
                b[j]=c;
            }
        }
    }
}
void book::dec(){
    book c;
    int i,j;
    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
            if(b[i].cost<b[j].cost){
                c=b[i];
                b[i]=b[j];
                b[j]=c;
            }
        }
    }
}
void book:: dcostless(){
    for(int i=0;i<n;i++){
        if(b[i].cost<500){
            b[i].display();
        }
    }
}
void book::counts(){
    int count=0;
    for(int i=0;i<n;i++){
        if(b[i].cost>500){
            b[i].display();
            count++;
        }
    }
}
void book::deletT(){
    c[0]=b[0];
    int j=0;
    for(int i=0;i<n;i++){
        if((b[i].tt!=c[j].tt) && (b[i].author!=c[j].author)){
            j++;
            c[j]=b[i];
        }
    }
}
void book::delet(){
    int j=0;
    for(int i=0;i<n;i++){
        if((b[i].tt!=b[j].tt)&&(b[i].author!=b[j].author)){
j++;
b[j]=b[i];
        }
    }
}
int main(){
    int ch,i,choice;
    cout<<"enter how many entries";
    cin>>n;
    do{
        cout<<"\n"<<"1.accept"<<"\n"<<"2.ascending"<<"\n"<<"3.descending"<<"\n"<<"4.count book cost greater than 500";
        cout<<"5.display book cost less than 500"<<"\n"<<"6.delet dublicate entries with temp array"<<"\n"<<"7.delete dublicat"<<"\n"<<"8.display";
        cout<<"enter choice";
cin>>ch;
switch(ch){
    case 1:
    for(i=0;i<n;i++){
        b[i].accept();
    }
    break;
    case 2:
    b[i].asc();
    break;
    case 3:
    b[i].dec();
    break;
    case 4:
    b[i].dcostless();
    break;
    case 5:
    b[i].counts();
    break;
    case 6:
    b[i].deletT();
    break;
    case 7:
    b[i].delet();
    break;
    case 8:
    for(i=0;i<n;i++){
        b[i].display();
    }
    default:
                cout << "\n--Wrong choice--";
                break;
    
}
cout << "\nDo you want to continue (0/1)? ";
        cin >> choice;
    }while(choice==1);
    return 0;
}
