#include<iostream>
using namespace std;

int main(void){
    int total_vehicles=0,Car=0,Bus=0,Public_Transport=0;
    int total_price=0;

    while(true){
        cout<<"Press 1: For Public Transport"<<endl;
        cout<<"Press 2: For Car"<<endl;
        cout<<"Press 3: For Bus"<<endl;
        cout<<"Press 4: For show the total record"<<endl;
        cout<<"Press 5: For delete directory"<<endl;
        int Input;
        cin>>Input;

        switch(Input){
            case 1:{
                total_price+=100;
                Public_Transport++;
                total_vehicles++;
                break;
            }
            case 2:{
                total_price+=200;
                Car++;
                total_vehicles++;
                break;
            }
            case 3:{
                total_price+=300;
                Bus++;
                total_vehicles++;
                break;
            }

            case 4:{
                cout<<"Total Price:"<<total_price<<endl;
                cout<<"Total Vehicles:"<<total_vehicles<<endl;
                cout<<"Total number of Public Transport:"<<Public_Transport<<endl;
                cout<<"Total number of cars:"<<Car<<endl;
                cout<<"Total number of Bus:"<<Bus<<endl;
                break;
            }

            case 5:{
                total_price=0;
                total_vehicles=0;
                Public_Transport=0;
                Car=0;
                Bus=0;
                break;
            }

            default:{
                cerr<<"Error 404! Wrong Input"<<endl;
            }
        }
    }
}