// FUN_01799b18 @ 01799b18 size=932 calls_out=9 calls_in=1
// strings: 

undefined8
FUN_01799b18(uint *param_1,uint *param_2,undefined4 param_3,int param_4,uint param_5,uint param_6,
            undefined4 param_7,uint param_8)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  
  uVar8 = *(uint *)(param_4 + 0x1c);
  bVar9 = *(int *)(param_4 + 0x54) != 1;
  if (uVar8 - 1 < 2) {
    uVar4 = param_8 & 1;
  }
  else {
    uVar4 = 0;
  }
  uVar5 = 0xfffffe;
  iVar1 = -0xfffffe;
  uVar6 = param_5 + param_6;
  if (uVar4 == 0) {
    iVar1 = 0x60000002;
    uVar5 = 0x9ffffffe;
  }
  if (uVar5 < param_6) {
    param_5 = uVar6 + iVar1;
    param_6 = uVar5;
LAB_01799c8c:
    uVar5 = *param_1;
    uVar4 = param_1[3];
    if (uVar5 == param_5) {
      uVar2 = param_1[2];
      uVar5 = uVar2 + uVar4;
      uVar3 = uVar2 + param_1[4];
    }
    else {
      uVar2 = param_1[1];
      param_1[4] = uVar4;
      uVar7 = uVar5 - uVar2;
      param_1[2] = uVar2;
      param_1[3] = uVar7;
      param_1[1] = param_5 - uVar7;
      if (uVar7 - uVar4 < 8) {
        param_1[4] = uVar7;
        uVar3 = uVar5;
        uVar4 = uVar7;
      }
      else {
        uVar3 = uVar2 + uVar4;
        uVar4 = uVar7;
      }
    }
    *param_1 = uVar6;
    if (param_5 < uVar5 && uVar3 < uVar6) {
      uVar5 = uVar6 - uVar2;
      if ((int)uVar4 <= (int)(uVar6 - uVar2)) {
        uVar5 = uVar4;
      }
      param_1[4] = uVar5;
    }
    if (param_2 == (uint *)0x0 || bVar9) goto LAB_01799be8;
    uVar4 = *param_2;
    uVar8 = param_2[3];
    if (uVar4 == param_5) {
      uVar3 = param_2[2];
      uVar4 = uVar3 + uVar8;
      uVar5 = uVar3 + param_2[4];
    }
    else {
      uVar3 = param_2[1];
      param_2[4] = uVar8;
      uVar2 = uVar4 - uVar3;
      param_2[2] = uVar3;
      param_2[3] = uVar2;
      param_2[1] = param_5 - uVar2;
      if (uVar2 - uVar8 < 8) {
        param_2[4] = uVar2;
        uVar5 = uVar4;
        uVar8 = uVar2;
      }
      else {
        uVar5 = uVar3 + uVar8;
        uVar8 = uVar2;
      }
    }
    *param_2 = uVar6;
    if (param_5 < uVar4 && uVar5 < uVar6) {
      uVar4 = uVar6 - uVar3;
      if ((int)uVar8 <= (int)(uVar6 - uVar3)) {
        uVar4 = uVar8;
      }
      param_2[4] = uVar4;
    }
  }
  else {
    if (param_6 != 0) goto LAB_01799c8c;
    if (param_2 == (uint *)0x0 || bVar9) {
      bVar9 = *(int *)(param_4 + 0x30) != 0;
      uVar8 = *(uint *)(param_4 + 0x88);
      if (bVar9) {
        param_1[6] = 0;
      }
      param_1[7] = uVar6 - param_1[1];
      if (!bVar9) {
        param_1[6] = uVar6 - param_1[1];
        param_1[0x1a] = uVar8;
        return 0;
      }
      param_1[0x1a] = uVar8;
      return 0;
    }
    param_5 = uVar6;
  }
  if (*(int *)(param_4 + 0x30) == 0) {
    uVar8 = uVar6 - param_2[1];
  }
  else {
    uVar8 = 0;
  }
  param_2[7] = uVar8;
  FUN_01802d28(param_2,param_5,uVar6,param_4 + 0x54);
  uVar8 = *(uint *)(param_4 + 0x1c);
LAB_01799be8:
  if (uVar8 < 8) {
    uVar8 = *(uint *)(param_4 + 8);
    if (*(uint *)(param_4 + 8) < *(uint *)(param_4 + 0xc)) {
      uVar8 = *(uint *)(param_4 + 0xc);
    }
    if (0x1b < uVar8) {
      uVar8 = 0x1c;
    }
    uVar8 = 8 << (uVar8 & 0xff);
    if (uVar8 < param_6) {
      param_5 = uVar6 - uVar8;
      param_6 = uVar8;
    }
  }
  if (*(int *)(param_4 + 0x30) == 0) {
    uVar8 = uVar6 - param_1[1];
  }
  else {
    uVar8 = 0;
  }
  param_1[6] = uVar8;
  uVar8 = *(uint *)(param_4 + 0x88);
  param_1[7] = param_5 - param_1[1];
  param_1[0x1a] = uVar8;
  if (param_6 < 9) {
    return 0;
  }
  FUN_01797c1c(param_1,param_3,param_4,param_5,uVar6);
  switch(*(undefined4 *)(param_4 + 0x1c)) {
  case 1:
    FUN_017b5f50(param_1,uVar6,param_7,param_8);
    break;
  case 2:
    FUN_017a9408(param_1,uVar6,param_7,param_8);
    break;
  case 3:
  case 4:
  case 5:
    iVar1 = uVar6 - 8;
    if (param_1[0x1b] == 0) {
      if (*(int *)(param_4 + 0x84) == 1) {
        FUN_016dd606(param_1[10],0,1 << (*(uint *)(param_4 + 0xc) & 0xff));
        FUN_017e6550(param_1,iVar1);
      }
      else {
        FUN_017e6184(param_1,iVar1);
      }
    }
    else {
      FUN_017e5d20(param_1,iVar1);
    }
    break;
  case 6:
  case 7:
  case 8:
  case 9:
    FUN_0181352c(param_1,uVar6 - 8,uVar6);
  }
  param_1[7] = uVar6 - param_1[1];
  return 0;
}

