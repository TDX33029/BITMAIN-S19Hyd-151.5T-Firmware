// FUN_0179f970 @ 0179f970 size=1164 calls_out=4 calls_in=1
// strings: 

uint FUN_0179f970(int *param_1,int param_2,int param_3,int param_4,int param_5,undefined1 param_6,
                 int param_7,uint param_8,uint param_9,uint param_10,int param_11,int param_12,
                 int param_13,undefined4 param_14,undefined4 param_15,undefined4 param_16,
                 undefined4 param_17)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  int in_stack_00000070;
  int in_stack_00000088;
  
  param_1[0x3e] = param_7;
  param_1[0x3f] = param_8;
  param_1[0x40] = param_9;
  param_1[0x41] = param_10;
  param_1[0x42] = param_11;
  param_1[0x43] = param_12;
  param_1[0x44] = param_13;
  param_1[0x2b] = in_stack_00000070;
  if (param_4 == 1 || (param_3 == 0 || param_2 == 0)) {
    *param_1 = param_2;
    iVar7 = in_stack_00000070;
  }
  else {
    if (param_1[0xd] != 0) {
LAB_0179fd4c:
      *(undefined1 *)(param_1 + 0xb) = 1;
      return 0xffffffc0;
    }
    iVar7 = param_1[6];
    uVar4 = iVar7 + (param_3 + 3U & 0xfffffffc);
    if ((uint)param_1[5] < uVar4) goto LAB_0179fd4c;
    param_1[6] = uVar4;
    param_1[7] = uVar4;
    param_1[8] = uVar4;
    if (iVar7 == 0) {
      return 0xffffffc0;
    }
    *param_1 = iVar7;
    FUN_016dd1aa(iVar7,param_2,param_3);
    iVar7 = param_1[0x2b];
  }
  iVar6 = in_stack_00000088;
  uVar4 = param_9;
  uVar2 = param_1[6];
  param_1[1] = param_3;
  param_1[2] = param_5;
  if ((param_1[0xd] == 0) && (uVar8 = uVar2 + 0x2200, uVar8 <= (uint)param_1[5])) {
    param_1[6] = uVar8;
    uVar9 = uVar2;
  }
  else {
    uVar9 = 0;
    *(undefined1 *)(param_1 + 0xb) = 1;
    uVar8 = uVar2;
  }
  param_1[3] = uVar9;
  param_1[0x4c2] = 1;
  param_1[0x4c3] = 4;
  param_1[0x149] = 0;
  param_1[0x4c4] = 8;
  param_1[0x4bf] = 0;
  param_1[0x4c0] = 0;
  param_1[0x4c1] = 0;
  if (iVar7 == 0) {
    if (param_13 != 1) {
      bVar10 = param_13 - 3U == 2;
      if (param_13 - 3U < 3) {
        bVar10 = in_stack_00000088 == 1;
      }
      if (!bVar10) goto LAB_0179fa60;
    }
    iVar7 = 0;
  }
  else {
LAB_0179fa60:
    iVar7 = 4 << (param_8 & 0xff);
  }
  param_1[0x13] = 2;
  param_1[0x11] = (int)&DAT_005a173c;
  param_1[0x12] = (int)&DAT_005a173c;
  param_1[0x14] = 2;
  param_1[0x10] = (int)&DAT_005a173e;
  param_1[0x15] = 0;
  param_1[0x18] = 0;
  param_1[0x47] = 0;
  param_1[0x33] = 0;
  param_1[0x3d] = 0;
  param_1[7] = uVar8;
  param_1[8] = uVar8;
  param_1[0x16] = 0;
  param_1[0x17] = 2;
  if (param_1[0xd] == 0) {
    uVar9 = param_1[5];
    uVar2 = uVar8 + (-uVar8 & 0x3f);
    param_1[10] = uVar9 & 0xffffffc0;
    if (uVar2 <= uVar9) {
      uVar9 = param_1[9];
      if (uVar8 < uVar2) {
        uVar8 = uVar2;
      }
      uVar5 = uVar2 + (4 << (param_9 & 0xff));
      param_1[8] = uVar8;
      param_1[7] = uVar2;
      uVar3 = uVar5;
      if (uVar9 < uVar5) {
        uVar3 = uVar2;
      }
      param_1[0xd] = 1;
      if (uVar9 < uVar5) {
        *(undefined1 *)(param_1 + 0xb) = 1;
        uVar8 = 0;
      }
      else {
        uVar8 = uVar2;
      }
      param_1[6] = uVar2;
      if (uVar5 <= uVar9) {
        param_1[7] = uVar3;
      }
      goto LAB_0179fae4;
    }
    param_1[0x27] = 0;
    if (uVar9 < uVar2) {
      cVar1 = (char)param_1[0xb];
      param_1[0x29] = 0;
      param_1[8] = uVar8;
      uVar2 = 0;
      goto LAB_0179fb04;
    }
    uVar9 = param_1[9];
    uVar5 = uVar2 + iVar7;
    uVar3 = uVar8;
    if (uVar8 < uVar2) {
      uVar3 = uVar2;
    }
    uVar8 = uVar5;
    if (uVar9 < uVar5) {
      uVar8 = uVar2;
    }
    param_1[7] = uVar2;
    param_1[8] = uVar3;
    param_1[6] = uVar2;
    param_1[0xd] = 1;
    if (uVar9 < uVar5) {
      *(undefined1 *)(param_1 + 0xb) = 1;
      param_1[0x29] = 0;
    }
    else {
      param_1[0x29] = uVar2;
      param_1[7] = uVar8;
    }
LAB_0179fcb4:
    if (uVar9 < uVar8) {
      *(undefined1 *)(param_1 + 0xb) = 1;
      param_1[0x28] = 0;
      return 0xffffffc0;
    }
  }
  else {
    uVar9 = param_1[9];
    uVar3 = uVar8 + (4 << (param_9 & 0xff));
    if (uVar9 < uVar3) {
      uVar2 = uVar8 + iVar7;
      param_1[0x27] = 0;
      *(undefined1 *)(param_1 + 0xb) = 1;
      if (uVar9 < uVar2) {
        uVar3 = 0;
      }
      else {
        param_1[7] = uVar2;
        uVar3 = uVar8;
        uVar8 = uVar2;
      }
      param_1[0x29] = uVar3;
      goto LAB_0179fcb4;
    }
    param_1[7] = uVar3;
LAB_0179fae4:
    uVar2 = uVar3 + iVar7;
    param_1[0x27] = uVar8;
    if (uVar9 < uVar2) {
      *(undefined1 *)(param_1 + 0xb) = 1;
      param_1[0x29] = 0;
      uVar8 = uVar3;
      goto LAB_0179fcb4;
    }
    param_1[0x29] = uVar3;
    param_1[7] = uVar2;
    uVar8 = uVar2;
  }
  cVar1 = (char)param_1[0xb];
  uVar2 = uVar8;
