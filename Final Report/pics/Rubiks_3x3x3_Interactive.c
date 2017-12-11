#include <stdio.h>
#include <assert.h>

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

int cube[6][9];

int* adjacencyList[6][4][3];

const char side_names[6]={'W', 'B', 'R', 'G', 'Y', 'O'};

void resetCube(){
  cube[FRONT][0]=GREEN;
  cube[FRONT][1]=GREEN;
  cube[FRONT][2]=GREEN;
  cube[FRONT][3]=GREEN;
  cube[FRONT][4]=GREEN;
  cube[FRONT][5]=GREEN;
  cube[FRONT][6]=GREEN;
  cube[FRONT][7]=GREEN;
  cube[FRONT][8]=GREEN;
  cube[BACK][0]=BLUE;
  cube[BACK][1]=BLUE;
  cube[BACK][2]=BLUE;
  cube[BACK][3]=BLUE;
  cube[BACK][4]=BLUE;
  cube[BACK][5]=BLUE;
  cube[BACK][6]=BLUE;
  cube[BACK][7]=BLUE;
  cube[BACK][8]=BLUE;
  cube[LEFT][0]=ORANGE;
  cube[LEFT][1]=ORANGE;
  cube[LEFT][2]=ORANGE;
  cube[LEFT][3]=ORANGE;
  cube[LEFT][4]=ORANGE;
  cube[LEFT][5]=ORANGE;
  cube[LEFT][6]=ORANGE;
  cube[LEFT][7]=ORANGE;
  cube[LEFT][8]=ORANGE;
  cube[RIGHT][0]=RED;
  cube[RIGHT][1]=RED;
  cube[RIGHT][2]=RED;
  cube[RIGHT][3]=RED;
  cube[RIGHT][4]=RED;
  cube[RIGHT][5]=RED;
  cube[RIGHT][6]=RED;
  cube[RIGHT][7]=RED;
  cube[RIGHT][8]=RED;
  cube[UP][0]=WHITE;
  cube[UP][1]=WHITE;
  cube[UP][2]=WHITE;
  cube[UP][3]=WHITE;
  cube[UP][4]=WHITE;
  cube[UP][5]=WHITE;
  cube[UP][6]=WHITE;
  cube[UP][7]=WHITE;
  cube[UP][8]=WHITE;
  cube[DOWN][0]=YELLOW;
  cube[DOWN][1]=YELLOW;
  cube[DOWN][2]=YELLOW;
  cube[DOWN][3]=YELLOW;
  cube[DOWN][4]=YELLOW;
  cube[DOWN][5]=YELLOW;
  cube[DOWN][6]=YELLOW;
  cube[DOWN][7]=YELLOW;
  cube[DOWN][8]=YELLOW;
}

