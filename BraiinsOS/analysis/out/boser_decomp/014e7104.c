// FUN_014e7104 @ 014e7104 size=620 calls_out=3 calls_in=1
// strings: 

void FUN_014e7104(undefined2 *param_1,char *param_2,int param_3)

{
  char cVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  bool bVar4;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if (param_3 == 6) {
    cVar1 = *param_2;
    if (cVar1 == 'a') {
      if (param_2[1] == 's') {
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
            uVar2 = 0x400;
            goto LAB_014e72ac;
          }
        }
      }
    }
    else {
      bVar4 = cVar1 == 'c';
      if (bVar4) {
        cVar1 = param_2[1];
      }
      if (bVar4 && cVar1 == 'o') {
        cVar1 = param_2[2];
        bVar4 = cVar1 == 'm';
        if (bVar4) {
          cVar1 = param_2[3];
        }
        if (bVar4 && cVar1 == 'm') {
          cVar1 = param_2[4];
          bVar4 = cVar1 == 'i';
          if (bVar4) {
            cVar1 = param_2[5];
          }
          if (bVar4 && cVar1 == 't') {
            uVar2 = 0x100;
LAB_014e72ac:
            *param_1 = uVar2;
            return;
          }
        }
      }
    }
  }
  else if (param_3 == 0xc) {
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
                uVar2 = 0x200;
                goto LAB_014e72ac;
              }
            }
          }
        }
      }
    }
  }
  else if (param_3 == 0xb) {
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
                uVar2 = 0x300;
                goto LAB_014e72ac;
              }
            }
          }
        }
      }
    }
    else if (*param_2 == 'b') {
      cVar1 = param_2[1];
      bVar4 = cVar1 == 'm';
      if (bVar4) {
        cVar1 = param_2[2];
      }
      if (bVar4 && cVar1 == 'a') {
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
                goto LAB_014e72ac;
              }
            }
          }
        }
      }
    }
  }
  FUN_006643f0(&local_1c);
  uVar3 = FUN_014dedb0(local_18,local_14,&DAT_01cfa214,5);
  *(undefined1 *)param_1 = 1;
  *(undefined4 *)(param_1 + 2) = uVar3;
  if (local_1c != -0x80000000) {
    FUN_019bb7e0(local_1c,local_18);
  }
  return;
}

