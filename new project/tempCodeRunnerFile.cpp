else
        {
            maze_1[playerX][playerY] = '!';
            gotoxy(playerY, playerX);
            cout << "!";
            playerY = playerY + 1;

            gotoxy(playerY, playerX);
            cout << "P";
        }