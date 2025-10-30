#include "../movement.hpp"
#include "../helper_functions.hpp"
#include "vex.h"
//PID Straight and turn arguments:
// MoveEncoderPID(TestPara, motor speed, encoder travel distance (inches), time to full speed(sec), relative heading(to starting position), braking?)
// TurnMaxTimePID(TestPara, Desired Heading -180 to 180, time out to calculate turn, Braking?)
// MoveTimePID(TestPara, motor speed, time traveled (sec), time to full speed, heading, false);
// NOTICE, REORGANIZE THE CODE!!!


// Note for Coders: All intakes, positive is INTAKE/SCORE, Negative is OUTAKE
// Pnuematics are their given names... Eg. Wings are Wings 
void nineleft() {
    // declare initial conditions
    //9ball assumption LEFT
PIDDataSet TestPara={1.1,0.03,0.31};
PIDDataSet AngPara={1.5,0.1,0.13};
//soloawp
/*
Lift.set(true);
RunSecondStage(50);
Scrapper.set(true);
MoveEncoderPID(TestPara, 100,31, 0.4,0,true);//go toward 3 balls
TurnMaxTimePID(AngPara, 90,0.5, true);//turn to goal
RunBottom(100);
MoveEncoderPID(TestPara, 100,13, 0.1,90,true);//go toward 3 balls
wait(370,msec);
MoveEncoderPID(TestPara, -100,12, 0.4,90,true);//go toward 3 balls
Scrapper.set(false);
TurnMaxTimePID(AngPara, -90,0.5, true);//turn to goal
MoveEncoderPID(TestPara, 70,7, 0.4,-90,false);//go toward 3 balls
RunSecondStage(100);
wait(900,msec);
RunSecondStage(-20);
MoveEncoderPID(TestPara, -100,16, 0.4,-90,true);//go toward 3 balls
TurnMaxTimePID(AngPara, -135,0.5, true);//turn to goal
RunBottom(100);
MoveEncoderPID(TestPara, 100,50, 0.4,-138,false);//go toward 3 balls
MoveEncoderPID(TestPara, 60,17, 0.4,-138,true);//go toward 3 balls
RunSecondStage(-100);
RunBottom(-100);

wait(800,msec);
MoveEncoderPID(TestPara, -100,13, 0.4,-138,true);//go toward 3 balls
RunBottom(100);
RunSecondStage(20);
TurnMaxTimePID(AngPara, 177,0.4, true);//turn to goal
MoveEncoderPID(TestPara, 100,48, 0.4,177,false);//go toward 3 balls
Scrapper.set(true);
MoveEncoderPID(TestPara, 100,9, 0.4,180,false);//go toward 3 balls
MoveEncoderPID(TestPara, 100,39, 0.1,100,false);//go toward 3 balls
MoveEncoderPID(TestPara, 100,24, 0.1,74,false);//go toward 3 balls
MoveEncoderPID(TestPara, 70,13, 0.1,90,true);//go toward 3 balls
wait(1000,msec);
MoveEncoderPID(TestPara, -70,4, 0.1,90,true);//go toward 3 balls
Scrapper.set(false);
TurnMaxTimePID(AngPara, -90,0.4, true);//turn to goal
MoveEncoderPID(TestPara, 70,16, 0.1,-90,true);//go toward 3 balls
RunBottom(100);
RunSecondStage(100);
*/
//7LEFT
/*
Lift.set(true);
RunBottom(100);
TurnMaxTimePID(AngPara, -18,0.5, true);//turn to goal
MoveEncoderPID(TestPara, 80,22.5, 0.4,-18,false);//go toward 3 balls
Scrapper.set(true);
MoveEncoderPID(TestPara, 60,3, 0.4,-18,true);//go toward 3 balls

RunSecondStage(70);
TurnMaxTimePID(AngPara, -120,0.5, true);//turn to goal
RunSecondStage(0);
MoveEncoderPID(TestPara, 100,31.5, 0.4,-120,true);//go toward 3 balls
TurnMaxTimePID(AngPara, 180,0.5, true);//turn to goal
MoveEncoderPID(TestPara, 70,27, 0.1,180,true);//go toward 3 balls
wait(500,msec);
RunBottom(100);
MoveEncoderPID(TestPara, -80,10, 0.4,-175,true);//go toward 3 balls
Scrapper.set(false);
TurnMaxTimePID(AngPara, 11,1.2, true);//turn to goal
MoveEncoderPID(TestPara,80,11, 0.4,2,true);//go toward 3 balls
RunBottom(100);
RunSecondStage(100);
wait(2200,msec);
MoveEncoderPID(TestPara,-100,16.5, 0.4,-80,false);//go toward 3 balls
Wings.set(true);
wait(200,msec);
MoveEncoderPID(TestPara,100,25, 0.4,18,false);//go toward 3 balls
MoveEncoderPID(TestPara,100,15, 0.4,0,true);//go toward 3 balls
MoveEncoderPID(TestPara,-100,20, 0.4,0,false);//go toward 3 balls
*/
//9left

RunSecondStage(19);
RunBottom(100);
MoveEncoderPID(TestPara, 100,3.5, 0.4,0,false);//go toward 3 balls
wait(200,msec);
MoveEncoderPID(TestPara, 80,48, 0.1,-80,false);//curve towards long goal

MoveEncoderPID(TestPara, 20,12.4, 0.1,5,true);//curve towards 2 balls
wait(300,msec);

//Addcodehere

wait(100,msec);
TurnMaxTimePID(AngPara, -24,0.5, true);//turn to goal

MoveEncoderPID(TestPara, -100,11.5, 0.1,-80,false);//back up from center
Scrapper.set(false);
MoveEncoderPID(TestPara, -100,5.5, 0.1,0,false);//back up towards scoring area
MoveEncoderPID(TestPara, -100,33.3, 0.1,90,false);//curve around goal
TurnMaxTimePID(AngPara, 0,0.7, true);//turn to goal
Lift.set(true);
wait(400,msec);
MoveEncoderPID(TestPara, 60,19.5, 0.1,0,true);//go toward goal for scoring
RunSecondStage(100);

wait(1800,msec);
RunSecondStage(0);
RunBottom(100);
MoveEncoderPID(TestPara, -100,11, 0.1,0,true);//back up from goal

Scrapper.set(true);
TurnMaxTimePID(AngPara, 180,0.5, true);//turn to match load
MoveEncoderPID(TestPara, 50,15, 0.1,-180,true);//match load
wait(300,msec);
MoveEncoderPID(TestPara, -70,8, 0.1,-180,true);//back up from match load
Scrapper.set(false);
TurnMaxTimePID(AngPara, -20,0.4, true);//turn to match load
MoveEncoderPID(TestPara, 70,14, 0.4,0,true);//back up from match load
RunSecondStage(100);

}
void nineright(){
    //9 Ball Right (Get the OG to work first)
   PIDDataSet TestPara={1.1,0.03,0.31};
PIDDataSet AngPara={1.5,0.1,0.13};
//
//4+3 right
/*

*/
//9ballrightisde

RunSecondStage(20);
RunBottom(100);
MoveEncoderPID(TestPara, 80,4, 0.4,0,false);//go toward 3 balls
wait(200,msec);
MoveEncoderPID(TestPara, 80,48, 0.1,80,false);//curve towards long goal

MoveEncoderPID(TestPara, 20,12, 0.1,-5,true);//curve towards 2 balls
wait(0,msec);

//Addcodehere

TurnMaxTimePID(AngPara, 27,0.2, true);//turn to goal
RunBottom(0);

MoveEncoderPID(TestPara, -100,9.5, 0.1,80,false);//back up from center
Scrapper.set(false);
MoveEncoderPID(TestPara, -100,5.5, 0.1,0,false);//back up towards scoring area
MoveEncoderPID(TestPara, -100,38, 0.1,-90,false);//curve around goal
TurnMaxTimePID(AngPara, 0,0.3, true);//turn to goal
Lift.set(true);
wait(200,msec);
MoveEncoderPID(TestPara, 60,18.5, 0.1,0,true);//go toward goal for scoring
RunBottom(100);
RunSecondStage(100);
wait(1800,msec);
RunSecondStage(10);
RunBottom(100);
MoveEncoderPID(TestPara, -100,11, 0.1,10,true);//back up from goal

Scrapper.set(true);
TurnMaxTimePID(AngPara, -160,0.7, true);//turn to match load
MoveEncoderPID(TestPara, 80,17, 0.5,180,true);//match load
wait(170,msec);
MoveEncoderPID(TestPara, -70,14, 0.1,170,true);//back up from match load
Scrapper.set(false);
TurnMaxTimePID(AngPara, 30,0.8, true);//turn toward long goal
MoveEncoderPID(TestPara, 50,9.5, 0.1,4,true);//
TurnMaxTimePID(AngPara, 0,0.4, true);//turn toward long goal
wait(240,msec);

RunSecondStage(100);
wait(1800,msec);
MoveEncoderPID(TestPara,-50,4.5, 0.1,4,true);//




}
void sixthreeleft(){
    // declare initial conditions
    //AWP
    //Solo AWP
    PIDDataSet TestPara={1.1,0.03,0.31};
PIDDataSet AngPara={1.5,0.1,0.13};
    //6+3 left

RunSecondStage(20);
RunBottom(100);
MoveEncoderPID(TestPara, 100,3.5, 0.4,0,false);//go toward 3 balls
wait(200,msec);
MoveEncoderPID(TestPara, 80,48, 0.1,-80,false);//curve towards long goal

MoveEncoderPID(TestPara, 20,12.4, 0.1,5,true);//curve towards 2 balls
wait(300,msec);

//Addcodehere

wait(100,msec);
TurnMaxTimePID(AngPara, -24,0.5, true);//turn to goal
RunSecondStage(0);
RunBottom(0);

MoveEncoderPID(TestPara, -100,11.5, 0.1,-80,false);//back up from center
Scrapper.set(false);
MoveEncoderPID(TestPara, -100,5.5, 0.1,0,false);//back up towards scoring area
MoveEncoderPID(TestPara, -100,33.3, 0.1,90,false);//curve around goal
TurnMaxTimePID(AngPara, 0,0.7, true);//turn to goal
Lift.set(true);
wait(400,msec);
MoveEncoderPID(TestPara, 60,21.5, 0.1,0,true);//go toward goal for scoring
RunSecondStage(100);
RunBottom(100);

wait(1800,msec);
RunSecondStage(0);
RunBottom(100);
MoveEncoderPID(TestPara, -100,10.5, 0.1,0,true);//back up from goal

Scrapper.set(true);
TurnMaxTimePID(AngPara, 180,0.5, true);//turn to match load
MoveEncoderPID(TestPara, 60,17, 0.1,-180,true);//match load
wait(300,msec);

MoveEncoderPID(TestPara, -70,10, 0.1,-180,true);//back up from match load
TurnMaxTimePID(AngPara, 42,0.5, true);//turn to match load
Lift.set(false);
MoveEncoderPID(TestPara, 90,50.5, 0.1,42,true);//back up from match load
RunSecondStage(100);
RunBottom(100);

    //Collect 3&score
        //MoveEncoderPID(TestPara, 60,12, 0.4,0,true);

    /*Lift.set(true);
    MoveEncoderPID(TestPara, 60,12, 0.4,0,true);
    wait(300,msec);
    TurnMaxTimePID(AngPara, 90,0.8, true);
    RunBottom(100);
    Scrapper.set(true);
    MoveEncoderPID(TestPara, 80,11, 0.4,90,true);
    wait(300,msec);
    MoveEncoderPID(TestPara, -80,11, 0.4,90,true);
    TurnMaxTimePID(AngPara, -90,0.5, true);
    MoveEncoderPID(TestPara, 70,4, 0.4,-90,true);
    RunSecondStage(100);
*/
    //MoveEncoderPID(TestPara, 100,11, 0.5,-55,true);
    //Collect match loader&score
    /*(TestPara, -100,67, 0.5,-45,true);
    Tilt.set(true);
    Clamp.set(true);
    TurnMaxTimePID(AngPara, 180,0.4, true);
    RunRoller(100);
    MoveEncoderPID(TestPara, 80,36, 0.3,180,false);
    wait(200,msec);
    MoveEncoderPID(TestPara, -100,15, 0.5,180,true);
    Tilt.set(false);
    IntakeBoth(-60); 
    TurnMaxTimePID(AngPara, 0,0.4, true);
    MoveEncoderPID(TestPara, 100,13, 0.3,-2,true);
    IntakeBoth(-100);
    //
*/
//7left
/*
Lift.set(true);
RunBottom(100);
TurnMaxTimePID(AngPara, -20,0.5, true);//turn to goal
MoveEncoderPID(TestPara, 80,21, 0.4,-20,false);//go toward 3 balls
Scrapper.set(true);
MoveEncoderPID(TestPara, 60,3, 0.4,-20,true);//go toward 3 balls
RunSecondStage(26);
TurnMaxTimePID(AngPara, -120,0.5, true);//turn to goal
MoveEncoderPID(TestPara, 100,33.5, 0.4,-120,true);//go toward 3 balls
TurnMaxTimePID(AngPara, 180,1.2, true);//turn to goal
MoveEncoderPID(TestPara, 50,28, 0.6,-179,true);//go toward 3 balls
wait(970,msec);
RunBottom(0);
MoveEncoderPID(TestPara, -80,9, 0.8,-179,true);//go toward 3 balls
Scrapper.set(false);
TurnMaxTimePID(AngPara, 14,1.2, true);//turn to goal
MoveEncoderPID(TestPara,60,15, 0.7,14,true);//go toward 3 balls
TurnMaxTimePID(AngPara, 0,0.7, true);//turn to goal

RunBottom(100);
RunSecondStage(100);
*/

//MoveEncoderPID(TestPara, -100,24, 0.1,0,true);
//wait(500, msec);
//4+3left
/*
Lift.set(true);
RunBottom(100);
TurnMaxTimePID(AngPara, -18,0.5, true);//turn to goal
MoveEncoderPID(TestPara, 80,21, 0.4,-18,false);//go toward 3 balls
Scrapper.set(true);
MoveEncoderPID(TestPara, 60,3, 0.4,-18,true);//go toward 3 balls

RunSecondStage(30);
TurnMaxTimePID(AngPara, -120,0.5, true);//turn to goal
RunSecondStage(0);
MoveEncoderPID(TestPara, 100,30.5, 0.4,-120,true);//go toward 3 balls
TurnMaxTimePID(AngPara, 180,0.5, true);//turn to goal
MoveEncoderPID(TestPara, 50,22, 0.4,180,true);//go toward 3 balls
wait(970,msec);
RunBottom(0);
MoveEncoderPID(TestPara, -80,10, 0.4,180,true);//go toward 3 balls
Scrapper.set(false);
TurnMaxTimePID(AngPara, 9,1.2, true);//turn to goal
MoveEncoderPID(TestPara,80,8.5, 0.4,0,true);//go toward 3 balls
RunBottom(100);
RunSecondStage(100);
wait(1200,msec);

RunSecondStage(-20);
RunBottom(0);

MoveEncoderPID(TestPara,-70,20, 0.4,0,true);//go toward 3 balls
TurnMaxTimePID(AngPara, 42,0.5, true);//turn to goal
Lift.set(false);

MoveEncoderPID(TestPara,80,67, 0.4,42,true);//go toward 3 balls
RunSecondStage(100);
RunBottom(100);
 */   
}
void sixthreeright(){
    //Skills
    PIDDataSet TestPara={1.1,0.03,0.31};
    PIDDataSet AngPara={1.5,0.1,0.13};
  //6+3 right
RunSecondStage(20);
RunBottom(100);
MoveEncoderPID(TestPara, 80,4, 0.4,0,false);//go toward 3 balls
wait(200,msec);
MoveEncoderPID(TestPara, 80,48, 0.1,77,false);//curve towards long goal

MoveEncoderPID(TestPara, 20,12, 0.1,-5,true);//curve towards 2 balls
wait(300,msec);

//Addcodehere

TurnMaxTimePID(AngPara, 27,0.4, true);//turn to goal
RunBottom(0);
RunSecondStage(0);

MoveEncoderPID(TestPara, -100,9.5, 0.1,80,false);//back up from center
Scrapper.set(false);
MoveEncoderPID(TestPara, -100,5.5, 0.1,0,false);//back up towards scoring area
MoveEncoderPID(TestPara, -100,32.5, 0.1,-90,false);//curve around goal
TurnMaxTimePID(AngPara, 0,0.7, true);//turn to goal
Lift.set(true);
MoveEncoderPID(TestPara, 80,16.5, 0.1,0,true);//go toward goal for scoring
RunBottom(100);
RunSecondStage(100);
wait(2200,msec);
RunSecondStage(10);
RunBottom(100);
MoveEncoderPID(TestPara, -100,11, 0.1,10,true);//back up from goal

Scrapper.set(true);
TurnMaxTimePID(AngPara, -170,0.7, true);//turn to match load
MoveEncoderPID(TestPara, 70,17, 0.5,180,true);//match load
wait(200,msec);
MoveEncoderPID(TestPara, -80,8, 0.1,180,true);//back up from match load
Scrapper.set(false);
TurnMaxTimePID(AngPara, -45,0.8, true);//turn toward long goal
RunSecondStage(-20);
RunBottom(-10);
MoveEncoderPID(TestPara,100,23, 0.1,-45,false);//
RunBottom(-100);
RunSecondStage(-100);
MoveEncoderPID(TestPara,100,33, 0.1,-45,true);//


}
//Ignore all code after this point for now
void sevenleft(){
    //Possible 6+3
    

//4+3 left
/*
Lift.set(true);
RunBottom(100);
TurnMaxTimePID(AngPara, -20,0.5, true);//turn to goal
MoveEncoderPID(TestPara, 80,21, 0.4,-20,false);//go toward 3 balls
Scrapper.set(true);
MoveEncoderPID(TestPara, 60,3, 0.4,-20,true);//go toward 3 balls

RunSecondStage(19);
TurnMaxTimePID(AngPara, -120,0.5, true);//turn to goal
MoveEncoderPID(TestPara, 100,30.5, 0.4,-120,true);//go toward 3 balls
TurnMaxTimePID(AngPara, 180,1.2, true);//turn to goal
MoveEncoderPID(TestPara, 50,28, 0.6,-179,true);//go toward 3 balls
wait(970,msec);
RunBottom(0);
MoveEncoderPID(TestPara, -80,9, 0.4,-179,true);//go toward 3 balls
Scrapper.set(false);
TurnMaxTimePID(AngPara, 14,1.2, true);//turn to goal
MoveEncoderPID(TestPara,80,15, 0.4,5,true);//go toward 3 balls
RunBottom(100);
RunSecondStage(100);
wait(1050,msec);

RunSecondStage(10);
RunBottom(0);

MoveEncoderPID(TestPara,-70,22, 0.4,0,true);//go toward 3 balls
TurnMaxTimePID(AngPara, 45,0.5, true);//turn to goal
Lift.set(false);
Scrapper.set(true);
MoveEncoderPID(TestPara,80,66, 0.4,46,true);//go toward 3 balls
RunSecondStage(100);
RunBottom(100);
wait(1400,msec);
RunSecondStage(0);
Lift.set(true);
*/

}
void sevenright(){
// Use this to tune PID values
PIDDataSet TestPara={1.1,0.03,0.31};
PIDDataSet AngPara={1.5,0.1,0.13};
//7right

Lift.set(true);
RunBottom(100);
TurnMaxTimePID(AngPara, 18,0.5, true);//turn to goal
MoveEncoderPID(TestPara, 80,21, 0.4,18,false);//go toward 3 balls
Scrapper.set(true);
MoveEncoderPID(TestPara, 60,3, 0.4,18,true);//go toward 3 balls

RunSecondStage(70);
TurnMaxTimePID(AngPara, 120,0.5, true);//turn to goal
RunSecondStage(0);
MoveEncoderPID(TestPara, 100,31.5, 0.4,120,true);//go toward 3 balls
TurnMaxTimePID(AngPara, 180,0.5, true);//turn to goal
MoveEncoderPID(TestPara, 70,282, 0.4,180,true);//go toward 3 balls
wait(600,msec);
RunBottom(0);
MoveEncoderPID(TestPara, -80,10, 0.4,180,true);//go toward 3 balls
Scrapper.set(false);
TurnMaxTimePID(AngPara, 9,1.2, true);//turn to goal
MoveEncoderPID(TestPara,80,8.5, 0.4,0,true);//go toward 3 balls
RunBottom(100);
RunSecondStage(100);
wait(2200,msec);
MoveEncoderPID(TestPara,-100,11, 0.4,80,false);//go toward 3 balls
Wings.set(true);
wait(200,msec);
MoveEncoderPID(TestPara,100,20, 0.4,-18,false);//go toward 3 balls
MoveEncoderPID(TestPara,100,19, 0.4,0,true);//go toward 3 balls
MoveEncoderPID(TestPara,-80,2, 0.4,0,true);//go toward 3 balls

//4+3right
/*
RunSecondStage(-20);
RunBottom(0);
Lift.set(true);
RunBottom(100);
TurnMaxTimePID(AngPara, 18,0.5, true);//turn to goal
MoveEncoderPID(TestPara, 80,21, 0.4,18,false);//go toward 3 balls
Scrapper.set(true);
MoveEncoderPID(TestPara, 60,3, 0.4,18,true);//go toward 3 balls

RunSecondStage(70);
TurnMaxTimePID(AngPara, 120,0.7, true);//turn to goal
RunSecondStage(0);
MoveEncoderPID(TestPara, 100,30.5, 0.4,120,true);//go toward 3 balls
TurnMaxTimePID(AngPara, 180,0.5, true);//turn to goal
MoveEncoderPID(TestPara, 50,22, 0.4,180,true);//go toward 3 balls
wait(970,msec);
RunBottom(0);
MoveEncoderPID(TestPara, -80,10, 0.4,180,true);//go toward 3 balls
Scrapper.set(false);
TurnMaxTimePID(AngPara, 9,1.2, true);//turn to goal
MoveEncoderPID(TestPara,80,8.5, 0.4,0,true);//go toward 3 balls
RunBottom(100);
RunSecondStage(100);
wait(1150,msec);

RunSecondStage(-20);
RunBottom(0);

MoveEncoderPID(TestPara,-70,22.5, 0.4,0,true);//go toward 3 balls
TurnMaxTimePID(AngPara, -45,0.5, true);//turn to goal
MoveEncoderPID(TestPara,80,67, 0.4,-45,true);//go toward 3 balls
RunSecondStage(-100);
RunBottom(-100);
*/
/*
RunSecondStage(17);
RunBottom(100);
MoveEncoderPID(TestPara, 80,17, 0.4,31,true);
wait(200,msec);
Scrapper.set(true);
MoveEncoderPID(TestPara, 100,14, 0.1,29,true);
wait(100,msec);
TurnMaxTimePID(AngPara, 135,0.3, true);
MoveEncoderPID(TestPara, 100,39.5, 0.1,135,true);
wait(100,msec);
TurnMaxTimePID(AngPara, 180,0.5, true);
MoveEncoderPID(TestPara, 70,25, 0.1,180,true);
wait(670,msec);
MoveEncoderPID(TestPara, -70,19, 0.1,180,true);
Scrapper.set(false);
TurnMaxTimePID(AngPara, 0,0.5, true);
MoveEncoderPID(TestPara, 70,11, 0.1,0,true);
wait(100,msec);
RunSecondStage(100);

//MoveEncoderPID(TestPara, -100,24, 0.1,0,true);
//wait(500, msec);
Lift.set(true);
RunBottom(100);
TurnMaxTimePID(AngPara, 18,0.5, true);//turn to goal
MoveEncoderPID(TestPara, 80,21, 0.4,18,false);//go toward 3 balls
Scrapper.set(true);
MoveEncoderPID(TestPara, 60,3, 0.4,18,true);//go toward 3 balls

RunSecondStage(30);
TurnMaxTimePID(AngPara, 120,0.5, true);//turn to goal
RunSecondStage(0);
MoveEncoderPID(TestPara, 100,30.5, 0.4,120,true);//go toward 3 balls
TurnMaxTimePID(AngPara, 180,0.5, true);//turn to goal
MoveEncoderPID(TestPara, 50,22, 0.4,180,true);//go toward 3 balls
wait(970,msec);
RunBottom(0);
MoveEncoderPID(TestPara, -80,10, 0.4,180,true);//go toward 3 balls
Scrapper.set(false);
TurnMaxTimePID(AngPara, 9,1.2, true);//turn to goal
MoveEncoderPID(TestPara,80,8.5, 0.4,0,true);//go toward 3 balls
RunBottom(100);
RunSecondStage(100);
wait(1200,msec);

RunSecondStage(-20);
RunBottom(0);

MoveEncoderPID(TestPara,-70,20, 0.4,0,true);//go toward 3 balls
TurnMaxTimePID(AngPara, -42,0.5, true);//turn to goal
MoveEncoderPID(TestPara,80,67, 0.4,-42,true);//go toward 3 balls
RunSecondStage(-100);
RunBottom(-100);
*/
}


void fourthree() {
    
    }
    
