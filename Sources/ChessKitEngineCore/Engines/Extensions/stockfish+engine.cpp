//
//  stockfish+engine.cpp
//  ChessKitEngine
//

#include "stockfish+engine.h"
#include "../Stockfish/src/_main.h"
#include "../Stockfish/src/thread.h"

using namespace Stockfish;

void StockfishEngine::initialize() {
  char empty[] = "";
  char* argv[] = { empty };
  _main(1, argv);
}

void StockfishEngine::deinitialize() {
  ThreadPool().end();
}
