// FUN_012585ec @ 012585ec size=1228 calls_out=3 calls_in=1
// strings: 

void FUN_012585ec(undefined4 *param_1,char *param_2,undefined4 param_3)

{
  char cVar1;
  undefined1 uVar2;
  bool bVar3;
  int local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  switch(param_3) {
  case 7:
    if (*param_2 == 'e') {
      cVar1 = param_2[1];
      bVar3 = cVar1 == 'n';
      if (bVar3) {
        cVar1 = param_2[2];
      }
      if (bVar3 && cVar1 == 'a') {
        cVar1 = param_2[3];
        bVar3 = cVar1 == 'b';
        if (bVar3) {
          cVar1 = param_2[4];
        }
        if (bVar3 && cVar1 == 'l') {
          cVar1 = param_2[5];
          bVar3 = cVar1 == 'e';
          if (bVar3) {
            cVar1 = param_2[6];
          }
          if (bVar3 && cVar1 == 'd') {
            *param_1 = 2;
            uVar2 = 0;
LAB_01258698:
            *(undefined1 *)(param_1 + 1) = uVar2;
            return;
          }
        }
      }
    }
    break;
  case 10:
    cVar1 = *param_2;
    bVar3 = cVar1 == 'p';
    if (bVar3) {
      cVar1 = param_2[1];
    }
    if (bVar3 && cVar1 == 'o') {
      cVar1 = param_2[2];
      bVar3 = cVar1 == 'w';
      if (bVar3) {
        cVar1 = param_2[3];
      }
      if (bVar3 && cVar1 == 'e') {
        cVar1 = param_2[4];
        bVar3 = cVar1 == 'r';
        if (bVar3) {
          cVar1 = param_2[5];
        }
        if (bVar3 && cVar1 == '_') {
          cVar1 = param_2[6];
          bVar3 = cVar1 == 's';
          if (bVar3) {
            cVar1 = param_2[7];
          }
          if (bVar3 && cVar1 == 't') {
            cVar1 = param_2[8];
            bVar3 = cVar1 == 'e';
            if (bVar3) {
              cVar1 = param_2[9];
            }
            if (bVar3 && cVar1 == 'p') {
              *param_1 = 2;
              uVar2 = 1;
              goto LAB_01258698;
            }
          }
        }
      }
    }
    break;
  case 0xd:
    if (*param_2 == 'h') {
      cVar1 = param_2[1];
      bVar3 = cVar1 == 'a';
      if (bVar3) {
        cVar1 = param_2[2];
      }
      if (bVar3 && cVar1 == 's') {
        cVar1 = param_2[3];
        bVar3 = cVar1 == 'h';
        if (bVar3) {
          cVar1 = param_2[4];
        }
        if (bVar3 && cVar1 == 'r') {
          cVar1 = param_2[5];
          bVar3 = cVar1 == 'a';
          if (bVar3) {
            cVar1 = param_2[6];
          }
          if (bVar3 && cVar1 == 't') {
            cVar1 = param_2[7];
            bVar3 = cVar1 == 'e';
            if (bVar3) {
              cVar1 = param_2[8];
            }
            if (bVar3 && cVar1 == '_') {
              cVar1 = param_2[9];
              bVar3 = cVar1 == 's';
              if (bVar3) {
                cVar1 = param_2[10];
              }
              if (bVar3 && cVar1 == 't') {
                cVar1 = param_2[0xb];
                bVar3 = cVar1 == 'e';
                if (bVar3) {
                  cVar1 = param_2[0xc];
                }
                if (bVar3 && cVar1 == 'p') {
                  *param_1 = 2;
                  uVar2 = 3;
                  goto LAB_01258698;
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
    if (cVar1 == 's') {
      cVar1 = param_2[1];
      bVar3 = cVar1 == 'h';
      if (bVar3) {
        cVar1 = param_2[2];
      }
      if ((bVar3 && cVar1 == 'u') && (param_2[3] == 't')) {
        cVar1 = param_2[4];
        bVar3 = cVar1 == 'd';
        if (bVar3) {
          cVar1 = param_2[5];
        }
        if (bVar3 && cVar1 == 'o') {
          cVar1 = param_2[6];
          bVar3 = cVar1 == 'w';
          if (bVar3) {
            cVar1 = param_2[7];
          }
          if (bVar3 && cVar1 == 'n') {
            cVar1 = param_2[8];
            bVar3 = cVar1 == '_';
            if (bVar3) {
              cVar1 = param_2[9];
            }
            if (bVar3 && cVar1 == 'e') {
              cVar1 = param_2[10];
              bVar3 = cVar1 == 'n';
              if (bVar3) {
                cVar1 = param_2[0xb];
              }
              if (bVar3 && cVar1 == 'a') {
                cVar1 = param_2[0xc];
                bVar3 = cVar1 == 'b';
                if (bVar3) {
                  cVar1 = param_2[0xd];
                }
                if (bVar3 && cVar1 == 'l') {
                  cVar1 = param_2[0xe];
                  bVar3 = cVar1 == 'e';
                  if (bVar3) {
                    cVar1 = param_2[0xf];
                  }
                  if (bVar3 && cVar1 == 'd') {
                    *param_1 = 2;
                    uVar2 = 5;
                    goto LAB_01258698;
                  }
                }
              }
            }
          }
        }
      }
    }
    else {
      bVar3 = cVar1 == 'm';
      if (bVar3) {
        cVar1 = param_2[1];
      }
      if (bVar3 && cVar1 == 'i') {
        cVar1 = param_2[2];
        bVar3 = cVar1 == 'n';
        if (bVar3) {
          cVar1 = param_2[3];
        }
        if (bVar3 && cVar1 == '_') {
          cVar1 = param_2[4];
          bVar3 = cVar1 == 'p';
          if (bVar3) {
            cVar1 = param_2[5];
          }
          if (bVar3 && cVar1 == 'o') {
            cVar1 = param_2[6];
            bVar3 = cVar1 == 'w';
            if (bVar3) {
              cVar1 = param_2[7];
            }
            if (bVar3 && cVar1 == 'e') {
              cVar1 = param_2[8];
              bVar3 = cVar1 == 'r';
              if (bVar3) {
                cVar1 = param_2[9];
              }
              if (bVar3 && cVar1 == '_') {
                cVar1 = param_2[10];
                bVar3 = cVar1 == 't';
                if (bVar3) {
                  cVar1 = param_2[0xb];
                }
                if (bVar3 && cVar1 == 'a') {
                  cVar1 = param_2[0xc];
                  bVar3 = cVar1 == 'r';
                  if (bVar3) {
                    cVar1 = param_2[0xd];
                  }
                  if (bVar3 && cVar1 == 'g') {
                    cVar1 = param_2[0xe];
                    bVar3 = cVar1 == 'e';
                    if (bVar3) {
                      cVar1 = param_2[0xf];
                    }
                    if (bVar3 && cVar1 == 't') {
                      uVar2 = 2;
                      *param_1 = 2;
                      goto LAB_01258698;
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
  case 0x11:
    if (*param_2 == 's') {
      cVar1 = param_2[1];
      bVar3 = cVar1 == 'h';
      if (bVar3) {
        cVar1 = param_2[2];
      }
      if (bVar3 && cVar1 == 'u') {
        cVar1 = param_2[3];
        bVar3 = cVar1 == 't';
        if (bVar3) {
          cVar1 = param_2[4];
        }
        if (bVar3 && cVar1 == 'd') {
          cVar1 = param_2[5];
          bVar3 = cVar1 == 'o';
          if (bVar3) {
            cVar1 = param_2[6];
          }
          if (bVar3 && cVar1 == 'w') {
            cVar1 = param_2[7];
            bVar3 = cVar1 == 'n';
            if (bVar3) {
              cVar1 = param_2[8];
            }
            if (bVar3 && cVar1 == '_') {
              cVar1 = param_2[9];
              bVar3 = cVar1 == 'd';
              if (bVar3) {
                cVar1 = param_2[10];
              }
              if (bVar3 && cVar1 == 'u') {
                cVar1 = param_2[0xb];
                bVar3 = cVar1 == 'r';
                if (bVar3) {
                  cVar1 = param_2[0xc];
                }
                if (bVar3 && cVar1 == 'a') {
                  cVar1 = param_2[0xd];
                  bVar3 = cVar1 == 't';
                  if (bVar3) {
                    cVar1 = param_2[0xe];
                  }
                  if (bVar3 && cVar1 == 'i') {
                    cVar1 = param_2[0xf];
                    bVar3 = cVar1 == 'o';
                    if (bVar3) {
                      cVar1 = param_2[0x10];
                    }
                    if (bVar3 && cVar1 == 'n') {
                      *param_1 = 2;
                      uVar2 = 6;
                      goto LAB_01258698;
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
  case 0x13:
    if (*param_2 == 'm') {
      cVar1 = param_2[1];
      bVar3 = cVar1 == 'i';
      if (bVar3) {
        cVar1 = param_2[2];
      }
      if (bVar3 && cVar1 == 'n') {
        cVar1 = param_2[3];
        bVar3 = cVar1 == '_';
        if (bVar3) {
          cVar1 = param_2[4];
        }
        if (bVar3 && cVar1 == 'h') {
          cVar1 = param_2[5];
          bVar3 = cVar1 == 'a';
          if (bVar3) {
            cVar1 = param_2[6];
          }
          if (bVar3 && cVar1 == 's') {
            cVar1 = param_2[7];
            bVar3 = cVar1 == 'h';
            if (bVar3) {
              cVar1 = param_2[8];
            }
            if (bVar3 && cVar1 == 'r') {
              cVar1 = param_2[9];
              bVar3 = cVar1 == 'a';
              if (bVar3) {
                cVar1 = param_2[10];
              }
              if (bVar3 && cVar1 == 't') {
                cVar1 = param_2[0xb];
                bVar3 = cVar1 == 'e';
                if (bVar3) {
                  cVar1 = param_2[0xc];
                }
                if (bVar3 && cVar1 == '_') {
                  cVar1 = param_2[0xd];
                  bVar3 = cVar1 == 't';
                  if (bVar3) {
                    cVar1 = param_2[0xe];
                  }
                  if (bVar3 && cVar1 == 'a') {
                    cVar1 = param_2[0xf];
                    bVar3 = cVar1 == 'r';
                    if (bVar3) {
                      cVar1 = param_2[0x10];
                    }
                    if (bVar3 && cVar1 == 'g') {
                      cVar1 = param_2[0x11];
                      bVar3 = cVar1 == 'e';
                      if (bVar3) {
                        cVar1 = param_2[0x12];
                      }
                      if (bVar3 && cVar1 == 't') {
                        *param_1 = 2;
                        uVar2 = 4;
                        goto LAB_01258698;
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
  FUN_006643f0(&local_54);
  FUN_0123bfbc(&local_48,local_50,local_4c,&DAT_01c24f18,7);
  *param_1 = local_48;
  param_1[1] = uStack_44;
  param_1[2] = uStack_40;
  param_1[3] = uStack_3c;
  param_1[4] = uStack_38;
  param_1[5] = uStack_34;
  param_1[6] = local_30;
  param_1[7] = uStack_2c;
  param_1[8] = uStack_28;
  param_1[9] = uStack_24;
  param_1[10] = uStack_20;
  param_1[0xb] = uStack_1c;
  if (local_54 != -0x80000000) {
    FUN_019bb7e0(local_54,local_50);
  }
  return;
}

