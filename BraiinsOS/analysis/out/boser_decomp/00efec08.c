// FUN_00efec08 @ 00efec08 size=568 calls_out=5 calls_in=2
// strings: 

void FUN_00efec08(char param_1,uint *param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  undefined4 extraout_r1_03;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  double dVar13;
  double dVar14;
  byte local_3b;
  byte local_3a;
  byte local_39;
  
  iVar10 = 2;
  local_3b = param_1 << 3 | 2;
  FUN_01284394(param_3,&local_3b,1);
  iVar1 = 0;
  uVar3 = *param_2;
  iVar4 = 0;
  if ((uVar3 & 1) != 0) {
    uVar7 = param_2[2];
    uVar5 = param_2[3];
    if (uVar7 != 0 || uVar5 != 0) {
      uVar7 = LZCOUNT(uVar7 | 1) | 0x20;
      if (uVar5 != 0) {
        uVar7 = LZCOUNT(uVar5);
      }
      iVar10 = ((uVar7 ^ 0x3f) * 9 + 0x49 >> 6) + 3;
    }
    uVar5 = param_2[4];
    if (uVar5 == 0) {
      iVar4 = 0;
    }
    else {
      uVar7 = LZCOUNT(uVar5 | 1) | 0x20;
      if ((int)uVar5 < 0) {
        uVar7 = LZCOUNT((int)uVar5 >> 0x1f);
      }
      iVar4 = ((uVar7 ^ 0x3f) * 9 + 0x49 >> 6) + 1;
    }
    iVar4 = iVar4 + iVar10;
  }
  uVar12 = param_2[6];
  uVar7 = param_2[10];
  uVar5 = param_2[0xe];
  dVar14 = *(double *)(param_2 + 8);
  dVar13 = *(double *)(param_2 + 0xc);
  if ((uVar5 & 1) != 0) {
    uVar8 = param_2[0x11];
    if (param_2[0x10] == 0 && uVar8 == 0) {
      iVar1 = 2;
    }
    else {
      uVar2 = LZCOUNT(param_2[0x10] | 1) | 0x20;
      if (uVar8 != 0) {
        uVar2 = LZCOUNT(uVar8);
      }
      iVar1 = ((uVar2 ^ 0x3f) * 9 + 0x49 >> 6) + 3;
    }
  }
  iVar9 = 2;
  iVar10 = 2;
  iVar11 = 10;
  if (dVar14 != 0.0) {
    iVar9 = 0xb;
  }
  if ((uVar12 & 1) != 0) {
    iVar4 = iVar4 + iVar9;
  }
  if (dVar13 != 0.0) {
    iVar10 = 0xb;
  }
  if ((uVar7 & 1) != 0) {
    iVar4 = iVar4 + iVar10;
  }
  uVar8 = iVar4 + iVar1;
  do {
    if (uVar8 >> 7 == 0) {
      local_39 = (byte)uVar8;
      FUN_01284394(param_3,&local_39,1);
      uVar6 = extraout_r1_00;
      break;
    }
    local_3a = (byte)uVar8 | 0x80;
    FUN_01284394(param_3,&local_3a,1);
    iVar11 = iVar11 + -1;
    uVar8 = uVar8 >> 7;
    uVar6 = extraout_r1;
  } while (iVar11 != 0);
  if ((uVar3 & 1) != 0) {
    FUN_00efc900(1,uVar6,param_2[2],param_2[3],param_2[4],param_3);
    uVar6 = extraout_r1_01;
  }
  if ((uVar12 & 1) != 0) {
    FUN_00efe1c0(SUB84(dVar14,0),2,param_3);
    uVar6 = extraout_r1_02;
  }
  if ((uVar7 & 1) != 0) {
    FUN_00efee40(SUB84(dVar13,0),3,param_3);
    uVar6 = extraout_r1_03;
  }
  if ((uVar5 & 1) != 0) {
    FUN_00efe248(4,uVar6,param_2[0x10],param_2[0x11],param_3);
  }
  return;
}

