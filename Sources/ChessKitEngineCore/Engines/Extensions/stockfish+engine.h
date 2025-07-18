//
//  stockfish+engine.h
//  ChessKitEngine
//

#ifndef stockfish_engine_h
#define stockfish_engine_h

#include "engine.h"
#include <string>

/// Stockfish implementation of `Engine`.
class StockfishEngine: public Engine {
public:
  void initialize();
  void deinitialize();
};

#endif /* stockfish_engine_h */
