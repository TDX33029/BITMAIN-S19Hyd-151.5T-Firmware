// FUN_008f8660 @ 008f8660 size=472 calls_out=0 calls_in=1
// strings: 

void FUN_008f8660(undefined4 *param_1,char *param_2,undefined4 param_3)

{
  char cVar1;
  undefined1 uVar2;
  bool bVar3;
  bool bVar4;
  
  switch(param_3) {
  case 4:
    if (*param_2 == 'm') {
      cVar1 = param_2[1];
      bVar4 = cVar1 == 'o';
      if (bVar4) {
        cVar1 = param_2[2];
      }
      if ((bVar4 && cVar1 == 'd') && (uVar2 = 1, param_2[3] == 'e')) goto LAB_008f87d4;
    }
    break;
  case 7:
    cVar1 = *param_2;
    bVar4 = cVar1 == 'e';
    if (bVar4) {
      cVar1 = param_2[1];
    }
    bVar3 = bVar4 && cVar1 == 'n';
    if (bVar4 && cVar1 == 'n') {
      bVar3 = param_2[2] == 'a';
    }
    if ((bVar3) && (param_2[3] == 'b')) {
      cVar1 = param_2[4];
      bVar4 = cVar1 == 'l';
      if (bVar4) {
        cVar1 = param_2[5];
      }
      if ((bVar4 && cVar1 == 'e') && (uVar2 = 0, param_2[6] == 'd')) goto LAB_008f87d4;
    }
    break;
  case 0xc:
    if (*param_2 == 'p') {
      cVar1 = param_2[1];
      bVar4 = cVar1 == 'o';
      if (bVar4) {
        cVar1 = param_2[2];
      }
      if (bVar4 && cVar1 == 'w') {
        cVar1 = param_2[3];
        bVar4 = cVar1 == 'e';
        if (bVar4) {
          cVar1 = param_2[4];
        }
        if (bVar4 && cVar1 == 'r') {
          cVar1 = param_2[5];
          bVar4 = cVar1 == '_';
          if (bVar4) {
            cVar1 = param_2[6];
          }
          if (bVar4 && cVar1 == 't') {
            cVar1 = param_2[7];
            bVar4 = cVar1 == 'a';
            if (bVar4) {
              cVar1 = param_2[8];
            }
            if (bVar4 && cVar1 == 'r') {
              cVar1 = param_2[9];
              bVar4 = cVar1 == 'g';
              if (bVar4) {
                cVar1 = param_2[10];
              }
              if (bVar4 && cVar1 == 'e') {
                cVar1 = param_2[0xb];
                uVar2 = 2;
LAB_008f8754:
                if (cVar1 != 't') {
                  uVar2 = 4;
                }
                *(undefined1 *)(param_1 + 1) = uVar2;
                *param_1 = 2;
                return;
              }
            }
          }
        }
      }
    }
    break;
  case 0xf:
    cVar1 = *param_2;
    bVar4 = cVar1 == 'h';
    if (bVar4) {
      cVar1 = param_2[1];
    }
    if (bVar4 && cVar1 == 'a') {
      cVar1 = param_2[2];
      bVar4 = cVar1 == 's';
      if (bVar4) {
        cVar1 = param_2[3];
      }
      if (bVar4 && cVar1 == 'h') {
        cVar1 = param_2[4];
        bVar4 = cVar1 == 'r';
        if (bVar4) {
          cVar1 = param_2[5];
        }
        if (bVar4 && cVar1 == 'a') {
          cVar1 = param_2[6];
          bVar4 = cVar1 == 't';
          if (bVar4) {
            cVar1 = param_2[7];
          }
          if (bVar4 && cVar1 == 'e') {
            cVar1 = param_2[8];
            bVar4 = cVar1 == '_';
            if (bVar4) {
              cVar1 = param_2[9];
            }
            if (bVar4 && cVar1 == 't') {
              cVar1 = param_2[10];
              bVar4 = cVar1 == 'a';
              if (bVar4) {
                cVar1 = param_2[0xb];
              }
              if (bVar4 && cVar1 == 'r') {
                cVar1 = param_2[0xc];
                bVar4 = cVar1 == 'g';
                if (bVar4) {
                  cVar1 = param_2[0xd];
                }
                if (bVar4 && cVar1 == 'e') {
                  cVar1 = param_2[0xe];
                  uVar2 = 3;
                  goto LAB_008f8754;
                }
              }
            }
          }
        }
      }
    }
  }
  uVar2 = 4;
LAB_008f87d4:
  *(undefined1 *)(param_1 + 1) = uVar2;
  *param_1 = 2;
  return;
}

