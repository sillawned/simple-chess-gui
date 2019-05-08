#include <iostream>

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

  class Pieces {
    std::string name = "";
    Color color;
    Coordinate coord;

    Pieces();
    virtual ~Pieces();
    friend class Chessboard;
  public:
    virtual void move(Coordinate& c);
    bool allowedMove(Coordinate& c);
  };

  class Pawn : public Pieces {
    int firstMove = 1;
    Pawn();
    ~Pawn();
  public:
    void move(Coordinate& c);
  };

  class Bishop : public Pieces {
    Bishop();
    ~Bishop();
  public:
    void move(Coordinate& c);
  };

  class Knight : public Pieces {
    Knight();
    ~Knight();
  public:
    void move(Coordinate& c);
  };

  class Rook : public Pieces {
    Rook();
    ~Rook();
  public:
    void move(Coordinate& c);
  };

  class Queen : public Pieces {
    Queen();
    ~Queen();
  public:
    void move(Coordinate& c);
  };

  class King : public Pieces {
    King();
    ~King();
  public:
    void move(Coordinate& c);
  };

  class Chessboard {
  private:
    int row = 8;
    int col = 8;
    Pieces ** tabPieces;
    bool flipped;

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
}
