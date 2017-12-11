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

int cube[6][4];

int* adjacencyList[6][4][2];

const char side_names[6]={'W', 'B', 'R', 'G', 'Y', 'O'};

void resetCube(){
  cube[FRONT][0]=GREEN;
  cube[FRONT][1]=GREEN;
  cube[FRONT][2]=GREEN;
  cube[FRONT][3]=GREEN;
  cube[BACK][0]=BLUE;
  cube[BACK][1]=BLUE;
  cube[BACK][2]=BLUE;
  cube[BACK][3]=BLUE;
  cube[LEFT][0]=ORANGE;
  cube[LEFT][1]=ORANGE;
  cube[LEFT][2]=ORANGE;
  cube[LEFT][3]=ORANGE;
  cube[RIGHT][0]=RED;
  cube[RIGHT][1]=RED;
  cube[RIGHT][2]=RED;
  cube[RIGHT][3]=RED;
  cube[UP][0]=WHITE;
  cube[UP][1]=WHITE;
  cube[UP][2]=WHITE;
  cube[UP][3]=WHITE;
  cube[DOWN][0]=YELLOW;
  cube[DOWN][1]=YELLOW;
  cube[DOWN][2]=YELLOW;
  cube[DOWN][3]=YELLOW;
}

void initAdjList(){
  adjacencyList[FRONT][0][0] = &(cube[LEFT][3-1]);
  adjacencyList[FRONT][0][1] = &(cube[LEFT][2-1]);
  adjacencyList[FRONT][1][0] = &(cube[UP][2-1]);
  adjacencyList[FRONT][1][1] = &(cube[UP][1-1]);
  adjacencyList[FRONT][2][0] = &(cube[RIGHT][1-1]);
  adjacencyList[FRONT][2][1] = &(cube[RIGHT][4-1]);
  adjacencyList[FRONT][3][0] = &(cube[DOWN][2-1]);
  adjacencyList[FRONT][3][1] = &(cube[DOWN][1-1]);

  adjacencyList[BACK][0][0] = &(cube[DOWN][3-1]);
  adjacencyList[BACK][0][1] = &(cube[DOWN][4-1]);
  adjacencyList[BACK][1][0] = &(cube[RIGHT][2-1]);
  adjacencyList[BACK][1][1] = &(cube[RIGHT][3-1]);
  adjacencyList[BACK][2][0] = &(cube[UP][3-1]);
  adjacencyList[BACK][2][1] = &(cube[UP][4-1]);
  adjacencyList[BACK][3][0] = &(cube[LEFT][4-1]);
  adjacencyList[BACK][3][1] = &(cube[LEFT][1-1]);

  adjacencyList[LEFT][0][0] = &(cube[BACK][3-1]);
  adjacencyList[LEFT][0][1] = &(cube[BACK][2-1]);
  adjacencyList[LEFT][1][0] = &(cube[UP][3-1]);
  adjacencyList[LEFT][1][1] = &(cube[UP][2-1]);
  adjacencyList[LEFT][2][0] = &(cube[FRONT][1-1]);
  adjacencyList[LEFT][2][1] = &(cube[FRONT][4-1]);
  adjacencyList[LEFT][3][0] = &(cube[DOWN][1-1]);
  adjacencyList[LEFT][3][1] = &(cube[DOWN][4-1]);

  adjacencyList[RIGHT][0][0] = &(cube[DOWN][2-1]);
  adjacencyList[RIGHT][0][1] = &(cube[DOWN][3-1]);
  adjacencyList[RIGHT][1][0] = &(cube[FRONT][2-1]);
  adjacencyList[RIGHT][1][1] = &(cube[FRONT][3-1]);
  adjacencyList[RIGHT][2][0] = &(cube[UP][4-1]);
  adjacencyList[RIGHT][2][1] = &(cube[UP][1-1]);
  adjacencyList[RIGHT][3][0] = &(cube[BACK][4-1]);
  adjacencyList[RIGHT][3][1] = &(cube[BACK][1-1]);

  adjacencyList[UP][0][0] = &(cube[FRONT][1-1]);
  adjacencyList[UP][0][1] = &(cube[FRONT][2-1]);
  adjacencyList[UP][1][0] = &(cube[LEFT][1-1]);
  adjacencyList[UP][1][1] = &(cube[LEFT][2-1]);
  adjacencyList[UP][2][0] = &(cube[BACK][1-1]);
  adjacencyList[UP][2][1] = &(cube[BACK][2-1]);
  adjacencyList[UP][3][0] = &(cube[RIGHT][1-1]);
  adjacencyList[UP][3][1] = &(cube[RIGHT][2-1]);

  adjacencyList[DOWN][0][0] = &(cube[RIGHT][4-1]);
  adjacencyList[DOWN][0][1] = &(cube[RIGHT][3-1]);
  adjacencyList[DOWN][1][0] = &(cube[BACK][4-1]);
  adjacencyList[DOWN][1][1] = &(cube[BACK][3-1]);
  adjacencyList[DOWN][2][0] = &(cube[LEFT][4-1]);
  adjacencyList[DOWN][2][1] = &(cube[LEFT][3-1]);
  adjacencyList[DOWN][3][0] = &(cube[FRONT][4-1]);
  adjacencyList[DOWN][3][1] = &(cube[FRONT][3-1]);
}

