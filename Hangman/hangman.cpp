#include<iostream>
#include<ctime>         //libraires
#include<cstring>
using namespace std;

void rules();

int main(){            // main function

cout<<"Muhammad Ateeb Sec C Assignment 4 "<<endl;

int one_word;           // when only one word is available in the list
char w2[50];          // for storing stars and latter on changing them into the guessed words
bool word_guessed=false;
char w1[50];          // for showing the inputs of the users
int n[50];            // to store the index where comas are located
int no_turns=7;
int k;
int j=0;                       
int count=0;          // to count how many words are there in the list
char guess;          // for storing the guess word
cout<<"Enter the list of words "<<endl;
char w[100];                            // array for storing the list words
cin.getline(w,100);

for(int i=0;i<=11;i++){       // loop for clearing the screen afrter making list
 cout<<endl;
}



  for(int i=0;i<100;i++){           // This loop checks if there is no coma that means only one word was available 
  if(w[i]!=','){
 one_word=1;                        // if one word the value of the one_word=1
 
 }
 else if(w[i]==','){
 one_word=0;                      // else one_word=0
 break;
 }
 }

if(one_word==0){
                               // this loop operates when there are more than one words

 for(int i=0;i<100;i++){      // loop for couting the no of words and storing the index of comas
 
 if(w[i]==','){
 
 count++;
 n[j]=i;
 j++;
 
 }
 
 } 
 
 
 count++;
}
  
  j=0; 
 if(count>=2){
 
    srand(time(0));                   // for randomly generating the word 
   int a=(rand() % count)+1;
   
   
   for(int i=1;i<=count;i++){         // main loop that compare the guess word with original
   if(a==i){
   if(a>1){
     if(a==count){
     int l=0;
      for( k=(n[i-2]+1);w[k]!='\0';k++){
      
      w1[l]=w[k];
      l++;
      }
      w1[l]='\0';
     }
   
   else{
   
   for( k=(n[i-2]+1);k<n[(i-2)+1];k++){
     w1[j]=w[k];
     j++;
   }
   w1[j]='\0';
   }
   }
   else if(a==1){
  
   for( k=0;k<(n[i-1]);k++){
   
      w1[k]=w[k];
      
   }
  w1[k]='\0';
   }
   
   }
   
   }
   
 }  
   

 
 if(one_word==1){
 int i;
 for(i=0;w[i]!='\0';i++){
 w1[i]=w[i];
 
 }
 
  w1[i]='\0';
 
 for(i=0;w1[i]!='\0';i++){
 w2[i]='*';
 
 }
 w2[i]='\0';
 }
 

if(count>=2){
  j=0;
  
while(w1[j]!='\0'){

w2[j]='*';
j++;
}
w2[j]='\0';
}

rules();
int used_word=2;                  // for infinite while loop if user repeats on entering the same value
j=0;
k=0;
int rep=1;
int chk=0;
char hint;
char w3[50];
  while(no_turns!=0 && word_guessed==false){
    
   if(no_turns==1){
   
   while(hint!='Y'&&hint!='y'&&hint!='N'&&hint!='n'){
   cout<<"You want Hint? Enter 'Y' for yes and 'N' for no"<<endl;
   cin>>hint;
   }
   if(hint=='Y'||hint=='y'){
   for(int i=0;w2[i]!='\0';i++){
   if(w2[i]=='*'){
   w2[i]=w1[i];
   break;
   }
   }
   }
   
   }
   
   if(no_turns==1){
   
      for(int i=0;w2[i]!='\0';i++){
   if(w2[i]==w1[i]){
   word_guessed=true;
   }
   else{
   word_guessed=false;
   break;
   }
   }
   
   }
   
   if(no_turns==1&&word_guessed==true){
   break;
   }
   
   cout<<w2<<endl;
   cout<<"Guess the Word"<<endl;
   cout<<no_turns<<" Tries remains"<<endl;
   if(rep>1){
    cin>>guess;
    
      for(int i=0;w3[i]!='\0';i++){
      if(guess==w3[i]){
      
      used_word=1;
      }
     
     }
     if(used_word!=1){
     used_word=0;
     }
     
     while(used_word==1){
     
        used_word=2;
     for(int i=0;w3[i]!='\0';i++){
     
     if(guess==w3[i]){
     cout<<"You have used it enter a new word "<<endl;
     cin>>guess;
     for(int i=0;w3[i]!='\0';i++){
     
      if(guess==w3[i]){
      
      used_word=1;
      }
     
     }
     
     if(used_word!=1){
     used_word=0;
     }
     
     }
     
     }
     
     if(used_word!=1){
     used_word=0;
     }
     
     }
     
   w3[j]=guess;
    w3[j+1]='\0';
   }
   else{
   cin>>guess;
   w3[j]=guess;
   w3[j+1]='\0';
   }
   count=0;
   
   while(w2[k]!='\0'){
   if(guess==w1[k]){
   w2[k]=guess;
   count++;
   }  
   
   k++;
   
   }
   k=0;
   
   if(count==0){
   j++;
   chk++;
   if(chk==1){
     cout<<"   "<<'+'<<'-'<<'-'<<'-'<<'+'<<endl;
cout<<"   "<<'|'<<"   "<<'|'<<endl;
cout<<"       "<<'|'<<endl;
cout<<"       "<<'|'<<endl;
cout<<"       "<<'|'<<endl;
cout<<"       "<<'|'<<endl;
cout<<"=========="<<endl;
   }
    if(chk==2){
     cout<<"   "<<'+'<<'-'<<'-'<<'-'<<'+'<<endl;
cout<<"   "<<'|'<<"   "<<'|'<<endl;
cout<<"   "<<'0'<<"   "<<'|'<<endl;
cout<<"       "<<'|'<<endl;
cout<<"       "<<'|'<<endl;
cout<<"       "<<'|'<<endl;
cout<<"=========="<<endl;
   }
    if(chk==3){
     cout<<"   "<<'+'<<'-'<<'-'<<'-'<<'+'<<endl;
cout<<"   "<<'|'<<"   "<<'|'<<endl;
cout<<"   "<<'0'<<"   "<<'|'<<endl;
cout<<"   "<<'|'<<"   "<<'|'<<endl;
cout<<"       "<<'|'<<endl;
cout<<"       "<<'|'<<endl;
cout<<"=========="<<endl;
   }
    if(chk==4){
     cout<<"   "<<'+'<<'-'<<'-'<<'-'<<'+'<<endl;
cout<<"   "<<'|'<<"   "<<'|'<<endl;
cout<<"   "<<'0'<<"   "<<'|'<<endl;
cout<<"  "<<'/'<<'|'<<"   "<<'|'<<endl;
cout<<"       "<<'|'<<endl;
cout<<"       "<<'|'<<endl;
cout<<"=========="<<endl;
   }
    if(chk==5){
    cout<<"   "<<'+'<<'-'<<'-'<<'-'<<'+'<<endl;
cout<<"   "<<'|'<<"   "<<'|'<<endl;
cout<<"   "<<'0'<<"   "<<'|'<<endl;
cout<<"  "<<"/"<<'|'<<"\\"<<"  "<<'|'<<endl;
cout<<"       "<<'|'<<endl;
cout<<"       "<<'|'<<endl;
cout<<"=========="<<endl;
   }
    if(chk==6){
     cout<<"   "<<'+'<<'-'<<'-'<<'-'<<'+'<<endl;
cout<<"   "<<'|'<<"   "<<'|'<<endl;
cout<<"   "<<'0'<<"   "<<'|'<<endl;
cout<<"  "<<'/'<<'|'<<"\\"<<"  "<<'|'<<endl;
cout<<"  "<<'/'<<"    "<<'|'<<endl;
cout<<"       "<<'|'<<endl;
cout<<"=========="<<endl;
   }
     if(chk==7){
    cout<<"   "<<'+'<<'-'<<'-'<<'-'<<'+'<<endl;
cout<<"   "<<'|'<<"   "<<'|'<<endl;
cout<<"   "<<'0'<<"   "<<'|'<<endl;
cout<<"  "<<'/'<<'|'<<"\\"<<"  "<<'|'<<endl;
cout<<"  "<<'/'<<" "<<"\\"<<"  "<<'|'<<endl;
cout<<"       "<<'|'<<endl;
cout<<"=========="<<endl;
   }
   
   no_turns--;
   
   }
   
   count=0;
   
   for(int i=0;w2[i]!='\0';i++){
   if(w2[i]==w1[i]){
   word_guessed=true;
   }
   else{
   word_guessed=false;
   break;
   }
   }
   
   j++;
   rep++;
  }
  j=0;
  if(word_guessed){
  
   cout<<"   "<<'+'<<'-'<<'-'<<'-'<<'+'<<endl;
cout<<"    "<<"   "<<'|'<<endl;
cout<<"  "<<"\\"<<'0'<<"/"<<"  "<<'|'<<endl;
cout<<"   "<<'|'<<"   "<<'|'<<endl;
cout<<"  "<<'/'<<" "<<"\\"<<"  "<<'|'<<endl;
cout<<"=========="<<endl;
  cout<<"You saved your life, word was: ";
  
  while(w1[j]!='\0'){

   cout<<w1[j];
   j++;
}
cout<<endl;
  }
else{

cout<<"Just Die, word was: ";
  while(w1[j]!='\0'){

   cout<<w1[j];
   j++;
}
cout<<endl;
}

return 0;

}

void rules(){
cout<<"########## You are being hanged #########"<<endl;
cout<<"......Play a game to save your self......."<<endl;
cout<<"1.Randomly a word will be selected and you have to guess"<<endl;
cout<<"2.You will be given 7 tries "<<endl;
cout<<"3.On each wrong guess you will be getting closer to death"<<endl;
cout<<"4.If you guess the word correctly you will retain your try "<<endl;
cout<<"5.Guess the word or Die〈｡•ˇ‸ˇ•｡〉Ψ"<<endl;
cout<<endl;
}




