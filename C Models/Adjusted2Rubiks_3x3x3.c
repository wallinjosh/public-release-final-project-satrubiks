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

#define INITIAL_CONFIGURATION cube0==GREEN&&cube1==GREEN&&cube2==GREEN&&cube3==GREEN&&cube4==GREEN&&cube5==GREEN&&cube6==GREEN&&cube7==GREEN&&cube8==GREEN&&cube9==BLUE&&cube10==BLUE&&cube11==BLUE&&cube12==BLUE&&cube13==BLUE&&cube14==BLUE&&cube15==BLUE&&cube16==BLUE&&cube17==BLUE&&cube18==ORANGE&&cube19==ORANGE&&cube20==ORANGE&&cube21==ORANGE&&cube22==ORANGE&&cube23==ORANGE&&cube24==ORANGE&&cube25==ORANGE&&cube26==ORANGE&&cube27==RED&&cube28==RED&&cube29==RED&&cube30==RED&&cube31==RED&&cube32==RED&&cube33==RED&&cube34==RED&&cube35==RED&&cube36==WHITE&&cube37==WHITE&&cube38==WHITE&&cube39==WHITE&&cube40==WHITE&&cube41==WHITE&&cube42==WHITE&&cube43==WHITE&&cube44==WHITE&&cube45==YELLOW&&cube46==YELLOW&&cube47==YELLOW&&cube48==YELLOW&&cube49==YELLOW&&cube50==YELLOW&&cube51==YELLOW&&cube52==YELLOW&&cube53==YELLOW
#define FRUBLD cube0==BLUE&&cube1==WHITE&&cube2==RED&&cube3==YELLOW&&cube4==WHITE&&cube5==YELLOW&&cube6==YELLOW&&cube7==ORANGE&&cube8==GREEN&&cube9==WHITE&&cube10==GREEN&&cube11==YELLOW&&cube12==RED&&cube13==WHITE&&cube14==YELLOW&&cube15==RED&&cube16==BLUE&&cube17==BLUE&&cube18==ORANGE&&cube19==WHITE&&cube20==RED&&cube21==BLUE&&cube22==WHITE&&cube23==GREEN&&cube24==BLUE&&cube25==ORANGE&&cube26==ORANGE&&cube27==ORANGE&&cube28==BLUE&&cube29==YELLOW&&cube30==GREEN&&cube31==BLUE&&cube32==YELLOW&&cube33==GREEN&&cube34==RED&&cube35==RED&&cube36==GREEN&&cube37==ORANGE&&cube38==WHITE&&cube39==RED&&cube40==GREEN&&cube41==ORANGE&&cube42==RED&&cube43==WHITE&&cube44==WHITE&&cube45==GREEN&&cube46==WHITE&&cube47==BLUE&&cube48==ORANGE&&cube49==GREEN&&cube50==RED&&cube51==BLUE&&cube52==ORANGE&&cube53==YELLOW

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


int cube0;
int cube1;
int cube2;
int cube3;
int cube4;
int cube5;
int cube6;
int cube7;
int cube8;
int cube9;
int cube10;
int cube11;
int cube12;
int cube13;
int cube14;
int cube15;
int cube16;
int cube17;
int cube18;
int cube19;
int cube20;
int cube21;
int cube22;
int cube23;
int cube24;
int cube25;
int cube26;
int cube27;
int cube28;
int cube29;
int cube30;
int cube31;
int cube32;
int cube33;
int cube34;
int cube35;
int cube36;
int cube37;
int cube38;
int cube39;
int cube40;
int cube41;
int cube42;
int cube43;
int cube44;
int cube45;
int cube46;
int cube47;
int cube48;
int cube49;
int cube50;
int cube51;
int cube52;
int cube53;

int nondet_next_move();
int nondet_next_dir();

extern const unsigned int bound;

