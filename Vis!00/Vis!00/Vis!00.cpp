#include "Main.h"
#include "SetupBaseCardsPyramid.h"

void DropDownFilled(Rectangle& movingRed, Rectangle& movingBlue, Rectangle& movingYellow, bool& filled, vector<Rectangle> &TocheckRec)
{

    for (int i = 0; i < TocheckRec.size(); i++)
    {
        if (CheckCollisionRecs(TocheckRec[i], movingBlue) || CheckCollisionRecs(TocheckRec[i], movingRed) || CheckCollisionRecs(TocheckRec[i], movingYellow))
        {
            filled = i;
        }
        
    }


}

void DropDown(Rectangle &moving, Vector2 &mPoint, Vector2 &posPoint, Texture2D &texture, vector<Rectangle> &downPy, vector<Rectangle> &upPy, bool &checkcoll, bool &fill)
{
    
        
        if (CheckCollisionPointRec(mPoint, moving) && IsMouseButtonDown(MOUSE_BUTTON_LEFT))
        {
            checkcoll = 1;


        }
        if (checkcoll)
        {
            if (IsMouseButtonDown(MOUSE_BUTTON_LEFT))
            {

                posPoint.x = mPoint.x;
                posPoint.y = mPoint.y;
                moving.x = posPoint.x;
                moving.y = posPoint.y;
            }
            else if (IsMouseButtonReleased(MOUSE_BUTTON_LEFT))
            {
                for (int i = 0; i < downPy.size(); i++)
                {
                    if (fill == i)
                    {
                        checkcoll = 0;
                        
                    }
                    else if (CheckCollisionPointRec(mPoint, downPy[i]))
                    {
                        posPoint.x = downPy[i].x;
                        posPoint.y = downPy[i].y;
                        texture.height = downPy[i].height;
                        texture.width = downPy[i].width;
                        moving.width = downPy[i].width;
                        moving.height = downPy[i].height;
                        moving.x = downPy[i].x;
                        moving.y = downPy[i].y;


                    }
                }
                checkcoll = 0;
            }
        }
    
    
}
int main(void)
{
    const int screenWidth = 1800;
    const int screenHeight = 950;
    
    bool checker = 1;
    bool checker2 = 1;
    bool filled = 0;
    srand(time(0));
    Rectangle hide = {0,0,screenWidth,screenHeight};
    string randomDirectories[3] = { "../images/red_card.png", "../images/yellow_card.png", "../images/blue_card.png" };
    
    
    InitWindow(screenWidth, screenHeight, "Vis!00");
    Texture2D red_card = LoadTexture(randomDirectories[rand() % 3].c_str());
    Texture2D blue_card = LoadTexture(randomDirectories[rand() % 3].c_str());
    Texture2D yellow_card = LoadTexture(randomDirectories[rand() % 3].c_str());
    
    Rectangle colorsRecs[4];
    for (int i = 0; i < sizeof(colorsRecs) / sizeof(colorsRecs[0]); i++)
    {
        colorsRecs[i].height = 145 + 250;
        colorsRecs[i].width = 110 + 150;
        colorsRecs[i].x = 225 + i * (110 + 150 + /*this number shows the space between the cards ->*/100);
        colorsRecs[i].y = GetScreenHeight() / 2 - colorsRecs[i].height / 2;
    }

    Rectangle gameMenu[4];
    vector<Rectangle> BasePiramidDown;
    vector<Rectangle> BasePiramidUp;
    bool checkfirstcollisionRed = 0;
    bool checkfirstcollisionBlue = 0;
    bool checkfirstcollisionYellow = 0;
    Rectangle BaseCards = { 225, 420, 90, 105 };
    Vector2 mousePoint;
    Vector2 posImgRed= {10,100};
    Vector2 posImgBlue= { 10,400 };
    Vector2 posImgYellow = { 10,500 };
    Rectangle movingBoxRed = { posImgRed.x, posImgRed.y, red_card.width, red_card.height };
    Rectangle movingBoxBlue = { posImgBlue.x, posImgBlue.y, blue_card.width, blue_card.height };
    Rectangle movingBoxYellow = { posImgYellow.x, posImgYellow.y, yellow_card.width, yellow_card.height };
    bool zero = 0, one = 0, two = 0, three = 0;
    bool menuZero = 0, menuOne = 0, menuTwo = 0, menuThree = 0;
    bool ftAr[6];
    for (int i = 0; i < sizeof ftAr / sizeof ftAr[0]; i++)
    {
        ftAr[i] = rand() % 2;
    }
    SetTargetFPS(60);

    while (!WindowShouldClose())
    {

        mousePoint = GetMousePosition();
        srand(time(NULL));
        BeginDrawing();

        
        for (size_t i = 0; i < 4; i++)
        {
            switch (i)
            {
            case 0:
                gameMenu[i].width = 110 + 300;
                gameMenu[i].height = 145 + 25;
                gameMenu[i].x = 700/*this number shows the space between the cards ->*/;
                gameMenu[i].y = gameMenu[i].height /15;

                DrawRectangleRec(gameMenu[i], LIGHTGRAY);
                DrawText("Play", (gameMenu[i].width / 5) + gameMenu[i].x/*this number pull back the text to appropriate align ->*/ -55, 0.1, 175, BLACK);
                break;
            case 1:
                gameMenu[i].width = 110 + 225;
                gameMenu[i].height = 145;
                gameMenu[i].x = gameMenu[i - 1].x + 40;
                gameMenu[i].y = gameMenu[i - 1].height * 3;

                DrawRectangleRec(gameMenu[i], LIGHTGRAY);
                DrawText("Quit", (gameMenu[i].width / 5) + gameMenu[i].x /*this number pull back the text to appropriate align ->*/ -40, 510, 150, BLACK);
                break;
            case 2:
                gameMenu[i].width = 650;
                gameMenu[i].height = 165;
                gameMenu[i].x = gameMenu[i - 1].x - 150;
                gameMenu[i].y = gameMenu[i - 1].height * 2.45;

                DrawRectangleRec(gameMenu[i], LIGHTGRAY);
                DrawText("Settings", (gameMenu[i].width / 5) + gameMenu[i].x /*this number pull back the text to appropriate align ->*/ - 122.5, 360, 150, BLACK);
                break;
            case 3:
                gameMenu[i].width = 570;
                gameMenu[i].height = 175;
                gameMenu[i].x = gameMenu[i - 1].x + 40;
                gameMenu[i].y = gameMenu[i - 1].height * 1.1;

                DrawRectangleRec(gameMenu[i], LIGHTGRAY);
                DrawText("Rules", (gameMenu[i].width / 5) + gameMenu[i].x /*this number pull back the text to appropriate align ->*/ - 40, 187.5, 150, BLACK);
                break;
            }



            if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && CheckCollisionPointRec(mousePoint, gameMenu[0]) && checker)
            {
               
                menuZero = true;
                menuOne = 0;
                menuTwo = 0;
                menuThree = 0;
            }
            else if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && CheckCollisionPointRec(mousePoint, gameMenu[1])&& checker)
            {

                menuOne = true;
                menuZero = 0;
                menuTwo = 0;
                menuThree = 0;
            }
            else if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && CheckCollisionPointRec(mousePoint, gameMenu[2])&& checker)
            {
                menuTwo = true;
                menuOne = 0;
                menuZero = 0;
                menuThree = 0;
            }
            else if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && CheckCollisionPointRec(mousePoint, gameMenu[3]) && checker)
            {
                menuThree =true;
                menuOne = 0;
                menuZero = 0;
                menuTwo = 0;
            }
        }

        if (menuZero)
        {
            checker = 0;
            DrawRectangleRec(hide, LIGHTGRAY);
            
            for (int i = 0; i < 2; i++)
            {
                gameMenu[i].x = -100;
                gameMenu[i].y = -100;
                gameMenu[i].height = 0;
                gameMenu[i].width = 0;
            }

            for (int i = 0; i < sizeof(colorsRecs) / sizeof(colorsRecs[0]); i++)
            {

                string txt = to_string(3 + i);
                switch (i)
                {
                case 0:
                {
                    DrawRectangleRec(colorsRecs[i], DARKBLUE);
                    DrawText(txt.c_str(), (colorsRecs[i].width / 2) + colorsRecs[i].x - /*this number pull back the text to appropriate align ->*/37.5, 350 + 50, 150, BLACK);
                    break;
                }
                case 1:
                {
                    DrawRectangleRec(colorsRecs[i], PINK);
                    DrawText(txt.c_str(), (colorsRecs[i].width / 2) + colorsRecs[i].x - /*this number pull back the text to appropriate align ->*/37.5, 350 + 50, 150, BLACK);
                    break;
                }
                case 2:
                {
                    DrawRectangleRec(colorsRecs[i], RED);
                    DrawText(txt.c_str(), (colorsRecs[i].width / 2) + colorsRecs[i].x - /*this number pull back the text to appropriate align ->*/37.5, 350 + 50, 150, BLACK);
                    break;
                }
                case 3:
                {
                    DrawRectangleRec(colorsRecs[i], ORANGE);
                    DrawText(txt.c_str(), (colorsRecs[i].width / 2) + colorsRecs[i].x - /*this number pull back the text to appropriate align ->*/37.5, 350 + 50, 150, BLACK);
                    break;
                }

                }

            }
        





            if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && CheckCollisionPointRec(mousePoint, colorsRecs[0]) && checker2)
            {

                zero = true;
                one = 0, two = 0, three = 0;
                BasePiramidDown.resize(3);
                BasePiramidUp.resize(3);
                

            }
            else if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && CheckCollisionPointRec(mousePoint, colorsRecs[1]) && checker2)
            {

                one = true;
                zero = 0, two = 0, three = 0;
                BasePiramidDown.resize(6);
                BasePiramidUp.resize(6);
                

            }
            else if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && CheckCollisionPointRec(mousePoint, colorsRecs[2]) && checker2)
            {

                two = true;
                one = 0, zero = 0, three = 0;
                BasePiramidDown.resize(10);
                BasePiramidUp.resize(10);
            }
            else if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && CheckCollisionPointRec(mousePoint, colorsRecs[3]) && checker2)
            {

                three = true;
                BasePiramidDown.resize(15);
                BasePiramidUp.resize(15);
                one = 0, two = 0, zero = 0;

            }
            SetupDown(BasePiramidDown);
            SetupUp(BasePiramidUp);

            if (zero)
            {
                checker2 = 0;
                DrawRectangleRec(hide, LIGHTGRAY);
                DrawRectangleRec(movingBoxRed, LIGHTGRAY);
                DrawRectangleRec(movingBoxBlue, LIGHTGRAY);
                DrawRectangleRec(movingBoxYellow, LIGHTGRAY);
                
               
                DrawRectangle((int)BaseCards.x + 100, (int)BaseCards.y - 450, (int)BaseCards.width - 85, (int)BaseCards.height + 1200, BLACK);
                DrawRectangle((int)BaseCards.x + 1250, (int)BaseCards.y - 450, (int)BaseCards.width - 85, (int)BaseCards.height + 1200, BLACK);

                DrawRectangle((int)BaseCards.x + 394, (int)BaseCards.y - 5, (int)BaseCards.width + 12.5, (int)BaseCards.height + 12.5, BLACK);
                DrawRectangle((int)BaseCards.x + 604, (int)BaseCards.y - 5, (int)BaseCards.width + 12.5, (int)BaseCards.height + 12.5, BLACK);
                DrawRectangle((int)BaseCards.x + 814, (int)BaseCards.y - 5, (int)BaseCards.width + 12.5, (int)BaseCards.height + 12.5, BLACK);

                DrawRectangle((int)BaseCards.x + 400, (int)BaseCards.y, (int)BaseCards.width, (int)BaseCards.height, DARKGRAY);
                DrawRectangle((int)BaseCards.x + 610, (int)BaseCards.y, (int)BaseCards.width, (int)BaseCards.height, DARKGRAY);
                DrawRectangle((int)BaseCards.x + 820, (int)BaseCards.y, (int)BaseCards.width, (int)BaseCards.height, DARKGRAY);

                DrawRectangle((int)BaseCards.x + 400, (int)BaseCards.y + 55, (int)BaseCards.width, (int)BaseCards.height - 102.5, WHITE);
                DrawRectangle((int)BaseCards.x + 610, (int)BaseCards.y + 55, (int)BaseCards.width, (int)BaseCards.height - 102.5, WHITE);
                DrawRectangle((int)BaseCards.x + 820, (int)BaseCards.y + 55, (int)BaseCards.width, (int)BaseCards.height - 102.5, WHITE);
                 
                /*Draw Blue cudes ->*/for (int i = 0; i < BasePiramidDown.size(); i++)
                {
                    DrawRectangleRec(BasePiramidDown[i], BLUE);
                }

                for (int i = 0; i < BasePiramidUp.size(); i++)
                {
                    DrawRectangleRec(BasePiramidUp[i], BLUE);
                }

                if (ftAr[0])
                {
                    DrawText(to_string(ftAr[0]).c_str(), 665, 425, 50, BLACK);
                    DrawText(to_string(!ftAr[0]).c_str(), 657.5, 480, 50, BLACK);
                }
                else
                {
                    DrawText(to_string(ftAr[0]).c_str(), 657.5, 425, 50, BLACK);
                    DrawText(to_string(!ftAr[0]).c_str(), 665, 480, 50, BLACK);
                }
                if (ftAr[1])
                {
                    DrawText(to_string(ftAr[1]).c_str(), 874.5, 425, 50, BLACK);
                    DrawText(to_string(!ftAr[1]).c_str(), 867, 480, 50, BLACK);
                }
                else
                {
                    DrawText(to_string(ftAr[1]).c_str(), 867, 425, 50, BLACK);
                    DrawText(to_string(!ftAr[1]).c_str(), 874.5, 480, 50, BLACK);
                }
                if (ftAr[2])
                {
                    DrawText(to_string(ftAr[2]).c_str(), 1084.5, 425, 50, BLACK);
                    DrawText(to_string(!ftAr[2]).c_str(), 1077, 480, 50, BLACK);
                }
                else
                {
                    DrawText(to_string(ftAr[2]).c_str(), 1077, 425, 50, BLACK);
                    DrawText(to_string(!ftAr[2]).c_str(), 1084.5, 480, 50, BLACK);
                }
                //check if the base cards are already filled
                
                
                
                    DropDownFilled(movingBoxRed, movingBoxBlue, movingBoxYellow, filled, BasePiramidDown);
               
                
                //ifs on Textures
                if (checkfirstcollisionBlue == 0 && checkfirstcollisionRed == 0 && checkfirstcollisionYellow == 0)
                {
                    DropDown(movingBoxRed, mousePoint, posImgRed, red_card, BasePiramidDown, BasePiramidUp, checkfirstcollisionRed, filled);
                    DropDown(movingBoxYellow, mousePoint, posImgYellow, yellow_card, BasePiramidDown, BasePiramidUp, checkfirstcollisionYellow, filled);
                    DropDown(movingBoxBlue, mousePoint, posImgBlue, blue_card, BasePiramidDown, BasePiramidUp, checkfirstcollisionBlue, filled);

                }
                if(checkfirstcollisionRed && checkfirstcollisionBlue == 0 && checkfirstcollisionYellow == 0)
                {
                    DropDown(movingBoxRed, mousePoint, posImgRed, red_card, BasePiramidDown, BasePiramidUp, checkfirstcollisionRed, filled);



                }
                else if (checkfirstcollisionYellow && checkfirstcollisionBlue == 0 && checkfirstcollisionRed == 0)
                {
                    

                    DropDown(movingBoxYellow, mousePoint, posImgYellow, yellow_card, BasePiramidDown, BasePiramidUp, checkfirstcollisionYellow, filled);

                }
                else if (checkfirstcollisionBlue && checkfirstcollisionRed == 0 && checkfirstcollisionYellow == 0)
                {
                   
                    DropDown(movingBoxBlue, mousePoint, posImgBlue, blue_card, BasePiramidDown, BasePiramidUp, checkfirstcollisionBlue, filled);


                }
                DrawTexture(red_card, posImgRed.x, posImgRed.y, WHITE);
                DrawTexture(blue_card, posImgBlue.x, posImgBlue.y, WHITE);
                DrawTexture(yellow_card, posImgYellow.x, posImgYellow.y, WHITE);

            }
            else if (one)
            {
                checker2 = 0;
                DrawRectangleRec(hide, LIGHTGRAY);
               

                DrawRectangle((int)BaseCards.x + 100, (int)BaseCards.y - 450, (int)BaseCards.width - 85, (int)BaseCards.height + 1200, BLACK);
                DrawRectangle((int)BaseCards.x + 1250, (int)BaseCards.y - 450, (int)BaseCards.width - 85, (int)BaseCards.height + 1200, BLACK);

                DrawRectangle((int)BaseCards.x + 314, (int)BaseCards.y - 5, (int)BaseCards.width + 12.5, (int)BaseCards.height + 12.5, BLACK);
                DrawRectangle((int)BaseCards.x + 514, (int)BaseCards.y - 5, (int)BaseCards.width + 12.5, (int)BaseCards.height + 12.5, BLACK);
                DrawRectangle((int)BaseCards.x + 714, (int)BaseCards.y - 5, (int)BaseCards.width + 12.5, (int)BaseCards.height + 12.5, BLACK);
                DrawRectangle((int)BaseCards.x + 914, (int)BaseCards.y - 5, (int)BaseCards.width + 12.5, (int)BaseCards.height + 12.5, BLACK);

                DrawRectangle((int)BaseCards.x + 320, (int)BaseCards.y, (int)BaseCards.width, (int)BaseCards.height, DARKGRAY);
                DrawRectangle((int)BaseCards.x + 520, (int)BaseCards.y, (int)BaseCards.width, (int)BaseCards.height, DARKGRAY);
                DrawRectangle((int)BaseCards.x + 720, (int)BaseCards.y, (int)BaseCards.width, (int)BaseCards.height, DARKGRAY);
                DrawRectangle((int)BaseCards.x + 920, (int)BaseCards.y, (int)BaseCards.width, (int)BaseCards.height, DARKGRAY);

                DrawRectangle((int)BaseCards.x + 320, (int)BaseCards.y + 55, (int)BaseCards.width, (int)BaseCards.height - 102.5, WHITE);
                DrawRectangle((int)BaseCards.x + 520, (int)BaseCards.y + 55, (int)BaseCards.width, (int)BaseCards.height - 102.5, WHITE);
                DrawRectangle((int)BaseCards.x + 720, (int)BaseCards.y + 55, (int)BaseCards.width, (int)BaseCards.height - 102.5, WHITE);
                DrawRectangle((int)BaseCards.x + 920, (int)BaseCards.y + 55, (int)BaseCards.width, (int)BaseCards.height - 102.5, WHITE);

                /*Draw Blue cudes ->*/for (int i = 0; i < BasePiramidDown.size(); i++)
                {
                    DrawRectangleRec(BasePiramidDown[i], BLUE);
                }

                for (int i = 0; i < BasePiramidUp.size(); i++)
                {
                    DrawRectangleRec(BasePiramidUp[i], BLUE);
                }


                if (ftAr[0])
                {
                    DrawText(to_string(ftAr[0]).c_str(), 587.5, 425, 50, BLACK);
                    DrawText(to_string(!ftAr[0]).c_str(), 580, 480, 50, BLACK);
                }
                else
                {
                    DrawText(to_string(ftAr[0]).c_str(), 580, 425, 50, BLACK);
                    DrawText(to_string(!ftAr[0]).c_str(), 587.5, 480, 50, BLACK);
                }

                if (ftAr[1])
                {
                    DrawText(to_string(ftAr[1]).c_str(), 787.5, 425, 50, BLACK);
                    DrawText(to_string(!ftAr[1]).c_str(), 780, 480, 50, BLACK);
                }
                else
                {
                    DrawText(to_string(ftAr[1]).c_str(), 780, 425, 50, BLACK);
                    DrawText(to_string(!ftAr[1]).c_str(), 787.5, 480, 50, BLACK);
                }

                if (ftAr[2])
                {
                    DrawText(to_string(ftAr[2]).c_str(), 987.5, 425, 50, BLACK);
                    DrawText(to_string(!ftAr[2]).c_str(), 980, 480, 50, BLACK);
                }
                else
                {
                    DrawText(to_string(ftAr[2]).c_str(), 980, 425, 50, BLACK);
                    DrawText(to_string(!ftAr[2]).c_str(), 987.5, 480, 50, BLACK);
                }

                if (ftAr[3])
                {
                    DrawText(to_string(ftAr[3]).c_str(), 1187.5, 425, 50, BLACK);
                    DrawText(to_string(!ftAr[3]).c_str(), 1180, 480, 50, BLACK);
                }
                else
                {
                    DrawText(to_string(ftAr[3]).c_str(), 1180, 425, 50, BLACK);
                    DrawText(to_string(!ftAr[3]).c_str(), 1187.5, 480, 50, BLACK);
                }
            }
            else if (two)
            {
                checker2 = 0;
                DrawRectangleRec(hide, LIGHTGRAY);
                

                DrawRectangle((int)BaseCards.x + 100, (int)BaseCards.y - 450, (int)BaseCards.width - 85, (int)BaseCards.height + 1200, BLACK);
                DrawRectangle((int)BaseCards.x + 1250, (int)BaseCards.y - 450, (int)BaseCards.width - 85, (int)BaseCards.height + 1200, BLACK);

                DrawRectangle((int)BaseCards.x + 219, (int)BaseCards.y - 5, (int)BaseCards.width + 12.5, (int)BaseCards.height + 12.5, BLACK);
                DrawRectangle((int)BaseCards.x + 419, (int)BaseCards.y - 5, (int)BaseCards.width + 12.5, (int)BaseCards.height + 12.5, BLACK);
                DrawRectangle((int)BaseCards.x + 619, (int)BaseCards.y - 5, (int)BaseCards.width + 12.5, (int)BaseCards.height + 12.5, BLACK);
                DrawRectangle((int)BaseCards.x + 819, (int)BaseCards.y - 5, (int)BaseCards.width + 12.5, (int)BaseCards.height + 12.5, BLACK);
                DrawRectangle((int)BaseCards.x + 1019, (int)BaseCards.y - 5, (int)BaseCards.width + 12.5, (int)BaseCards.height + 12.5, BLACK);

                DrawRectangle((int)BaseCards.x + 225, (int)BaseCards.y, (int)BaseCards.width, (int)BaseCards.height, DARKGRAY);
                DrawRectangle((int)BaseCards.x + 425, (int)BaseCards.y, (int)BaseCards.width, (int)BaseCards.height, DARKGRAY);
                DrawRectangle((int)BaseCards.x + 625, (int)BaseCards.y, (int)BaseCards.width, (int)BaseCards.height, DARKGRAY);
                DrawRectangle((int)BaseCards.x + 825, (int)BaseCards.y, (int)BaseCards.width, (int)BaseCards.height, DARKGRAY);
                DrawRectangle((int)BaseCards.x + 1025, (int)BaseCards.y, (int)BaseCards.width, (int)BaseCards.height, DARKGRAY);

                DrawRectangle((int)BaseCards.x + 225, (int)BaseCards.y + 55, (int)BaseCards.width, (int)BaseCards.height - 102.5, WHITE);
                DrawRectangle((int)BaseCards.x + 425, (int)BaseCards.y + 55, (int)BaseCards.width, (int)BaseCards.height - 102.5, WHITE);
                DrawRectangle((int)BaseCards.x + 625, (int)BaseCards.y + 55, (int)BaseCards.width, (int)BaseCards.height - 102.5, WHITE);
                DrawRectangle((int)BaseCards.x + 825, (int)BaseCards.y + 55, (int)BaseCards.width, (int)BaseCards.height - 102.5, WHITE);
                DrawRectangle((int)BaseCards.x + 1025, (int)BaseCards.y + 55, (int)BaseCards.width, (int)BaseCards.height - 102.5, WHITE);

                /*Draw Blue cudes ->*/for (int i = 0; i < BasePiramidDown.size(); i++)
                {
                    DrawRectangleRec(BasePiramidDown[i], BLUE);
                }


                for (int i = 0; i < BasePiramidUp.size(); i++)
                {
                    DrawRectangleRec(BasePiramidUp[i], BLUE);
                }


                if (ftAr[0])
                {
                    DrawText(to_string(ftAr[0]).c_str(), 492.5, 425, 50, BLACK);
                    DrawText(to_string(!ftAr[0]).c_str(), 485, 480, 50, BLACK);
                }
                else
                {
                    DrawText(to_string(ftAr[0]).c_str(), 485, 425, 50, BLACK);
                    DrawText(to_string(!ftAr[0]).c_str(), 492.5, 480, 50, BLACK);
                }

                if (ftAr[1])
                {
                    DrawText(to_string(ftAr[1]).c_str(), 692.5, 425, 50, BLACK);
                    DrawText(to_string(!ftAr[1]).c_str(), 685, 480, 50, BLACK);
                }
                else
                {
                    DrawText(to_string(ftAr[1]).c_str(), 685, 425, 50, BLACK);
                    DrawText(to_string(!ftAr[1]).c_str(), 692.5, 480, 50, BLACK);
                }

                if (ftAr[2])
                {
                    DrawText(to_string(ftAr[2]).c_str(), 892.5, 425, 50, BLACK);
                    DrawText(to_string(!ftAr[2]).c_str(), 885, 480, 50, BLACK);
                }
                else
                {
                    DrawText(to_string(ftAr[2]).c_str(), 885, 425, 50, BLACK);
                    DrawText(to_string(!ftAr[2]).c_str(), 892.5, 480, 50, BLACK);
                }

                if (ftAr[3])
                {
                    DrawText(to_string(ftAr[3]).c_str(), 1092.5, 425, 50, BLACK);
                    DrawText(to_string(!ftAr[3]).c_str(), 1085, 480, 50, BLACK);
                }
                else
                {
                    DrawText(to_string(ftAr[3]).c_str(), 1085, 425, 50, BLACK);
                    DrawText(to_string(!ftAr[3]).c_str(), 1092.5, 480, 50, BLACK);
                }

                if (ftAr[4])
                {
                    DrawText(to_string(ftAr[4]).c_str(), 1292.5, 425, 50, BLACK);
                    DrawText(to_string(!ftAr[4]).c_str(), 1285, 480, 50, BLACK);
                }
                else
                {
                    DrawText(to_string(ftAr[4]).c_str(), 1285, 425, 50, BLACK);
                    DrawText(to_string(!ftAr[4]).c_str(), 1292.5, 480, 50, BLACK);
                }
            }
            else if (three)
            {

                checker2 = 0;
                DrawRectangleRec(hide, LIGHTGRAY);
                

                DrawRectangle((int)BaseCards.x + 100, (int)BaseCards.y - 450, (int)BaseCards.width - 85, (int)BaseCards.height + 1200, BLACK);
                DrawRectangle((int)BaseCards.x + 1250, (int)BaseCards.y - 450, (int)BaseCards.width - 85, (int)BaseCards.height + 1200, BLACK);

                DrawRectangle((int)BaseCards.x + 126.5, (int)BaseCards.y - 5, (int)BaseCards.width + 12.5, (int)BaseCards.height + 12.5, BLACK);
                DrawRectangle((int)BaseCards.x + 326.5, (int)BaseCards.y - 5, (int)BaseCards.width + 12.5, (int)BaseCards.height + 12.5, BLACK);
                DrawRectangle((int)BaseCards.x + 526.5, (int)BaseCards.y - 5, (int)BaseCards.width + 12.5, (int)BaseCards.height + 12.5, BLACK);
                DrawRectangle((int)BaseCards.x + 726.5, (int)BaseCards.y - 5, (int)BaseCards.width + 12.5, (int)BaseCards.height + 12.5, BLACK);
                DrawRectangle((int)BaseCards.x + 926.5, (int)BaseCards.y - 5, (int)BaseCards.width + 12.5, (int)BaseCards.height + 12.5, BLACK);
                DrawRectangle((int)BaseCards.x + 1126.5, (int)BaseCards.y - 5, (int)BaseCards.width + 12.5, (int)BaseCards.height + 12.5, BLACK);

                DrawRectangle((int)BaseCards.x + 132.5, (int)BaseCards.y, (int)BaseCards.width, (int)BaseCards.height, DARKGRAY);
                DrawRectangle((int)BaseCards.x + 332.5, (int)BaseCards.y, (int)BaseCards.width, (int)BaseCards.height, DARKGRAY);
                DrawRectangle((int)BaseCards.x + 532.5, (int)BaseCards.y, (int)BaseCards.width, (int)BaseCards.height, DARKGRAY);
                DrawRectangle((int)BaseCards.x + 732.5, (int)BaseCards.y, (int)BaseCards.width, (int)BaseCards.height, DARKGRAY);
                DrawRectangle((int)BaseCards.x + 932.5, (int)BaseCards.y, (int)BaseCards.width, (int)BaseCards.height, DARKGRAY);
                DrawRectangle((int)BaseCards.x + 1132.5, (int)BaseCards.y, (int)BaseCards.width, (int)BaseCards.height, DARKGRAY);

                DrawRectangle((int)BaseCards.x + 132.5, (int)BaseCards.y + 55, (int)BaseCards.width, (int)BaseCards.height - 102.5, WHITE);
                DrawRectangle((int)BaseCards.x + 332.5, (int)BaseCards.y + 55, (int)BaseCards.width, (int)BaseCards.height - 102.5, WHITE);
                DrawRectangle((int)BaseCards.x + 532.5, (int)BaseCards.y + 55, (int)BaseCards.width, (int)BaseCards.height - 102.5, WHITE);
                DrawRectangle((int)BaseCards.x + 732.5, (int)BaseCards.y + 55, (int)BaseCards.width, (int)BaseCards.height - 102.5, WHITE);
                DrawRectangle((int)BaseCards.x + 932.5, (int)BaseCards.y + 55, (int)BaseCards.width, (int)BaseCards.height - 102.5, WHITE);
                DrawRectangle((int)BaseCards.x + 1132.5, (int)BaseCards.y + 55, (int)BaseCards.width, (int)BaseCards.height - 102.5, WHITE);

               /*Draw Blue cudes ->*/ for (int i = 0; i < BasePiramidDown.size(); i++)
                {
                    DrawRectangleRec(BasePiramidDown[i], BLUE);
                }

               for (int i = 0; i < BasePiramidUp.size(); i++)
               {
                   DrawRectangleRec(BasePiramidUp[i], BLUE);
               }

                if (ftAr[0])
                {
                    DrawText(to_string(ftAr[0]).c_str(), 397.5, 425, 50, BLACK);
                    DrawText(to_string(!ftAr[0]).c_str(), 390, 480, 50, BLACK);
                }
                else
                {
                    DrawText(to_string(ftAr[0]).c_str(), 390, 425, 50, BLACK);
                    DrawText(to_string(!ftAr[0]).c_str(), 397.5, 480, 50, BLACK);
                }

                if (ftAr[1])
                {
                    DrawText(to_string(ftAr[1]).c_str(), 597.5, 425, 50, BLACK);
                    DrawText(to_string(!ftAr[1]).c_str(), 590, 480, 50, BLACK);
                }
                else
                {
                    DrawText(to_string(ftAr[1]).c_str(), 590, 425, 50, BLACK);
                    DrawText(to_string(!ftAr[1]).c_str(), 597.5, 480, 50, BLACK);
                }

                if (ftAr[2])
                {
                    DrawText(to_string(ftAr[2]).c_str(), 797.5, 425, 50, BLACK);
                    DrawText(to_string(!ftAr[2]).c_str(), 790, 480, 50, BLACK);
                }
                else
                {
                    DrawText(to_string(ftAr[2]).c_str(), 790, 425, 50, BLACK);
                    DrawText(to_string(!ftAr[2]).c_str(), 797.5, 480, 50, BLACK);
                }

                if (ftAr[3])
                {
                    DrawText(to_string(ftAr[3]).c_str(), 997.5, 425, 50, BLACK);
                    DrawText(to_string(!ftAr[3]).c_str(), 990, 480, 50, BLACK);
                }
                else
                {
                    DrawText(to_string(ftAr[3]).c_str(), 990, 425, 50, BLACK);
                    DrawText(to_string(!ftAr[3]).c_str(), 997.5, 480, 50, BLACK);
                }

                if (ftAr[4])
                {
                    DrawText(to_string(ftAr[4]).c_str(), 1197.5, 425, 50, BLACK);
                    DrawText(to_string(!ftAr[4]).c_str(), 1190, 480, 50, BLACK);
                }
                else
                {
                    DrawText(to_string(ftAr[4]).c_str(), 1190, 425, 50, BLACK);
                    DrawText(to_string(!ftAr[4]).c_str(), 1197.5, 480, 50, BLACK);
                }

                if (ftAr[5])
                {
                    DrawText(to_string(ftAr[5]).c_str(), 1397.5, 425, 50, BLACK);
                    DrawText(to_string(!ftAr[5]).c_str(), 1390, 480, 50, BLACK);
                }
                else
                {
                    DrawText(to_string(ftAr[5]).c_str(), 1390, 425, 50, BLACK);
                    DrawText(to_string(!ftAr[5]).c_str(), 1397.5, 480, 50, BLACK);
                }
            }
        }
        else if (menuTwo)
        {
            checker = 0;
            DrawRectangleRec(hide, LIGHTGRAY);
            DrawText("Settings:", 650, 25, 125, VIOLET);

            DrawText("Choose your FPS:", 685, 160, 50, BLACK);

            DrawText("30 FPS", 715, 220, 20, BLACK);
            DrawText("60 FPS", 815, 220, 20, BLACK);
            DrawText("120 FPS", 915, 220, 20, BLACK);
            DrawText("240 FPS", 1015, 220, 20, BLACK);

            DrawRectangle((int)BaseCards.x + 506.5, (int)BaseCards.y - 165, (int)BaseCards.width - 41, (int)BaseCards.height - 56, BLACK);
            DrawRectangle((int)BaseCards.x + 606.5, (int)BaseCards.y - 165, (int)BaseCards.width - 41, (int)BaseCards.height - 56, BLACK);
            DrawRectangle((int)BaseCards.x + 706.5, (int)BaseCards.y - 165, (int)BaseCards.width - 41, (int)BaseCards.height - 56, BLACK);
            DrawRectangle((int)BaseCards.x + 806.5, (int)BaseCards.y - 165, (int)BaseCards.width - 41, (int)BaseCards.height - 56, BLACK);

            DrawRectangle((int)BaseCards.x + 512.5, (int)BaseCards.y - 160, (int)BaseCards.width - 52, (int)BaseCards.height - 67, DARKGRAY);
            DrawRectangle((int)BaseCards.x + 612.5, (int)BaseCards.y - 160, (int)BaseCards.width - 52, (int)BaseCards.height - 67, DARKGRAY);
            DrawRectangle((int)BaseCards.x + 712.5, (int)BaseCards.y - 160, (int)BaseCards.width - 52, (int)BaseCards.height - 67, DARKGRAY);
            DrawRectangle((int)BaseCards.x + 812.5, (int)BaseCards.y - 160, (int)BaseCards.width - 52, (int)BaseCards.height - 67, DARKGRAY);

            DrawText("Choose your mode:", 675, 320, 50, BLACK);

            DrawText("Normal", 715, 380, 20, BLACK);
            DrawText("Old", 825, 380, 20, BLACK);
            DrawText("Modern", 902, 380, 20, BLACK);
            DrawText("Colorblind", 1009, 380, 20, BLACK);

            DrawRectangle((int)BaseCards.x + 499.5, (int)BaseCards.y - 5, (int)BaseCards.width - 41, (int)BaseCards.height - 56, BLACK);
            DrawRectangle((int)BaseCards.x + 594.5, (int)BaseCards.y - 5, (int)BaseCards.width - 41, (int)BaseCards.height - 56, BLACK);
            DrawRectangle((int)BaseCards.x + 692.5, (int)BaseCards.y - 5, (int)BaseCards.width - 41, (int)BaseCards.height - 56, BLACK);
            DrawRectangle((int)BaseCards.x + 794.5, (int)BaseCards.y - 5, (int)BaseCards.width - 41, (int)BaseCards.height - 56, BLACK);

            DrawRectangle((int)BaseCards.x + 505.5, (int)BaseCards.y, (int)BaseCards.width - 52, (int)BaseCards.height - 67, DARKGRAY);
            DrawRectangle((int)BaseCards.x + 600.5, (int)BaseCards.y, (int)BaseCards.width - 52, (int)BaseCards.height - 67, DARKGRAY);
            DrawRectangle((int)BaseCards.x + 698.5, (int)BaseCards.y, (int)BaseCards.width - 52, (int)BaseCards.height - 67, DARKGRAY);
            DrawRectangle((int)BaseCards.x + 800.5, (int)BaseCards.y, (int)BaseCards.width - 52, (int)BaseCards.height - 67, DARKGRAY);

        }
        else if (menuThree)
        {
            checker = 0;
            DrawRectangleRec(hide, LIGHTGRAY);
            DrawText("The rules of the game:", 200, 25, 125, VIOLET);
            DrawText("Some text...", 200, 160, 50, BLACK);
            DrawText("Some text...", 200, 260, 50, BLACK);
            DrawText("Some text...", 200, 360, 50, BLACK);
            DrawText("Some text...", 200, 460, 50, BLACK);
            DrawText("Some text...", 200, 560, 50, BLACK);
            DrawText("Some text...", 200, 660, 50, BLACK);
            DrawText("Some text...", 200, 760, 50, BLACK);
            DrawText("Some text...", 200, 860, 50, BLACK);
        }
        else if (menuOne)
        {
           
            exit(0);
        }
        
        ClearBackground(LIGHTGRAY);
        
        
        EndDrawing();
        std::system("CLS");
    }
    UnloadTexture(red_card);
    UnloadTexture(blue_card);
    UnloadTexture(yellow_card);
    CloseWindow();


    return 0; 
    }