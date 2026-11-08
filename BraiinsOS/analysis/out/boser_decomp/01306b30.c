// FUN_01306b30 @ 01306b30 size=1156 calls_out=3 calls_in=34
// strings: 

void FUN_01306b30(undefined4 *param_1,undefined4 param_2,undefined4 param_3,byte *param_4,
                 uint param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  
  if (param_5 == 0) {
    param_1[0xc] = param_2;
    param_1[0xd] = param_3;
    param_1[0xe] = param_4;
    param_1[0xf] = 0;
    *(undefined1 *)((int)param_1 + 0xe) = 0;
    *(undefined2 *)(param_1 + 3) = 0x101;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = param_3;
    return;
  }
  if (param_5 == 1) {
    uVar2 = 0;
    uVar7 = 1;
    uVar4 = 0;
    uVar10 = 1;
  }
  else {
    uVar3 = 0;
    uVar8 = 1;
    uVar4 = 1;
    uVar7 = 1;
    uVar2 = 0;
    do {
      uVar9 = uVar2 + uVar3;
      if (param_5 <= uVar9) goto LAB_01306f80;
      if (param_4[uVar8] < param_4[uVar9]) {
        uVar4 = uVar4 + uVar3 + 1;
        uVar7 = uVar4 - uVar2;
        uVar3 = 0;
      }
      else if (param_4[uVar8] == param_4[uVar9]) {
        uVar8 = uVar3 + 1;
        if (uVar8 == uVar7) {
          uVar4 = uVar4 + uVar8;
        }
        uVar3 = 0;
        if (uVar8 != uVar7) {
          uVar3 = uVar8;
        }
      }
      else {
        uVar7 = 1;
        uVar2 = uVar4;
        uVar4 = uVar4 + 1;
        uVar3 = 0;
      }
      uVar8 = uVar4 + uVar3;
    } while (uVar8 < param_5);
    uVar8 = 0;
    uVar11 = 1;
    uVar3 = 1;
    uVar10 = 1;
    uVar4 = 0;
    do {
      uVar9 = uVar4 + uVar8;
      if (param_5 <= uVar9) {
LAB_01306f80:
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar9,param_5,&DAT_01ce49a0);
      }
      if (param_4[uVar9] < param_4[uVar11]) {
        uVar3 = uVar3 + uVar8 + 1;
        uVar10 = uVar3 - uVar4;
        uVar8 = 0;
      }
      else if (param_4[uVar11] == param_4[uVar9]) {
        uVar9 = uVar8 + 1;
        if (uVar9 == uVar10) {
          uVar3 = uVar3 + uVar9;
        }
        uVar8 = 0;
        if (uVar9 != uVar10) {
          uVar8 = uVar9;
        }
      }
      else {
        uVar10 = 1;
        uVar4 = uVar3;
        uVar3 = uVar3 + 1;
        uVar8 = 0;
      }
      uVar11 = uVar3 + uVar8;
    } while (uVar11 < param_5);
  }
  if (uVar2 <= uVar4) {
    uVar2 = uVar4;
    uVar7 = uVar10;
  }
  if (param_5 < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0,uVar2,param_5,&DAT_01ce49e0);
  }
  if ((CARRY4(uVar7,uVar2)) || (param_5 < uVar7 + uVar2)) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(uVar7,uVar7 + uVar2,param_5,&DAT_01ce49d0);
  }
  iVar1 = thunk_FUN_01bed842(param_4,param_4 + uVar7);
  if (iVar1 == 0) {
    uVar3 = 0;
    uVar9 = 1;
    uVar8 = 0;
    uVar4 = 1;
    do {
      if (param_5 <= uVar4 + uVar3) break;
      uVar11 = (param_5 - uVar3) + ~uVar4;
      if (param_5 <= uVar11) goto LAB_01306f90;
      uVar10 = (param_5 - 1) - (uVar3 + uVar8);
      if (param_5 <= uVar10) goto LAB_01306fa0;
      if (param_4[uVar11] < param_4[uVar10]) {
        uVar11 = uVar4 + uVar3 + 1;
        uVar3 = 0;
        uVar9 = uVar11 - uVar8;
      }
      else if (param_4[uVar11] == param_4[uVar10]) {
        uVar10 = uVar3 + 1;
        uVar11 = uVar4;
        if (uVar10 == uVar9) {
          uVar11 = uVar4 + uVar10;
        }
        uVar3 = 0;
        if (uVar10 != uVar9) {
          uVar3 = uVar10;
        }
      }
      else {
        uVar11 = uVar4 + 1;
        uVar3 = 0;
        uVar9 = 1;
        uVar8 = uVar4;
      }
      uVar4 = uVar11;
    } while (uVar9 != uVar7);
    uVar9 = 0;
    uVar6 = 1;
    uVar3 = 0;
    uVar4 = 1;
    do {
      if (param_5 <= uVar4 + uVar9) break;
      uVar11 = (param_5 - uVar9) + ~uVar4;
      if (param_5 <= uVar11) {
LAB_01306f90:
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar11,param_5,&DAT_01ce49b0);
      }
      uVar10 = (param_5 - 1) - (uVar9 + uVar3);
      if (param_5 <= uVar10) {
LAB_01306fa0:
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar10,param_5,&DAT_01ce49c0);
      }
      if (param_4[uVar10] < param_4[uVar11]) {
        uVar11 = uVar4 + uVar9 + 1;
        uVar9 = 0;
        uVar6 = uVar11 - uVar3;
      }
      else if (param_4[uVar11] == param_4[uVar10]) {
        uVar10 = uVar9 + 1;
        uVar11 = uVar4;
        if (uVar10 == uVar6) {
          uVar11 = uVar4 + uVar10;
        }
        uVar9 = 0;
        if (uVar10 != uVar6) {
          uVar9 = uVar10;
        }
      }
      else {
        uVar11 = uVar4 + 1;
        uVar9 = 0;
        uVar6 = 1;
        uVar3 = uVar4;
      }
      uVar4 = uVar11;
    } while (uVar6 != uVar7);
    if (uVar8 < uVar3) {
      uVar8 = uVar3;
    }
    uVar8 = param_5 - uVar8;
    if (uVar7 == 0) {
      uVar7 = 0;
      uVar4 = 0;
      uVar3 = 0;
    }
    else {
      uVar9 = 0;
      uVar4 = 0;
      uVar3 = 0;
      do {
        pbVar5 = param_4 + uVar9;
        uVar9 = uVar9 + 1;
        uVar10 = *pbVar5 & 0x3f;
        uVar6 = uVar10 - 0x20;
        uVar11 = 1 >> (0x20 - uVar10 & 0xff);
        if (-1 < (int)uVar6) {
          uVar11 = 1 << (uVar6 & 0xff);
        }
        uVar3 = uVar11 | uVar3;
        uVar10 = 1 << uVar10;
        if (-1 < (int)uVar6) {
          uVar10 = 0;
        }
        uVar4 = uVar10 | uVar4;
      } while (uVar7 != uVar9);
    }
    uVar12 = 0;
    uVar9 = param_5;
  }
  else {
    uVar4 = 0;
    uVar3 = 0;
    pbVar5 = param_4;
    uVar7 = param_5;
    do {
      uVar9 = *pbVar5 & 0x3f;
      uVar11 = uVar9 - 0x20;
      uVar8 = 1 << uVar9;
      if (-1 < (int)uVar11) {
        uVar8 = 0;
      }
      uVar4 = uVar8 | uVar4;
      uVar8 = 1 >> (0x20 - uVar9 & 0xff);
      if (-1 < (int)uVar11) {
        uVar8 = 1 << (uVar11 & 0xff);
      }
      uVar3 = uVar8 | uVar3;
      uVar7 = uVar7 - 1;
      pbVar5 = pbVar5 + 1;
    } while (uVar7 != 0);
    uVar12 = 0xffffffff;
    uVar7 = param_5 - uVar2;
    if (param_5 - uVar2 <= uVar2) {
      uVar7 = uVar2;
    }
    uVar7 = uVar7 + 1;
    uVar9 = 0xffffffff;
    uVar8 = uVar2;
  }
  param_1[10] = uVar9;
  param_1[0xc] = param_2;
  param_1[0xd] = param_3;
  param_1[0xe] = param_4;
  param_1[0xf] = param_5;
  *param_1 = 1;
  param_1[2] = uVar4;
  param_1[3] = uVar3;
  param_1[4] = uVar2;
  param_1[5] = uVar8;
  param_1[6] = uVar7;
  param_1[7] = 0;
  param_1[8] = param_3;
  param_1[9] = uVar12;
  return;
}