LAB_0179fb04:
  param_1[0x28] = uVar2;
  if (cVar1 == '\0') {
    uVar2 = param_1[8];
    if (uVar2 < uVar8) {
      FUN_016dd606(uVar2,0,uVar8 - uVar2);
      if ((uint)param_1[8] < (uint)param_1[7]) {
        param_1[8] = param_1[7];
      }
    }
    bVar10 = param_13 - 3U == 2;
    if (param_13 - 3U < 3) {
      bVar10 = iVar6 == 1;
    }
    if (bVar10) {
      iVar7 = 1 << (uVar4 & 0xff);
      iVar6 = FUN_017977b8(param_1 + 4,iVar7 + 0x3fU & 0xffffffc0,2);
      param_1[0x1a] = iVar6;
      FUN_016dd606(iVar6,0,iVar7);
      param_1[0x24] = 0;
      param_1[0x25] = 0;
      uVar4 = param_10;
      if (5 < param_10) {
        uVar4 = 6;
      }
      if (uVar4 < 4) {
        iVar7 = param_9 - 4;
      }
      else {
        iVar7 = param_9 - uVar4;
      }
      param_1[0x19] = iVar7;
    }
    param_1[0x3e] = param_7;
    param_1[0x3f] = param_8;
    param_1[0x40] = param_9;
    param_1[0x41] = param_10;
    param_1[0x42] = param_11;
    param_1[0x43] = param_12;
    param_1[0x44] = param_13;
    if ((char)param_1[0xb] == '\0') {
      param_17 = 3;
      param_14 = 1;
      uVar4 = FUN_0179f1b8(param_1 + 0x48,param_1 + 0x10,0,param_1 + 4,&param_6,*param_1,param_1[1],
                           param_5,1,1,param_1[3]);
      if (uVar4 < 0xffffff89) {
        param_1[0x4c8] = uVar4;
        return 0;
      }
      return uVar4;
    }
  }
  return 0xffffffc0;
}

