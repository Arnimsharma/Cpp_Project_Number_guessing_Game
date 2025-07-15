#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main(){
	cout<<"Hello Today we are going to play a number guessing game!"<<endl<<"Are You Ready ?"<<endl;
	cout<<"OK so choose a number between 1 to 10"<<endl<<endl;
	cout<<"You have only three chances with you..."<<endl;


	srand(time(0));
	int randomNumber = rand()%10 + 1;
	
	for(int i = 1; i<=3; i++){
		cout<<"This is your "<<i<<" chance.."<<endl;
		int inp;
		cin>>inp;
		if(inp == randomNumber){
			cout<<"You have guessed the correct number you are a genius "<<endl;
			break;
		}
		else{
			if(i < 3){
				cout<<"You have guessed the wrong number please retry !";
			}
			else{
				cout<<"you have lost correct nummber is "<<randomNumber;
		}
	}
}
	return 0;
}