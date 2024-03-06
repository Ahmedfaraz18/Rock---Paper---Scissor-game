#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
	srand(time(NULL));
int user = 0;
int computer = 0;
cout << "Rock Paper Scissor Game" << endl;
cout << "================================"<< endl;
cout << "1) Rock" << endl;
cout << "2) Paper" << endl;
cout << "3) Scissor" << endl;
cin>>user;

if (user == 1){
	cout << "your choose rock"<<endl;	
}	
else if(user == 2){
	cout << "you choose paper" << endl;
}
else{
	cout << "you choose scissor"<< endl;
}

computer = rand()%3+1;
if(computer == 1){
	cout << "computer choose rock"<<endl;
}
else if(computer == 2){
	cout << "computer choose paper" << endl;
}
else{
	cout << "computer choose scissor"<< endl;
}
//match
if(user == computer){
	cout << "Match tie" << endl;
}
//user --> Rock
else if(user == 1){
	if(computer == 2){
		cout << "you lose!" << endl;
	}
	if(computer == 3){
		cout << "you win!"<< endl;
	}
}
//user --> paper
else if(user == 2){
	if(computer == 1){
		cout << "you win!"<< endl;
	}
	if(computer == 3){
		cout << "You lose!"<<endl;
	}
}
//user --> scissor
else if(user == 3){
	if(computer == 1){
		cout << "you lose!"<< endl;
	}
	if(computer == 2){
		cout << "you win!"<<endl;
	}
}
return 0;

}
