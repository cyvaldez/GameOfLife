#include <cstdio>

#include <random>

class GameOfLife {
 private:
  const int line_ = 19;
  const int colonn_ = 19;
  bool population_[20][20];

 public:
  GameOfLife() {
    std::random_device r2;
    std::uniform_int_distribution<int> unif(0, 15);

    for (int i = 0; i < 20; ++i) {
      for (int j = 0; j < 20; ++j) {
        int t = unif(r2) % 2;
        if (t == 1) {
          population_[i][j] = true;
        } else
          population_[i][j] = false;
      }
    }
  }
//Diese Funktion bestimmt anhand von gegebenen Regeln,
//ob eine Zelle lebendig oder sterben wird oder bleibt
  bool nextState(int i, int j) {
    if (i == 0 && j == 0) {
      if (population_[i][j] == false) {
        int count = 0;
        for (int r = i; r <= i + 1; ++r) {
          for (int q = j; q <= j + 1; ++q) {
            if (r != i && q != j) {
              if (population_[r][q] == true) {
                count++;
              }
            }
          }
        }
        if (count >= 3) {
          return true;
        } else
          return false;
      } else {
        int count = 0;
        for (int r = i; r <= i + 1; ++r) {
          for (int q = j; q <= j + 1; ++q) {
            if (r != i && q != j) {
              if (population_[r][q] == true) {
                count++;
              }
            }
          }
        }
        if (count >= 2 && count < 4) {
          return true;
        } else
          return false;
      }
    }
    if (i == line_ && j == 0) {
      if (population_[i][j] == false) {
        int count = 0;
        for (int r = i - 1; r <= i; ++r) {
          for (int q = j; q <= j + 1; ++q) {
            if (r != i && q != j) {
              if (population_[r][q] == true) {
                count++;
              }
            }
          }
        }
        if (count >= 3) {
          return true;
        } else
          return false;
      } else {
        int count = 0;
        for (int r = i - 1; r <= i; ++r) {
          for (int q = j; q <= j + 1; ++q) {
            if (r != i && q != j) {
              if (population_[r][q] == true) {
                count++;
              }
            }
          }
        }
        if (count >= 2 && count < 4) {
          return true;
        } else
          return false;
      }
    }
    if (0 < i && i <= line_ - 1 && j == 0) {
      if (population_[i][j] == false) {
        int count = 0;
        for (int r = i - 1; r <= i + 1; ++r) {
          for (int q = j; q <= j + 1; ++q) {
            if (r != i && q != j) {
              if (population_[r][q] == true) {
                count++;
              }
            }
          }
        }
        if (count >= 3) {
          return true;
        } else
          return false;
      } else {
        int count = 0;
        for (int r = i - 1; r <= i + 1; ++r) {
          for (int q = j; q <= j + 1; ++q) {
            if (r != i && q != j) {
              if (population_[r][q] == true) {
                count++;
              }
            }
          }
        }
        if (count >= 2 && count < 4) {
          return true;
        } else
          return false;
      }
    }
    if (i == 0 && j == colonn_) {
      if (population_[i][j] == false) {
        int count = 0;
        for (int r = i; r <= i + 1; ++r) {
          for (int q = j - 1; q <= j; ++q) {
            if (r != i && q != j) {
              if (population_[r][q] == true) {
                count++;
              }
            }
          }
        }
        if (count >= 3) {
          return true;
        } else
          return false;
      } else {
        int count = 0;
        for (int r = i; r <= i + 1; ++r) {
          for (int q = j - 1; q <= j; ++q) {
            if (r != i && q != j) {
              if (population_[r][q] == true) {
                count++;
              }
            }
          }
        }
        if (count >= 2 && count < 4) {
          return true;
        } else
          return false;
      }
    }
    if (i == 0 && 0 < j && j <= colonn_ - 1) {
      if (population_[i][j] == false) {
        int count = 0;
        for (int r = i; r <= i + 1; ++r) {
          for (int q = j - 1; q <= j + 1; ++q) {
            if (r != i && q != j) {
              if (population_[r][q] == true) {
                count++;
              }
            }
          }
        }
        if (count >= 3) {
          return true;
        } else
          return false;
      } else {
        int count = 0;
        for (int r = i; r <= i + 1; ++r) {
          for (int q = j - 1; q <= j + 1; ++q) {
            if (r != i && q != j) {
              if (population_[r][q] == true) {
                count++;
              }
            }
          }
        }
        if (count >= 2 && count < 4) {
          return true;
        } else
          return false;
      }
    }
    if (i == line_ && j == colonn_) {
      if (population_[i][j] == false) {
        int count = 0;
        for (int r = i - 1; r <= i; ++r) {
          for (int q = j - 1; q <= j; ++q) {
            if (r != i && q != j) {
              if (population_[r][q] == true) {
                count++;
              }
            }
          }
        }
        if (count >= 3) {
          return true;
        } else
          return false;
      } else {
        int count = 0;
        for (int r = i - 1; r <= i; ++r) {
          for (int q = j - 1; q <= j; ++q) {
            if (r != i && q != j) {
              if (population_[r][q] == true) {
                count++;
              }
            }
          }
        }
        if (count >= 2 && count < 4) {
          return true;
        } else
          return false;
      }
    }
    if (0 < i && i <= line_ - 1 && j == colonn_) {
      if (population_[i][j] == false) {
        int count = 0;
        for (int r = i - 1; r <= i + 1; ++r) {
          for (int q = j - 1; q <= j; ++q) {
            if (r != i && q != j) {
              if (population_[r][q] == true) {
                count++;
              }
            }
          }
        }
        if (count >= 3) {
          return true;
        } else
          return false;
      } else {
        int count = 0;
        for (int r = i - 1; r <= i; ++r) {
          for (int q = j - 1; q <= j; ++q) {
            if (r != i && q != j) {
              if (population_[r][q] == true) {
                count++;
              }
            }
          }
        }
        if (count >= 2 && count < 4) {
          return true;
        } else
          return false;
      }
    }
    if (i == line_ && 0 < j && j <= colonn_ - 1) {
      if (population_[i][j] == false) {
        int count = 0;
        for (int r = i - 1; r <= i; ++r) {
          for (int q = j - 1; q <= j + 1; ++q) {
            if (r != i && q != j) {
              if (population_[r][q] == true) {
                count++;
              }
            }
          }
        }
        if (count >= 3) {
          return true;
        } else
          return false;
      } else {
        int count = 0;
        for (int r = i - 1; r <= i; ++r) {
          for (int q = j - 1; q <= j + 1; ++q) {
            if (r != i && q != j) {
              if (population_[r][q] == true) {
                count++;
              }
            }
          }
        }
        if (count >= 2 && count < 4) {
          return true;
        } else
          return false;
      }
    } else {
      if (population_[i][j] == false) {
        int count = 0;
        for (int r = i - 1; r <= i + 1; ++r) {
          for (int q = j - 1; q <= j + 1; ++q) {
            if (r != i && q != j) {
              if (population_[r][q] == true) {
                count++;
              }
            }
          }
        }
        if (count >= 3) {
          return true;
        } else
          return false;
      } else {
        int count = 0;
        for (int r = i - 1; r <= i + 1; ++r) {
          for (int q = j - 1; q <= j + 1; ++q) {
            if (r != i && q != j) {
              if (population_[r][q] == true) {
                count++;
              }
            }
          }
        }
        if (count >= 2 && count < 4) {
          return true;
        } else
          return false;
      }
    }
  }

//Nextgeneration() Wende die nextstate()-Funktion auf die ganze Stichprobe an.
  void nextGeneration() {
    for (int i = 0; i <= line_; i++) {
      for (int j = 0; j <= colonn_; j++) {
        population_[i][j] = nextState(i, j);
      }
    }
  }
// Dient Zur Beschreibung der Entwicklung von n Generationen
  void futurGeneration(int n) {
    int k = 1;

    for (int i = 0; i < n; i++) {
      printf("############++NEXTGENERATION(%i) ++###########\n", k);

      for (int i = 0; i <= line_; i++) {
        for (int j = 0; j <= colonn_; j++) {
          if (population_[i][j] == true) {
             printf(" ❤️ ");
          } else {
        	  printf(" 🤍 ");
            }

          int delay = 300000;
          while (delay > 0) delay--;
        }
        printf("\n");
        int delay = 10000000;
        while (delay > 0) delay--;
      }
      int delay = 3000000;
      while (delay > 0) delay--;
      k++;
      nextGeneration();
    }
  }

  void show() {

    for (int i = 0; i < 10; ++i) {
      for (int j = 0; j < 10; ++j) {
        population_[i][j] = true;
      }
    }

    futurGeneration(10);
  }

};

