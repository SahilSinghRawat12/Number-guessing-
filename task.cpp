#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
   cout<<"\t\t\t\t<-----------NUMBER GUESSING GAME----------->"<<endl<<endl;
   cout<<"You have to guess a number between 1 to 100.You will be given limited chances according to the level you select"<<endl<<endl;
   
   while(true)
{
      cout<<"\n Select the difficulty level : ";
      cout<<"\n Press 1 for Easy Level!";
      cout<<"\n Press 2 for Medium Level!";
      cout<<"\n Press 3 for Hard Level!";
      cout<<"\n Press 0 to Exit the game!"<<endl<<endl;

      int difficultyLevel;

      cout<<"Enter the number : ";
      cin>>difficultyLevel;

      srand(time(0));
      int hiddenNum=1+(rand()%100);
      int answer;

      if(difficultyLevel==1)
   {
         cout<<"You have 10 choices to guess the secret number between 1 to 100 : "<<endl<<endl;
         int choicesLeft=10;
         for(int i=0;i<10;i++)
      {
            cout<<"Enter the number : ";
            cin>>answer;
         

         if(answer==hiddenNum)
         {
            cout<<"Well played! You have won, "<<answer<<" is the secret number"<<endl<<endl;
            cout<<"Thanks for playing the game....."<<endl<<endl;
            break;
         }

         else{
            cout<<"ALERT! ALERT! "<<answer<<" is not the right number!!"<<endl<<endl;
            if(answer>hiddenNum){
               cout<<"The secret number is smaller then the number you have chosen"<<endl<<endl;
            }
            else{
            cout<<"The secret number is greater than the number you have chosen"<<endl<<endl;
            }

            choicesLeft--;
            cout<<choicesLeft<<" choices left"<<endl<<endl;

            if(choicesLeft==0)
            {
               cout<<"You couldn't find the secret number., it was "<<hiddenNum<<" You Lose!"<<endl<<endl;
               cout<<"!!!Play the game again to win!!!";
            }
         }
      }
   }


            if(difficultyLevel==2)
   {
         cout<<"You have 7 choices to guess the secret number between 1 to 100 : "<<endl<<endl;
         int choicesLeft=7;
         for(int i=0;i<7;i++)
      {
            cout<<"Enter the number : ";
            cin>>answer;
         

         if(answer==hiddenNum)
         {
            cout<<"Well played! You have won, "<<answer<<" is the secret number"<<endl<<endl;
            cout<<"Thanks for playing the game....."<<endl<<endl;
            break;
         }

         else{
            cout<<"ALERT! ALERT! "<<answer<<" is not the right number!!"<<endl<<endl;
            if(answer>hiddenNum){
               cout<<"The secret number is smaller then the number you have chosen"<<endl<<endl;
            }
            else{
            cout<<"The secret number is greater than the number you have chosen"<<endl<<endl;
            }

            choicesLeft--;
            cout<<choicesLeft<<" choices left"<<endl<<endl;

            if(choicesLeft==0)
            {
               cout<<"You couldn't find the secret number., it was "<<hiddenNum<<" You Lose!"<<endl<<endl;
               cout<<"!!!Play the game again to win!!!";
            }
         }
      }
   }
      
   
         if(difficultyLevel==3)
   {
         cout<<"You have 5 choices to guess the secret number between 1 to 100 : "<<endl<<endl;
         int choicesLeft=5;
         for(int i=0;i<5;i++)
      {
            cout<<"Enter the number : ";
            cin>>answer;
         

         if(answer==hiddenNum)
         {
            cout<<"Well played! You have won, "<<answer<<" is the secret number"<<endl<<endl;
            cout<<"Thanks for playing the game....."<<endl<<endl;
            break;
         }

         else{
            cout<<"ALERT! ALERT! "<<answer<<" is not the right number!!"<<endl<<endl;
            if(answer>hiddenNum){
               cout<<"The secret number is smaller then the number you have chosen"<<endl<<endl;
            }
            else{
            cout<<"The secret number is greater than the number you have chosen"<<endl<<endl;
            }

            choicesLeft--;
            cout<<choicesLeft<<" choices left"<<endl<<endl;

            if(choicesLeft==0)
            {
               cout<<"You couldn't find the secret number., it was "<<hiddenNum<<" You Lose!"<<endl<<endl;
               cout<<"!!!Play the game again to win!!!"<<endl<<endl;;
            }
         }
      }
   }


      else if(difficultyLevel==0)
      {
         exit(0);
      }
     
}

   return 0;
}

