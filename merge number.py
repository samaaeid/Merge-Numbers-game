import random
N, M = 6, 7

#global grid
grid= []
counter=0
grid= [[ 0 for x in range(M)] for y in range(N)]

#This function prints the grid of Connect Four Game as the game progresses
def print_grid():

    print('--' + '---' * M + '--')
    for i in range(N):
        print(end='|  ')
        for j in range(M):
            if grid[i][j]:
               print(grid[i][j], end='  ')
            else:
               print(' ', end='  ')
            #print(grid[i][j], end='  ')
        print(end='|')
        print()
        print('--' + '---' * M + '--')

#This function checks if row or column or diagonal is full with same characters
def check_win():
    return counter >= 10

#This function checks if row or column or diagonal is full with same characters
def check_lose():

    for i in range(N):
        for j in range(M):
            if grid[i][j] == 0:
                return False

    return True

#This function checks if given position is valid or not
def check_valid_column(i):
    if 0<=i<=M:
        return True
    else:
        return False


#This function sets a value to a cell
def set_cell(j,a):
    s=N-1
    global counter
    for i in range(N-1,0,-1):
        if grid[i][j]==0:
            s=i
            break
    if s==N-1:
        grid[s][j] = a

    else:
        if grid[s + 1][j] == a:
            counter += 1
            grid[s + 1][j] = a + a
        else:
            grid[s][j] = a


def generate_numbers():
   global a
   a = random.randint(1, 10)
   grid[0][M//2] = a
   return a

#This function clears the grid
def grid_clear():
    global grid
    global counter
    counter=0
    grid = [[ 0 for x in range(M)] for y in range(N)]


#MAIN FUNCTION
def play_game():
    print("Merge Numbers Game!")
    print("Welcome...")
    print("============================")
    player = 0
    while True:
        #Prints the grid
        a=generate_numbers()
        print_grid()
        print("your score is : ",counter)
        i = int(input('Enter the column index: '))
        i-=1
        while not check_valid_column(i) :
            i = int(input('Enter a valid column index: '))
            i-=1
        #Set the input position with the mark
        set_cell(i,a)
        #Check if the state of the grid has a win state
        if check_win():
            #Prints the grid
            print_grid()
            print('Congrats, you won!' )
            break
        if check_lose():
            #Prints the grid
            print_grid()
            print("you are lose !")
            break

while True:
	grid_clear()
	play_game()
	c = input('Play Again [Y/N] ')
	if c not in 'yY':
		break
