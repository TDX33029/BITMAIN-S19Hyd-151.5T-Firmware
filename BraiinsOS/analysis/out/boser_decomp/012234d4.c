// FUN_012234d4 @ 012234d4 size=812 calls_out=4 calls_in=2
// strings: 

void FUN_012234d4(undefined4 *param_1,uint *param_2)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  char *pcVar4;
  undefined1 uVar5;
  bool bVar6;
  undefined1 uStack_11;
  
  uVar3 = 0x15;
  if ((int)*param_2 < 0) {
    uVar3 = *param_2 ^ 0x80000000;
  }
  switch(uVar3) {
  case 1:
    bVar2 = (byte)param_2[1];
    *param_1 = 2;
    if (2 < bVar2) {
      bVar2 = 3;
    }
    goto LAB_012236a8;
  default:
    FUN_012223f8(param_1,param_2,&uStack_11,&DAT_01c246c4);
    return;
  case 4:
    uVar3 = param_2[2];
    if (2 < uVar3) {
      uVar3 = 3;
    }
    bVar2 = (byte)uVar3;
    if (param_2[3] != 0) {
      bVar2 = 3;
    }
    break;
  case 0xc:
    uVar3 = param_2[1];
    pcVar4 = (char *)param_2[2];
    FUN_01231edc(param_1,pcVar4,param_2[3]);
    goto LAB_012236e4;
  case 0xd:
    FUN_01231edc(param_1,param_2[1],param_2[2]);
    goto LAB_012236ac;
  case 0xe:
    uVar3 = param_2[1];
    pcVar4 = (char *)param_2[2];
    if (param_2[3] == 9) {
      cVar1 = *pcVar4;
      bVar6 = cVar1 == 'f';
      if (bVar6) {
        cVar1 = pcVar4[1];
      }
      if (bVar6 && cVar1 == 'r') {
        cVar1 = pcVar4[2];
        bVar6 = cVar1 == 'e';
        if (bVar6) {
          cVar1 = pcVar4[3];
        }
        if (bVar6 && cVar1 == 'q') {
          cVar1 = pcVar4[4];
          bVar6 = cVar1 == 'u';
          if (bVar6) {
            cVar1 = pcVar4[5];
          }
          if (bVar6 && cVar1 == 'e') {
            cVar1 = pcVar4[6];
            bVar6 = cVar1 == 'n';
            if (bVar6) {
              cVar1 = pcVar4[7];
            }
            if (bVar6 && cVar1 == 'c') {
              uVar5 = 1;
              if (pcVar4[8] != 'y') {
                uVar5 = 3;
              }
              goto LAB_012236d4;
            }
          }
        }
      }
LAB_012236d0:
      uVar5 = 3;
    }
    else {
      if (param_2[3] != 7) goto LAB_012236d0;
      cVar1 = *pcVar4;
      if (cVar1 == 'e') {
        if (pcVar4[1] == 'n') {
          cVar1 = pcVar4[2];
          bVar6 = cVar1 == 'a';
          if (bVar6) {
            cVar1 = pcVar4[3];
          }
          if (bVar6 && cVar1 == 'b') {
            cVar1 = pcVar4[4];
            bVar6 = cVar1 == 'l';
            if (bVar6) {
              cVar1 = pcVar4[5];
            }
            if ((bVar6 && cVar1 == 'e') && (uVar5 = 0, pcVar4[6] == 'd')) goto LAB_012236d4;
          }
        }
        goto LAB_012236d0;
      }
      bVar6 = cVar1 != 'v';
      if (!bVar6) {
        cVar1 = pcVar4[1];
      }
      if (bVar6 || cVar1 != 'o') goto LAB_012236d0;
      cVar1 = pcVar4[2];
      bVar6 = cVar1 != 'l';
      if (!bVar6) {
        cVar1 = pcVar4[3];
      }
      if (bVar6 || cVar1 != 't') goto LAB_012236d0;
      cVar1 = pcVar4[4];
      bVar6 = cVar1 != 'a';
      if (!bVar6) {
        cVar1 = pcVar4[5];
      }
      if ((bVar6 || cVar1 != 'g') || (uVar5 = 2, pcVar4[6] != 'e')) goto LAB_012236d0;
    }
LAB_012236d4:
    *(undefined1 *)(param_1 + 1) = uVar5;
    *param_1 = 2;
LAB_012236e4:
    FUN_019bb7e0(uVar3,pcVar4);
    return;
  case 0xf:
    pcVar4 = (char *)param_2[1];
    if (param_2[2] == 9) {
      cVar1 = *pcVar4;
      bVar6 = cVar1 == 'f';
      if (bVar6) {
        cVar1 = pcVar4[1];
      }
      if (bVar6 && cVar1 == 'r') {
        cVar1 = pcVar4[2];
        bVar6 = cVar1 == 'e';
        if (bVar6) {
          cVar1 = pcVar4[3];
        }
        if (bVar6 && cVar1 == 'q') {
          cVar1 = pcVar4[4];
          bVar6 = cVar1 == 'u';
          if (bVar6) {
            cVar1 = pcVar4[5];
          }
          if (bVar6 && cVar1 == 'e') {
            cVar1 = pcVar4[6];
            bVar6 = cVar1 == 'n';
            if (bVar6) {
              cVar1 = pcVar4[7];
            }
            if (bVar6 && cVar1 == 'c') {
              bVar2 = 1;
              if (pcVar4[8] != 'y') {
                bVar2 = 3;
              }
              break;
            }
          }
        }
      }
    }
    else if (param_2[2] == 7) {
      cVar1 = *pcVar4;
      if (cVar1 == 'e') {
        if (pcVar4[1] == 'n') {
          cVar1 = pcVar4[2];
          bVar6 = cVar1 == 'a';
          if (bVar6) {
            cVar1 = pcVar4[3];
          }
          if (bVar6 && cVar1 == 'b') {
            cVar1 = pcVar4[4];
            bVar6 = cVar1 == 'l';
            if (bVar6) {
              cVar1 = pcVar4[5];
            }
            if ((bVar6 && cVar1 == 'e') && (bVar2 = 0, pcVar4[6] == 'd')) break;
          }
        }
      }
      else {
        bVar6 = cVar1 == 'v';
        if (bVar6) {
          cVar1 = pcVar4[1];
        }
        if (bVar6 && cVar1 == 'o') {
          cVar1 = pcVar4[2];
          bVar6 = cVar1 == 'l';
          if (bVar6) {
            cVar1 = pcVar4[3];
          }
          if (bVar6 && cVar1 == 't') {
            cVar1 = pcVar4[4];
            bVar6 = cVar1 == 'a';
            if (bVar6) {
              cVar1 = pcVar4[5];
            }
            if ((bVar6 && cVar1 == 'g') && (bVar2 = 2, pcVar4[6] == 'e')) break;
          }
        }
      }
    }
    bVar2 = 3;
  }
  *param_1 = 2;
LAB_012236a8:
  *(byte *)(param_1 + 1) = bVar2;
LAB_012236ac:
  FUN_012222e0(param_2);
  return;
}