void initAdjList(){
  adjacencyList[FRONT][0][0] = &(cube[LEFT][2]);
  adjacencyList[FRONT][0][1] = &(cube[LEFT][5]);
  adjacencyList[FRONT][0][2] = &(cube[LEFT][1]);
  adjacencyList[FRONT][1][0] = &(cube[UP][1]);
  adjacencyList[FRONT][1][1] = &(cube[UP][4]);
  adjacencyList[FRONT][1][2] = &(cube[UP][0]);
  adjacencyList[FRONT][2][0] = &(cube[RIGHT][0]);
  adjacencyList[FRONT][2][1] = &(cube[RIGHT][7]);
  adjacencyList[FRONT][2][2] = &(cube[RIGHT][3]);
  adjacencyList[FRONT][3][0] = &(cube[DOWN][1]);
  adjacencyList[FRONT][3][1] = &(cube[DOWN][4]);
  adjacencyList[FRONT][3][2] = &(cube[DOWN][0]);

  adjacencyList[BACK][0][0] = &(cube[DOWN][2]);
  adjacencyList[BACK][0][1] = &(cube[DOWN][6]);
  adjacencyList[BACK][0][2] = &(cube[DOWN][3]);
  adjacencyList[BACK][1][0] = &(cube[RIGHT][1]);
  adjacencyList[BACK][1][1] = &(cube[RIGHT][5]);
  adjacencyList[BACK][1][2] = &(cube[RIGHT][2]);
  adjacencyList[BACK][2][0] = &(cube[UP][2]);
  adjacencyList[BACK][2][1] = &(cube[UP][6]);
  adjacencyList[BACK][2][2] = &(cube[UP][3]);
  adjacencyList[BACK][3][0] = &(cube[LEFT][3]);
  adjacencyList[BACK][3][1] = &(cube[LEFT][7]);
  adjacencyList[BACK][3][2] = &(cube[LEFT][0]);

  adjacencyList[LEFT][0][0] = &(cube[BACK][2]);
  adjacencyList[LEFT][0][1] = &(cube[BACK][5]);
  adjacencyList[LEFT][0][2] = &(cube[BACK][1]);
  adjacencyList[LEFT][1][0] = &(cube[UP][2]);
  adjacencyList[LEFT][1][1] = &(cube[UP][5]);
  adjacencyList[LEFT][1][2] = &(cube[UP][1]);
  adjacencyList[LEFT][2][0] = &(cube[FRONT][0]);
  adjacencyList[LEFT][2][1] = &(cube[FRONT][7]);
  adjacencyList[LEFT][2][2] = &(cube[FRONT][3]);
  adjacencyList[LEFT][3][0] = &(cube[DOWN][0]);
  adjacencyList[LEFT][3][1] = &(cube[DOWN][7]);
  adjacencyList[LEFT][3][2] = &(cube[DOWN][3]);

  adjacencyList[RIGHT][0][0] = &(cube[DOWN][1]);
  adjacencyList[RIGHT][0][1] = &(cube[DOWN][5]);
  adjacencyList[RIGHT][0][2] = &(cube[DOWN][2]);
  adjacencyList[RIGHT][1][0] = &(cube[FRONT][1]);
  adjacencyList[RIGHT][1][1] = &(cube[FRONT][5]);
  adjacencyList[RIGHT][1][2] = &(cube[FRONT][2]);
  adjacencyList[RIGHT][2][0] = &(cube[UP][3]);
  adjacencyList[RIGHT][2][1] = &(cube[UP][7]);
  adjacencyList[RIGHT][2][2] = &(cube[UP][0]);
  adjacencyList[RIGHT][3][0] = &(cube[BACK][3]);
  adjacencyList[RIGHT][3][1] = &(cube[BACK][7]);
  adjacencyList[RIGHT][3][2] = &(cube[BACK][0]);

  adjacencyList[UP][0][0] = &(cube[FRONT][0]);
  adjacencyList[UP][0][1] = &(cube[FRONT][4]);
  adjacencyList[UP][0][2] = &(cube[FRONT][1]);
  adjacencyList[UP][1][0] = &(cube[LEFT][0]);
  adjacencyList[UP][1][1] = &(cube[LEFT][4]);
  adjacencyList[UP][1][2] = &(cube[LEFT][1]);
  adjacencyList[UP][2][0] = &(cube[BACK][0]);
  adjacencyList[UP][2][1] = &(cube[BACK][4]);
  adjacencyList[UP][2][2] = &(cube[BACK][1]);
  adjacencyList[UP][3][0] = &(cube[RIGHT][0]);
  adjacencyList[UP][3][1] = &(cube[RIGHT][4]);
  adjacencyList[UP][3][2] = &(cube[RIGHT][1]);

  adjacencyList[DOWN][0][0] = &(cube[RIGHT][3]);
  adjacencyList[DOWN][0][1] = &(cube[RIGHT][6]);
  adjacencyList[DOWN][0][2] = &(cube[RIGHT][2]);
  adjacencyList[DOWN][1][0] = &(cube[BACK][3]);
  adjacencyList[DOWN][1][1] = &(cube[BACK][6]);
  adjacencyList[DOWN][1][2] = &(cube[BACK][2]);
  adjacencyList[DOWN][2][0] = &(cube[LEFT][3]);
  adjacencyList[DOWN][2][1] = &(cube[LEFT][6]);
  adjacencyList[DOWN][2][2] = &(cube[LEFT][2]);
  adjacencyList[DOWN][3][0] = &(cube[FRONT][3]);
  adjacencyList[DOWN][3][1] = &(cube[FRONT][6]);
  adjacencyList[DOWN][3][2] = &(cube[FRONT][2]);

}



