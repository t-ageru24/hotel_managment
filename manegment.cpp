
#include<iostream>
using namespace std;

int main(){
    int quant;
    int choice;

    //quantity
    int Qrooms=0, Qpasta=0, Qburger=0, Qnoodle=0, Qshake=0, Qchicken=0;
    //food items
    int Srooms=0, Spasta = 0, Sburger=0, Snoodle=0, Sshake=0, Schicken=0;
    //Total price of items
    int Total_rooms=0, Total_pasta=0, Total_burger=0, Total_noodle=0, Total_shake=0, Total_chicken=0;

    cout<<"\n\t Quantity of items we have";
    cout<<"\n Rooms available: ";
    cin>>Qrooms;
    cout<<"\n Quantity of pasta: ";
    cin>>Qpasta;
    cout<<"\n Quantity of burger: ";
    cin>>Qburger;
    cout<<"\n Quantity of noodles: ";
    cin>>Qnoodle;
    cout<<"\n Quantity of shake: ";
    cin>>Qshake;
    cout<<"\n Quantity of chicken-roll: ";
    cin>>Qchicken;

    m:
    cout<<"\n\t\t\t Please select from the menu options ";
    cout<<"\n\n1) Rooms";
    cout<<"\n2) Pasta";
    cout<<"\n3) Burger";
    cout<<"\n4) Noodles";
    cout<<"\n5) Shake";
    cout<<"\n6) check-roll";
    cout<<"\n7) Information regarding sales and collection";
    cout<<"\n8) Exit";

    cout<<"\n\n Please Enter your choice!";
    cin>>choice;

    switch(choice){
    case 1:
        cout<<"\n\n Ebter the number of rooms you want";
        cin>>quant;
        if(Qrooms-Srooms >= quant){
            Srooms = Srooms+quant;
            Total_rooms = Total_rooms + quant*1200;
            cout<<"\n\n\t\t"<<quant<<"room/rooms have been alloted to you!";

        }
        else{
            cout<<"\n\tOnly"<<Qrooms-Srooms<<"Rooms remaining in hotel ";
            break;
        }

    case 2:
        cout<<"\n\n Enter Pasta Quantity";

        cin>>quant;
        if(Qpasta-Spasta >= quant){
            Spasta = Spasta+quant;
            Total_pasta = Total_pasta + quant*250;
            cout<<"\n\n\t\t"<<quant<<"pasta have been ordered!";
        }
        else{
            cout<<"\n\tOnly"<<Qpasta-Spasta<<"Pasta remaining in hotel ";
            break;
        }


    case 3:
        cout<<"\n\n Enter Burger Quantity :";

        cin>>quant;
        if(Qburger-Sburger >= quant){
            Sburger = Sburger+quant;
            Total_burger = Total_burger + quant*120;
            cout<<"\n\n\t\t"<<quant<<"burger have been ordered!";
        }
        else{
            cout<<"\n\tOnly"<<Qpasta-Spasta<<"Burger remaining in hotel ";
            break;
        }

     case 4:
        cout<<"\n\n Enter Noodle Quantity :";

        cin>>quant;
        if(Qnoodle-Snoodle >= quant){
            Snoodle = Snoodle+quant;
            Total_noodle = Total_noodle + quant*120;
            cout<<"\n\n\t\t"<<quant<<"Noodle have been ordered!";
        }
        else{
            cout<<"\n\tOnly"<<Qnoodle-Snoodle<<"Noodle remaining in hotel ";
            break;
        }

     case 5:
        cout<<"\n\n Enter Shake Quantity :";

        cin>>quant;
        if(Qshake-Sshake >= quant){
            Sshake = Sshake+quant;
            Total_shake = Total_shake + quant*120;
            cout<<"\n\n\t\t"<<quant<<"Shake have been ordered!";
        }
        else{
            cout<<"\n\tOnly"<<Qshake-Sshake<<"Shake remaining in hotel ";
            break;
        }

    case 6:
        cout<<"\n\n Enter Chicken-roll Quantity :";

        cin>>quant;
        if(Qchicken-Schicken >= quant){
            Schicken = Schicken+quant;
            Total_chicken = Total_chicken + quant*120;
            cout<<"\n\n\t\t"<<quant<<"Chicken-roll have been ordered!";
        }
        else{
            cout<<"\n\tOnly"<<Qchicken-Schicken<<"Chicken-roll remaining in hotel ";
            break;
        }


    case 7:
        cout<<"\n\t Details of sales and collection ";
        cout<<"\n\n Number of rooms we had :"<<Qrooms;
        cout<<"n\n Number of rooms we gave for rent "<<Srooms;
        cout<<"\n\n Remaining rooms :"<< Qrooms-Srooms;
        cout<<"\n\n Total rooms collection for the day : "<<Total_rooms;

        //cout<<"\n\t Details of sales and collection ";
        cout<<"\n\n Number of Pastas we had :"<<Qpasta;
        cout<<"n\n Number of Pastas we gave for rent "<<Spasta;
        cout<<"\n\n Remaining Pastas :"<< Qpasta-Spasta;
        cout<<"\n\n Total Pastas collection for the day : "<<Total_pasta;

        //cout<<"\n\t Details of sales and collection ";
        cout<<"\n\n Number of Burger we had :"<<Qburger;
        cout<<"n\n Number of Burger we gave for rent "<<Sburger;
        cout<<"\n\n Remaining Burger :"<< Qburger-Sburger;
        cout<<"\n\n Total Burger collection for the day : "<<Total_burger;

        cout<<"\n\n Number of Noodles we had :"<<Qnoodle;
        cout<<"n\n Number of Noodles we gave for rent "<<Snoodle;
        cout<<"\n\n Remaining Noodles :"<< Qnoodle-Snoodle;
        cout<<"\n\n Total Noodles collection for the day : "<<Total_noodle;

        cout<<"\n\n Number of Shake we had :"<<Qshake;
        cout<<"n\n Number of Shake we gave for rent "<<Sshake;
        cout<<"\n\n Remaining Shake :"<< Qshake-Sshake;
        cout<<"\n\n Total Shake collection for the day : "<<Total_shake;

        cout<<"\n\n Number of Chicken-roll we had :"<<Qchicken;
        cout<<"n\n Number of Chicken-roll we gave for rent "<<Schicken;
        cout<<"\n\n Remaining Chicken-roll :"<< Qchicken-Schicken;
        cout<<"\n\n Total Chicken-roll collection for the day : "<<Total_chicken;

    case 8:
        exit(0);

    default:
        cout<<"\n Please select the numbers mentioned above!";

    }
    goto m;
}