void rotateCCW(int side){
  int i = 0;
  int j = 0;

    int tempCube0 = cube0;
    int tempCube1 = cube1;
    int tempCube2 = cube2;
    int tempCube3 = cube3;
    int tempCube4 = cube4;
    int tempCube5 = cube5;
    int tempCube6 = cube6;
    int tempCube7 = cube7;
    int tempCube8 = cube8;
    int tempCube9 = cube9;
    int tempCube10 = cube10;
    int tempCube11 = cube11;
    int tempCube12 = cube12;
    int tempCube13 = cube13;
    int tempCube14 = cube14;
    int tempCube15 = cube15;
    int tempCube16 = cube16;
    int tempCube17 = cube17;
    int tempCube18 = cube18;
    int tempCube19 = cube19;
    int tempCube20 = cube20;
    int tempCube21 = cube21;
    int tempCube22 = cube22;
    int tempCube23 = cube23;
    int tempCube24 = cube24;
    int tempCube25 = cube25;
    int tempCube26 = cube26;
    int tempCube27 = cube27;
    int tempCube28 = cube28;
    int tempCube29 = cube29;
    int tempCube30 = cube30;
    int tempCube31 = cube31;
    int tempCube32 = cube32;
    int tempCube33 = cube33;
    int tempCube34 = cube34;
    int tempCube35 = cube35;
    int tempCube36 = cube36;
    int tempCube37 = cube37;
    int tempCube38 = cube38;
    int tempCube39 = cube39;
    int tempCube40 = cube40;
    int tempCube41 = cube41;
    int tempCube42 = cube42;
    int tempCube43 = cube43;
    int tempCube44 = cube44;
    int tempCube45 = cube45;
    int tempCube46 = cube46;
    int tempCube47 = cube47;
    int tempCube48 = cube48;
    int tempCube49 = cube49;
    int tempCube50 = cube50;
    int tempCube51 = cube51;
    int tempCube52 = cube52;
    int tempCube53 = cube53;


  if(side == FRONT){
      tempCube20 = cube37;
      tempCube23 = cube40;
      tempCube19 = cube36;
      tempCube37 = cube27;
      tempCube40 = cube34;
      tempCube36 = cube30;
      tempCube27 = cube46;
      tempCube34 = cube49;
      tempCube30 = cube45;
      tempCube46 = cube20;
      tempCube49 = cube23;
      tempCube45 = cube19;
        tempCube0 = cube1;
        tempCube4 = cube5;
        tempCube1 = cube2;
        tempCube5 = cube6;
        tempCube2 = cube3;
        tempCube6 = cube7;
        tempCube3 = cube0;
        tempCube7 = cube4;
  }else if(side == BACK){
      tempCube47 = cube28;
      tempCube51 = cube32;
      tempCube48 = cube29;
      tempCube28 = cube28;
      tempCube32 = cube42;
      tempCube29 = cube39;
      tempCube28 = cube21;
      tempCube42 = cube25;
      tempCube39 = cube18;
      tempCube21 = cube47;
      tempCube25 = cube51;
      tempCube18 = cube48;
      tempCube9 = cube10;
    tempCube13 = cube14;
    tempCube10 = cube11;
    tempCube14 = cube15;
    tempCube11 = cube12;
    tempCube15 = cube16;
    tempCube12 = cube9;
    tempCube16 = cube13;
  }else if(side == LEFT){
      tempCube11 = cube28;
      tempCube14 = cube41;
      tempCube10 = cube37;
      tempCube28 = cube0;
      tempCube41 = cube7;
      tempCube37 = cube3;
      tempCube0 = cube45;
      tempCube7 = cube52;
      tempCube3 = cube48;
      tempCube45 = cube11;
      tempCube52 = cube11;
      tempCube48 = cube10;
      tempCube18 = cube19;
    tempCube22 = cube23;
    tempCube19 = cube20;
    tempCube23 = cube24;
    tempCube20 = cube21;
    tempCube24 = cube25;
    tempCube21 = cube18;
    tempCube25 = cube22;
  }else if(side == RIGHT){
      tempCube46 = (cube1);
      tempCube50 = cube5;
      tempCube47 = (cube2);
      tempCube1 = (cube39);
      tempCube5 = cube43;
      tempCube2 = (cube36);
      tempCube39 = (cube12);
      tempCube43 = cube16;
      tempCube36 = (cube9);
      tempCube12 = (cube46);
      tempCube16 = cube50;
      tempCube9 = (cube47);
      tempCube27 = cube28;
    tempCube31 = cube32;
    tempCube28 = cube29;
    tempCube32 = cube33;
    tempCube29 = cube30;
    tempCube33 = cube34;
    tempCube30 = cube27;
    tempCube34 = cube31;
  }else if(side == UP){
      tempCube0 = cube18;
      tempCube4 = cube22;
      tempCube1 = (cube19);
      tempCube18 = (cube9);
      tempCube22 = cube13;
      tempCube19 = (cube10);
      tempCube9 = (cube27);
      tempCube13 = cube31;
      tempCube10 = (cube28);
      tempCube27 = (cube0);
      tempCube31 = cube4;
      tempCube28 = (cube1);
      tempCube36 = cube37;
    tempCube40 = cube41;
    tempCube37 = cube38;
    tempCube41 = cube42;
    tempCube38 = cube39;
    tempCube42 = cube43;
    tempCube39 = cube36;
    tempCube43 = cube40;
  }else if(side == DOWN){ 
      tempCube30 = cube12;
      tempCube33 = cube15;
      tempCube29 = cube11;
      tempCube12 = cube21;
      tempCube15 = cube24;
      tempCube11 = cube20;
      tempCube21 = cube3;
      tempCube24 = cube6;
      tempCube20 = cube2;
      tempCube3 = cube30;
      tempCube6 = cube33;
      tempCube2 = cube29;
      tempCube45 = cube46;
    tempCube49 = cube50;
    tempCube46 = cube47;
    tempCube50 = cube51;
    tempCube47 = cube48;
    tempCube51 = cube52;
    tempCube48 = cube45;
    tempCube52 = cube49;
  }

    cube0 = tempCube0;
    cube1 = tempCube1;
    cube2 = tempCube2;
    cube3 = tempCube3;
    cube4 = tempCube4;
    cube5 = tempCube5;
    cube6 = tempCube6;
    cube7 = tempCube7;
    cube8 = tempCube8;
    cube9 = tempCube9;
    cube10 = tempCube10;
    cube11 = tempCube11;
    cube12 = tempCube12;
    cube13 = tempCube13;
    cube14 = tempCube14;
    cube15 = tempCube15;
    cube16 = tempCube16;
    cube17 = tempCube17;
    cube18 = tempCube18;
    cube19 = tempCube19;
    cube20 = tempCube20;
    cube21 = tempCube21;
    cube22 = tempCube22;
    cube23 = tempCube23;
    cube24 = tempCube24;
    cube25 = tempCube25;
    cube26 = tempCube26;
    cube27 = tempCube27;
    cube28 = tempCube28;
    cube29 = tempCube29;
    cube30 = tempCube30;
    cube31 = tempCube31;
    cube32 = tempCube32;
    cube33 = tempCube33;
    cube34 = tempCube34;
    cube35 = tempCube35;
    cube36 = tempCube36;
    cube37 = tempCube37;
    cube38 = tempCube38;
    cube39 = tempCube39;
    cube40 = tempCube40;
    cube41 = tempCube41;
    cube42 = tempCube42;
    cube43 = tempCube43;
    cube44 = tempCube44;
    cube45 = tempCube45;
    cube46 = tempCube46;
    cube47 = tempCube47;
    cube48 = tempCube48;
    cube49 = tempCube49;
    cube50 = tempCube50;
    cube51 = tempCube51;
    cube52 = tempCube52;
    cube53 = tempCube53;
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
  
cube0 = GREEN;
cube1 = GREEN;
cube2 = GREEN;
cube3 = GREEN;
cube4 = GREEN;
cube5 = GREEN;
cube6 = GREEN;
cube7 = GREEN;
cube8 = GREEN;
cube9 = BLUE;
cube10 = BLUE;
cube11 = BLUE;
cube12 = BLUE;
cube13 = BLUE;
cube14 = BLUE;
cube15 = BLUE;
cube16 = BLUE;
cube17 = BLUE;
cube18 = ORANGE;
cube19 = ORANGE;
cube20 = ORANGE;
cube21 = ORANGE;
cube22 = ORANGE;
cube23 = ORANGE;
cube24 = ORANGE;
cube25 = ORANGE;
cube26 = ORANGE;
cube27 = RED;
cube28 = RED;
cube29 = RED;
cube30 = RED;
cube31 = RED;
cube32 = RED;
cube33 = RED;
cube34 = RED;
cube35 = RED;
cube36 = WHITE;
cube37 = WHITE;
cube38 = WHITE;
cube39 = WHITE;
cube40 = WHITE;
cube41 = WHITE;
cube42 = WHITE;
cube43 = WHITE;
cube44 = WHITE;
cube45 = YELLOW;
cube46 = YELLOW;
cube47 = YELLOW;
cube48 = YELLOW;
cube49 = YELLOW;
cube50 = YELLOW;
cube51 = YELLOW;
cube52 = YELLOW;
cube53 = YELLOW;
  
   __CPROVER_assume(INITIAL_CONFIGURATION);

    for(i = 0; i < 26; i++){
       

        move = nondet_next_move();
        dir = nondet_next_dir();

        __CPROVER_assume(move >= 0 && move <= 5);
        __CPROVER_assume(dir == 0 || dir == 1);

        if(dir == 1){
            rotateCCW(move);
        }else if(dir == 0){
            rotateCW(move);
        }
        
        assert(!(FRUBLD));
        //__CPROVER_assert(!(FRUBLD), "REACHED GOAL");

    }

}
