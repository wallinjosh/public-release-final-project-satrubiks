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

#define INITIAL_CONFIGURATION cube[FRONT][0]==GREEN&&cube[FRONT][1]==GREEN&&cube[FRONT][2]==GREEN&&cube[FRONT][3]==GREEN&&cube[FRONT][4]==GREEN&&cube[FRONT][5]==GREEN&&cube[FRONT][6]==GREEN&&cube[FRONT][7]==GREEN&&cube[FRONT][8]==GREEN&&cube[BACK][0]==BLUE&&cube[BACK][1]==BLUE&&cube[BACK][2]==BLUE&&cube[BACK][3]==BLUE&&cube[BACK][4]==BLUE&&cube[BACK][5]==BLUE&&cube[BACK][6]==BLUE&&cube[BACK][7]==BLUE&&cube[BACK][8]==BLUE&&cube[LEFT][0]==ORANGE&&cube[LEFT][1]==ORANGE&&cube[LEFT][2]==ORANGE&&cube[LEFT][3]==ORANGE&&cube[LEFT][4]==ORANGE&&cube[LEFT][5]==ORANGE&&cube[LEFT][6]==ORANGE&&cube[LEFT][7]==ORANGE&&cube[LEFT][8]==ORANGE&&cube[RIGHT][0]==RED&&cube[RIGHT][1]==RED&&cube[RIGHT][2]==RED&&cube[RIGHT][3]==RED&&cube[RIGHT][4]==RED&&cube[RIGHT][5]==RED&&cube[RIGHT][6]==RED&&cube[RIGHT][7]==RED&&cube[RIGHT][8]==RED&&cube[UP][0]==WHITE&&cube[UP][1]==WHITE&&cube[UP][2]==WHITE&&cube[UP][3]==WHITE&&cube[UP][4]==WHITE&&cube[UP][5]==WHITE&&cube[UP][6]==WHITE&&cube[UP][7]==WHITE&&cube[UP][8]==WHITE&&cube[DOWN][0]==YELLOW&&cube[DOWN][1]==YELLOW&&cube[DOWN][2]==YELLOW&&cube[DOWN][3]==YELLOW&&cube[DOWN][4]==YELLOW&&cube[DOWN][5]==YELLOW&&cube[DOWN][6]==YELLOW&&cube[DOWN][7]==YELLOW&&cube[DOWN][8]==YELLOW
#define FRUBLD cube[FRONT][0]==BLUE&&cube[FRONT][1]==WHITE&&cube[FRONT][2]==RED&&cube[FRONT][3]==YELLOW&&cube[FRONT][4]==WHITE&&cube[FRONT][5]==YELLOW&&cube[FRONT][6]==YELLOW&&cube[FRONT][7]==ORANGE&&cube[FRONT][8]==GREEN&&cube[BACK][0]==WHITE&&cube[BACK][1]==GREEN&&cube[BACK][2]==YELLOW&&cube[BACK][3]==RED&&cube[BACK][4]==WHITE&&cube[BACK][5]==YELLOW&&cube[BACK][6]==RED&&cube[BACK][7]==BLUE&&cube[BACK][8]==BLUE&&cube[LEFT][0]==ORANGE&&cube[LEFT][1]==WHITE&&cube[LEFT][2]==RED&&cube[LEFT][3]==BLUE&&cube[LEFT][4]==WHITE&&cube[LEFT][5]==GREEN&&cube[LEFT][6]==BLUE&&cube[LEFT][7]==ORANGE&&cube[LEFT][8]==ORANGE&&cube[RIGHT][0]==ORANGE&&cube[RIGHT][1]==BLUE&&cube[RIGHT][2]==YELLOW&&cube[RIGHT][3]==GREEN&&cube[RIGHT][4]==BLUE&&cube[RIGHT][5]==YELLOW&&cube[RIGHT][6]==GREEN&&cube[RIGHT][7]==RED&&cube[RIGHT][8]==RED&&cube[UP][0]==GREEN&&cube[UP][1]==ORANGE&&cube[UP][2]==WHITE&&cube[UP][3]==RED&&cube[UP][4]==GREEN&&cube[UP][5]==ORANGE&&cube[UP][6]==RED&&cube[UP][7]==WHITE&&cube[UP][8]==WHITE&&cube[DOWN][0]==GREEN&&cube[DOWN][1]==WHITE&&cube[DOWN][2]==BLUE&&cube[DOWN][3]==ORANGE&&cube[DOWN][4]==GREEN&&cube[DOWN][5]==RED&&cube[DOWN][6]==BLUE&&cube[DOWN][7]==ORANGE&&cube[DOWN][8]==YELLOW

