# include<iostream>
# include<cmath>

using namespace std;

int main()

{
cout<< "Hello, welcome to the app"<< endl;
cout<< "plz create a new account"<< endl;
cout << "choose a username:"<< endl;
string user;
getline(cin,user);
cout<< "choose a password: "<< endl;
string pass;
getline (cin,pass);

cout<< "please enter your information" <<endl;
cout<< "username: "<< endl;
string username;
getline (cin,username);
cout<< "password"<< endl;
string password;
getline(cin,password);

while (username!= user || password!=pass)
{
    cout<< "wrong username or password please try again"<< endl;
    cout << "username"<< endl;
    getline(cin,username);
    cout<< "password :"<< endl;
    getline(cin,password);
}

cout<< "welcome to the bagel app"<< endl;
double balance= 5.00;
int newbalance;
cout<< "Would you like to add money to your balance ?"<< endl;
string q1;
getline(cin,q1);
if (q1== "yes")
{
    cout << " enter how much money you want to add: " << endl;
    double add;
    cin>> add;
    cout<< "your new balance is " << balance+add << "rupees"<< endl;
    newbalance= balance+add;
}else
{
    cout << "alright" << endl;
}
cout << "would you like a bagel today type yes \ no"<< endl;
cin.ignore();
string q2;
//cin.clear();
getline (cin,q2);
if(q2=="yes")
{
  cout<< "please select what bagel you want  "<< endl;
    string bageltype[] ={"nature bagel","cheese bagel","egg bagel"};
    double bagelprice [] = {3.00,4.00,5.00};


   cout << "1." << bageltype[0] << "--"<< bagelprice[0] << "rupees" << endl;
    cout << "2." << bageltype [1] << "--"<< bagelprice [1]<< "rupees" << endl;
   cout << "3." << bageltype [2] << "--"<< bagelprice [2]<< "rupees" << endl;
    cout << "your choice :"<< endl;
    int q3;
    cin>>q3;
    while(q3>3||q3<1)
    {
        cout<< "this is not a valid input please try again"<< endl;
        cin>>q3;
    }

    if(q3==1)
    {
        cout<< "you have orderd a " << bageltype [0]<< endl;
        cout << "the total of your order is "<< bagelprice[0]<< "rupees"<< endl;
        cout << "you have "<< newbalance- bagelprice[0]<< "rupees left on your balance"<< endl;
    }
    else if (q3==2)
    {
         cout<< "you have orderd a " << bageltype [1]<< endl;
        cout << "the total of your order is "<< bagelprice[1]<< "rupees"<< endl;
        cout << "you have "<< newbalance- bagelprice[1]<< "rupees left on your balance"<< endl;
    }
    else if (q3==3)
    {
         cout<< "you have orderd a " << bageltype [2]<< endl;
        cout << "the total of your order is "<< bagelprice[2]<< "rupees"<< endl;
        cout << "you hsve "<< newbalance- bagelprice[2]<< "rupees left on your balance"<< endl;
    }
}
else
{
    cout <<" alright have a good day"<< endl;
}



































}
