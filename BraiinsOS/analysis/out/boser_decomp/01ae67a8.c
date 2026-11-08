// FUN_01ae67a8 @ 01ae67a8 size=492 calls_out=0 calls_in=3
// strings: 

bool FUN_01ae67a8(char *param_1,uint param_2,char param_3,int param_4)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  bool bVar10;
  
  bVar10 = false;
  if ((param_2 < 0xfe) && (bVar10 = param_2 == 0, !bVar10 || param_3 != '\x02')) {
    bVar1 = true;
    bVar3 = false;
    if (param_2 == 0 || param_4 == 0) {
      uVar8 = 0;
      iVar9 = 0;
    }
    else {
      uVar8 = 0;
      iVar9 = 0;
      if (*param_1 == '*') {
        if (param_2 == 1) {
          return false;
        }
        bVar1 = false;
        if (param_1[1] != '.') {
          return false;
        }
        iVar9 = 1;
        uVar8 = 2;
      }
    }
    iVar7 = param_2 - uVar8;
    iVar5 = param_2 - uVar8;
    pbVar4 = (byte *)(param_1 + uVar8);
    if (param_2 < uVar8) {
      iVar7 = 0;
    }
    bVar2 = false;
    uVar8 = 0;
    bVar10 = bVar1;
    do {
      if (iVar7 == 0) {
        return false;
      }
      uVar6 = (uint)*pbVar4;
      if (uVar6 == 0x2d) {
        if (uVar8 == 0) {
          return false;
        }
        bVar3 = true;
LAB_01ae690c:
        bVar2 = false;
        uVar6 = uVar8 + 1;
        if (0x3f < uVar6) {
          return false;
        }
      }
      else {
        if (uVar6 != 0x2e) {
          if (uVar6 != 0x5f) {
            if (uVar6 - 0x30 < 10) {
              uVar6 = uVar8 + 1;
              bVar3 = false;
              if (0x3f < uVar6) {
                return false;
              }
              bVar2 = (bool)(uVar8 == 0 | bVar2);
              goto LAB_01ae692c;
            }
            if ((uVar6 & 0xdf) - 0x5b < 0xffffffe6) {
              return false;
            }
          }
          bVar3 = false;
          goto LAB_01ae690c;
        }
        iVar9 = iVar9 + 1;
        if (uVar8 == 0) {
          bVar10 = !bVar3 && (param_3 == '\x02' && bVar10 == true);
        }
        else {
          bVar10 = !bVar3;
        }
        uVar6 = 0;
        bVar3 = false;
        if (!bVar10) {
          return false;
        }
      }
LAB_01ae692c:
      iVar7 = iVar7 + -1;
      pbVar4 = pbVar4 + 1;
      iVar5 = iVar5 + -1;
      bVar10 = false;
      uVar8 = uVar6;
    } while (iVar5 != 0);
    if (uVar6 == 0) {
      bVar3 = (bool)(param_3 != '\0' | bVar3);
    }
    if (bVar1 || (bVar3 != false || bVar2)) {
      bVar10 = (bool)((bVar3 | bVar2) ^ 1);
    }
    else {
      if (uVar6 != 0) {
        iVar9 = iVar9 + 1;
      }
      if (2 < iVar9) {
        bVar10 = true;
      }
    }
  }
  return bVar10;
}

