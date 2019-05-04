namespace chessgui {
  Chessboard::Handler Chessboard::handler = Handler();

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
  void Chessboard::initializeBoard();

  bool Pieces::allowedMove(Coordinate& c);

  void Pawn::move(Coordinate& c);
  void Bishop::move(Coordinate& c);
  void Knight::move(Coordinate& c);
  void Rook::move(Coordinate& c);
  void Queen::move(Coordinate& c);
  void King::move(Coordinate& c);

}
