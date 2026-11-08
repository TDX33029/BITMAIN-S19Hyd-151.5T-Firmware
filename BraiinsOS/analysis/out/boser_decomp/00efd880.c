// FUN_00efd880 @ 00efd880 size=460 calls_out=2 calls_in=1
// strings: 

void FUN_00efd880(char param_1,uint *param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  byte local_27;
  byte local_26;
  byte local_25;
  
  local_27 = param_1 << 3 | 2;
  FUN_01284394(param_3,&local_27,1);
  uVar1 = *param_2;
  iVar3 = 0;
  iVar2 = 0;
  if ((uVar1 & 1) != 0) {
    uVar5 = param_2[2];
    uVar9 = param_2[3];
    iVar2 = 2;
    if (uVar5 != 0 || uVar9 != 0) {
      uVar5 = LZCOUNT(uVar5 | 1) | 0x20;
      if (uVar9 != 0) {
        uVar5 = LZCOUNT(uVar9);
      }
      iVar2 = ((uVar5 ^ 0x3f) * 9 + 0x49 >> 6) + 3;
    }
  }
  uVar5 = param_2[4];
  if ((uVar5 & 1) != 0) {
    uVar9 = param_2[7];
    if (param_2[6] == 0 && uVar9 == 0) {
      iVar3 = 2;
    }
    else {
      uVar6 = LZCOUNT(param_2[6] | 1) | 0x20;
      if (uVar9 != 0) {
        uVar6 = LZCOUNT(uVar9);
      }
      iVar3 = ((uVar6 ^ 0x3f) * 9 + 0x49 >> 6) + 3;
    }
  }
  uVar9 = param_2[8];
  iVar7 = 0;
  if ((uVar9 & 1) != 0) {
    uVar6 = param_2[0xb];
    if (param_2[10] == 0 && uVar6 == 0) {
      iVar7 = 2;
    }
    else {
      uVar8 = LZCOUNT(param_2[10] | 1) | 0x20;
      if (uVar6 != 0) {
        uVar8 = LZCOUNT(uVar6);
      }
      iVar7 = ((uVar8 ^ 0x3f) * 9 + 0x49 >> 6) + 3;
    }
  }
  iVar10 = 10;
  uVar6 = iVar3 + iVar2 + iVar7;
  do {
    if (uVar6 >> 7 == 0) {
      local_25 = (byte)uVar6;
      FUN_01284394(param_3,&local_25,1);
      uVar4 = extraout_r1_00;
      break;
    }
    local_26 = (byte)uVar6 | 0x80;
    FUN_01284394(param_3,&local_26,1);
    iVar10 = iVar10 + -1;
    uVar6 = uVar6 >> 7;
    uVar4 = extraout_r1;
  } while (iVar10 != 0);
  if ((uVar1 & 1) != 0) {
    FUN_00efe248(1,uVar4,param_2[2],param_2[3],param_3);
    uVar4 = extraout_r1_01;
  }
  if ((uVar5 & 1) != 0) {
    FUN_00efe248(2,uVar4,param_2[6],param_2[7],param_3);
    uVar4 = extraout_r1_02;
  }
  if ((uVar9 & 1) != 0) {
    FUN_00efe248(3,uVar4,param_2[10],param_2[0xb],param_3);
  }
  return;
}

