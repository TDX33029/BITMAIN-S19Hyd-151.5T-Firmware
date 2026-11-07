// FUN_0111ade8 @ 0111ade8 size=1824 calls_out=3 calls_in=1
// strings: 

void FUN_0111ade8(undefined2 *param_1,char *param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  bool bVar4;
  bool bVar5;
  uint local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  switch(param_3) {
  case 0xb:
    if (*param_2 == 'm') {
      cVar1 = param_2[1];
      bVar5 = cVar1 == 'i';
      if (bVar5) {
        cVar1 = param_2[2];
      }
      if (bVar5 && cVar1 == 'n') {
        cVar1 = param_2[3];
        bVar5 = cVar1 == 'i';
        if (bVar5) {
          cVar1 = param_2[4];
        }
        if (bVar5 && cVar1 == 'n') {
          cVar1 = param_2[5];
          bVar5 = cVar1 == 'g';
          if (bVar5) {
            cVar1 = param_2[6];
          }
          if (bVar5 && cVar1 == '.') {
            cVar1 = param_2[7];
            bVar5 = cVar1 == 'p';
            if (bVar5) {
              cVar1 = param_2[8];
            }
            if (bVar5 && cVar1 == 'i') {
              cVar1 = param_2[9];
              bVar5 = cVar1 == 'n';
              if (bVar5) {
                cVar1 = param_2[10];
              }
              if (bVar5 && cVar1 == 'g') {
                uVar3 = 0xa00;
                goto LAB_0111b3dc;
              }
            }
          }
        }
      }
    }
    break;
  case 0xd:
    if (*param_2 == 'm') {
      cVar1 = param_2[1];
      bVar5 = cVar1 == 'i';
      if (bVar5) {
        cVar1 = param_2[2];
      }
      if (bVar5 && cVar1 == 'n') {
        cVar1 = param_2[3];
        bVar5 = cVar1 == 'i';
        if (bVar5) {
          cVar1 = param_2[4];
        }
        if (bVar5 && cVar1 == 'n') {
          cVar1 = param_2[5];
          bVar5 = cVar1 == 'g';
          if (bVar5) {
            cVar1 = param_2[6];
          }
          if (bVar5 && cVar1 == '.') {
            cVar1 = param_2[7];
            if (cVar1 == 'n') {
              if (param_2[8] == 'o') {
                cVar1 = param_2[9];
                bVar5 = cVar1 == 't';
                if (bVar5) {
                  cVar1 = param_2[10];
                }
                if (bVar5 && cVar1 == 'i') {
                  cVar1 = param_2[0xb];
                  bVar5 = cVar1 == 'f';
                  if (bVar5) {
                    cVar1 = param_2[0xc];
                  }
                  if (bVar5 && cVar1 == 'y') {
                    uVar3 = 0x700;
                    goto LAB_0111b3dc;
                  }
                }
              }
            }
            else {
              bVar5 = cVar1 == 's';
              if (bVar5) {
                cVar1 = param_2[8];
              }
              if (bVar5 && cVar1 == 'u') {
                cVar1 = param_2[9];
                bVar5 = cVar1 == 'b';
                if (bVar5) {
                  cVar1 = param_2[10];
                }
                if (bVar5 && cVar1 == 'm') {
                  cVar1 = param_2[0xb];
                  bVar5 = cVar1 == 'i';
                  if (bVar5) {
                    cVar1 = param_2[0xc];
                  }
                  if (bVar5 && cVar1 == 't') {
                    uVar3 = 0x600;
LAB_0111b3dc:
                    *param_1 = uVar3;
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
    break;
  case 0x10:
    cVar1 = *param_2;
    if (cVar1 == 'c') {
      if (param_2[1] == 'l') {
        cVar1 = param_2[2];
        bVar5 = cVar1 == 'i';
        if (bVar5) {
          cVar1 = param_2[3];
        }
        if (bVar5 && cVar1 == 'e') {
          cVar1 = param_2[4];
          bVar5 = cVar1 == 'n';
          if (bVar5) {
            cVar1 = param_2[5];
          }
          if (bVar5 && cVar1 == 't') {
            cVar1 = param_2[6];
            bVar5 = cVar1 == '.';
            if (bVar5) {
              cVar1 = param_2[7];
            }
            if (bVar5 && cVar1 == 'r') {
              cVar1 = param_2[8];
              bVar5 = cVar1 == 'e';
              if (bVar5) {
                cVar1 = param_2[9];
              }
              if (bVar5 && cVar1 == 'c') {
                cVar1 = param_2[10];
                bVar5 = cVar1 == 'o';
                if (bVar5) {
                  cVar1 = param_2[0xb];
                }
                if (bVar5 && cVar1 == 'n') {
                  cVar1 = param_2[0xc];
                  bVar5 = cVar1 == 'n';
                  if (bVar5) {
                    cVar1 = param_2[0xd];
                  }
                  if (bVar5 && cVar1 == 'e') {
                    cVar1 = param_2[0xe];
                    bVar5 = cVar1 == 'c';
                    if (bVar5) {
                      cVar1 = param_2[0xf];
                    }
                    if (bVar5 && cVar1 == 't') {
                      uVar3 = 0x900;
                      goto LAB_0111b3dc;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    else {
      bVar5 = cVar1 == 'm';
      if (bVar5) {
        cVar1 = param_2[1];
      }
      bVar4 = bVar5 && cVar1 == 'i';
      if (bVar5 && cVar1 == 'i') {
        bVar4 = param_2[2] == 'n';
      }
      if (bVar4) {
        cVar1 = param_2[3];
        bVar5 = cVar1 == 'i';
        if (bVar5) {
          cVar1 = param_2[4];
        }
        if (bVar5 && cVar1 == 'n') {
          cVar1 = param_2[5];
          bVar5 = cVar1 == 'g';
          if (bVar5) {
            cVar1 = param_2[6];
          }
          if (bVar5 && cVar1 == '.') {
            cVar1 = param_2[7];
            if (cVar1 == 'a') {
              cVar1 = param_2[8];
              bVar5 = cVar1 == 'u';
              if (bVar5) {
                cVar1 = param_2[9];
              }
              if (bVar5 && cVar1 == 't') {
                cVar1 = param_2[10];
                bVar5 = cVar1 == 'h';
                if (bVar5) {
                  cVar1 = param_2[0xb];
                }
                if (bVar5 && cVar1 == 'o') {
                  cVar1 = param_2[0xc];
                  bVar5 = cVar1 == 'r';
                  if (bVar5) {
                    cVar1 = param_2[0xd];
                  }
                  if (bVar5 && cVar1 == 'i') {
                    cVar1 = param_2[0xe];
                    bVar5 = cVar1 == 'z';
                    if (bVar5) {
                      cVar1 = param_2[0xf];
                    }
                    if (bVar5 && cVar1 == 'e') {
                      uVar3 = 0x200;
                      goto LAB_0111b3dc;
                    }
                  }
                }
              }
            }
            else if (cVar1 == 'c') {
              cVar1 = param_2[8];
              bVar5 = cVar1 == 'o';
              if (bVar5) {
                cVar1 = param_2[9];
              }
              if (bVar5 && cVar1 == 'n') {
                cVar1 = param_2[10];
                bVar5 = cVar1 == 'f';
                if (bVar5) {
                  cVar1 = param_2[0xb];
                }
                if (bVar5 && cVar1 == 'i') {
                  cVar1 = param_2[0xc];
                  bVar5 = cVar1 == 'g';
                  if (bVar5) {
                    cVar1 = param_2[0xd];
                  }
                  if (bVar5 && cVar1 == 'u') {
                    cVar1 = param_2[0xe];
                    bVar5 = cVar1 == 'r';
                    if (bVar5) {
                      cVar1 = param_2[0xf];
                    }
                    if (bVar5 && cVar1 == 'e') {
                      uVar3 = 0x500;
                      goto LAB_0111b3dc;
                    }
                  }
                }
              }
            }
            else if (cVar1 == 's') {
              cVar1 = param_2[8];
              bVar5 = cVar1 == 'u';
              if (bVar5) {
                cVar1 = param_2[9];
              }
              if (bVar5 && cVar1 == 'b') {
                cVar1 = param_2[10];
                bVar5 = cVar1 == 's';
                if (bVar5) {
                  cVar1 = param_2[0xb];
                }
                if (bVar5 && cVar1 == 'c') {
                  cVar1 = param_2[0xc];
                  bVar5 = cVar1 == 'r';
                  if (bVar5) {
                    cVar1 = param_2[0xd];
                  }
                  if (bVar5 && cVar1 == 'i') {
                    cVar1 = param_2[0xe];
                    bVar5 = cVar1 == 'b';
                    if (bVar5) {
                      cVar1 = param_2[0xf];
                    }
                    if (bVar5 && cVar1 == 'e') {
                      uVar3 = 0;
                      goto LAB_0111b3dc;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    break;
  case 0x15:
    if (*param_2 == 'm') {
      cVar1 = param_2[1];
      bVar5 = cVar1 == 'i';
      if (bVar5) {
        cVar1 = param_2[2];
      }
      if (bVar5 && cVar1 == 'n') {
        cVar1 = param_2[3];
        bVar5 = cVar1 == 'i';
        if (bVar5) {
          cVar1 = param_2[4];
        }
        if (bVar5 && cVar1 == 'n') {
          cVar1 = param_2[5];
          bVar5 = cVar1 == 'g';
          if (bVar5) {
            cVar1 = param_2[6];
          }
          if (bVar5 && cVar1 == '.') {
            cVar1 = param_2[7];
            bVar5 = cVar1 == 's';
            if (bVar5) {
              cVar1 = param_2[8];
            }
            if (bVar5 && cVar1 == 'e') {
              cVar1 = param_2[9];
              bVar5 = cVar1 == 't';
              if (bVar5) {
                cVar1 = param_2[10];
              }
              if (bVar5 && cVar1 == '_') {
                cVar1 = param_2[0xb];
                if (cVar1 == 'e') {
                  if (param_2[0xc] == 'x') {
                    cVar1 = param_2[0xd];
                    bVar5 = cVar1 == 't';
                    if (bVar5) {
                      cVar1 = param_2[0xe];
                    }
                    if (bVar5 && cVar1 == 'r') {
                      cVar1 = param_2[0xf];
                      bVar5 = cVar1 == 'a';
                      if (bVar5) {
                        cVar1 = param_2[0x10];
                      }
                      if (bVar5 && cVar1 == 'n') {
                        cVar1 = param_2[0x11];
                        bVar5 = cVar1 == 'o';
                        if (bVar5) {
                          cVar1 = param_2[0x12];
                        }
                        if (bVar5 && cVar1 == 'n') {
                          cVar1 = param_2[0x13];
                          bVar5 = cVar1 == 'c';
                          if (bVar5) {
                            cVar1 = param_2[0x14];
                          }
                          if (bVar5 && cVar1 == 'e') {
                            uVar3 = 0x400;
                            goto LAB_0111b3dc;
                          }
                        }
                      }
                    }
                  }
                }
                else {
                  bVar5 = cVar1 == 'd';
                  if (bVar5) {
                    cVar1 = param_2[0xc];
                  }
                  if (bVar5 && cVar1 == 'i') {
                    cVar1 = param_2[0xd];
                    bVar5 = cVar1 == 'f';
                    if (bVar5) {
                      cVar1 = param_2[0xe];
                    }
                    if (bVar5 && cVar1 == 'f') {
                      cVar1 = param_2[0xf];
                      bVar5 = cVar1 == 'i';
                      if (bVar5) {
                        cVar1 = param_2[0x10];
                      }
                      if (bVar5 && cVar1 == 'c') {
                        cVar1 = param_2[0x11];
                        bVar5 = cVar1 == 'u';
                        if (bVar5) {
                          cVar1 = param_2[0x12];
                        }
                        if (bVar5 && cVar1 == 'l') {
                          cVar1 = param_2[0x13];
                          bVar5 = cVar1 == 't';
                          if (bVar5) {
                            cVar1 = param_2[0x14];
                          }
                          if (bVar5 && cVar1 == 'y') {
                            uVar3 = 0x300;
                            goto LAB_0111b3dc;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    break;
  case 0x17:
    if (*param_2 == 'm') {
      cVar1 = param_2[1];
      bVar5 = cVar1 == 'i';
      if (bVar5) {
        cVar1 = param_2[2];
      }
      if (bVar5 && cVar1 == 'n') {
        cVar1 = param_2[3];
        bVar5 = cVar1 == 'i';
        if (bVar5) {
          cVar1 = param_2[4];
        }
        if (bVar5 && cVar1 == 'n') {
          cVar1 = param_2[5];
          bVar5 = cVar1 == 'g';
          if (bVar5) {
            cVar1 = param_2[6];
          }
          if (bVar5 && cVar1 == '.') {
            cVar1 = param_2[7];
            bVar5 = cVar1 == 's';
            if (bVar5) {
              cVar1 = param_2[8];
            }
            if (bVar5 && cVar1 == 'e') {
              cVar1 = param_2[9];
              bVar5 = cVar1 == 't';
              if (bVar5) {
                cVar1 = param_2[10];
              }
              if (bVar5 && cVar1 == '_') {
                cVar1 = param_2[0xb];
                bVar5 = cVar1 == 'v';
                if (bVar5) {
                  cVar1 = param_2[0xc];
                }
                if (bVar5 && cVar1 == 'e') {
                  cVar1 = param_2[0xd];
                  bVar5 = cVar1 == 'r';
                  if (bVar5) {
                    cVar1 = param_2[0xe];
                  }
                  if (bVar5 && cVar1 == 's') {
                    cVar1 = param_2[0xf];
                    bVar5 = cVar1 == 'i';
                    if (bVar5) {
                      cVar1 = param_2[0x10];
                    }
                    if (bVar5 && cVar1 == 'o') {
                      cVar1 = param_2[0x11];
                      bVar5 = cVar1 == 'n';
                      if (bVar5) {
                        cVar1 = param_2[0x12];
                      }
                      if (bVar5 && cVar1 == '_') {
                        cVar1 = param_2[0x13];
                        bVar5 = cVar1 == 'm';
                        if (bVar5) {
                          cVar1 = param_2[0x14];
                        }
                        if (bVar5 && cVar1 == 'a') {
                          cVar1 = param_2[0x15];
                          bVar5 = cVar1 == 's';
                          if (bVar5) {
                            cVar1 = param_2[0x16];
                          }
                          if (bVar5 && cVar1 == 'k') {
                            uVar3 = 0x800;
                            goto LAB_0111b3dc;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    break;
  case 0x1b:
    if (*param_2 == 'm') {
      cVar1 = param_2[1];
      bVar5 = cVar1 == 'i';
      if (bVar5) {
        cVar1 = param_2[2];
      }
      if (bVar5 && cVar1 == 'n') {
        cVar1 = param_2[3];
        bVar5 = cVar1 == 'i';
        if (bVar5) {
          cVar1 = param_2[4];
        }
        if (bVar5 && cVar1 == 'n') {
          cVar1 = param_2[5];
          bVar5 = cVar1 == 'g';
          if (bVar5) {
            cVar1 = param_2[6];
          }
          if (bVar5 && cVar1 == '.') {
            cVar1 = param_2[7];
            bVar5 = cVar1 == 'e';
            if (bVar5) {
              cVar1 = param_2[8];
            }
            if (bVar5 && cVar1 == 'x') {
              cVar1 = param_2[9];
              bVar5 = cVar1 == 't';
              if (bVar5) {
                cVar1 = param_2[10];
              }
              if (bVar5 && cVar1 == 'r') {
                cVar1 = param_2[0xb];
                bVar5 = cVar1 == 'a';
                if (bVar5) {
                  cVar1 = param_2[0xc];
                }
                if (bVar5 && cVar1 == 'n') {
                  cVar1 = param_2[0xd];
                  bVar5 = cVar1 == 'o';
                  if (bVar5) {
                    cVar1 = param_2[0xe];
                  }
                  if (bVar5 && cVar1 == 'n') {
                    cVar1 = param_2[0xf];
                    bVar5 = cVar1 == 'c';
                    if (bVar5) {
                      cVar1 = param_2[0x10];
                    }
                    if (bVar5 && cVar1 == 'e') {
                      cVar1 = param_2[0x11];
                      bVar5 = cVar1 == '.';
                      if (bVar5) {
                        cVar1 = param_2[0x12];
                      }
                      if (bVar5 && cVar1 == 's') {
                        cVar1 = param_2[0x13];
                        bVar5 = cVar1 == 'u';
                        if (bVar5) {
                          cVar1 = param_2[0x14];
                        }
                        if (bVar5 && cVar1 == 'b') {
                          cVar1 = param_2[0x15];
                          bVar5 = cVar1 == 's';
                          if (bVar5) {
                            cVar1 = param_2[0x16];
                          }
                          if (bVar5 && cVar1 == 'c') {
                            cVar1 = param_2[0x17];
                            bVar5 = cVar1 == 'r';
                            if (bVar5) {
                              cVar1 = param_2[0x18];
                            }
                            if (bVar5 && cVar1 == 'i') {
                              cVar1 = param_2[0x19];
                              bVar5 = cVar1 == 'b';
                              if (bVar5) {
                                cVar1 = param_2[0x1a];
                              }
                              if (bVar5 && cVar1 == 'e') {
                                uVar3 = 0x100;
                                goto LAB_0111b3dc;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_006008c8(&local_1c);
  uVar2 = FUN_01125770(local_18,local_14);
  *(undefined4 *)(param_1 + 2) = uVar2;
  *(undefined1 *)param_1 = 1;
  if ((local_1c & 0x7fffffff) == 0) {
    return;
  }
  thunk_FUN_016d3fb4(local_18);
  return;
}