// GOAL CONFIG
//   cube[FRONT][0] = BLUE;
//   cube[FRONT][1] = WHITE;
//   cube[FRONT][2] = RED;
//   cube[FRONT][3] = YELLOW;

//   cube[BACK][0] = WHITE;
//   cube[BACK][1] = GREEN;
//   cube[BACK][2] = YELLOW;
//   cube[BACK][3] = RED;

//   cube[LEFT][0] = ORANGE;
//   cube[LEFT][1] = WHITE;
//   cube[LEFT][2] = RED;
//   cube[LEFT][3] = BLUE;

//   cube[RIGHT][0] = BLUE;
//   cube[RIGHT][1] = WHITE;
//   cube[RIGHT][2] = RED;
//   cube[RIGHT][3] = YELLOW;

//   cube[UP][0] = GREEN;
//   cube[UP][1] = ORANGE;
//   cube[UP][2] = YELLOW;
//   cube[UP][3] = RED;

//   cube[DOWN][0] = GREEN;
//   cube[DOWN][1] = WHITE;
//   cube[DOWN][2] = BLUE;
//   cube[DOWN][3] = ORANGE;


int cube[6][9];

int nondet_next_move();
int nondet_next_dir();


void rotateCCW(int side){
  int tempCube[6][9];
  int i = 0;
  int j = 0;

    tempCube[0][0]=cube[0][0];
    tempCube[0][1]=cube[0][1];
    tempCube[0][2]=cube[0][2];
    tempCube[0][3]=cube[0][3];
    tempCube[0][4]=cube[0][4];
    tempCube[0][5]=cube[0][5];
    tempCube[0][6]=cube[0][6];
    tempCube[0][7]=cube[0][7];
    tempCube[0][8]=cube[0][8];
    tempCube[1][0]=cube[1][0];
    tempCube[1][1]=cube[1][1];
    tempCube[1][2]=cube[1][2];
    tempCube[1][3]=cube[1][3];
    tempCube[1][4]=cube[1][4];
    tempCube[1][5]=cube[1][5];
    tempCube[1][6]=cube[1][6];
    tempCube[1][7]=cube[1][7];
    tempCube[1][8]=cube[1][8];
    tempCube[2][0]=cube[2][0];
    tempCube[2][1]=cube[2][1];
    tempCube[2][2]=cube[2][2];
    tempCube[2][3]=cube[2][3];
    tempCube[2][4]=cube[2][4];
    tempCube[2][5]=cube[2][5];
    tempCube[2][6]=cube[2][6];
    tempCube[2][7]=cube[2][7];
    tempCube[2][8]=cube[2][8];
    tempCube[3][0]=cube[3][0];
    tempCube[3][1]=cube[3][1];
    tempCube[3][2]=cube[3][2];
    tempCube[3][3]=cube[3][3];
    tempCube[3][4]=cube[3][4];
    tempCube[3][5]=cube[3][5];
    tempCube[3][6]=cube[3][6];
    tempCube[3][7]=cube[3][7];
    tempCube[3][8]=cube[3][8];
    tempCube[4][0]=cube[4][0];
    tempCube[4][1]=cube[4][1];
    tempCube[4][2]=cube[4][2];
    tempCube[4][3]=cube[4][3];
    tempCube[4][4]=cube[4][4];
    tempCube[4][5]=cube[4][5];
    tempCube[4][6]=cube[4][6];
    tempCube[4][7]=cube[4][7];
    tempCube[4][8]=cube[4][8];
    tempCube[5][0]=cube[5][0];
    tempCube[5][1]=cube[5][1];
    tempCube[5][2]=cube[5][2];
    tempCube[5][3]=cube[5][3];
    tempCube[5][4]=cube[5][4];
    tempCube[5][5]=cube[5][5];
    tempCube[5][6]=cube[5][6];
    tempCube[5][7]=cube[5][7];
    tempCube[5][8]=cube[5][8];


  if(side == FRONT){
      tempCube[LEFT][2] = cube[UP][1];
      tempCube[LEFT][5] = cube[UP][4];
      tempCube[LEFT][1] = cube[UP][0];
      tempCube[UP][1] = cube[RIGHT][0];
      tempCube[UP][4] = cube[RIGHT][7];
      tempCube[UP][0] = cube[RIGHT][3];
      tempCube[RIGHT][0] = cube[DOWN][1];
      tempCube[RIGHT][7] = cube[DOWN][4];
      tempCube[RIGHT][3] = cube[DOWN][0];
      tempCube[DOWN][1] = cube[LEFT][2];
      tempCube[DOWN][4] = cube[LEFT][5];
      tempCube[DOWN][0] = cube[LEFT][1];
  }else if(side == BACK){
      tempCube[DOWN][2] = cube[RIGHT][1];
      tempCube[DOWN][6] = cube[RIGHT][5];
      tempCube[DOWN][3] = cube[RIGHT][2];
      tempCube[RIGHT][1] = cube[UP][2];
      tempCube[RIGHT][5] = cube[UP][6];
      tempCube[RIGHT][2] = cube[UP][3];
      tempCube[UP][2] = cube[LEFT][3];
      tempCube[UP][6] = cube[LEFT][7];
      tempCube[UP][3] = cube[LEFT][0];
      tempCube[LEFT][3] = cube[DOWN][2];
      tempCube[LEFT][7] = cube[DOWN][6];
      tempCube[LEFT][0] = cube[DOWN][3];
  }else if(side == LEFT){
      tempCube[BACK][2] = cube[UP][2];
      tempCube[BACK][5] = cube[UP][5];
      tempCube[BACK][1] = cube[UP][1];
      tempCube[UP][2] = cube[FRONT][0];
      tempCube[UP][5] = cube[FRONT][7];
      tempCube[UP][1] = cube[FRONT][3];
      tempCube[FRONT][0] = cube[DOWN][0];
      tempCube[FRONT][7] = cube[DOWN][7];
      tempCube[FRONT][3] = cube[DOWN][3];
      tempCube[DOWN][0] = cube[BACK][2];
      tempCube[DOWN][7] = cube[BACK][2];
      tempCube[DOWN][3] = cube[BACK][1];
  }else if(side == RIGHT){
      tempCube[DOWN][1] = (cube[FRONT][1]);
      tempCube[DOWN][5] = cube[FRONT][5];
      tempCube[DOWN][2] = (cube[FRONT][2]);
      tempCube[FRONT][1] = (cube[UP][3]);
      tempCube[FRONT][5] = cube[UP][7];
      tempCube[FRONT][2] = (cube[UP][0]);
      tempCube[UP][3] = (cube[BACK][3]);
      tempCube[UP][7] = cube[BACK][7];
      tempCube[UP][0] = (cube[BACK][0]);
      tempCube[BACK][3] = (cube[DOWN][1]);
      tempCube[BACK][7] = cube[DOWN][5];
      tempCube[BACK][0] = (cube[DOWN][2]);
  }else if(side == UP){
      tempCube[FRONT][0] = cube[LEFT][0];
      tempCube[FRONT][4] = cube[LEFT][4];
      tempCube[FRONT][1] = (cube[LEFT][1]);
      tempCube[LEFT][0] = (cube[BACK][0]);
      tempCube[LEFT][4] = cube[BACK][4];
      tempCube[LEFT][1] = (cube[BACK][1]);
      tempCube[BACK][0] = (cube[RIGHT][0]);
      tempCube[BACK][4] = cube[RIGHT][4];
      tempCube[BACK][1] = (cube[RIGHT][1]);
      tempCube[RIGHT][0] = (cube[FRONT][0]);
      tempCube[RIGHT][4] = cube[FRONT][4];
      tempCube[RIGHT][1] = (cube[FRONT][1]);
  }else if(side == DOWN){ 
      tempCube[RIGHT][3] = cube[BACK][3];
      tempCube[RIGHT][6] = cube[BACK][6];
      tempCube[RIGHT][2] = cube[BACK][2];
      tempCube[BACK][3] = cube[LEFT][3];
      tempCube[BACK][6] = cube[LEFT][6];
      tempCube[BACK][2] = cube[LEFT][2];
      tempCube[LEFT][3] = cube[FRONT][3];
      tempCube[LEFT][6] = cube[FRONT][6];
      tempCube[LEFT][2] = cube[FRONT][2];
      tempCube[FRONT][3] = cube[RIGHT][3];
      tempCube[FRONT][6] = cube[RIGHT][6];
      tempCube[FRONT][2] = cube[RIGHT][2];
  }

    tempCube[side][0] = cube[side][1];
    tempCube[side][4] = cube[side][5];
    tempCube[side][1] = cube[side][2];
    tempCube[side][5] = cube[side][6];
    tempCube[side][2] = cube[side][3];
    tempCube[side][6] = cube[side][7];
    tempCube[side][3] = cube[side][0];
    tempCube[side][7] = cube[side][4];

    cube[0][0] = tempCube[0][0];
    cube[0][1] = tempCube[0][1];
    cube[0][2] = tempCube[0][2];
    cube[0][3] = tempCube[0][3];
    cube[0][4] = tempCube[0][4];
    cube[0][5] = tempCube[0][5];
    cube[0][6] = tempCube[0][6];
    cube[0][7] = tempCube[0][7];
    cube[0][8] = tempCube[0][8];
    cube[1][0] = tempCube[1][0];
    cube[1][1] = tempCube[1][1];
    cube[1][2] = tempCube[1][2];
    cube[1][3] = tempCube[1][3];
    cube[1][4] = tempCube[1][4];
    cube[1][5] = tempCube[1][5];
    cube[1][6] = tempCube[1][6];
    cube[1][7] = tempCube[1][7];
    cube[1][8] = tempCube[1][8];
    cube[2][0] = tempCube[2][0];
    cube[2][1] = tempCube[2][1];
    cube[2][2] = tempCube[2][2];
    cube[2][3] = tempCube[2][3];
    cube[2][4] = tempCube[2][4];
    cube[2][5] = tempCube[2][5];
    cube[2][6] = tempCube[2][6];
    cube[2][7] = tempCube[2][7];
    cube[2][8] = tempCube[2][8];
    cube[3][0] = tempCube[3][0];
    cube[3][1] = tempCube[3][1];
    cube[3][2] = tempCube[3][2];
    cube[3][3] = tempCube[3][3];
    cube[3][4] = tempCube[3][4];
    cube[3][5] = tempCube[3][5];
    cube[3][6] = tempCube[3][6];
    cube[3][7] = tempCube[3][7];
    cube[3][8] = tempCube[3][8];
    cube[4][0] = tempCube[4][0];
    cube[4][1] = tempCube[4][1];
    cube[4][2] = tempCube[4][2];
    cube[4][3] = tempCube[4][3];
    cube[4][4] = tempCube[4][4];
    cube[4][5] = tempCube[4][5];
    cube[4][6] = tempCube[4][6];
    cube[4][7] = tempCube[4][7];
    cube[4][8] = tempCube[4][8];
    cube[5][0] = tempCube[5][0];
    cube[5][1] = tempCube[5][1];
    cube[5][2] = tempCube[5][2];
    cube[5][3] = tempCube[5][3];
    cube[5][4] = tempCube[5][4];
    cube[5][5] = tempCube[5][5];
    cube[5][6] = tempCube[5][6];
    cube[5][7] = tempCube[5][7];
    cube[5][8] = tempCube[5][8];
}

