#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cmath>
#include "F:\New folder\collage\FCI-CB\DS & Algo\weeks\week 2\04-Stack-Array-Based.cpp"

using namespace std;
class mergeBlock
{

private:

const int N = 8;
const int M = 7;
int counter=0;

public:

    stack1 a,b,c,d,e,f,g;
    stack1 grid[7]={a,b,c,d,e,f,g};

//This function prints the grid of Gomoku as the game progresses
void print_grid() {
    cout << "\n";
	cout << "-";
    for (int i = 0; i < M; cout << "---", i++);
    cout << "--\n";
    for (int i = 0; i < N ; i++) {
        cout << "  ";
        cout << grid[0].arr[i] << "  " <<  grid[1].arr[i] << "  " << grid[2].arr[i] << "  " 
        << grid[3].arr[i] << "  " << grid[4].arr[i] << "  "  << grid[5].arr[i] << "  " 
        << grid[6].arr[i] ;
        cout << "\n";
        cout << "";
        for (int i = 0; i < M; cout << "", i++);
    }
    for (int i = 0; i < M; cout << "---", i++);
    cout << "--\n";
} 

//This function checks if the game has a win state or not
bool check_win() {
return counter>=10;
}

bool check_lose() {
    for (int i =0 ; i<N; i++){
        for (int j =0 ; j<M; j++){
            if (grid[i].arr[j]==0)
              {return false;}
            }}
    return true;
}

//This function checks if given position is valid or not
bool check_valid_column(int i) {
    if (0<i && i<=M ){
         return true;}
    else{
        return false;
            }}

//This function sets the given mark to the given column
void set_cell(int j, int a) {
    int v =grid[j].n;
    if(grid[j].top()==a){
        grid[j].arr[v-1]*=2;
        while(grid[j].top()==grid[j].arr[v-2]){
           grid[j].arr[v-2]*=2;
           grid[j].pop();
        }
    }
    else{
        grid[j].push(a);}
}

//This function generates pac man
int generate_number() {
    srand( (unsigned)time( NULL ) );
    int a = rand() % N +1;
    return a;

}

//This function clears the game structures
void grid_clear() {
    for (int i =0 ; i<M ; i++){
        for (int j =0 ; j<N ; j++){
            grid[i].arr[j]=0;
        } }
    counter=0;}

//This function reads a valid position input
void read_input(int &i) {
    cout << "Enter the column index: ";
    cin >> i;
    while (!check_valid_column(i)) {
        cout << "Enter a valid column index: ";
        cin >> i;
    }
}
//MAIN FUNCTION
void play_game() {
    cout << "merge Block Game!\n";
    cout << "Welcome...\n";
    cout << "============================\n";
    while (true) {
        int a=generate_number();
        cout<<"         "<<a<<"         "<<endl;
        //Prints the grid
        print_grid();
        int i;
		read_input(i);
        i-=1;
        //Set the input position with the mark
        set_cell(i,a);
        cout<< "your score is :" <<counter;
        //Check if the state of the grid has a win state
        if (check_win()) {
            //Prints the grid
            print_grid();
            //Announcement of the final statement
            cout << "Congrats, you won!\n";
            cout<< "your score is :" <<counter;
            break;
        }
        //Check if the state of the grid has a tie state
        if (check_lose()){
            //Prints the grid
            print_grid();
            //Announcement of the final statement
            cout << "Woah! That's a tie!\n";
            break;}
    }
}
};
int main() {
    while (true) {
        mergeBlock a;
    	a.grid_clear();
    	a.play_game();
    	char c;
    	cout << "Play Again [Y/N] ";
    	cin >> c;
    	if (c != 'y' && c != 'Y')
    		break;
    }
}