void rotateCCW(int side){
  int tempCube[6][9];
  int i = 0;
  int j = 0;

  for(j = 0; j < 6; j++){
    for(i = 0; i < 9; i++){
      tempCube[j][i] = cube[j][i];
    }
  }

 for(i = 0; i < 4; i++){
    *(&(tempCube[0][0]) + (adjacencyList[side][i][0] - &(cube[0][0]))) = *(adjacencyList[side][(i+1)%4][0]);
    *(&(tempCube[0][0]) + (adjacencyList[side][i][1] - &(cube[0][0]))) = *(adjacencyList[side][(i+1)%4][1]);
    *(&(tempCube[0][0]) + (adjacencyList[side][i][2] - &(cube[0][0]))) = *(adjacencyList[side][(i+1)%4][2]);
  }

  for(i = 0; i < 3; i++){
      tempCube[side][i] = cube[side][(i+1) % 4];
      tempCube[side][i+4] = cube[side][i+5];
  }

  tempCube[side][3] = cube[side][0];
  tempCube[side][7] = cube[side][4];
  
  for(j = 0; j < 6; j++){
    for(i = 0; i < 9; i++){
      cube[j][i] = tempCube[j][i];
    }
  }
}

void rotateCW(int side){
  rotateCCW(side);
  rotateCCW(side);
  rotateCCW(side);
}

void printCube(){
  printf("      |%1c%2c%2c|    \n", side_names[cube[UP][2]],side_names[cube[UP][6]],side_names[cube[UP][3]]);
  printf("      |%1c%2c%2c|    \n", side_names[cube[UP][5]],side_names[cube[UP][8]],side_names[cube[UP][7]]);
  printf("      |%1c%2c%2c|    \n", side_names[cube[UP][1]],side_names[cube[UP][4]],side_names[cube[UP][0]]);
  printf("     ---------    \n");
  printf("%2c%2c%2c|%1c%2c%2c|%1c%2c%2c|%1c%2c%2c\n", side_names[cube[LEFT][0]],side_names[cube[LEFT][4]],side_names[cube[LEFT][1]],side_names[cube[FRONT][0]],side_names[cube[FRONT][4]],side_names[cube[FRONT][1]],side_names[cube[RIGHT][0]],side_names[cube[RIGHT][4]],side_names[cube[RIGHT][1]],side_names[cube[BACK][0]],side_names[cube[BACK][4]],side_names[cube[BACK][1]]);
  printf("%2c%2c%2c|%1c%2c%2c|%1c%2c%2c|%1c%2c%2c\n", side_names[cube[LEFT][7]],side_names[cube[LEFT][8]],side_names[cube[LEFT][5]],side_names[cube[FRONT][7]],side_names[cube[FRONT][8]],side_names[cube[FRONT][5]],side_names[cube[RIGHT][7]],side_names[cube[RIGHT][8]],side_names[cube[RIGHT][5]],side_names[cube[BACK][7]],side_names[cube[BACK][8]],side_names[cube[BACK][5]]);
  printf("%2c%2c%2c|%1c%2c%2c|%1c%2c%2c|%1c%2c%2c\n", side_names[cube[LEFT][3]],side_names[cube[LEFT][6]],side_names[cube[LEFT][2]],side_names[cube[FRONT][3]],side_names[cube[FRONT][6]],side_names[cube[FRONT][2]],side_names[cube[RIGHT][3]],side_names[cube[RIGHT][6]],side_names[cube[RIGHT][2]],side_names[cube[BACK][3]],side_names[cube[BACK][6]],side_names[cube[BACK][2]]);
  printf("     ---------    \n");
  printf("      |%1c%2c%2c|    \n", side_names[cube[DOWN][0]],side_names[cube[DOWN][4]],side_names[cube[DOWN][1]]);
  printf("      |%1c%2c%2c|    \n", side_names[cube[DOWN][7]],side_names[cube[DOWN][8]],side_names[cube[DOWN][5]]);
  printf("      |%1c%2c%2c|    \n", side_names[cube[DOWN][3]],side_names[cube[DOWN][6]],side_names[cube[DOWN][2]]);
  printf("\n\n");
}

void main(){
  int i = 0;
  int move;
  int dir;
  
  resetCube();
  initAdjList();
    printCube();
}
