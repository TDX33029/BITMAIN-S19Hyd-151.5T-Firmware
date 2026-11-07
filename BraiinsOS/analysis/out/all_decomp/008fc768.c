// FUN_008fc768 @ 008fc768 size=808 calls_out=3 calls_in=1
// strings: 

void FUN_008fc768(undefined4 *param_1,char *param_2,undefined4 param_3)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  uint local_54;
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
  case 5:
    if (*param_2 == 'g') {
      cVar1 = param_2[1];
      bVar2 = cVar1 == 'r';
      if (bVar2) {
        cVar1 = param_2[2];
      }
      if (bVar2 && cVar1 == 'o') {
        cVar1 = param_2[3];
        bVar2 = cVar1 == 'u';
        if (bVar2) {
          cVar1 = param_2[4];
        }
        if (bVar2 && cVar1 == 'p') {
          *param_1 = 2;
          *(undefined1 *)(param_1 + 1) = 4;
          return;
        }
      }
    }
    break;
  case 10:
    cVar1 = *param_2;
    bVar2 = cVar1 == 'h';
    if (bVar2) {
      cVar1 = param_2[1];
    }
    if (bVar2 && cVar1 == 'a') {
      cVar1 = param_2[2];
      bVar2 = cVar1 == 's';
      if (bVar2) {
        cVar1 = param_2[3];
      }
      if (bVar2 && cVar1 == 'h') {
        cVar1 = param_2[4];
        bVar2 = cVar1 == '_';
        if (bVar2) {
          cVar1 = param_2[5];
        }
        if (bVar2 && cVar1 == 'c') {
          cVar1 = param_2[6];
          bVar2 = cVar1 == 'h';
          if (bVar2) {
            cVar1 = param_2[7];
          }
          if (bVar2 && cVar1 == 'a') {
            cVar1 = param_2[8];
            bVar2 = cVar1 == 'i';
            if (bVar2) {
              cVar1 = param_2[9];
            }
            if (bVar2 && cVar1 == 'n') {
              *param_1 = 2;
              *(undefined1 *)(param_1 + 1) = 1;
              return;
            }
          }
        }
      }
    }
    break;
  case 0xb:
    if (*param_2 == 'f') {
      cVar1 = param_2[1];
      bVar2 = cVar1 == 'a';
      if (bVar2) {
        cVar1 = param_2[2];
      }
      if (bVar2 && cVar1 == 'n') {
        cVar1 = param_2[3];
        bVar2 = cVar1 == '_';
        if (bVar2) {
          cVar1 = param_2[4];
        }
        if (bVar2 && cVar1 == 'c') {
          cVar1 = param_2[5];
          bVar2 = cVar1 == 'o';
          if (bVar2) {
            cVar1 = param_2[6];
          }
          if (bVar2 && cVar1 == 'n') {
            cVar1 = param_2[7];
            bVar2 = cVar1 == 't';
            if (bVar2) {
              cVar1 = param_2[8];
            }
            if (bVar2 && cVar1 == 'r') {
              cVar1 = param_2[9];
              bVar2 = cVar1 == 'o';
              if (bVar2) {
                cVar1 = param_2[10];
              }
              if (bVar2 && cVar1 == 'l') {
                *param_1 = 2;
                *(undefined1 *)(param_1 + 1) = 3;
                return;
              }
            }
          }
        }
      }
    }
    break;
  case 0xc:
    cVar1 = *param_2;
    bVar2 = cVar1 == 't';
    if (bVar2) {
      cVar1 = param_2[1];
    }
    if (bVar2 && cVar1 == 'e') {
      cVar1 = param_2[2];
      bVar2 = cVar1 == 'm';
      if (bVar2) {
        cVar1 = param_2[3];
      }
      if (bVar2 && cVar1 == 'p') {
        cVar1 = param_2[4];
        bVar2 = cVar1 == '_';
        if (bVar2) {
          cVar1 = param_2[5];
        }
        if (bVar2 && cVar1 == 'c') {
          cVar1 = param_2[6];
          bVar2 = cVar1 == 'o';
          if (bVar2) {
            cVar1 = param_2[7];
          }
          if (bVar2 && cVar1 == 'n') {
            cVar1 = param_2[8];
            bVar2 = cVar1 == 't';
            if (bVar2) {
              cVar1 = param_2[9];
            }
            if (bVar2 && cVar1 == 'r') {
              cVar1 = param_2[10];
              bVar2 = cVar1 == 'o';
              if (bVar2) {
                cVar1 = param_2[0xb];
              }
              if (bVar2 && cVar1 == 'l') {
                *param_1 = 2;
                *(undefined1 *)(param_1 + 1) = 2;
                return;
              }
            }
          }
        }
      }
    }
    break;
  case 0x11:
    cVar1 = *param_2;
    bVar2 = cVar1 == 'h';
    if (bVar2) {
      cVar1 = param_2[1];
    }
    bVar3 = bVar2 && cVar1 == 'a';
    if (bVar2 && cVar1 == 'a') {
      bVar3 = param_2[2] == 's';
    }
    if (bVar3) {
      cVar1 = param_2[3];
      bVar2 = cVar1 == 'h';
      if (bVar2) {
        cVar1 = param_2[4];
      }
      if (bVar2 && cVar1 == '_') {
        cVar1 = param_2[5];
        bVar2 = cVar1 == 'c';
        if (bVar2) {
          cVar1 = param_2[6];
        }
        if (bVar2 && cVar1 == 'h') {
          cVar1 = param_2[7];
          bVar2 = cVar1 == 'a';
          if (bVar2) {
            cVar1 = param_2[8];
          }
          if (bVar2 && cVar1 == 'i') {
            cVar1 = param_2[9];
            bVar2 = cVar1 == 'n';
            if (bVar2) {
              cVar1 = param_2[10];
            }
            if (bVar2 && cVar1 == '_') {
              cVar1 = param_2[0xb];
              bVar2 = cVar1 == 'g';
              if (bVar2) {
                cVar1 = param_2[0xc];
              }
              if (bVar2 && cVar1 == 'l') {
                cVar1 = param_2[0xd];
                bVar2 = cVar1 == 'o';
                if (bVar2) {
                  cVar1 = param_2[0xe];
                }
                if (bVar2 && cVar1 == 'b') {
                  cVar1 = param_2[0xf];
                  bVar2 = cVar1 == 'a';
                  if (bVar2) {
                    cVar1 = param_2[0x10];
                  }
                  if (bVar2 && cVar1 == 'l') {
                    *param_1 = 2;
                    *(undefined1 *)(param_1 + 1) = 0;
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_006008c8(&local_54);
  FUN_00924444(&local_48,local_50,local_4c,&DAT_01867910,5);
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
  if ((local_54 & 0x7fffffff) == 0) {
    return;
  }
  thunk_FUN_016d3fb4(local_50);
  return;
}