void rotateCW(int side){
  rotateCCW(side);
  rotateCCW(side);
  rotateCCW(side);
}

void main(){
  int i = 0;
  int move;
  int dir;
  
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
  
  __CPROVER_assume(INITIAL_CONFIGURATION);

  move = nondet_next_move();
  dir = nondet_next_dir();

  __CPROVER_assume(move >= 0 && move <= 5);
  __CPROVER_assume(dir == 0 || dir == 1);

  if(dir == 1){
    rotateCCW(move);
  }else if(dir == 0){
    rotateCW(move);
  }
  
  __CPROVER_assert(!(FRUBLD), "REACHED GOAL");

  move = nondet_next_move();
  dir = nondet_next_dir();

  __CPROVER_assume(move >= 0 && move <= 5);
  __CPROVER_assume(dir == 0 || dir == 1);

  if(dir == 1){
    rotateCCW(move);
  }else if(dir == 0){
    rotateCW(move);
  }
  
  __CPROVER_assert(!(FRUBLD), "REACHED GOAL");

  move = nondet_next_move();
  dir = nondet_next_dir();

  __CPROVER_assume(move >= 0 && move <= 5);
  __CPROVER_assume(dir == 0 || dir == 1);

  if(dir == 1){
    rotateCCW(move);
  }else if(dir == 0){
    rotateCW(move);
  }
  
  __CPROVER_assert(!(FRUBLD), "REACHED GOAL");

  move = nondet_next_move();
  dir = nondet_next_dir();

  __CPROVER_assume(move >= 0 && move <= 5);
  __CPROVER_assume(dir == 0 || dir == 1);

  if(dir == 1){
    rotateCCW(move);
  }else if(dir == 0){
    rotateCW(move);
  }
  
  __CPROVER_assert(!(FRUBLD), "REACHED GOAL");

  move = nondet_next_move();
  dir = nondet_next_dir();

  __CPROVER_assume(move >= 0 && move <= 5);
  __CPROVER_assume(dir == 0 || dir == 1);

  if(dir == 1){
    rotateCCW(move);
  }else if(dir == 0){
    rotateCW(move);
  }
  
  __CPROVER_assert(!(FRUBLD), "REACHED GOAL");

  move = nondet_next_move();
  dir = nondet_next_dir();

  __CPROVER_assume(move >= 0 && move <= 5);
  __CPROVER_assume(dir == 0 || dir == 1);

  if(dir == 1){
    rotateCCW(move);
  }else if(dir == 0){
    rotateCW(move);
  }
  
  __CPROVER_assert(!(FRUBLD), "REACHED GOAL");

  move = nondet_next_move();
  dir = nondet_next_dir();

  __CPROVER_assume(move >= 0 && move <= 5);
  __CPROVER_assume(dir == 0 || dir == 1);

  if(dir == 1){
    rotateCCW(move);
  }else if(dir == 0){
    rotateCW(move);
  }
  
  __CPROVER_assert(!(FRUBLD), "REACHED GOAL");

  move = nondet_next_move();
  dir = nondet_next_dir();

  __CPROVER_assume(move >= 0 && move <= 5);
  __CPROVER_assume(dir == 0 || dir == 1);

  if(dir == 1){
    rotateCCW(move);
  }else if(dir == 0){
    rotateCW(move);
  }
  
  __CPROVER_assert(!(FRUBLD), "REACHED GOAL");

  move = nondet_next_move();
  dir = nondet_next_dir();

  __CPROVER_assume(move >= 0 && move <= 5);
  __CPROVER_assume(dir == 0 || dir == 1);

  if(dir == 1){
    rotateCCW(move);
  }else if(dir == 0){
    rotateCW(move);
  }
  
  __CPROVER_assert(!(FRUBLD), "REACHED GOAL");

  move = nondet_next_move();
  dir = nondet_next_dir();

  __CPROVER_assume(move >= 0 && move <= 5);
  __CPROVER_assume(dir == 0 || dir == 1);

  if(dir == 1){
    rotateCCW(move);
  }else if(dir == 0){
    rotateCW(move);
  }
  
  __CPROVER_assert(!(FRUBLD), "REACHED GOAL");

  move = nondet_next_move();
  dir = nondet_next_dir();

  __CPROVER_assume(move >= 0 && move <= 5);
  __CPROVER_assume(dir == 0 || dir == 1);

  if(dir == 1){
    rotateCCW(move);
  }else if(dir == 0){
    rotateCW(move);
  }
  
  __CPROVER_assert(!(FRUBLD), "REACHED GOAL");

  move = nondet_next_move();
  dir = nondet_next_dir();

  __CPROVER_assume(move >= 0 && move <= 5);
  __CPROVER_assume(dir == 0 || dir == 1);

  if(dir == 1){
    rotateCCW(move);
  }else if(dir == 0){
    rotateCW(move);
  }
  
  __CPROVER_assert(!(FRUBLD), "REACHED GOAL");

  move = nondet_next_move();
  dir = nondet_next_dir();

  __CPROVER_assume(move >= 0 && move <= 5);
  __CPROVER_assume(dir == 0 || dir == 1);

  if(dir == 1){
    rotateCCW(move);
  }else if(dir == 0){
    rotateCW(move);
  }
  
  __CPROVER_assert(!(FRUBLD), "REACHED GOAL");

  move = nondet_next_move();
  dir = nondet_next_dir();

  __CPROVER_assume(move >= 0 && move <= 5);
  __CPROVER_assume(dir == 0 || dir == 1);

  if(dir == 1){
    rotateCCW(move);
  }else if(dir == 0){
    rotateCW(move);
  }
  
  __CPROVER_assert(!(FRUBLD), "REACHED GOAL");

  move = nondet_next_move();
  dir = nondet_next_dir();

  __CPROVER_assume(move >= 0 && move <= 5);
  __CPROVER_assume(dir == 0 || dir == 1);

  if(dir == 1){
    rotateCCW(move);
  }else if(dir == 0){
    rotateCW(move);
  }
  
  __CPROVER_assert(!(FRUBLD), "REACHED GOAL");

  move = nondet_next_move();
  dir = nondet_next_dir();

  __CPROVER_assume(move >= 0 && move <= 5);
  __CPROVER_assume(dir == 0 || dir == 1);

  if(dir == 1){
    rotateCCW(move);
  }else if(dir == 0){
    rotateCW(move);
  }
  
  __CPROVER_assert(!(FRUBLD), "REACHED GOAL");

  move = nondet_next_move();
  dir = nondet_next_dir();

  __CPROVER_assume(move >= 0 && move <= 5);
  __CPROVER_assume(dir == 0 || dir == 1);

  if(dir == 1){
    rotateCCW(move);
  }else if(dir == 0){
    rotateCW(move);
  }
  
  __CPROVER_assert(!(FRUBLD), "REACHED GOAL");

  move = nondet_next_move();
  dir = nondet_next_dir();

  __CPROVER_assume(move >= 0 && move <= 5);
  __CPROVER_assume(dir == 0 || dir == 1);

  if(dir == 1){
    rotateCCW(move);
  }else if(dir == 0){
    rotateCW(move);
  }
  
  __CPROVER_assert(!(FRUBLD), "REACHED GOAL");

  move = nondet_next_move();
  dir = nondet_next_dir();

  __CPROVER_assume(move >= 0 && move <= 5);
  __CPROVER_assume(dir == 0 || dir == 1);

  if(dir == 1){
    rotateCCW(move);
  }else if(dir == 0){
    rotateCW(move);
  }
  
  __CPROVER_assert(!(FRUBLD), "REACHED GOAL");

  move = nondet_next_move();
  dir = nondet_next_dir();

  __CPROVER_assume(move >= 0 && move <= 5);
  __CPROVER_assume(dir == 0 || dir == 1);

  if(dir == 1){
    rotateCCW(move);
  }else if(dir == 0){
    rotateCW(move);
  }
  
  __CPROVER_assert(!(FRUBLD), "REACHED GOAL");

  move = nondet_next_move();
  dir = nondet_next_dir();

  __CPROVER_assume(move >= 0 && move <= 5);
  __CPROVER_assume(dir == 0 || dir == 1);

  if(dir == 1){
    rotateCCW(move);
  }else if(dir == 0){
    rotateCW(move);
  }
  
  __CPROVER_assert(!(FRUBLD), "REACHED GOAL");

  move = nondet_next_move();
  dir = nondet_next_dir();

  __CPROVER_assume(move >= 0 && move <= 5);
  __CPROVER_assume(dir == 0 || dir == 1);

  if(dir == 1){
    rotateCCW(move);
  }else if(dir == 0){
    rotateCW(move);
  }
  
  __CPROVER_assert(!(FRUBLD), "REACHED GOAL");

  move = nondet_next_move();
  dir = nondet_next_dir();

  __CPROVER_assume(move >= 0 && move <= 5);
  __CPROVER_assume(dir == 0 || dir == 1);

  if(dir == 1){
    rotateCCW(move);
  }else if(dir == 0){
    rotateCW(move);
  }
  
  __CPROVER_assert(!(FRUBLD), "REACHED GOAL");

  move = nondet_next_move();
  dir = nondet_next_dir();

  __CPROVER_assume(move >= 0 && move <= 5);
  __CPROVER_assume(dir == 0 || dir == 1);

  if(dir == 1){
    rotateCCW(move);
  }else if(dir == 0){
    rotateCW(move);
  }
  
  __CPROVER_assert(!(FRUBLD), "REACHED GOAL");

}
