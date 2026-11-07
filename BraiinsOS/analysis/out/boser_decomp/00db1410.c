// FUN_00db1410 @ 00db1410 size=448 calls_out=0 calls_in=2
// strings: 

void FUN_00db1410(undefined1 *param_1,char *param_2,undefined4 param_3)

{
  char cVar1;
  undefined1 uVar2;
  bool bVar3;
  bool bVar4;
  
  switch(param_3) {
  case 5:
    cVar1 = *param_2;
    bVar4 = cVar1 == 'q';
    if (bVar4) {
      cVar1 = param_2[1];
    }
    bVar3 = bVar4 && cVar1 == 'u';
    if (bVar4 && cVar1 == 'u') {
      bVar3 = param_2[2] == 'e';
    }
    if (((bVar3) && (param_2[3] == 'r')) && (uVar2 = 0, param_2[4] == 'y')) goto LAB_00db156c;
    break;
  case 9:
    cVar1 = *param_2;
    bVar4 = cVar1 == 'v';
    if (bVar4) {
      cVar1 = param_2[1];
    }
    if (bVar4 && cVar1 == 'a') {
      cVar1 = param_2[2];
      bVar4 = cVar1 == 'r';
      if (bVar4) {
        cVar1 = param_2[3];
      }
      if (bVar4 && cVar1 == 'i') {
        cVar1 = param_2[4];
        bVar4 = cVar1 == 'a';
        if (bVar4) {
          cVar1 = param_2[5];
        }
        if (bVar4 && cVar1 == 'b') {
          cVar1 = param_2[6];
          bVar4 = cVar1 == 'l';
          if (bVar4) {
            cVar1 = param_2[7];
          }
          if (bVar4 && cVar1 == 'e') {
            cVar1 = param_2[8];
            uVar2 = 2;
LAB_00db1548:
            if (cVar1 != 's') {
              uVar2 = 4;
            }
            goto LAB_00db156c;
          }
        }
      }
    }
    break;
  case 10:
    if (*param_2 == 'e') {
      cVar1 = param_2[1];
      bVar4 = cVar1 == 'x';
      if (bVar4) {
        cVar1 = param_2[2];
      }
      if (bVar4 && cVar1 == 't') {
        cVar1 = param_2[3];
        bVar4 = cVar1 == 'e';
        if (bVar4) {
          cVar1 = param_2[4];
        }
        if (bVar4 && cVar1 == 'n') {
          cVar1 = param_2[5];
          bVar4 = cVar1 == 's';
          if (bVar4) {
            cVar1 = param_2[6];
          }
          if (bVar4 && cVar1 == 'i') {
            cVar1 = param_2[7];
            bVar4 = cVar1 == 'o';
            if (bVar4) {
              cVar1 = param_2[8];
            }
            if (bVar4 && cVar1 == 'n') {
              cVar1 = param_2[9];
              uVar2 = 3;
              goto LAB_00db1548;
            }
          }
        }
      }
    }
    break;
  case 0xd:
    cVar1 = *param_2;
    bVar4 = cVar1 == 'o';
    if (bVar4) {
      cVar1 = param_2[1];
    }
    if (bVar4 && cVar1 == 'p') {
      cVar1 = param_2[2];
      bVar4 = cVar1 == 'e';
      if (bVar4) {
        cVar1 = param_2[3];
      }
      if (bVar4 && cVar1 == 'r') {
        cVar1 = param_2[4];
        bVar4 = cVar1 == 'a';
        if (bVar4) {
          cVar1 = param_2[5];
        }
        if (bVar4 && cVar1 == 't') {
          cVar1 = param_2[6];
          bVar4 = cVar1 == 'i';
          if (bVar4) {
            cVar1 = param_2[7];
          }
          if (bVar4 && cVar1 == 'o') {
            cVar1 = param_2[8];
            bVar4 = cVar1 == 'n';
            if (bVar4) {
              cVar1 = param_2[9];
            }
            if (bVar4 && cVar1 == 'N') {
              cVar1 = param_2[10];
              bVar4 = cVar1 == 'a';
              if (bVar4) {
                cVar1 = param_2[0xb];
              }
              if ((bVar4 && cVar1 == 'm') && (uVar2 = 1, param_2[0xc] == 'e')) goto LAB_00db156c;
            }
          }
        }
      }
    }
  }
  uVar2 = 4;
LAB_00db156c:
  param_1[1] = uVar2;
  *param_1 = 0;
  return;
}

