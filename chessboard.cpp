#include "chessboard.h"

namespace chessgui {

  Chessboard::Handler Chessboard::handler = Chessboard::Handler();

  Chessboard& Chessboard::getChessboard(){
    if (handler.instance == nullptr)
      handler.instance = new Chessboard;
    return *handler.instance;
  }

  void Chessboard::releaseChessboard() {
    delete handler.instance;
    handler.instance = nullptr;
  }

  /* TODO */
  void initializeBoard(const std::string chessMode);

  bool allowedMove(Coordinate& c);

  void Pawn::move(Coordinate& c){
    if (allowedMove(c)){
        std::cout << "P" << c.col << c.row << std::endl;
      } else {
        std::cout << "Move forbidden" << std::endl;
        // BELL
      }
  }

  void Bishop::move(Coordinate& c){
    if (allowedMove(c)){
        std::cout << "P" << c.col << c.row << std::endl;
      } else {
        std::cout << "Move forbidden" << std::endl;
        // BELL
      }
  }

  void Knight::move(Coordinate& c){
    if (allowedMove(c)){
        std::cout << "P" << c.col << c.row << std::endl;
      } else {
        std::cout << "Move forbidden" << std::endl;
        // BELL
      }
  }

  void Rook::move(Coordinate& c){
    if (allowedMove(c)){
        std::cout << "P" << c.col << c.row << std::endl;
      } else {
        std::cout << "Move forbidden" << std::endl;
        // BELL
      }
  }

  void Queen::move(Coordinate& c){
    if (allowedMove(c)){
        std::cout << "P" << c.col << c.row << std::endl;
      } else {
        std::cout << "Move forbidden" << std::endl;
        // BELL
      }
  }

  void King::move(Coordinate& c){
    if (allowedMove(c)){
        std::cout << "P" << c.col << c.row << std::endl;
      } else {
        std::cout << "Move forbidden" << std::endl;
        // BELL
      }
  }

}
