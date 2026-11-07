// FUN_014f0df0 @ 014f0df0 size=908 calls_out=3 calls_in=1
// strings: 

void FUN_014f0df0(undefined2 *param_1,char *param_2,undefined4 param_3)

{
  char cVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  bool bVar4;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  switch(param_3) {
  case 6:
    cVar1 = *param_2;
    bVar4 = cVar1 == 'a';
    if (bVar4) {
      cVar1 = param_2[1];
    }
    if (bVar4 && cVar1 == 's') {
      cVar1 = param_2[2];
      bVar4 = cVar1 == 's';
      if (bVar4) {
        cVar1 = param_2[3];
      }
      if (bVar4 && cVar1 == 'e') {
        cVar1 = param_2[4];
        bVar4 = cVar1 == 't';
        if (bVar4) {
          cVar1 = param_2[5];
        }
        if (bVar4 && cVar1 == 's') {
          uVar2 = 0x600;
LAB_014f0e80:
          *param_1 = uVar2;
          return;
        }
      }
    }
    break;
  case 8:
    cVar1 = *param_2;
    bVar4 = cVar1 == 'i';
    if (bVar4) {
      cVar1 = param_2[1];
    }
    if (bVar4 && cVar1 == 's') {
      cVar1 = param_2[2];
      bVar4 = cVar1 == '_';
      if (bVar4) {
        cVar1 = param_2[3];
      }
      if (bVar4 && cVar1 == 'm') {
        cVar1 = param_2[4];
        bVar4 = cVar1 == 'a';
        if (bVar4) {
          cVar1 = param_2[5];
        }
        if (bVar4 && cVar1 == 'j') {
          cVar1 = param_2[6];
          bVar4 = cVar1 == 'o';
          if (bVar4) {
            cVar1 = param_2[7];
          }
          if (bVar4 && cVar1 == 'r') {
            uVar2 = 0x100;
            goto LAB_014f0e80;
          }
        }
      }
    }
    break;
  case 9:
    if (*param_2 == 'i') {
      cVar1 = param_2[1];
      bVar4 = cVar1 == 's';
      if (bVar4) {
        cVar1 = param_2[2];
      }
      if (bVar4 && cVar1 == '_') {
        cVar1 = param_2[3];
        bVar4 = cVar1 == 's';
        if (bVar4) {
          cVar1 = param_2[4];
        }
        if (bVar4 && cVar1 == 'i') {
          cVar1 = param_2[5];
          bVar4 = cVar1 == 'l';
          if (bVar4) {
            cVar1 = param_2[6];
          }
          if (bVar4 && cVar1 == 'e') {
            cVar1 = param_2[7];
            bVar4 = cVar1 == 'n';
            if (bVar4) {
              cVar1 = param_2[8];
            }
            if (bVar4 && cVar1 == 't') {
              uVar2 = 0x200;
              goto LAB_014f0e80;
            }
          }
        }
      }
    }
    break;
  case 0xb:
    if (*param_2 == 'd') {
      cVar1 = param_2[1];
      bVar4 = cVar1 == 'e';
      if (bVar4) {
        cVar1 = param_2[2];
      }
      if (bVar4 && cVar1 == 's') {
        cVar1 = param_2[3];
        bVar4 = cVar1 == 'c';
        if (bVar4) {
          cVar1 = param_2[4];
        }
        if (bVar4 && cVar1 == 'r') {
          cVar1 = param_2[5];
          bVar4 = cVar1 == 'i';
          if (bVar4) {
            cVar1 = param_2[6];
          }
          if (bVar4 && cVar1 == 'p') {
            cVar1 = param_2[7];
            bVar4 = cVar1 == 't';
            if (bVar4) {
              cVar1 = param_2[8];
            }
            if (bVar4 && cVar1 == 'i') {
              cVar1 = param_2[9];
              bVar4 = cVar1 == 'o';
              if (bVar4) {
                cVar1 = param_2[10];
              }
              if (bVar4 && cVar1 == 'n') {
                uVar2 = 0x500;
                goto LAB_014f0e80;
              }
            }
          }
        }
      }
    }
    else if (*param_2 == 'b') {
      cVar1 = param_2[1];
      bVar4 = cVar1 == 'o';
      if (bVar4) {
        cVar1 = param_2[2];
      }
      if (bVar4 && cVar1 == 's') {
        cVar1 = param_2[3];
        bVar4 = cVar1 == '_';
        if (bVar4) {
          cVar1 = param_2[4];
        }
        if (bVar4 && cVar1 == 'v') {
          cVar1 = param_2[5];
          bVar4 = cVar1 == 'e';
          if (bVar4) {
            cVar1 = param_2[6];
          }
          if (bVar4 && cVar1 == 'r') {
            cVar1 = param_2[7];
            bVar4 = cVar1 == 's';
            if (bVar4) {
              cVar1 = param_2[8];
            }
            if (bVar4 && cVar1 == 'i') {
              cVar1 = param_2[9];
              bVar4 = cVar1 == 'o';
              if (bVar4) {
                cVar1 = param_2[10];
              }
              if (bVar4 && cVar1 == 'n') {
                uVar2 = 0;
                goto LAB_014f0e80;
              }
            }
          }
        }
      }
    }
    break;
  case 0xc:
    cVar1 = *param_2;
    bVar4 = cVar1 == 'r';
    if (bVar4) {
      cVar1 = param_2[1];
    }
    if (bVar4 && cVar1 == 'e') {
      cVar1 = param_2[2];
      bVar4 = cVar1 == 'l';
      if (bVar4) {
        cVar1 = param_2[3];
      }
      if (bVar4 && cVar1 == 'e') {
        cVar1 = param_2[4];
        bVar4 = cVar1 == 'a';
        if (bVar4) {
          cVar1 = param_2[5];
        }
        if (bVar4 && cVar1 == 's') {
          cVar1 = param_2[6];
          bVar4 = cVar1 == 'e';
          if (bVar4) {
            cVar1 = param_2[7];
          }
          if (bVar4 && cVar1 == '_') {
            cVar1 = param_2[8];
            bVar4 = cVar1 == 'd';
            if (bVar4) {
              cVar1 = param_2[9];
            }
            if (bVar4 && cVar1 == 'a') {
              cVar1 = param_2[10];
              bVar4 = cVar1 == 't';
              if (bVar4) {
                cVar1 = param_2[0xb];
              }
              if (bVar4 && cVar1 == 'e') {
                uVar2 = 0x300;
                goto LAB_014f0e80;
              }
            }
          }
        }
      }
    }
    break;
  case 0x10:
    cVar1 = *param_2;
    bVar4 = cVar1 == 's';
    if (bVar4) {
      cVar1 = param_2[1];
    }
    if (bVar4 && cVar1 == 'u') {
      cVar1 = param_2[2];
      bVar4 = cVar1 == 'p';
      if (bVar4) {
        cVar1 = param_2[3];
      }
      if (bVar4 && cVar1 == 'p') {
        cVar1 = param_2[4];
        bVar4 = cVar1 == 'o';
        if (bVar4) {
          cVar1 = param_2[5];
        }
        if (bVar4 && cVar1 == 'r') {
          cVar1 = param_2[6];
          bVar4 = cVar1 == 't';
          if (bVar4) {
            cVar1 = param_2[7];
          }
          if (bVar4 && cVar1 == 'e') {
            cVar1 = param_2[8];
            bVar4 = cVar1 == 'd';
            if (bVar4) {
              cVar1 = param_2[9];
            }
            if (bVar4 && cVar1 == '_') {
              cVar1 = param_2[10];
              bVar4 = cVar1 == 'm';
              if (bVar4) {
                cVar1 = param_2[0xb];
              }
              if (bVar4 && cVar1 == 'o') {
                cVar1 = param_2[0xc];
                bVar4 = cVar1 == 'd';
                if (bVar4) {
                  cVar1 = param_2[0xd];
                }
                if (bVar4 && cVar1 == 'e') {
                  cVar1 = param_2[0xe];
                  bVar4 = cVar1 == 'l';
                  if (bVar4) {
                    cVar1 = param_2[0xf];
                  }
                  if (bVar4 && cVar1 == 's') {
                    uVar2 = 0x400;
                    goto LAB_014f0e80;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_006643f0(&local_1c);
  uVar3 = FUN_014dedb0(local_18,local_14,&DAT_01cfa44c,7);
  *(undefined1 *)param_1 = 1;
  *(undefined4 *)(param_1 + 2) = uVar3;
  if (local_1c != -0x80000000) {
    FUN_019bb7e0(local_1c,local_18);
  }
  return;
}

