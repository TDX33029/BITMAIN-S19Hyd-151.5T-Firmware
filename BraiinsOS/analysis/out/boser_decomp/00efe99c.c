// FUN_00efe99c @ 00efe99c size=620 calls_out=4 calls_in=2
// strings: 

void FUN_00efe99c(uint *param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  undefined4 extraout_r1_03;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  double dVar12;
  undefined1 local_33;
  byte local_32;
  byte local_31;
  
  local_33 = 10;
  FUN_01284394(param_2,&local_33,1);
  iVar1 = 0;
  uVar3 = *param_1;
  iVar4 = 0;
  if ((uVar3 & 1) != 0) {
    uVar8 = param_1[2];
    uVar5 = param_1[3];
    if (uVar8 == 0 && uVar5 == 0) {
      iVar6 = 2;
    }
    else {
      uVar8 = LZCOUNT(uVar8 | 1) | 0x20;
      if (uVar5 != 0) {
        uVar8 = LZCOUNT(uVar5);
      }
      iVar6 = ((uVar8 ^ 0x3f) * 9 + 0x49 >> 6) + 3;
    }
    uVar5 = param_1[4];
    if (uVar5 == 0) {
      iVar4 = 0;
    }
    else {
      uVar8 = LZCOUNT(uVar5 | 1) | 0x20;
      if ((int)uVar5 < 0) {
        uVar8 = LZCOUNT((int)uVar5 >> 0x1f);
      }
      iVar4 = ((uVar8 ^ 0x3f) * 9 + 0x49 >> 6) + 1;
    }
    iVar4 = iVar4 + iVar6;
  }
  uVar5 = param_1[6];
  if ((uVar5 & 1) != 0) {
    uVar8 = param_1[9];
    if (param_1[8] == 0 && uVar8 == 0) {
      iVar1 = 2;
    }
    else {
      uVar2 = LZCOUNT(param_1[8] | 1) | 0x20;
      if (uVar8 != 0) {
        uVar2 = LZCOUNT(uVar8);
      }
      iVar1 = ((uVar2 ^ 0x3f) * 9 + 0x49 >> 6) + 3;
    }
  }
  uVar2 = param_1[0xe];
  uVar8 = param_1[10];
  iVar6 = 0;
  dVar12 = *(double *)(param_1 + 0xc);
  if ((uVar2 & 1) != 0) {
    uVar10 = param_1[0x11];
    if (param_1[0x10] == 0 && uVar10 == 0) {
      iVar6 = 2;
    }
    else {
      uVar9 = LZCOUNT(param_1[0x10] | 1) | 0x20;
      if (uVar10 != 0) {
        uVar9 = LZCOUNT(uVar10);
      }
      iVar6 = ((uVar9 ^ 0x3f) * 9 + 0x49 >> 6) + 3;
    }
  }
  iVar1 = iVar1 + iVar4;
  iVar4 = 2;
  iVar11 = 10;
  if (dVar12 != 0.0) {
    iVar4 = 0xb;
  }
  if ((uVar8 & 1) != 0) {
    iVar1 = iVar1 + iVar4;
  }
  uVar10 = iVar1 + iVar6;
  do {
    if (uVar10 >> 7 == 0) {
      local_31 = (byte)uVar10;
      FUN_01284394(param_2,&local_31,1);
      uVar7 = extraout_r1_00;
      break;
    }
    local_32 = (byte)uVar10 | 0x80;
    FUN_01284394(param_2,&local_32,1);
    iVar11 = iVar11 + -1;
    uVar10 = uVar10 >> 7;
    uVar7 = extraout_r1;
  } while (iVar11 != 0);
  if ((uVar3 & 1) != 0) {
    FUN_00efc900(1,uVar7,param_1[2],param_1[3],param_1[4],param_2);
    uVar7 = extraout_r1_01;
  }
  if ((uVar5 & 1) != 0) {
    FUN_00efe248(2,uVar7,param_1[8],param_1[9],param_2);
    uVar7 = extraout_r1_02;
  }
  if ((uVar8 & 1) != 0) {
    FUN_00efee40(SUB84(dVar12,0),3,param_2);
    uVar7 = extraout_r1_03;
  }
  if ((uVar2 & 1) != 0) {
    FUN_00efe248(4,uVar7,param_1[0x10],param_1[0x11],param_2);
  }
  return;
}

