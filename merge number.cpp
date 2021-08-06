#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cmath>
using namespace std;

const int N = 8;
const int M = 7;
int grid[N][M];
int counter=0;


//This function prints the grid of Gomoku as the game progresses
void print_grid() {
    cout << "\n";
	cout << "-";
    for (int i = 0; i < M; cout << "---", i++);
    cout << "--\n";
    for (int i = 0; i < N; i++) {
        cout << "  ";
        for (int j = 0; j < M; j++)
            if (grid[i][j])
                {cout << grid[i][j] << "  ";}
            else 
               { cout << " " << "  ";}
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
            if (grid[i][j]==0)
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
    int s;
    for (int i= N-1 ; i>=0 ; i-- ){
        if (grid[i][j]==0){
            s=i;
            break;
            }
    }
    if (grid[s+1][j]==a){grid[s+1][j]=a+a;}
    else{grid[s][j]=a;}
}

//This function generates pac man
int generate_number() {
    srand( (unsigned)time( NULL ) );
    int a = rand() % N +1;
    grid[0][M/2] = a;
    return a;
}

//This function clears the game structures
void grid_clear() {
    for (int i =0 ; i<N; i++){
        for (int j =0 ; j<M; j++){
            grid[i][j]=0;
            }}
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
    cout << "Connect Four Game!\n";
    cout << "Welcome...\n";
    cout << "============================\n";
    while (true) {
        int a=generate_number();
        //Prints the grid
        print_grid();
        int i;
		read_input(i);
        i-=1;
        //Set the input position with the mark
        set_cell(i,a);
        //Check if the state of the grid has a win state
        if (check_win()) {
            //Prints the grid
            print_grid();
            //Announcement of the final statement
            cout << "Congrats, you won!\n";
            break;
        }
        #include <iostream>
#include <ctime>
#include <cstdlib>
#include <cmath>
using namespace std;

const int N = 8;
const int M = 7;
int grid[N][M];
int counter=0;


//This function prints the grid of Gomoku as the game progresses
void print_grid() {
    cout << "\n";
	cout << "-";
    for (int i = 0; i < M; cout << "---", i++);
    cout << "--\n";
    for (int i = 0; i < N; i++) {
        cout << "  ";
        for (int j = 0; j < M; j++)
            if (grid[i][j])
                {cout << grid[i][j] << "  ";}
            else 
               { cout << " " << "  ";}
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
            if (grid[i][j]==0)
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
    int s;
    for (int i= N-1 ; i>=0 ; i-- ){
        if (grid[i][j]==0){
            s=i;
            break;
            }
    }
    if (grid[s+1][j]==a){grid[s+1][j]=a+a;}
    else{grid[s][j]=a;}
}

//This function generates pac man
int generate_number() {
    srand( (unsigned)time( NULL ) );
    int a = rand() % N +1;
    grid[0][M/2] = a;
    return a;
}

//This function clears the game structures
void grid_clear() {
    for (int i =0 ; i<N; i++){
        for (int j =0 ; j<M; j++){
            grid[i][j]=0;
            }}
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
    cout << "Connect Four Game!\n";
    cout << "Welcome...\n";
    cout << "============================\n";
    while (true) {
        int a=generate_number();
        //Prints the grid
        print_grid();
        int i;
		read_input(i);
        i-=1;
        //Set the input position with the mark
        set_cell(i,a);
        //Check if the state of the grid has a win state
        if (check_win()) {
            //Prints the grid
            print_grid();
            //Announcement of the final statement
            cout << "Congrats, you won!\n";
            break;
        }
        //Check if the state of the grid has a lose state
        if (check_lose()){
            //Prints the grid
            print_grid();
            //Announcement of the final statement
            cout << "Woah! That's a tie!\n";
            break;
        }
    }
}
int main() {
    while (true) {
    	grid_clear();
    	play_game();
    	char c;
    	cout << "Play Again [Y/N] ";
    	cin >> c;
    	if (c != 'y' && c != 'Y')
    		break;
    }
}
        if (check_lose()){
            //Prints the grid
            print_grid();
            //Announcement of the final statement
            cout << "Game over!\n";
            break;
        }
    }
}
int main() {
    while (true) {
    	grid_clear();
    	play_game();
    	char c;
    	cout << "Play Again [Y/N] ";
    	cin >> c;
    	if (c != 'y' && c != 'Y')
    		break;
    }
}
