/*Name:Arti auti,roll no.:05,Dsps assignment no.4,date:13-9-24*/
#include<iostream>
#include<cstring>
#include<stack>
using namespace std;
int i,n,j,len1,len2,f=0;

class strop{

string s1,s2;
char Str[20];
public:
void accept();
void display();
void strlen();
void strcmp();
void strrev();
void strcpy();
void strcon();
void counts();
 void palindrome(){        //check palindrome
    char s1[10];
    stack<char> s; 
     int len=0;
       cout<<"Enter string:";
       cin>>s1;
     for(i=0;s1[i]!='\0';i++){
len++;
}
     for (int i = 0; i < len; i++)
        {
            s.push(s1[i]);
        }

        for (int i = 0; i < len; i++)
        {
            if (s.top() != s1[i])
            {
                cout << s1 << " is not a palindrome." << endl;
                return;
            }
            s.pop();
        }
        cout << s1 << " is a palindrome." << endl;
    
 }




}s;
void strop:: accept(){                     
cout<<"enter the first string:"<<endl;
cout<<"\nenter the second string:"<<endl;
cin>>s1;
cin>>s2;

}
void strop:: strlen(){               //length operation

int len1=0,len2=0;

for(i=0;s1[i]!='\0';i++){
len1++;
}

for(i=0;s2[i]!='\0';i++){
len2++;
}
cout<<"\nlength of s1"<<"-"<<len1;
cout<<"\nlength of s2"<<"-"<<len2;
}
void strop::strcpy(){               //copy string  

int i=0;

for(i=0;s2[i]!='\0';i++){

s1[i]=s2[i];
}
cout<<"\ncopy string is"<<s1;
}
void strop::strcon(){      //join string
char str[20];
int i=0,j=0;
for (i = 0; s1[i] != '\0'; i++)
        {
            Str[i] = s1[i];
        }

        for (j = 0; s2[j] != '\0'; j++)
        {
            Str[i + j] = s2[j];
        }
        Str[i + j] = '\0'; 
        cout << "Concatenated string: " << Str << endl;
}
void strop::strrev(){  
             //reverse string
       
int len1 = 0;
    while (s1[len1] != '\0') len1++;

    for (int i = 0; i < len1 / 2; i++) {
        char temp = s1[i];
        s1[i] = s1[len1 - i - 1];
        s1[len1 - i - 1] = temp;
    }
    cout << "\nFirst string reversed: " << s1 << endl;

    
    int len2 = 0;      //sencond reverse
    while (s2[len2] != '\0') len2++;

    for (int i = 0; i < len2 / 2; i++) {
        char temp = s2[i];
        s2[i] = s2[len2 - i - 1];
        s2[len2 - i - 1] = temp;
    }
    cout << "\nSecond string reversed: " << s2;
    }

void strop::strcmp(){           //compare string
len1=0,len2=0;
 f=0;
for(i=0;s1[i]!='\0';i++){

len1++;
}
for(i=0;s2[i]!='\0';i++){

len2++;
}
if(len1==len2){

for(i=0;s1[i]!='\0';i++){

if(s1[i]!=s2[i]){

f=1;
break;

}
}
}
if(f==0)
{
cout<<"\nstring not equal"<<endl;
}
else{
cout<<"\n string is equal"<<endl;
}

}
void strop::display(){

cout<<"\nfirst string"<<s1;

cout<<"\nsecond string"<<s2;
}
/*void strop::checkpalindrome()           //string palindrom 
{
int len1=0,len2=0,j=0;

string s2;

for(i=0;s1[i]!='\0';i++){

len1++;
}
for(i=0;s2[i]!='\0';i++){

len2++;
}
for(i=len1-1;i>=0;i--){

s2[j]=s1[i];

j++;
}
for(i=0;i<len1;i++){

if(s1[i]==s2[i]){

f=1;
cout<<"both string are palindrom";

break;
}

else{

cout<<"both strings not palindrome";

break;
}
}
}*/



void strop::counts(){

int len1=0,len2=0;

for(i=0;s1[i]!='\0';i++){
len1++;

}
for(i=0;s2[i]!='\0';i++){
len2++;
}
cout<<"\ncount of 1st string is"<<endl;


for(i=0;i<len1;i++){

int count=1,f=0;

for(j=0;j<i;j++){

if(s1[i]==s1[j]){

f=1;
break;
}
}
if(f==0){
for(j=i+1;j<len1;j++){
if(s1[i]==s1[j]){
count++;
}
}
cout<<s1[i]<<"-"<<count<<endl;
}
}
cout<<"\ncount of second string is"<<endl;
for(i=0;i<len2;i++){
int count=1,f=0;
for(j=0;j<i;j++){
if(s2[i]==s2[j]){
f=1;
break;
}
}
if(f==0){
for(j=i+1;j<len2;j++){
if(s2[i]==s2[j]){
count++;
}
}
cout<<s2[i]<<"-"<<count<<endl;
}
}
}


int main(){
int ch;
cout<<"enter the  two "<<endl;
cin>>n;
do{
cout<<"\n menu"<<endl;
cout<<"\n1.accept strings"<<endl;
cout<<"\n2.length of string"<<endl;
cout<<"\n3.display"<<endl;
cout<<"\n4.compare string"<<endl;
cout<<"\n5.copy string"<<endl;
cout<<"\n6.reverse string"<<endl;
cout<<"\n7.concinate string"<<endl;
cout<<"\n8.counts"<<endl;
cout<<"\n9.palindrom"<<endl;
cout<<"enetr the choice";
cin>>ch;
switch(ch){
case 1:
for(i=0;i<n;i++){
s.accept();
break;
}
case 2:
s.strlen();
break;
case 3:
s.display();
break;
case 4:
s.strcmp();
break;
case 5:
s.strcpy();
break;
case 6:
s.strrev();
break;
case 7:
s.strcon();
break;
case 8:
s.counts();
break;
case 9:
s.palindrome();
break;

}
}while(ch!=0);
return 0;
}
