#include "Main.h"
#include "SetupBaseCardsPyramid.h"
void Filled(vector<Rectangle> &baseDown, vector<Rectangle>& baseUp, Rectangle&movingRed, Rectangle& movingBlue, Rectangle& movingYellow, Rectangle& movingF, Rectangle& movingRedRight, Rectangle& movingBlueRight, Rectangle& movingYellowRight, Rectangle& movingFRight, vector<bool>&filledDown, vector<bool> &filledUp)
{
    for (int i = 0; i < baseDown.size(); i++)
    {

        if ((CheckCollisionRecs(baseDown[i], movingRed) && baseDown[i].width == movingRed.width) || (CheckCollisionRecs(baseDown[i], movingBlue) && baseDown[i].width == movingBlue.width) || (CheckCollisionRecs(baseDown[i], movingYellow) && baseDown[i].width == movingYellow.width) || (CheckCollisionRecs(baseDown[i], movingF) && baseDown[i].width == movingF.width) || (CheckCollisionRecs(baseDown[i], movingRedRight) && baseDown[i].width == movingRedRight.width) || (CheckCollisionRecs(baseDown[i], movingYellowRight) && baseDown[i].width == movingYellowRight.width) || (CheckCollisionRecs(baseDown[i], movingBlueRight) && baseDown[i].width == movingBlueRight.width) || (CheckCollisionRecs(baseDown[i], movingFRight) && baseDown[i].width == movingFRight.width))
        {
            filledDown[i] = 1;
            cout << "Down" << endl;
        }
        else{
            
            filledDown[i] = 0;
        }
    }
    for (int i = 0; i < baseDown.size(); i++)
    {
        if ((CheckCollisionRecs(baseUp[i], movingRed) && baseUp[i].width == movingRed.width) || (CheckCollisionRecs(baseUp[i], movingBlue) && baseUp[i].width == movingBlue.width) || (CheckCollisionRecs(baseUp[i], movingYellow) && baseUp[i].width == movingYellow.width) || (CheckCollisionRecs(baseUp[i], movingF) && baseUp[i].width == movingF.width) || (CheckCollisionRecs(baseUp[i], movingRedRight) && baseUp[i].width == movingRedRight.width) || (CheckCollisionRecs(baseUp[i], movingYellowRight) && baseUp[i].width == movingYellowRight.width) || (CheckCollisionRecs(baseUp[i], movingBlueRight) && baseUp[i].width == movingBlueRight.width) || (CheckCollisionRecs(baseUp[i], movingFRight) && baseUp[i].width == movingFRight.width))
        {
            filledUp[i] = 1;
            cout << "Up" << endl;
        }
        else{
            filledUp[i] = 0;
        }
    }
    

}
void checkTwoCardsFilled(vector<bool> &fDown, vector<bool> &fUp, int size)
{
    
    for (int i = fDown.size() - 1; i > size; i--)
    {
        
        int diff = fDown.size() - i;
        cout << diff;
        if(diff == 1)
        {
            if (fDown[i - 2] && fDown[i - 1])
            {
                
                fDown[i] = 0;
                
            }
            else
            {
                cout << "H";
                fDown[i] = 1;
            }

           
        }
        else if(diff > 1 && diff < 4)
        {
            if (fDown[i - 3] && fDown[i - 2])
            {
                fDown[i] = 0;

            }
            else
            {
                cout << "H";
                fDown[i] = 1;
            }

            
           

        }
        else if (diff > 3 && diff < 7)
        {
            if (fDown[i - 4] && fDown[i - 3])
            {
                fDown[i] = 0;

            }
            else
            {
                cout << "H";
                fDown[i] = 1;
            }

            

        }
        else if(diff > 6 && diff < 11)
        {
            if (fDown[i - 5] && fDown[i - 4])
            {
                fDown[i] = 0;

            }
            else
            {

                fDown[i] = 1;
            }

            
           
        }

        
    }
    for (int i = fDown.size() - 1; i > size; i--)
    {
        int diff = fDown.size() - i;

        if (diff == 1)
        {
            if (fUp[i - 2] && fUp[i - 1])
            {
                fUp[i] = 0;

            }
            else
            {

                fUp[i] = 1;
            }


        }
        else if (diff > 1 && diff < 4)
        {
            if (fUp[i - 3] && fUp[i - 2])
            {
                fUp[i] = 0;

            }
            else
            {

                fUp[i] = 1;
            }




        }
        else if (diff > 3 && diff < 7)
        {
            if (fUp[i - 4] && fUp[i - 3])
            {
                fUp[i] = 0;

            }
            else
            {

                fUp[i] = 1;
            }



        }
        else if (diff > 6 && diff < 11)
        {
            if (fUp[i - 5] && fUp[i - 4])
            {
                fUp[i] = 0;

            }
            else
            {

                fUp[i] = 1;
            }



        }


    }
}
Color playerLeftColor = GRAY;
Color playerRightColor = LIGHTGRAY;

void DropDown(Rectangle& moving, Vector2& mPoint, Vector2& posPoint, Texture2D& texture, vector<Rectangle>& downPy, vector<Rectangle>& upPy, bool& checkcoll, int startX, int startY, vector<bool> &fillDown,vector<bool> fillUp, bool checkTurn)
{

    

    int check = 0;
    if (CheckCollisionPointRec(mPoint, moving) && IsMouseButtonDown(MOUSE_BUTTON_LEFT) && checkTurn)
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
            if (ColorToInt(playerLeftColor) == -926365441)
            {
                
                for (int i = 0; i < fillDown.size(); i++)
                {
                    fillDown[i] = 1;
                }
            }
            else
            {
                
                for (int i = 0; i < fillUp.size(); i++)
                {
                    fillUp[i] = 1;
                }
            }

            for (int i = 0; i < downPy.size(); i++)
            {

                if (CheckCollisionPointRec(mPoint, downPy[i]))
                {
                    
                    check = 1;
                    if (fillDown[i])
                    {
                        check = 0;
                        cout << "KEKsss";
                        posPoint.x = startX;
                        posPoint.y = startY;
                        moving.x = startX;
                        moving.y = startY;
                        break;
                    }
                    posPoint.x = downPy[i].x;
                    posPoint.y = downPy[i].y;
                    texture.height = downPy[i].height;
                    texture.width = downPy[i].width;
                    moving.width = downPy[i].width;
                    moving.height = downPy[i].height;
                    moving.x = downPy[i].x;
                    moving.y = downPy[i].y;



                }
                else if (CheckCollisionPointRec(mPoint, upPy[i]))
                {
                    check = 1;
                    if (fillUp[i])
                    {
                        cout << "KEKsss!!!!!!";
                        check = 0;
                        posPoint.x = startX;
                        posPoint.y = startY;
                        moving.x = startX;
                        moving.y = startY;
                        break;
                    }
                    posPoint.x = upPy[i].x;
                    posPoint.y = upPy[i].y;
                    texture.height = upPy[i].height;
                    texture.width = upPy[i].width;
                    moving.width = upPy[i].width;
                    moving.height = upPy[i].height;
                    moving.x = upPy[i].x;
                    moving.y = upPy[i].y;



                }
                else if (check == 0)
                {
                    posPoint.x = startX;
                    posPoint.y = startY;
                    moving.x = startX;
                    moving.y = startY;
                }
            }
            if (check)
            {
                if (ColorToInt(playerLeftColor) == -926365441)
                {
                    playerLeftColor = GRAY;
                    playerRightColor = LIGHTGRAY;
                    
                }
                else
                {
                    playerLeftColor = LIGHTGRAY;
                    playerRightColor = GRAY;
                    
                }
            }
            checkcoll = 0;
        }
    }


}
vector<bool> checkForPlayerTurn(8);

