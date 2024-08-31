/*Name:Arti auti ,dsps assignment 3,Date:23-aug-24*/
#include<iostream>
#include<string.h>
using namespace std;
int n,i,r;

class student{
    int roll,average,total;
    int q1,q2,q3,q4,q5;
    string name;
    string add;
    public:
    void accept();
    void display();
    void search();
    void linears();
    void binarys();
    void acceptQ();
    void feedback();

}s[100];
void student::accept(){
    cout<<"\nenter roll number";
    cout<<"\nEnter name of the student";
    cout<<"\nenter the address";
    cin>>roll>>name>>add;
}
void student::display(){
    cout<<"\n"<<name<<"\t"<<roll<<"\t"<<add<<endl;
}


void student::linears(){
      int r;
       cout << "Enter the roll number to search using Linear Search: ";
            cin >> r;
      for(i=0;i<n;i++){
        if(s[i].roll==r){
            break;
        }}
if(i==n){
    cout<<"student not attending the training"<<endl;
}
        else{
    cout<<"student attending the training"<<endl;
      }   
}

void student::binarys(){
    int r,j;
    student T;
    for(i=0;i<n-1;i++){
        for(j=i+1;j<i;j++){
            if(s[i].roll>s[j].roll){
                T=s[i];
                s[i]=s[j];
                s[j]=T;
            }
        }
    }
    cout<<"sorted "<<endl;
   
    
    int low=0,high=n-1,mid;
        cout << "Enter the roll number to search using binary Search: ";
            cin >> r;
    
        while(low<=high){
            mid=((low+high)/2);
            if(s[mid].roll==r){
            cout<<"student attending the training"<<endl;    
            break;
            }
           else  if(s[mid].roll<r){
            low=mid+1;

           }
           else{
            high=mid-1;
           }
        }
    if(low>high)
            cout<<"student not attending the training"<<endl;
}   
//addditional task   
void student::acceptQ(){    
    cout<<"\nhow was your training";
    cout<<"\nhow likely you attend session";
    cout<<"\nwas it worth";
    cout<<"\nhow was venue of the event";
    cout<<"\ndid the event meet your expectation";
    cin>>q1;
    cin>>q2;
    cin>>q3;
    cin>>q4;
    cin>>q5;
}
void student::feedback(){
    for(i=0;i<n;i++){
        total=s[i].q1+s[i].q2+s[i].q3+s[i].q4+s[i].q5;
    }
    average=total/n*2;
    if(average>=3)
{
    cout<<"sccesfull event";

}
else if(average<3){
    cout<<"average ";

}
else{
    cout<<"poor";
}
}



int main(){
    int ch,i,choice;
    cout<<"enter the entries";
    cin>>n;
    do{
        cout<<"\n 1.accept"
          <<"\n   2.display"
          <<"\n   3.linears"
          <<"\n   4.binarysearch"
          <<"\n   5.accept answer" 
          <<"\n   6.feedback";
          cout<<"\nenter the choice";
          cin>>ch;
          switch(ch) {
            case 1:
            for(i=0;i<n;i++){
                s[i].accept();

                            }
                            break;
                            case 2:
                            cout<<"\n"<<"name"<<"\t"<<"rollno"<<"\t"<<"adderess"<<endl;
                            for(i=0;i<n;i++){
                             s[i].display();
                            }
                            break;
                            case 3:
                            
                            s[i].linears();
                            break;
                            case 4:
                            
                            s[i].binarys();
                            break;
                            case 5:
                            for(i=0;i<n;i++){
                                s[i].acceptQ();
                            }
                            break;
                            case 6:
                            s[i].feedback();
                            break;
                            default:
                cout << "\n--Wrong choice--";
                break;
          }
          cout << "\nDo you want to continue (0/1)? ";
        cin >> choice;
    }while (choice==1);
    return 0;
}

