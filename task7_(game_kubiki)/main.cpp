/*"Copyright [2022] <katrinap>"*/

#include <stdlib.h>

#include <ctime>
#include <iostream>

#include "windows.h"
using namespace std;

#define HEIGHT 5
#define WIDTH 4

class players {
 public:
  string name;
  int point = 0;
};

class kubiki {
 public:
  char one[3][3] = {
      'x', 'x', 'x', 'x', '0', 'x', 'x', 'x', 'x',
  };
  char two[3][3] = {
      '0', 'x', 'x', 'x', 'x', 'x', 'x', 'x', '0',
  };
  char three[3][3] = {
      '0', 'x', 'x', 'x', '0', 'x', 'x', 'x', '0',
  };
  char four[3][3] = {
      '0', 'x', '0', 'x', 'x', 'x', '0', 'x', '0',
  };
  char five[3][3] = {
      '0', 'x', '0', 'x', '0', 'x', '0', 'x', '0',
  };
  char six[3][3] = {
      '0', 'x', '0', '0', 'x', '0', '0', 'x', '0',
  };
};

int randf(int from, int to) {
  srand(time(NULL));
  return rand() % to + from;
}

void print_score_board(players &player, players &bot) {
  cout << player.name << ' ' << player.point << '\n';
  cout << bot.name << ' ' << bot.point << '\n';
}

int dice_roll(int *pfirst_player, players &player, players &bot) {
  int result = 0;
  if (*pfirst_player == 2) {
    result = randf(1, 6);
    bot.point += result;
  }
  if (*pfirst_player == 1) {
    cout << "Enter any character to roll the die\n";
    char temp;
    cin >> temp;
    if (temp != ' ') {
      result = randf(1, 6);
      player.point += result;
    }
  }
  if (*pfirst_player == 1) {
    cout << player.name << " :\n";
  } else if (*pfirst_player == 2) {
    cout << bot.name << " :\n";
  }
  return result;
}

void print_die_roll(int result) {
  kubiki kubik;
  for (int j = 0; j <= WIDTH; j++) {
    if (j == WIDTH)
      cout << "-\n";
    else
      cout << "-";
  }
  for (int i = 0; i < 3; i++) {
    cout << ' ';
    for (int j = 0; j < 3; j++) {
      switch (result) {
        case 1:
          cout << kubik.one[i][j];
          break;
        case 2:
          cout << kubik.two[i][j];
          break;
        case 3:
          cout << kubik.three[i][j];
          break;
        case 4:
          cout << kubik.four[i][j];
          break;
        case 5:
          cout << kubik.five[i][j];
          break;
        case 6:
          cout << kubik.six[i][j];
          break;
      }
    }
    cout << '\n';
  }
  for (int j = 0; j <= WIDTH; j++) {
    if (j == WIDTH)
      cout << "-\n";
    else
      cout << "-";
  }
}

void change_first_player_on_player(int *pfirst_player) {
  if (*pfirst_player == 2) {
    *pfirst_player = 1;
  }

}  //когда first_player =1, он не меняет на 2

void change_first_player_on_bot(int *pfirst_player) {
  if (*pfirst_player == 1) {
    *pfirst_player = 2;
  }

}  //когда first_player =1, он не меняет на 2

int main() {
  players player, bot;
  cout << "Hi, enter the player's name and press enter: ";
  cin >> player.name;
  bot.name = "Bot";
  int first_player = randf(1, 2);
  int *pfirst_player = &first_player;
  if (first_player == 1) {
    cout << "First player - " << player.name << '\n';
    cout << "Second player - " << bot.name << '\n';
  } else if (first_player == 2) {
    cout << "First player - " << bot.name << '\n';
    cout << "Second player - " << player.name << '\n' << '\n';
  }
  cout << "0 - point\n"
       << "x - empty\n";
  for (int i = 0; i < 4; i++) {
    print_die_roll(dice_roll(pfirst_player, player, bot));

    if ((i == 1) || (i == 3)) {
      print_score_board(player, bot);
    }
    if (first_player == 2) {
      change_first_player_on_player(pfirst_player);
    } else if (first_player == 1) {
      change_first_player_on_bot(pfirst_player);
    }
    Sleep(200);
  }
  if (player.point > bot.point) {
    cout << player.name << " Win!!!";
  } else if (player.point < bot.point) {
    cout << bot.name << " Win!!!";
  } else if (player.point == bot.point) {
    cout << " Draw!!!";
  }
  return 0;
}