void changePlayer(Color Leftp, Color  Rightp)
{
    if (ColorToInt(Leftp) != -926365441)
    {
        checkForPlayerTurn = { 1, 1, 1, 1, 0, 0, 0, 0 };
        
    }
    else if (ColorToInt(Rightp) != -926365441)
    {
        checkForPlayerTurn = { 0,0,0,0,1,1,1,1 };
        
    }


}
int main(void)
{
    const int screenWidth = 1800;
    const int screenHeight = 1000;
    
    bool checker = 1;
    bool checker2 = 1;
    vector<bool> filledDown;
    vector<bool> filledUp;
    srand(time(0));
    Rectangle hide = {0,0,screenWidth,screenHeight};
    string randomDirectories[6] = { "../images/or1.png", "../images/or0.png", "../images/and1.png", "../images/and0.png", "../images/xor1.png", "../images/xor0.png" };
    
   
    InitWindow(screenWidth, screenHeight, "Vis!00");
    Texture2D check_mark = LoadTexture("../images/Check.png");
    Texture2D red_card = LoadTexture(randomDirectories[rand() % 6].c_str());
    Texture2D blue_card = LoadTexture(randomDirectories[rand() % 6].c_str());
    Texture2D yellow_card = LoadTexture(randomDirectories[rand() % 6].c_str());
    Texture2D F_card = LoadTexture(randomDirectories[rand() % 6].c_str());
    Texture2D Five_card = LoadTexture(randomDirectories[rand() % 6].c_str());

    red_card.width = 80 , red_card.height = 100;
    blue_card.width = 80, blue_card.height = 100;
    yellow_card.width = 80, yellow_card.height = 100;
    F_card.width = 80, F_card.height = 100;
    Five_card.width = 80, Five_card.height = 100;


    Texture2D redRight_card = LoadTexture(randomDirectories[rand() % 6].c_str());
    Texture2D blueRight_card = LoadTexture(randomDirectories[rand() % 6].c_str());
    Texture2D yellowRight_card = LoadTexture(randomDirectories[rand() % 6].c_str());
    Texture2D FRight_card = LoadTexture(randomDirectories[rand() % 6].c_str());
    Texture2D FiveRight_card = LoadTexture(randomDirectories[rand() % 6].c_str());

    redRight_card.width = 80, redRight_card.height = 100;
    blueRight_card.width = 80, blueRight_card.height = 100;
    yellowRight_card.width = 80, yellowRight_card.height = 100;
    FRight_card.width = 80, FRight_card.height = 100;
    FiveRight_card.width = 80, FiveRight_card.height = 100;

    Rectangle colorsRecs[4];
    for (int i = 0; i < sizeof(colorsRecs) / sizeof(colorsRecs[0]); i++)
    {
        colorsRecs[i].height = 145 + 250;
        colorsRecs[i].width = 110 + 150;
        colorsRecs[i].x = 225 + i * (110 + 150 + /*this number shows the space between the cards ->*/100);
        colorsRecs[i].y = GetScreenHeight() / 2 - colorsRecs[i].height / 2;
    }

    Rectangle gameMenu[4];
    vector<Rectangle> BasePyramidDown;
    vector<Rectangle> BasePyramidUp;
    bool checkfirstcollisionRed = 0;
    bool checkfirstcollisionBlue = 0;
    bool checkfirstcollisionYellow = 0;
    bool checkfirstcollisionF = 0;
    bool checkfirstcollisionFive = 0;


    bool checkfirstcollisionRedRight = 0;
    bool checkfirstcollisionBlueRight = 0;
    bool checkfirstcollisionYellowRight = 0;
    bool checkfirstcollisionFRight = 0;
    bool checkfirstcollisionFiveRight = 0;

    Rectangle BaseCards = { 225, 420, 90, 105 };
    Vector2 mousePoint;
    Vector2 posImgRed = { 10,50 };
    Vector2 posImgBlue = { 10,200 };
    Vector2 posImgYellow = { 10,350 };
    Vector2 posImgF = { 10,500 };
    Vector2 posImgFive = { 10,650 };


    Vector2 posImgRedRight = { 1600,50 };
    Vector2 posImgBlueRight = { 1600,200 };
    Vector2 posImgYellowRight = { 1600,350 };
    Vector2 posImgFRight = { 1600,500 };
    Vector2 posImgFiveRight = { 1600,650 };

    Rectangle movingBoxRed = { posImgRed.x, posImgRed.y, red_card.width, red_card.height };
    Rectangle movingBoxBlue = { posImgBlue.x, posImgBlue.y, blue_card.width, blue_card.height };
    Rectangle movingBoxYellow = { posImgYellow.x, posImgYellow.y, yellow_card.width, yellow_card.height };
    Rectangle movingBoxF = { posImgF.x, posImgF.y, F_card.width, F_card.height };
    Rectangle movingBoxFive = { posImgFive.x, posImgFive.y, Five_card.width, Five_card.height };


    Rectangle movingBoxRedRight = { posImgRedRight.x, posImgRedRight.y, red_card.width, red_card.height };
    Rectangle movingBoxBlueRight = { posImgBlueRight.x, posImgBlueRight.y, blue_card.width, blue_card.height };
    Rectangle movingBoxYellowRight = { posImgYellowRight.x, posImgYellowRight.y, yellow_card.width, yellow_card.height };
    Rectangle movingBoxFRight = { posImgFRight.x, posImgFRight.y, FRight_card.width, FRight_card.height };
    Rectangle movingBoxFiveRight = { posImgFiveRight.x, posImgFiveRight.y, FiveRight_card.width, FiveRight_card.height };

    Rectangle LeftPlayer = {0, 0, 325, 1000};
    Rectangle RightPlayer = {1475, 0, 325, 1000};

    
    
    bool zero = 0, one = 0, two = 0, three = 0;
    bool menuZero = 0, menuOne = 0, menuTwo = 0, menuThree = 0;
    bool ftAr[6];
    for (int i = 0; i < sizeof ftAr / sizeof ftAr[0]; i++)
    {
        ftAr[i] = rand() % 2;
    }
    SetTargetFPS(240);
    
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
                BasePyramidDown.resize(3);
                BasePyramidUp.resize(3);
                filledUp.resize(3);
                filledDown.resize(3);
                

            }
            else if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && CheckCollisionPointRec(mousePoint, colorsRecs[1]) && checker2)
            {

                one = true;
                zero = 0, two = 0, three = 0;
                BasePyramidDown.resize(6);
                BasePyramidUp.resize(6);
                filledUp.resize(6);
                filledDown.resize(6);
                

            }
            else if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && CheckCollisionPointRec(mousePoint, colorsRecs[2]) && checker2)
            {

                two = true;
                one = 0, zero = 0, three = 0;
                BasePyramidDown.resize(10);
                BasePyramidUp.resize(10);
                filledUp.resize(10);
                filledDown.resize(10);
            }
            else if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && CheckCollisionPointRec(mousePoint, colorsRecs[3]) && checker2)
            {

                three = true;
                BasePyramidDown.resize(15);
                BasePyramidUp.resize(15);
                filledUp.resize(15);
                filledDown.resize(15);
                one = 0, two = 0, zero = 0;

            }
            SetupDown(BasePyramidDown);
            SetupUp(BasePyramidUp);

            if (zero)
            {
                
                checker2 = 0;
                DrawRectangleRec(hide, LIGHTGRAY);
                
                DrawRectangleRec(movingBoxRed, LIGHTGRAY);
                DrawRectangleRec(movingBoxBlue, LIGHTGRAY);
                DrawRectangleRec(movingBoxYellow, LIGHTGRAY);
                DrawRectangleRec(movingBoxF, LIGHTGRAY);

                DrawRectangleRec(movingBoxBlueRight, LIGHTGRAY);
                DrawRectangleRec(movingBoxYellowRight, LIGHTGRAY);
                DrawRectangleRec(movingBoxRedRight, LIGHTGRAY);
                DrawRectangleRec(movingBoxFRight, LIGHTGRAY);
                
                DrawRectangleRec(LeftPlayer, playerLeftColor);
                DrawRectangleRec(RightPlayer, playerRightColor);
                
                
                changePlayer(playerLeftColor, playerRightColor);
                
                


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
                 
                /*Draw Blue cudes ->*/for (int i = 0; i < BasePyramidDown.size(); i++)
                {
                    DrawRectangleLinesEx(BasePyramidDown[i], 10, BLACK);
                }

                for (int i = 0; i < BasePyramidUp.size(); i++)
                {
                    DrawRectangleLinesEx(BasePyramidUp[i], 10, BLACK);
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
                //check if filled

                
                Filled(BasePyramidDown, BasePyramidUp,  movingBoxRed, movingBoxBlue, movingBoxYellow, movingBoxF, movingBoxRedRight, movingBoxBlueRight, movingBoxYellowRight, movingBoxFRight, filledDown, filledUp);
                //Check if two are filled and then to put another
                checkTwoCardsFilled(filledDown, filledUp, 1);



                if (checkfirstcollisionBlue == 0 && checkfirstcollisionRed == 0 && checkfirstcollisionYellow == 0 && checkfirstcollisionF == 0 && checkfirstcollisionBlueRight == 0 && checkfirstcollisionRedRight == 0 && checkfirstcollisionYellowRight == 0 && checkfirstcollisionFRight == 0 && checkfirstcollisionFiveRight == 0 && checkfirstcollisionFive == 0)
                {
                    DropDown(movingBoxRed, mousePoint, posImgRed, red_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionRed, 10, 50, filledDown, filledUp, checkForPlayerTurn[0]);
                    DropDown(movingBoxYellow, mousePoint, posImgYellow, yellow_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionYellow, 10, 350, filledDown, filledUp, checkForPlayerTurn[1]);
                    DropDown(movingBoxBlue, mousePoint, posImgBlue, blue_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionBlue, 10, 200, filledDown, filledUp, checkForPlayerTurn[2]);
                    DropDown(movingBoxF, mousePoint, posImgF, F_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionF, 10, 500, filledDown, filledUp, checkForPlayerTurn[3]);
                    DropDown(movingBoxFive, mousePoint, posImgFive, Five_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionFive, 10, 650, filledDown, filledUp, checkForPlayerTurn[3]);



                    DropDown(movingBoxRedRight, mousePoint, posImgRedRight, redRight_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionRedRight, 1600, 50, filledDown, filledUp, checkForPlayerTurn[4]);
                    DropDown(movingBoxYellowRight, mousePoint, posImgYellowRight, yellowRight_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionYellowRight, 1600, 350, filledDown, filledUp, checkForPlayerTurn[5]);
                    DropDown(movingBoxBlueRight, mousePoint, posImgBlueRight, blueRight_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionBlueRight, 1600, 200, filledDown, filledUp, checkForPlayerTurn[6]);
                    DropDown(movingBoxFRight, mousePoint, posImgFRight, FRight_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionFRight, 1600, 500, filledDown, filledUp, checkForPlayerTurn[7]);
                    DropDown(movingBoxFiveRight, mousePoint, posImgFiveRight, FiveRight_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionFiveRight, 1600, 650, filledDown, filledUp, checkForPlayerTurn[7]);


                }
                if (checkfirstcollisionBlue == 0 && checkfirstcollisionRed && checkfirstcollisionYellow == 0 && checkfirstcollisionF == 0 && checkfirstcollisionBlueRight == 0 && checkfirstcollisionRedRight == 0 && checkfirstcollisionYellowRight == 0 && checkfirstcollisionFRight == 0 && checkfirstcollisionFiveRight == 0 && checkfirstcollisionFive == 0)
                {
                    DropDown(movingBoxRed, mousePoint, posImgRed, red_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionRed, 10, 50, filledDown, filledUp, checkForPlayerTurn[0]);



                }
                else if (checkfirstcollisionBlue == 0 && checkfirstcollisionRed == 0 && checkfirstcollisionYellow && checkfirstcollisionF == 0 && checkfirstcollisionBlueRight == 0 && checkfirstcollisionRedRight == 0 && checkfirstcollisionYellowRight == 0 && checkfirstcollisionFRight == 0 && checkfirstcollisionFiveRight == 0 && checkfirstcollisionFive == 0)
                {


                    DropDown(movingBoxYellow, mousePoint, posImgYellow, yellow_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionYellow, 10, 350, filledDown, filledUp, checkForPlayerTurn[1]);

                }
                else if (checkfirstcollisionBlue && checkfirstcollisionRed == 0 && checkfirstcollisionYellow == 0 && checkfirstcollisionF == 0 && checkfirstcollisionBlueRight == 0 && checkfirstcollisionRedRight == 0 && checkfirstcollisionYellowRight == 0 && checkfirstcollisionFRight == 0 && checkfirstcollisionFiveRight == 0 && checkfirstcollisionFive == 0)
                {

                    DropDown(movingBoxBlue, mousePoint, posImgBlue, blue_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionBlue, 10, 200, filledDown, filledUp, checkForPlayerTurn[2]);


                }

                else if (checkfirstcollisionBlue == 0 && checkfirstcollisionRed == 0 && checkfirstcollisionYellow == 0 && checkfirstcollisionF == 0 && checkfirstcollisionBlueRight && checkfirstcollisionRedRight == 0 && checkfirstcollisionYellowRight == 0 && checkfirstcollisionFRight == 0 && checkfirstcollisionFiveRight == 0 && checkfirstcollisionFive == 0)
                {

                    DropDown(movingBoxBlueRight, mousePoint, posImgBlueRight, blueRight_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionBlueRight, 1600, 200, filledDown, filledUp, checkForPlayerTurn[4]);


                }
                else if (checkfirstcollisionBlue == 0 && checkfirstcollisionRed == 0 && checkfirstcollisionYellow == 0 && checkfirstcollisionF == 0 && checkfirstcollisionBlueRight == 0 && checkfirstcollisionRedRight == 0 && checkfirstcollisionYellowRight && checkfirstcollisionFRight == 0 && checkfirstcollisionFiveRight == 0 && checkfirstcollisionFive == 0)
                {

                    DropDown(movingBoxYellowRight, mousePoint, posImgYellowRight, yellowRight_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionYellowRight, 1600, 350, filledDown, filledUp, checkForPlayerTurn[5]);


                }
                else if (checkfirstcollisionBlue == 0 && checkfirstcollisionRed == 0 && checkfirstcollisionYellow == 0 && checkfirstcollisionF == 0 && checkfirstcollisionBlueRight == 0 && checkfirstcollisionRedRight && checkfirstcollisionYellowRight == 0 && checkfirstcollisionFRight == 0 && checkfirstcollisionFiveRight == 0 && checkfirstcollisionFive == 0)
                {

                    DropDown(movingBoxRedRight, mousePoint, posImgRedRight, redRight_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionRedRight, 1600, 50, filledDown, filledUp, checkForPlayerTurn[6]);


                }
                else if (checkfirstcollisionBlue == 0 && checkfirstcollisionRed == 0 && checkfirstcollisionYellow == 0 && checkfirstcollisionF && checkfirstcollisionBlueRight == 0 && checkfirstcollisionRedRight == 0 && checkfirstcollisionYellowRight == 0 && checkfirstcollisionFRight == 0 && checkfirstcollisionFiveRight == 0 && checkfirstcollisionFive == 0)
                {

                    DropDown(movingBoxF, mousePoint, posImgF, F_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionF, 10, 500, filledDown, filledUp, checkForPlayerTurn[3]);


                }
                else if (checkfirstcollisionBlue == 0 && checkfirstcollisionRed == 0 && checkfirstcollisionYellow == 0 && checkfirstcollisionF == 0 && checkfirstcollisionBlueRight == 0 && checkfirstcollisionRedRight == 0 && checkfirstcollisionYellowRight == 0 && checkfirstcollisionFRight && checkfirstcollisionFiveRight == 0 && checkfirstcollisionFive == 0)
                {

                    DropDown(movingBoxFRight, mousePoint, posImgFRight, FRight_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionFRight, 1600, 500, filledDown, filledUp, checkForPlayerTurn[7]);


                }

                else if (checkfirstcollisionBlue == 0 && checkfirstcollisionRed == 0 && checkfirstcollisionYellow == 0 && checkfirstcollisionF == 0 && checkfirstcollisionBlueRight == 0 && checkfirstcollisionRedRight == 0 && checkfirstcollisionYellowRight == 0 && checkfirstcollisionFRight == 0 && checkfirstcollisionFiveRight == 0 && checkfirstcollisionFive)
                {

                    DropDown(movingBoxFive, mousePoint, posImgFive, Five_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionFive, 10, 650, filledDown, filledUp, checkForPlayerTurn[3]);


                }
                else if (checkfirstcollisionBlue == 0 && checkfirstcollisionRed == 0 && checkfirstcollisionYellow == 0 && checkfirstcollisionF == 0 && checkfirstcollisionBlueRight == 0 && checkfirstcollisionRedRight == 0 && checkfirstcollisionYellowRight == 0 && checkfirstcollisionFRight == 0 && checkfirstcollisionFiveRight && checkfirstcollisionFive == 0)
                {

                    DropDown(movingBoxFiveRight, mousePoint, posImgFiveRight, FiveRight_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionFiveRight, 1600, 650, filledDown, filledUp, checkForPlayerTurn[7]);


                }
                DrawTexture(red_card, posImgRed.x, posImgRed.y, WHITE);
                DrawTexture(blue_card, posImgBlue.x, posImgBlue.y, WHITE);
                DrawTexture(yellow_card, posImgYellow.x, posImgYellow.y, WHITE);
                DrawTexture(F_card, posImgF.x, posImgF.y, WHITE);
                DrawTexture(Five_card, posImgFive.x, posImgFive.y, WHITE);

                DrawTexture(redRight_card, posImgRedRight.x, posImgRedRight.y, WHITE);
                DrawTexture(blueRight_card, posImgBlueRight.x, posImgBlueRight.y, WHITE);
                DrawTexture(yellowRight_card, posImgYellowRight.x, posImgYellowRight.y, WHITE);
                DrawTexture(FRight_card, posImgFRight.x, posImgFRight.y, WHITE);
                DrawTexture(FiveRight_card, posImgFiveRight.x, posImgFiveRight.y, WHITE);

                

            }
           // globalcout = 0;
            if (one)
            {
                changePlayer(playerLeftColor, playerRightColor);
                              
                
                checker2 = 0;
                DrawRectangleRec(hide, LIGHTGRAY);
               
                DrawRectangleRec(LeftPlayer, playerLeftColor);
                DrawRectangleRec(RightPlayer, playerRightColor);

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

                /*Draw Blue cudes ->*/for (int i = 0; i < BasePyramidDown.size(); i++)
                {
                    DrawRectangleLinesEx(BasePyramidDown[i], 10, BLACK);
                }

                for (int i = 0; i < BasePyramidUp.size(); i++)
                {
                    DrawRectangleLinesEx(BasePyramidUp[i], 10, BLACK);
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

                Filled(BasePyramidDown, BasePyramidUp, movingBoxRed, movingBoxBlue, movingBoxYellow, movingBoxF, movingBoxRedRight, movingBoxBlueRight, movingBoxYellowRight, movingBoxFRight, filledDown, filledUp);

                ///Check if two are filled and then to put another
                checkTwoCardsFilled(filledDown, filledUp, 2);


                if (checkfirstcollisionBlue == 0 && checkfirstcollisionRed == 0 && checkfirstcollisionYellow == 0 && checkfirstcollisionF == 0 && checkfirstcollisionBlueRight == 0 && checkfirstcollisionRedRight == 0 && checkfirstcollisionYellowRight == 0 && checkfirstcollisionFRight == 0 && checkfirstcollisionFiveRight == 0 && checkfirstcollisionFive == 0)
                {
                    DropDown(movingBoxRed, mousePoint, posImgRed, red_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionRed, 10, 50, filledDown, filledUp, checkForPlayerTurn[0]);
                    DropDown(movingBoxYellow, mousePoint, posImgYellow, yellow_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionYellow, 10, 350, filledDown, filledUp, checkForPlayerTurn[1]);
                    DropDown(movingBoxBlue, mousePoint, posImgBlue, blue_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionBlue, 10, 200, filledDown, filledUp, checkForPlayerTurn[2]);
                    DropDown(movingBoxF, mousePoint, posImgF, F_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionF, 10, 500, filledDown, filledUp, checkForPlayerTurn[3]);
                    DropDown(movingBoxFive, mousePoint, posImgFive, Five_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionFive, 10, 650, filledDown, filledUp, checkForPlayerTurn[3]);



                    DropDown(movingBoxRedRight, mousePoint, posImgRedRight, redRight_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionRedRight, 1600, 50, filledDown, filledUp, checkForPlayerTurn[4]);
                    DropDown(movingBoxYellowRight, mousePoint, posImgYellowRight, yellowRight_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionYellowRight, 1600, 350, filledDown, filledUp, checkForPlayerTurn[5]);
                    DropDown(movingBoxBlueRight, mousePoint, posImgBlueRight, blueRight_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionBlueRight, 1600, 200, filledDown, filledUp, checkForPlayerTurn[6]);
                    DropDown(movingBoxFRight, mousePoint, posImgFRight, FRight_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionFRight, 1600, 500, filledDown, filledUp, checkForPlayerTurn[7]);
                    DropDown(movingBoxFiveRight, mousePoint, posImgFiveRight, FiveRight_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionFiveRight, 1600, 650, filledDown, filledUp, checkForPlayerTurn[7]);


                }
                if (checkfirstcollisionBlue == 0 && checkfirstcollisionRed && checkfirstcollisionYellow == 0 && checkfirstcollisionF == 0 && checkfirstcollisionBlueRight == 0 && checkfirstcollisionRedRight == 0 && checkfirstcollisionYellowRight == 0 && checkfirstcollisionFRight == 0 && checkfirstcollisionFiveRight == 0 && checkfirstcollisionFive == 0)
                {
                    DropDown(movingBoxRed, mousePoint, posImgRed, red_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionRed, 10, 50, filledDown, filledUp, checkForPlayerTurn[0]);



                }
                else if (checkfirstcollisionBlue == 0 && checkfirstcollisionRed == 0 && checkfirstcollisionYellow && checkfirstcollisionF == 0 && checkfirstcollisionBlueRight == 0 && checkfirstcollisionRedRight == 0 && checkfirstcollisionYellowRight == 0 && checkfirstcollisionFRight == 0 && checkfirstcollisionFiveRight == 0 && checkfirstcollisionFive == 0)
                {


                    DropDown(movingBoxYellow, mousePoint, posImgYellow, yellow_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionYellow, 10, 350, filledDown, filledUp, checkForPlayerTurn[1]);

                }
                else if (checkfirstcollisionBlue && checkfirstcollisionRed == 0 && checkfirstcollisionYellow == 0 && checkfirstcollisionF == 0 && checkfirstcollisionBlueRight == 0 && checkfirstcollisionRedRight == 0 && checkfirstcollisionYellowRight == 0 && checkfirstcollisionFRight == 0 && checkfirstcollisionFiveRight == 0 && checkfirstcollisionFive == 0)
                {

                    DropDown(movingBoxBlue, mousePoint, posImgBlue, blue_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionBlue, 10, 200, filledDown, filledUp, checkForPlayerTurn[2]);


                }

                else if (checkfirstcollisionBlue == 0 && checkfirstcollisionRed == 0 && checkfirstcollisionYellow == 0 && checkfirstcollisionF == 0 && checkfirstcollisionBlueRight && checkfirstcollisionRedRight == 0 && checkfirstcollisionYellowRight == 0 && checkfirstcollisionFRight == 0 && checkfirstcollisionFiveRight == 0 && checkfirstcollisionFive == 0)
                {

                    DropDown(movingBoxBlueRight, mousePoint, posImgBlueRight, blueRight_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionBlueRight, 1600, 200, filledDown, filledUp, checkForPlayerTurn[4]);


                }
                else if (checkfirstcollisionBlue == 0 && checkfirstcollisionRed == 0 && checkfirstcollisionYellow == 0 && checkfirstcollisionF == 0 && checkfirstcollisionBlueRight == 0 && checkfirstcollisionRedRight == 0 && checkfirstcollisionYellowRight && checkfirstcollisionFRight == 0 && checkfirstcollisionFiveRight == 0 && checkfirstcollisionFive == 0)
                {

                    DropDown(movingBoxYellowRight, mousePoint, posImgYellowRight, yellowRight_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionYellowRight, 1600, 350, filledDown, filledUp, checkForPlayerTurn[5]);


                }
                else if (checkfirstcollisionBlue == 0 && checkfirstcollisionRed == 0 && checkfirstcollisionYellow == 0 && checkfirstcollisionF == 0 && checkfirstcollisionBlueRight == 0 && checkfirstcollisionRedRight && checkfirstcollisionYellowRight == 0 && checkfirstcollisionFRight == 0 && checkfirstcollisionFiveRight == 0 && checkfirstcollisionFive == 0)
                {

                    DropDown(movingBoxRedRight, mousePoint, posImgRedRight, redRight_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionRedRight, 1600, 50, filledDown, filledUp, checkForPlayerTurn[6]);


                }
                else if (checkfirstcollisionBlue == 0 && checkfirstcollisionRed == 0 && checkfirstcollisionYellow == 0 && checkfirstcollisionF && checkfirstcollisionBlueRight == 0 && checkfirstcollisionRedRight == 0 && checkfirstcollisionYellowRight == 0 && checkfirstcollisionFRight == 0 && checkfirstcollisionFiveRight == 0 && checkfirstcollisionFive == 0)
                {

                    DropDown(movingBoxF, mousePoint, posImgF, F_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionF, 10, 500, filledDown, filledUp, checkForPlayerTurn[3]);


                }
                else if (checkfirstcollisionBlue == 0 && checkfirstcollisionRed == 0 && checkfirstcollisionYellow == 0 && checkfirstcollisionF == 0 && checkfirstcollisionBlueRight == 0 && checkfirstcollisionRedRight == 0 && checkfirstcollisionYellowRight == 0 && checkfirstcollisionFRight && checkfirstcollisionFiveRight == 0 && checkfirstcollisionFive == 0)
                {

                    DropDown(movingBoxFRight, mousePoint, posImgFRight, FRight_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionFRight, 1600, 500, filledDown, filledUp, checkForPlayerTurn[7]);


                }

                else if (checkfirstcollisionBlue == 0 && checkfirstcollisionRed == 0 && checkfirstcollisionYellow == 0 && checkfirstcollisionF == 0 && checkfirstcollisionBlueRight == 0 && checkfirstcollisionRedRight == 0 && checkfirstcollisionYellowRight == 0 && checkfirstcollisionFRight == 0 && checkfirstcollisionFiveRight == 0 && checkfirstcollisionFive)
                {

                    DropDown(movingBoxFive, mousePoint, posImgFive, Five_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionFive, 10, 650, filledDown, filledUp, checkForPlayerTurn[3]);


                }
                else if (checkfirstcollisionBlue == 0 && checkfirstcollisionRed == 0 && checkfirstcollisionYellow == 0 && checkfirstcollisionF == 0 && checkfirstcollisionBlueRight == 0 && checkfirstcollisionRedRight == 0 && checkfirstcollisionYellowRight == 0 && checkfirstcollisionFRight == 0 && checkfirstcollisionFiveRight && checkfirstcollisionFive == 0)
                {

                    DropDown(movingBoxFiveRight, mousePoint, posImgFiveRight, FiveRight_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionFiveRight, 1600, 650, filledDown, filledUp, checkForPlayerTurn[7]);


                }
                DrawTexture(red_card, posImgRed.x, posImgRed.y, WHITE);
                DrawTexture(blue_card, posImgBlue.x, posImgBlue.y, WHITE);
                DrawTexture(yellow_card, posImgYellow.x, posImgYellow.y, WHITE);
                DrawTexture(F_card, posImgF.x, posImgF.y, WHITE);
                DrawTexture(Five_card, posImgFive.x, posImgFive.y, WHITE);

                DrawTexture(redRight_card, posImgRedRight.x, posImgRedRight.y, WHITE);
                DrawTexture(blueRight_card, posImgBlueRight.x, posImgBlueRight.y, WHITE);
                DrawTexture(yellowRight_card, posImgYellowRight.x, posImgYellowRight.y, WHITE);
                DrawTexture(FRight_card, posImgFRight.x, posImgFRight.y, WHITE);
                DrawTexture(FiveRight_card, posImgFiveRight.x, posImgFiveRight.y, WHITE);



            }
            //globalcout = 0;
            if (two)
            {
                
                    changePlayer(playerLeftColor, playerRightColor);
                             
                checker2 = 0;
                DrawRectangleRec(hide, LIGHTGRAY);

                DrawRectangleRec(LeftPlayer, playerLeftColor);
                DrawRectangleRec(RightPlayer, playerRightColor);

                DrawRectangle((int)BaseCards.x + 100, (int)BaseCards.y - 450, (int)BaseCards.width - 85, (int)BaseCards.height + 1200, BLACK);
                DrawRectangle((int)BaseCards.x + 1250, (int)BaseCards.y - 450, (int)BaseCards.width - 85, (int)BaseCards.height + 1200, BLACK);

                DrawRectangle((int)BaseCards.x + 219, (int)BaseCards.y + 10, (int)BaseCards.width + 12.5, (int)BaseCards.height + 12.5, BLACK);
                DrawRectangle((int)BaseCards.x + 419, (int)BaseCards.y + 10, (int)BaseCards.width + 12.5, (int)BaseCards.height + 12.5, BLACK);
                DrawRectangle((int)BaseCards.x + 619, (int)BaseCards.y + 10, (int)BaseCards.width + 12.5, (int)BaseCards.height + 12.5, BLACK);
                DrawRectangle((int)BaseCards.x + 819, (int)BaseCards.y + 10, (int)BaseCards.width + 12.5, (int)BaseCards.height + 12.5, BLACK);
                DrawRectangle((int)BaseCards.x + 1019, (int)BaseCards.y + 10, (int)BaseCards.width + 12.5, (int)BaseCards.height + 12.5, BLACK);

                DrawRectangle((int)BaseCards.x + 225, (int)BaseCards.y + 15, (int)BaseCards.width, (int)BaseCards.height, DARKGRAY);
                DrawRectangle((int)BaseCards.x + 425, (int)BaseCards.y + 15, (int)BaseCards.width, (int)BaseCards.height, DARKGRAY);
                DrawRectangle((int)BaseCards.x + 625, (int)BaseCards.y + 15, (int)BaseCards.width, (int)BaseCards.height, DARKGRAY);
                DrawRectangle((int)BaseCards.x + 825, (int)BaseCards.y + 15, (int)BaseCards.width, (int)BaseCards.height, DARKGRAY);
                DrawRectangle((int)BaseCards.x + 1025, (int)BaseCards.y + 15, (int)BaseCards.width, (int)BaseCards.height, DARKGRAY);

                DrawRectangle((int)BaseCards.x + 225, (int)BaseCards.y + 70, (int)BaseCards.width, (int)BaseCards.height - 102.5, WHITE);
                DrawRectangle((int)BaseCards.x + 425, (int)BaseCards.y + 70, (int)BaseCards.width, (int)BaseCards.height - 102.5, WHITE);
                DrawRectangle((int)BaseCards.x + 625, (int)BaseCards.y + 70, (int)BaseCards.width, (int)BaseCards.height - 102.5, WHITE);
                DrawRectangle((int)BaseCards.x + 825, (int)BaseCards.y + 70, (int)BaseCards.width, (int)BaseCards.height - 102.5, WHITE);
                DrawRectangle((int)BaseCards.x + 1025, (int)BaseCards.y + 70, (int)BaseCards.width, (int)BaseCards.height - 102.5, WHITE);

                /*Draw Blue cudes ->*/for (int i = 0; i < BasePyramidDown.size(); i++)
                {
                    DrawRectangleLinesEx(BasePyramidDown[i], 10, BLACK);
                }


                for (int i = 0; i < BasePyramidUp.size(); i++)
                {
                    DrawRectangleLinesEx(BasePyramidUp[i], 10, BLACK);
                }


                if (ftAr[0])
                {
                    DrawText(to_string(ftAr[0]).c_str(), 492.5, 440, 50, BLACK);
                    DrawText(to_string(!ftAr[0]).c_str(), 485, 495, 50, BLACK);
                }
                else
                {
                    DrawText(to_string(ftAr[0]).c_str(), 485, 440, 50, BLACK);
                    DrawText(to_string(!ftAr[0]).c_str(), 492.5, 495, 50, BLACK);
                }

                if (ftAr[1])
                {
                    DrawText(to_string(ftAr[1]).c_str(), 692.5, 440, 50, BLACK);
                    DrawText(to_string(!ftAr[1]).c_str(), 685, 495, 50, BLACK);
                }
                else
                {
                    DrawText(to_string(ftAr[1]).c_str(), 685, 440, 50, BLACK);
                    DrawText(to_string(!ftAr[1]).c_str(), 692.5, 495, 50, BLACK);
                }

                if (ftAr[2])
                {
                    DrawText(to_string(ftAr[2]).c_str(), 892.5, 440, 50, BLACK);
                    DrawText(to_string(!ftAr[2]).c_str(), 885, 495, 50, BLACK);
                }
                else
                {
                    DrawText(to_string(ftAr[2]).c_str(), 885, 440, 50, BLACK);
                    DrawText(to_string(!ftAr[2]).c_str(), 892.5, 495, 50, BLACK);
                }

                if (ftAr[3])
                {
                    DrawText(to_string(ftAr[3]).c_str(), 1092.5, 440, 50, BLACK);
                    DrawText(to_string(!ftAr[3]).c_str(), 1085, 495, 50, BLACK);
                }
                else
                {
                    DrawText(to_string(ftAr[3]).c_str(), 1085, 440, 50, BLACK);
                    DrawText(to_string(!ftAr[3]).c_str(), 1092.5, 495, 50, BLACK);
                }

                if (ftAr[4])
                {
                    DrawText(to_string(ftAr[4]).c_str(), 1292.5, 440, 50, BLACK);
                    DrawText(to_string(!ftAr[4]).c_str(), 1285, 495, 50, BLACK);
                }
                else
                {
                    DrawText(to_string(ftAr[4]).c_str(), 1285, 440, 50, BLACK);
                    DrawText(to_string(!ftAr[4]).c_str(), 1292.5, 495, 50, BLACK);
                }

                Filled(BasePyramidDown, BasePyramidUp, movingBoxRed, movingBoxBlue, movingBoxYellow, movingBoxF, movingBoxRedRight, movingBoxBlueRight, movingBoxYellowRight, movingBoxFRight, filledDown, filledUp);

                //Check if two are filled and then to put another
                checkTwoCardsFilled(filledDown, filledUp, 3);


                if (checkfirstcollisionBlue == 0 && checkfirstcollisionRed == 0 && checkfirstcollisionYellow == 0 && checkfirstcollisionF == 0 && checkfirstcollisionBlueRight == 0 && checkfirstcollisionRedRight == 0 && checkfirstcollisionYellowRight == 0 && checkfirstcollisionFRight == 0 && checkfirstcollisionFiveRight == 0 && checkfirstcollisionFive == 0)
                {
                    DropDown(movingBoxRed, mousePoint, posImgRed, red_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionRed, 10, 50, filledDown, filledUp, checkForPlayerTurn[0]);
                    DropDown(movingBoxYellow, mousePoint, posImgYellow, yellow_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionYellow, 10, 350, filledDown, filledUp, checkForPlayerTurn[1]);
                    DropDown(movingBoxBlue, mousePoint, posImgBlue, blue_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionBlue, 10, 200, filledDown, filledUp, checkForPlayerTurn[2]);
                    DropDown(movingBoxF, mousePoint, posImgF, F_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionF, 10, 500, filledDown, filledUp, checkForPlayerTurn[3]);
                    DropDown(movingBoxFive, mousePoint, posImgFive, Five_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionFive, 10, 650, filledDown, filledUp, checkForPlayerTurn[3]);



                    DropDown(movingBoxRedRight, mousePoint, posImgRedRight, redRight_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionRedRight, 1600, 50, filledDown, filledUp, checkForPlayerTurn[4]);
                    DropDown(movingBoxYellowRight, mousePoint, posImgYellowRight, yellowRight_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionYellowRight, 1600, 350, filledDown, filledUp, checkForPlayerTurn[5]);
                    DropDown(movingBoxBlueRight, mousePoint, posImgBlueRight, blueRight_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionBlueRight, 1600, 200, filledDown, filledUp, checkForPlayerTurn[6]);
                    DropDown(movingBoxFRight, mousePoint, posImgFRight, FRight_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionFRight, 1600, 500, filledDown, filledUp, checkForPlayerTurn[7]);
                    DropDown(movingBoxFiveRight, mousePoint, posImgFiveRight, FiveRight_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionFiveRight, 1600, 650, filledDown, filledUp, checkForPlayerTurn[7]);


                }
                if (checkfirstcollisionBlue == 0 && checkfirstcollisionRed && checkfirstcollisionYellow == 0 && checkfirstcollisionF == 0 && checkfirstcollisionBlueRight == 0 && checkfirstcollisionRedRight == 0 && checkfirstcollisionYellowRight == 0 && checkfirstcollisionFRight == 0 && checkfirstcollisionFiveRight == 0 && checkfirstcollisionFive == 0)
                {
                    DropDown(movingBoxRed, mousePoint, posImgRed, red_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionRed, 10, 50, filledDown, filledUp, checkForPlayerTurn[0]);



                }
                else if (checkfirstcollisionBlue == 0 && checkfirstcollisionRed == 0 && checkfirstcollisionYellow && checkfirstcollisionF == 0 && checkfirstcollisionBlueRight == 0 && checkfirstcollisionRedRight == 0 && checkfirstcollisionYellowRight == 0 && checkfirstcollisionFRight == 0 && checkfirstcollisionFiveRight == 0 && checkfirstcollisionFive == 0)
                {


                    DropDown(movingBoxYellow, mousePoint, posImgYellow, yellow_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionYellow, 10, 350, filledDown, filledUp, checkForPlayerTurn[1]);

                }
                else if (checkfirstcollisionBlue && checkfirstcollisionRed == 0 && checkfirstcollisionYellow == 0 && checkfirstcollisionF == 0 && checkfirstcollisionBlueRight == 0 && checkfirstcollisionRedRight == 0 && checkfirstcollisionYellowRight == 0 && checkfirstcollisionFRight == 0 && checkfirstcollisionFiveRight == 0 && checkfirstcollisionFive == 0)
                {

                    DropDown(movingBoxBlue, mousePoint, posImgBlue, blue_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionBlue, 10, 200, filledDown, filledUp, checkForPlayerTurn[2]);


                }

                else if (checkfirstcollisionBlue == 0 && checkfirstcollisionRed == 0 && checkfirstcollisionYellow == 0 && checkfirstcollisionF == 0 && checkfirstcollisionBlueRight && checkfirstcollisionRedRight == 0 && checkfirstcollisionYellowRight == 0 && checkfirstcollisionFRight == 0 && checkfirstcollisionFiveRight == 0 && checkfirstcollisionFive == 0)
                {

                    DropDown(movingBoxBlueRight, mousePoint, posImgBlueRight, blueRight_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionBlueRight, 1600, 200, filledDown, filledUp, checkForPlayerTurn[4]);


                }
                else if (checkfirstcollisionBlue == 0 && checkfirstcollisionRed == 0 && checkfirstcollisionYellow == 0 && checkfirstcollisionF == 0 && checkfirstcollisionBlueRight == 0 && checkfirstcollisionRedRight == 0 && checkfirstcollisionYellowRight && checkfirstcollisionFRight == 0 && checkfirstcollisionFiveRight == 0 && checkfirstcollisionFive == 0)
                {

                    DropDown(movingBoxYellowRight, mousePoint, posImgYellowRight, yellowRight_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionYellowRight, 1600, 350, filledDown, filledUp, checkForPlayerTurn[5]);


                }
                else if (checkfirstcollisionBlue == 0 && checkfirstcollisionRed == 0 && checkfirstcollisionYellow == 0 && checkfirstcollisionF == 0 && checkfirstcollisionBlueRight == 0 && checkfirstcollisionRedRight && checkfirstcollisionYellowRight == 0 && checkfirstcollisionFRight == 0 && checkfirstcollisionFiveRight == 0 && checkfirstcollisionFive == 0)
                {

                    DropDown(movingBoxRedRight, mousePoint, posImgRedRight, redRight_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionRedRight, 1600, 50, filledDown, filledUp, checkForPlayerTurn[6]);


                }
                else if (checkfirstcollisionBlue == 0 && checkfirstcollisionRed == 0 && checkfirstcollisionYellow == 0 && checkfirstcollisionF && checkfirstcollisionBlueRight == 0 && checkfirstcollisionRedRight == 0 && checkfirstcollisionYellowRight == 0 && checkfirstcollisionFRight == 0 && checkfirstcollisionFiveRight == 0 && checkfirstcollisionFive == 0)
                {

                    DropDown(movingBoxF, mousePoint, posImgF, F_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionF, 10, 500, filledDown, filledUp, checkForPlayerTurn[3]);


                }
                else if (checkfirstcollisionBlue == 0 && checkfirstcollisionRed == 0 && checkfirstcollisionYellow == 0 && checkfirstcollisionF == 0 && checkfirstcollisionBlueRight == 0 && checkfirstcollisionRedRight == 0 && checkfirstcollisionYellowRight == 0 && checkfirstcollisionFRight && checkfirstcollisionFiveRight == 0 && checkfirstcollisionFive == 0)
                {

                    DropDown(movingBoxFRight, mousePoint, posImgFRight, FRight_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionFRight, 1600, 500, filledDown, filledUp, checkForPlayerTurn[7]);


                }

                else if (checkfirstcollisionBlue == 0 && checkfirstcollisionRed == 0 && checkfirstcollisionYellow == 0 && checkfirstcollisionF == 0 && checkfirstcollisionBlueRight == 0 && checkfirstcollisionRedRight == 0 && checkfirstcollisionYellowRight == 0 && checkfirstcollisionFRight == 0 && checkfirstcollisionFiveRight == 0 && checkfirstcollisionFive)
                {

                    DropDown(movingBoxFive, mousePoint, posImgFive, Five_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionFive, 10, 650, filledDown, filledUp, checkForPlayerTurn[3]);


                }
                else if (checkfirstcollisionBlue == 0 && checkfirstcollisionRed == 0 && checkfirstcollisionYellow == 0 && checkfirstcollisionF == 0 && checkfirstcollisionBlueRight == 0 && checkfirstcollisionRedRight == 0 && checkfirstcollisionYellowRight == 0 && checkfirstcollisionFRight == 0 && checkfirstcollisionFiveRight && checkfirstcollisionFive == 0)
                {

                    DropDown(movingBoxFiveRight, mousePoint, posImgFiveRight, FiveRight_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionFiveRight, 1600, 650, filledDown, filledUp, checkForPlayerTurn[7]);


                }
                DrawTexture(red_card, posImgRed.x, posImgRed.y, WHITE);
                DrawTexture(blue_card, posImgBlue.x, posImgBlue.y, WHITE);
                DrawTexture(yellow_card, posImgYellow.x, posImgYellow.y, WHITE);
                DrawTexture(F_card, posImgF.x, posImgF.y, WHITE);
                DrawTexture(Five_card, posImgFive.x, posImgFive.y, WHITE);

                DrawTexture(redRight_card, posImgRedRight.x, posImgRedRight.y, WHITE);
                DrawTexture(blueRight_card, posImgBlueRight.x, posImgBlueRight.y, WHITE);
                DrawTexture(yellowRight_card, posImgYellowRight.x, posImgYellowRight.y, WHITE);
                DrawTexture(FRight_card, posImgFRight.x, posImgFRight.y, WHITE);
                DrawTexture(FiveRight_card, posImgFiveRight.x, posImgFiveRight.y, WHITE);



            }
            else if (three)
            {

            
                
                changePlayer(playerLeftColor, playerRightColor);
            
                
                checker2 = 0;
                DrawRectangleRec(hide, LIGHTGRAY);

                DrawRectangleRec(LeftPlayer, playerLeftColor);
                DrawRectangleRec(RightPlayer, playerRightColor);

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

               /*Draw Blue cudes ->*/ for (int i = 0; i < BasePyramidDown.size(); i++)
                {
                    DrawRectangleLinesEx(BasePyramidDown[i], 10, BLACK);
                }

               for (int i = 0; i < BasePyramidUp.size(); i++)
               {
                   DrawRectangleLinesEx(BasePyramidUp[i], 10, BLACK);
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

                Filled(BasePyramidDown, BasePyramidUp, movingBoxRed, movingBoxBlue, movingBoxYellow, movingBoxF, movingBoxRedRight, movingBoxBlueRight, movingBoxYellowRight, movingBoxFRight, filledDown, filledUp);

                //Check if two are filled and then to put another
                checkTwoCardsFilled(filledDown, filledUp, 4);


                if (checkfirstcollisionBlue == 0 && checkfirstcollisionRed == 0 && checkfirstcollisionYellow == 0 && checkfirstcollisionF == 0 && checkfirstcollisionBlueRight == 0 && checkfirstcollisionRedRight == 0 && checkfirstcollisionYellowRight == 0 && checkfirstcollisionFRight == 0 && checkfirstcollisionFiveRight == 0 && checkfirstcollisionFive == 0)
                {
                    DropDown(movingBoxRed, mousePoint, posImgRed, red_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionRed, 10, 50, filledDown, filledUp, checkForPlayerTurn[0]);
                    DropDown(movingBoxYellow, mousePoint, posImgYellow, yellow_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionYellow, 10, 350, filledDown, filledUp, checkForPlayerTurn[1]);
                    DropDown(movingBoxBlue, mousePoint, posImgBlue, blue_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionBlue, 10, 200, filledDown, filledUp, checkForPlayerTurn[2]);
                    DropDown(movingBoxF, mousePoint, posImgF, F_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionF, 10, 500, filledDown, filledUp, checkForPlayerTurn[3]);
                    DropDown(movingBoxFive, mousePoint, posImgFive, Five_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionFive, 10, 650, filledDown, filledUp, checkForPlayerTurn[3]);



                    DropDown(movingBoxRedRight, mousePoint, posImgRedRight, redRight_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionRedRight, 1600, 50, filledDown, filledUp, checkForPlayerTurn[4]);
                    DropDown(movingBoxYellowRight, mousePoint, posImgYellowRight, yellowRight_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionYellowRight, 1600, 350, filledDown, filledUp, checkForPlayerTurn[5]);
                    DropDown(movingBoxBlueRight, mousePoint, posImgBlueRight, blueRight_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionBlueRight, 1600, 200, filledDown, filledUp, checkForPlayerTurn[6]);
                    DropDown(movingBoxFRight, mousePoint, posImgFRight, FRight_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionFRight, 1600, 500, filledDown, filledUp, checkForPlayerTurn[7]);
                    DropDown(movingBoxFiveRight, mousePoint, posImgFiveRight, FiveRight_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionFiveRight, 1600, 650, filledDown, filledUp, checkForPlayerTurn[7]);


                }
                if (checkfirstcollisionBlue == 0 && checkfirstcollisionRed && checkfirstcollisionYellow == 0 && checkfirstcollisionF == 0 && checkfirstcollisionBlueRight == 0 && checkfirstcollisionRedRight == 0 && checkfirstcollisionYellowRight == 0 && checkfirstcollisionFRight == 0 && checkfirstcollisionFiveRight == 0 && checkfirstcollisionFive == 0)
                {
                    DropDown(movingBoxRed, mousePoint, posImgRed, red_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionRed, 10, 50, filledDown, filledUp, checkForPlayerTurn[0]);



                }
                else if (checkfirstcollisionBlue == 0 && checkfirstcollisionRed == 0 && checkfirstcollisionYellow && checkfirstcollisionF == 0 && checkfirstcollisionBlueRight == 0 && checkfirstcollisionRedRight == 0 && checkfirstcollisionYellowRight == 0 && checkfirstcollisionFRight == 0 && checkfirstcollisionFiveRight == 0 && checkfirstcollisionFive == 0)
                {


                    DropDown(movingBoxYellow, mousePoint, posImgYellow, yellow_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionYellow, 10, 350, filledDown, filledUp, checkForPlayerTurn[1]);

                }
                else if (checkfirstcollisionBlue && checkfirstcollisionRed == 0 && checkfirstcollisionYellow == 0 && checkfirstcollisionF == 0 && checkfirstcollisionBlueRight == 0 && checkfirstcollisionRedRight == 0 && checkfirstcollisionYellowRight == 0 && checkfirstcollisionFRight == 0 && checkfirstcollisionFiveRight == 0 && checkfirstcollisionFive == 0)
                {

                    DropDown(movingBoxBlue, mousePoint, posImgBlue, blue_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionBlue, 10, 200, filledDown, filledUp, checkForPlayerTurn[2]);


                }

                else if (checkfirstcollisionBlue == 0 && checkfirstcollisionRed == 0 && checkfirstcollisionYellow == 0 && checkfirstcollisionF == 0 && checkfirstcollisionBlueRight && checkfirstcollisionRedRight == 0 && checkfirstcollisionYellowRight == 0 && checkfirstcollisionFRight == 0 && checkfirstcollisionFiveRight == 0 && checkfirstcollisionFive == 0)
                {

                    DropDown(movingBoxBlueRight, mousePoint, posImgBlueRight, blueRight_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionBlueRight, 1600, 200, filledDown, filledUp, checkForPlayerTurn[4]);


                }
                else if (checkfirstcollisionBlue == 0 && checkfirstcollisionRed == 0 && checkfirstcollisionYellow == 0 && checkfirstcollisionF == 0 && checkfirstcollisionBlueRight == 0 && checkfirstcollisionRedRight == 0 && checkfirstcollisionYellowRight && checkfirstcollisionFRight == 0 && checkfirstcollisionFiveRight == 0 && checkfirstcollisionFive == 0)
                {

                    DropDown(movingBoxYellowRight, mousePoint, posImgYellowRight, yellowRight_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionYellowRight, 1600, 350, filledDown, filledUp, checkForPlayerTurn[5]);


                }
                else if (checkfirstcollisionBlue == 0 && checkfirstcollisionRed == 0 && checkfirstcollisionYellow == 0 && checkfirstcollisionF == 0 && checkfirstcollisionBlueRight == 0 && checkfirstcollisionRedRight && checkfirstcollisionYellowRight == 0 && checkfirstcollisionFRight == 0 && checkfirstcollisionFiveRight == 0 && checkfirstcollisionFive == 0)
                {

                    DropDown(movingBoxRedRight, mousePoint, posImgRedRight, redRight_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionRedRight, 1600, 50, filledDown, filledUp, checkForPlayerTurn[6]);


                }
                else if (checkfirstcollisionBlue == 0 && checkfirstcollisionRed == 0 && checkfirstcollisionYellow == 0 && checkfirstcollisionF && checkfirstcollisionBlueRight == 0 && checkfirstcollisionRedRight == 0 && checkfirstcollisionYellowRight == 0 && checkfirstcollisionFRight == 0 && checkfirstcollisionFiveRight == 0 && checkfirstcollisionFive == 0)
                {

                    DropDown(movingBoxF, mousePoint, posImgF, F_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionF, 10, 500, filledDown, filledUp, checkForPlayerTurn[3]);


                }
                else if (checkfirstcollisionBlue == 0 && checkfirstcollisionRed == 0 && checkfirstcollisionYellow == 0 && checkfirstcollisionF == 0 && checkfirstcollisionBlueRight == 0 && checkfirstcollisionRedRight == 0 && checkfirstcollisionYellowRight == 0 && checkfirstcollisionFRight && checkfirstcollisionFiveRight == 0 && checkfirstcollisionFive == 0)
                {

                    DropDown(movingBoxFRight, mousePoint, posImgFRight, FRight_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionFRight, 1600, 500, filledDown, filledUp, checkForPlayerTurn[7]);


                }

                else if (checkfirstcollisionBlue == 0 && checkfirstcollisionRed == 0 && checkfirstcollisionYellow == 0 && checkfirstcollisionF == 0 && checkfirstcollisionBlueRight == 0 && checkfirstcollisionRedRight == 0 && checkfirstcollisionYellowRight == 0 && checkfirstcollisionFRight == 0 && checkfirstcollisionFiveRight == 0 && checkfirstcollisionFive)
                {

                    DropDown(movingBoxFive, mousePoint, posImgFive, Five_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionFive, 10, 650, filledDown, filledUp, checkForPlayerTurn[3]);


                }
                else if (checkfirstcollisionBlue == 0 && checkfirstcollisionRed == 0 && checkfirstcollisionYellow == 0 && checkfirstcollisionF == 0 && checkfirstcollisionBlueRight == 0 && checkfirstcollisionRedRight == 0 && checkfirstcollisionYellowRight == 0 && checkfirstcollisionFRight == 0 && checkfirstcollisionFiveRight && checkfirstcollisionFive == 0)
                {

                    DropDown(movingBoxFiveRight, mousePoint, posImgFiveRight, FiveRight_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionFiveRight, 1600, 650, filledDown, filledUp, checkForPlayerTurn[7]);


                }
                DrawTexture(red_card, posImgRed.x, posImgRed.y, WHITE);
                DrawTexture(blue_card, posImgBlue.x, posImgBlue.y, WHITE);
                DrawTexture(yellow_card, posImgYellow.x, posImgYellow.y, WHITE);
                DrawTexture(F_card, posImgF.x, posImgF.y, WHITE);
                DrawTexture(Five_card, posImgFive.x, posImgFive.y, WHITE);

                DrawTexture(redRight_card, posImgRedRight.x, posImgRedRight.y, WHITE);
                DrawTexture(blueRight_card, posImgBlueRight.x, posImgBlueRight.y, WHITE);
                DrawTexture(yellowRight_card, posImgYellowRight.x, posImgYellowRight.y, WHITE);
                DrawTexture(FRight_card, posImgFRight.x, posImgFRight.y, WHITE);
                DrawTexture(FiveRight_card, posImgFiveRight.x, posImgFiveRight.y, WHITE);



            }
        }
        else if (menuTwo)
        {
            checker = 0;
            Rectangle arr[4];
            Rectangle arr2[4];
            Rectangle arr3[2];
            check_mark.width = 38;
            check_mark.height = 38; 
            bool ifs = 0;
            Vector2 check_marker = {837.5, 260};
            for (int i = 0; i < 4; i++)
            {
                arr[i].x = 737.5 +i * 100;
                arr[i].y = 260;
                arr[i].width = 38;
                arr[i].height = 38;

                arr2[i].x = 737.5 + i * 100;
                arr2[i].y = 420;
                arr2[i].width = 38;
                arr2[i].height = 38;

            }
            for (int i = 0; i < 2; i++)
            {
                arr3[i].x = 806 + i * 140;
                arr3[i].y = 600;
                arr3[i].width = 38;
                arr3[i].height = 38;
            }

            //225, 420, 90, 105 
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
            for (int i = 0; i < 4; i++)
            {
                DrawRectangleRec(arr[i], DARKGRAY);
                
            }

            if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && CheckCollisionPointRec(mousePoint, arr[0]))
            {
                ifs = 1;

                SetTargetFPS(30);
            }
            else if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && CheckCollisionPointRec(mousePoint, arr[1]))
            {


                SetTargetFPS(60); 
                ifs = 1;

            }
            else if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && CheckCollisionPointRec(mousePoint, arr[2]))
            {

                SetTargetFPS(120);
                ifs = 1;

            }
            else if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && CheckCollisionPointRec(mousePoint, arr[3]))
            {

                SetTargetFPS(240);
                ifs = 1;


            }
            else {
                ifs = 0;
            }
            


            DrawText("Choose your mode:", 675, 320, 50, BLACK);
            DrawText("Normal", 722.5, 380, 20, BLACK);
            DrawText("Old", 840.5, 380, 20, BLACK);
            DrawText("Modern", 920, 380, 20, BLACK);
            DrawText("Colorblind", 1009, 380, 20, BLACK);

            DrawRectangle((int)BaseCards.x + 506.5, (int)BaseCards.y - 5, (int)BaseCards.width - 41, (int)BaseCards.height - 56, BLACK);
            DrawRectangle((int)BaseCards.x + 606.5, (int)BaseCards.y - 5, (int)BaseCards.width - 41, (int)BaseCards.height - 56, BLACK);
            DrawRectangle((int)BaseCards.x + 706.5, (int)BaseCards.y - 5, (int)BaseCards.width - 41, (int)BaseCards.height - 56, BLACK);
            DrawRectangle((int)BaseCards.x + 806.5, (int)BaseCards.y - 5, (int)BaseCards.width - 41, (int)BaseCards.height - 56, BLACK);
            for (int i = 0; i < 4; i++)
            {
                DrawRectangleRec(arr2[i], DARKGRAY);
                if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && CheckCollisionPointRec(mousePoint, arr2[i]))
                {
                    //needs to be added color mode changer and texture
                }
            }


            DrawText("Show FPS:", 775, 500, 50, BLACK);
            
            DrawText("YES", 805, 560.5, 20, BLACK);
            DrawText("NO", 950, 560.5, 20, BLACK);

            DrawRectangle((int)BaseCards.x + 575, (int)BaseCards.y + 175, (int)BaseCards.width - 41, (int)BaseCards.height - 56, BLACK);
            DrawRectangle((int)BaseCards.x + 715, (int)BaseCards.y + 175, (int)BaseCards.width - 41, (int)BaseCards.height - 56, BLACK);
            for (int i = 0; i < 2; i++)
            {
                DrawRectangleRec(arr3[i], DARKGRAY);
                if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && CheckCollisionPointRec(mousePoint, arr3[i]))
                {
                    //needs to be added fps shower and texture
                }
            }
            DrawTexture(check_mark, check_marker.x, check_marker.y, DARKGRAY);
        }
        else if (menuThree)
        {
            checker = 0;
            DrawRectangleRec(hide, LIGHTGRAY);
            DrawText("The rules of the game:", 200, 25, 125, VIOLET);
            DrawText("Some text...", 200, 160, 25, BLACK);
            DrawText("Some text...", 200, 210, 25, BLACK);
            DrawText("Some text...", 200, 260, 25, BLACK);
            DrawText("Some text...", 200, 310, 25, BLACK);
            DrawText("Some text...", 200, 360, 25, BLACK);
            DrawText("Some text...", 200, 410, 25, BLACK);
            DrawText("Some text...", 200, 460, 25, BLACK);
            DrawText("Some text...", 200, 510, 25, BLACK);
            DrawText("Some text...", 200, 560, 25, BLACK);
            DrawText("Some text...", 200, 610, 25, BLACK);
            DrawText("Some text...", 200, 660, 25, BLACK);
            DrawText("Some text...", 200, 710, 25, BLACK);
            DrawText("Some text...", 200, 760, 25, BLACK);
            DrawText("Some text...", 200, 810, 25, BLACK);
            DrawText("Some text...", 200, 860, 25, BLACK);
            DrawText("Some text...", 200, 910, 25, BLACK);
            DrawText("Some text...", 200, 960, 25, BLACK);

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
    UnloadTexture(F_card);

    UnloadTexture(blueRight_card);
    UnloadTexture(yellowRight_card);
    UnloadTexture(redRight_card);
    UnloadTexture(FRight_card);
    UnloadTexture(FiveRight_card);
    UnloadTexture(Five_card);
    
    
    CloseWindow();


    return 0; 
    }