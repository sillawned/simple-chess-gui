#include <iostream>
#include <SDL2/SDL.h>
#include "chessboard.hpp"

namespace chessgui {
  enum Color {
    WHITE,
    BLACK
  };

  struct Coordinate {
    int row;
    int col;
  };

  /* TODO :
     Initialize all the pieces
  */

  class Chessboard {
  private:
    int row = 8;
    int col = 8;
    Pieces ** tabPieces;

    Chessboard();
    ~Chessboard();

    struct Handler {
      Chessboard* instance = nullptr;
      ~Handler() { delete instance; }
    };
    static Handler handler;
  public:
    static Chessboard& getChessboard();
    static void releaseChessboard();
    void initializeBoard(const std::string chessMode);
  };

  class Pieces {
    std::string name = "";
    Color color = 0;
    Coordinate coord;

    Pieces();
    ~Pieces();
    // friend class Chessboard;
  public:
    virtual void move(Coordinate& c);
    bool allowedMove(Coordinate& c);
  };

  class Pawn : public Pieces {
    int firstMove = 1;
  public:
    void move(Coordinate& c);
  };

  class Bishop : public Pieces {
  public:
    void move(Coordinate& c);
  };

  class Knight : public Pieces {
  public:
    void move(Coordinate& c);
  };

  class Rook : public Pieces {
  public:
    void move(Coordinate& c);
  };

  class Queen : public Pieces {
  public:
    void move(Coordinate& c);
  };

  class King : public Pieces {
  public:
    void move(Coordinate& c);
  };
}
