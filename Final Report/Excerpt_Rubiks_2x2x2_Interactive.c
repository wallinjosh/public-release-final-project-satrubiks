#define WHITE 0
#define BLUE 1
#define RED 2
#define GREEN 3
#define YELLOW 4
#define ORANGE 5
#define FRONT 0
#define BACK 1
#define LEFT 2
#define RIGHT 3
#define UP 4
#define DOWN 5

int cube[6][4];
    .
    .
    .
void initAdjList(){
    adjacencyList[FRONT][0][0] = &(cube[LEFT][2]);
    adjacencyList[FRONT][0][1] = &(cube[LEFT][1]);
    adjacencyList[FRONT][1][0] = &(cube[UP][1]);
    adjacencyList[FRONT][1][1] = &(cube[UP][0]);
    adjacencyList[FRONT][2][0] = &(cube[RIGHT][0]);
    adjacencyList[FRONT][2][1] = &(cube[RIGHT][3]);
    adjacencyList[FRONT][3][0] = &(cube[DOWN][1]);
    adjacencyList[FRONT][3][1] = &(cube[DOWN][0]);
    .
    .
    .
void rotateCCW(int side){
    .
    .  
    .
}
void rotateCW(int side){
    rotateCCW(side);
    rotateCCW(side);
    rotateCCW(side);
}
void main(){
    int i = 0;
    char move;
    int dir;
    resetCube();
    initAdjList();
    printCube();
    .
    .
    .
}
