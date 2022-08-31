#include<bits/stdc++.h>
using namespace std;

vector<string>movies={"Dabang","Dabang","Titanic","Rokstar"};
vector<int>price={200,150,340,500};
void customer()
{
  cout<<"Running movies are :"<<endl;

    int c=1;
    cout<<"S.no"<<"   "<<"Movies"<<"       "<<"Price"<<endl;
    for(int i=0 ;i<movies.size();i++)
    {
        cout<<c<<"      "<<movies[i]<<"       "<<price[i] <<endl;
        c++;
    }
     c=1;
     int choice;
     cout<<"Enter movie which you want to book "<<endl;
     cin>>choice;
     if(choice>4)
     {

         cout<<"Unknown Movie"<<endl;return;
     }
     int total=price[choice-1];

     cout<<"Movie booked "<<endl;
     cout<<"cost of movie is "<<total<<endl;



}

void manager()
{
    cout<<"Running movies are: "<<endl;
     int c=1;
     cout<<"S.no"<<"  "<<"Movies"<<endl;
    for(auto i:movies)
    {
        cout<<c<<"     "<<i<<endl;
        c++;
    }
     c=1;
    cout<<"Enter the movie number which you want to replace "<<endl;
    int d;
    cin>>d;
    if(d>4){
        cout<<"Unknown Movie"<<endl;
        return;
    }
    cout<<"Enter the new Movie name "<<endl;
    string input;
    cin>>input;
    cout<<"Enter the new Movie Price "<<endl;
    int p;
    cin>>p;
    price[d-1]=p;

    movies[d-1]=input;
    cout<<endl;
    cout<<"Updated List of movies are:"<<endl;
    cout<<"S.no"<<"   "<<"Movies"<<endl;
    for(auto i:movies)
    {
        cout<<c<<"      "<<i<<endl;
        c++;
    }
    c=1;

}


int main()
{

 int choice;
while(choice !=3){
    cout<<"Enter 1 for Manager "<<endl;
    cout<<"Enter 2 for Customer "<<endl;
    cout<<"Enter 3 or any other key for exit"<<endl;


   cin>>choice;
    switch(choice){


    case 1: manager();
             break;
    case 2: customer();
            break;

    case 3:exit(0);


    }

}
return 0;
}