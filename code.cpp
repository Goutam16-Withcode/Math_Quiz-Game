#include<iostream>
#include<windows.h>
#include<cmath>
#include<time.h>
#include<conio.h>
#include<fstream>
#include<string>
#include<iomanip>
#include<cstdio>
using namespace std;

int j;
int score(0);
string FF;

int main(){
    cout<<endl;
    while (true)
    {
       j=0;
       score=0;
       {
              Beep(0,300);Beep(2000,100);
              cout<<"Welcome to";
              Beep(0,600);
              cout<<" Math Quiz Game !";
              Beep(2000,100);Beep(1500,100);Beep(2000,100);Beep(1500,100);Beep(2000,100);
              cout<<"\n\n======================================\n\n Please Enter Your Name ::";
              cin>>FF;
              cout<<"\n\n======================================\n\n Hello"<<FF<<"!!\n\n";
              Beep(0,700);
              for(int a =5 ; a>0 ;a--){
                     cout<<"\r Get ready to play in :   "<<a;
                     Beep(2000,300);Beep(0,700);
              }
              cout<<"\r============================================\n\n";
              Beep(0,500);
       }
       {
              cout<<"LEVEL-1 : Adding Quiz (YOU HAVE ONLY 5 SECONDS TO SOLVE)";
              Beep(0,4000);

              for(int i=1;i<=5;i++){
                     srand(time(0));
                     int A = rand()%10+1+10*(i-1);
                     int B = rand()%10+1+10*(i-1);
                     cout<<"Question"<<i<<" :: "<<A<<" + "<<B<<endl;
                     int numInput;
                     time_t start = time(0);
                     int y =5;

                     while (!kbhit())
                     {
                       if (abs(time(0)-start)>5)
                       {
                            j=1;
                            break;
                       }
                       
                     }
                     if(j==1){
                            cout<<"Time's Up!!";
                            j=2;
                     }
                     else{
                            cin>>numInput;
                            if ((time(0)-start)>5)
                            {
                              cout<<"Time's Up!!";
                              j=2;
                            }
                            else if(numInput==A+B) cout<<"GOOOD ! ! !! ! !\n";
                            else{
                                   cout<<"Wrong Answer! !";
                                   j=2;
                            }
                     }
                     if(j==2) break;
                     {
                            Beep(2000,100);Beep(1500,100);Beep(2000,100);Beep(1500,100);Beep(2000,100);
                     }
                     score+=10;
              }
              cout<<"LEVEL-2 : Substraction Quiz (YOU HAVE ONLY 5 SECONDS TO SOLVE)";
              Beep(0,4000);

              for(int i=1;i<=5;i++){
                     srand(time(0));
                     int A = rand()%10+1+10*(i-1);
                     int B = rand()%10+1+10*(i-1);
                     cout<<"Question"<<i<<" :: "<<A<<" - "<<B<<endl;
                     int numInput;
                     time_t start = time(0);
                     int y =5;

                     while (!kbhit())
                     {
                       if (abs(time(0)-start)>5)
                       {
                            j=1;
                            break;
                       }
                       
                     }
                     if(j==1){
                            cout<<"Time's Up!!";
                            j=2;
                     }
                     else{
                            cin>>numInput;
                            if ((time(0)-start)>5)
                            {
                              cout<<"Time's Up!!";
                              j=2;
                            }
                            else if(numInput==A-B) cout<<"GOOOD ! ! !! ! !\n";
                            else{
                                   cout<<"Wrong Answer! !";
                                   j=2;
                            }
                     }
                     if(j==2) break;
                     {
                            Beep(2000,100);Beep(1500,100);Beep(2000,100);Beep(1500,100);Beep(2000,100);
                     }
                     score+=10;
              }
              for(int y=1; j!=2 && y!=2;y++){
                     cout<<"LEVEL-3 : Multiplicaton Quiz (YOU HAVE ONLY 5 SECONDS TO SOLVE)";
                     Beep(0,4000);

                     for(int i=1;i<=5;i++){
                     srand(time(0));
                     int A = rand()%10+1+10*(i-1);
                     int B = rand()%10+1+10*(i-1);
                     cout<<"Question"<<i<<" :: "<<A<<" * "<<B<<endl;
                     int numInput;
                     time_t start = time(0);
                     int y =5;

                     while (!kbhit())
                     {
                       if (abs(time(0)-start)>5)
                       {
                            j=1;
                            break;
                       }
                       
                     }
                     if(j==1){
                            cout<<"Time's Up!!";
                            j=2;
                     }
                     else{
                            cin>>numInput;
                            if ((time(0)-start)>5)
                            {
                              cout<<"Time's Up!!";
                              j=2;
                            }
                            else if(numInput==A*B) cout<<"GOOOD ! ! !! ! !\n";
                            else{
                                   cout<<"Wrong Answer! !";
                                   j=2;
                            }
                     }
                     if(j==2) break;
                     {
                            Beep(2000,100);Beep(1500,100);Beep(2000,100);Beep(1500,100);Beep(2000,100);
                     }
                     score+=10;
              }
              }
       }
    }
    
    return 0;   
}