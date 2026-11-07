// FUN_01acec04 @ 01acec04 size=476 calls_out=5 calls_in=3
// strings: 

void FUN_01acec04(undefined4 *param_1,int *param_2,undefined4 *param_3,int param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int local_2c;
  int local_28;
  
  local_28 = param_5;
  local_2c = param_4;
  if (param_3[2] == 1) {
    uVar11 = param_3[3];
    iVar12 = param_3[5];
    if (uVar11 == 0) {
      uVar11 = 0;
    }
    else {
      uVar1 = param_3[6];
      if (uVar11 < uVar1) {
        if (*(char *)(iVar12 + uVar11) < -0x40) {
LAB_01acedc4:
                    /* WARNING: Subroutine does not return */
          FUN_012fb514(iVar12,uVar1,0,uVar11,&DAT_01d2fde8);
        }
      }
      else if (uVar11 != uVar1) goto LAB_01acedc4;
    }
  }
  else {
    iVar12 = param_3[5];
    uVar11 = param_3[6];
  }
  iVar9 = *param_2;
  iVar7 = param_2[2];
  uVar2 = (param_5 - param_4) + uVar11;
  uVar1 = iVar9 - iVar7;
  if (uVar1 < uVar2) {
    FUN_01af7b44(param_2,iVar7,uVar2,1,1);
    iVar9 = *param_2;
    iVar7 = param_2[2];
    uVar1 = iVar9 - iVar7;
  }
  if (uVar1 < uVar11) {
    FUN_01af7b44(param_2,iVar7,uVar11,1,1);
    iVar9 = *param_2;
    iVar7 = param_2[2];
  }
  iVar5 = param_2[1];
  FUN_01bed4e2(iVar5 + iVar7,iVar12,uVar11);
  iVar7 = iVar7 + uVar11;
  param_2[2] = iVar7;
  iVar12 = iVar7;
  if (iVar9 == iVar7) {
    FUN_01af7b44(param_2,iVar9,1,1,1);
    iVar5 = param_2[1];
    iVar12 = param_2[2];
  }
  *(undefined1 *)(iVar5 + iVar12) = 0x23;
  param_2[2] = iVar7 + 1;
  FUN_01ac9ff4(&local_2c);
  FUN_01acb6f8(param_2,local_2c,local_28);
  iVar12 = param_2[1];
  iVar7 = param_2[2];
  param_1[4] = *param_2;
  param_1[5] = iVar12;
  param_1[6] = iVar7;
  uVar14 = param_3[8];
  uVar15 = param_3[9];
  uVar10 = param_3[10];
  uVar13 = param_3[0xb];
  uVar3 = param_3[0xe];
  uVar4 = param_3[0xf];
  uVar8 = param_3[0x10];
  param_1[0xd] = param_3[0xd];
  param_1[0xe] = uVar3;
  param_1[0xf] = uVar4;
  param_1[0x10] = uVar8;
  uVar4 = *param_3;
  uVar8 = param_3[1];
  uVar3 = param_3[7];
  uVar6 = param_3[0xc];
  *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)(param_3 + 0x11);
  param_1[7] = uVar3;
  param_1[8] = uVar14;
  param_1[9] = uVar15;
  param_1[10] = uVar10;
  param_1[0xb] = uVar13;
  param_1[0xc] = uVar6;
  *param_1 = uVar4;
  param_1[1] = uVar8;
  param_1[2] = 1;
  param_1[3] = uVar11;
  return;
}