void rotateCCW(int side){
  int tempCube[6][4];
  int i = 0;
  int j = 0;

  for(j = 0; j < 6; j++){
    for(i = 0; i < 4; i++){
      tempCube[j][i] = cube[j][i];
    }
  }

  
 for(i = 0; i < 4; i++){
    *(&(tempCube[0][0]) + (adjacencyList[side][i][0] - &(cube[0][0]))) = *(adjacencyList[side][(i+1)%4][0]);
    *(&(tempCube[0][0]) + (adjacencyList[side][i][1] - &(cube[0][0]))) = *(adjacencyList[side][(i+1)%4][1]);
    tempCube[side][i] = cube[side][(i+1) % 4];
  }
  
  for(j = 0; j < 6; j++){
    for(i = 0; i < 4; i++){
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
  printf("  %c%c    \n", side_names[cube[UP][2]],side_names[cube[UP][3]]);
  printf("  %c%c    \n", side_names[cube[UP][1]],side_names[cube[UP][0]]);
  printf("%c%c%c%c%c%c%c%c\n", side_names[cube[LEFT][0]],side_names[cube[LEFT][1]],side_names[cube[FRONT][0]],side_names[cube[FRONT][1]],side_names[cube[RIGHT][0]],side_names[cube[RIGHT][1]],side_names[cube[BACK][0]],side_names[cube[BACK][1]]);
  printf("%c%c%c%c%c%c%c%c\n", side_names[cube[LEFT][3]],side_names[cube[LEFT][2]],side_names[cube[FRONT][3]],side_names[cube[FRONT][2]],side_names[cube[RIGHT][3]],side_names[cube[RIGHT][2]],side_names[cube[BACK][3]],side_names[cube[BACK][2]]);
  printf("  %c%c    \n", side_names[cube[DOWN][0]],side_names[cube[DOWN][1]]);
  printf("  %c%c    \n", side_names[cube[DOWN][3]],side_names[cube[DOWN][2]]);
  printf("\n\n");
}

void main(){
  int i = 0;
  char move;
  int dir;
  
  resetCube();
  initAdjList();
  printCube();

  for(i = 0; i < 26; i++){
      if(FRUBLD) break;

      scanf("%1c%1d", &move, &dir);

      switch(move){
          case '0':
            move='F';
            break;
          case '1':
            move='B';
            break;
          case '2':
            move='L';
            break;
          case '3':
            move='R';
            break;
          case '4':
            move='U';
            break;
          case '5':
            move='D';
            break;
          default:
            break;
      }

      switch(move){
          case 'F':
              (dir == 0) ? rotateCW(FRONT) : rotateCCW(FRONT);
            break;
          case 'B':
              (dir == 0) ? rotateCW(BACK) : rotateCCW(BACK);
            break;
          case 'L':
              (dir == 0) ? rotateCW(LEFT) : rotateCCW(LEFT);
            break;
          case 'R':
              (dir == 0) ? rotateCW(RIGHT) : rotateCCW(RIGHT);
            break;
          case 'U':
              (dir == 0) ? rotateCW(UP) : rotateCCW(UP);
            break;
          case 'D':
              (dir == 0) ? rotateCW(DOWN) : rotateCCW(DOWN);
            break;
      }
      printCube();
  }
}
