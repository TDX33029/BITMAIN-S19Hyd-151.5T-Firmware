// FUN_00e72efc @ 00e72efc size=1916 calls_out=7 calls_in=1
// strings: 

int FUN_00e72efc(uint *param_1,int *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  undefined4 extraout_r1_03;
  int extraout_r1_04;
  int extraout_r1_05;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  
  uVar4 = param_1[0x68];
  uVar5 = param_1[0x67];
  FUN_00f09308(param_2,param_2,uVar4,0);
  iVar3 = param_2[2];
  if ((uint)(*param_2 - iVar3) < uVar4) {
    FUN_00edff4c(param_2,iVar3,uVar4,1,1);
    iVar3 = param_2[2];
  }
  FUN_016dd1aa(param_2[1] + iVar3,uVar5,uVar4);
  uVar5 = param_1[0x69];
  iVar3 = iVar3 + uVar4;
  param_2[2] = iVar3;
  if (uVar5 == 0x80000000) {
    if (*param_2 == iVar3) {
      FUN_00edff4c(param_2,iVar3,1,1,1);
      iVar3 = param_2[2];
    }
    *(undefined1 *)(param_2[1] + iVar3) = 0;
    iVar3 = iVar3 + 1;
    uVar4 = param_1[0x6c];
    param_2[2] = iVar3;
  }
  else {
    uVar5 = param_1[0x6a];
    uVar4 = param_1[0x6b];
    if (*param_2 == iVar3) {
      FUN_00edff4c(param_2,iVar3,1,1,1);
      iVar3 = param_2[2];
    }
    *(undefined1 *)(param_2[1] + iVar3) = 1;
    param_2[2] = iVar3 + 1;
    FUN_00f09308(param_2,iVar3,uVar4,0);
    iVar3 = param_2[2];
    if ((uint)(*param_2 - iVar3) < uVar4) {
      FUN_00edff4c(param_2,iVar3,uVar4,1,1);
      iVar3 = param_2[2];
    }
    FUN_016dd1aa(param_2[1] + iVar3,uVar5,uVar4);
    iVar3 = iVar3 + uVar4;
    uVar4 = param_1[0x6c];
    param_2[2] = iVar3;
  }
  if (uVar4 == 0x80000000) {
    if (*param_2 == iVar3) {
      FUN_00edff4c(param_2,iVar3,1,1,1);
      iVar3 = param_2[2];
    }
    *(undefined1 *)(param_2[1] + iVar3) = 0;
    iVar3 = iVar3 + 1;
    uVar4 = param_1[0x6f];
    param_2[2] = iVar3;
  }
  else {
    uVar5 = param_1[0x6d];
    uVar4 = param_1[0x6e];
    if (*param_2 == iVar3) {
      FUN_00edff4c(param_2,iVar3,1,1,1);
      iVar3 = param_2[2];
    }
    *(undefined1 *)(param_2[1] + iVar3) = 1;
    param_2[2] = iVar3 + 1;
    FUN_00f09308(param_2,iVar3,uVar4,0);
    iVar3 = param_2[2];
    if ((uint)(*param_2 - iVar3) < uVar4) {
      FUN_00edff4c(param_2,iVar3,uVar4,1,1);
      iVar3 = param_2[2];
    }
    FUN_016dd1aa(param_2[1] + iVar3,uVar5,uVar4);
    iVar3 = iVar3 + uVar4;
    uVar4 = param_1[0x6f];
    param_2[2] = iVar3;
  }
  if (uVar4 == 0x80000000) {
    if (*param_2 == iVar3) {
      FUN_00edff4c(param_2,iVar3,1,1,1);
      iVar3 = param_2[2];
    }
    *(undefined1 *)(param_2[1] + iVar3) = 0;
    iVar3 = iVar3 + 1;
  }
  else {
    uVar5 = param_1[0x70];
    uVar4 = param_1[0x71];
    if (*param_2 == iVar3) {
      FUN_00edff4c(param_2,iVar3,1,1,1);
      iVar3 = param_2[2];
    }
    *(undefined1 *)(param_2[1] + iVar3) = 1;
    param_2[2] = iVar3 + 1;
    FUN_00f09308(param_2,iVar3,uVar4,0);
    iVar3 = param_2[2];
    if ((uint)(*param_2 - iVar3) < uVar4) {
      FUN_00edff4c(param_2,iVar3,uVar4,1,1);
      iVar3 = param_2[2];
    }
    FUN_016dd1aa(param_2[1] + iVar3,uVar5,uVar4);
    iVar3 = iVar3 + uVar4;
  }
  param_2[2] = iVar3;
  FUN_00e66aa8(param_2,param_1 + 0x72);
  iVar3 = param_2[2];
  uVar4 = param_1[0x75];
  if (*param_2 == iVar3) {
    FUN_00edff4c(param_2,iVar3,1,1,1);
    iVar3 = param_2[2];
  }
  *(char *)(param_2[1] + iVar3) = (char)uVar4;
  iVar3 = iVar3 + 1;
  uVar1 = *(undefined1 *)((int)param_1 + 0x1d5);
  param_2[2] = iVar3;
  if (*param_2 == iVar3) {
    FUN_00edff4c(param_2,iVar3,1,1,1);
    iVar3 = param_2[2];
  }
  uVar2 = *(undefined1 *)((int)param_1 + 0x1d6);
  *(undefined1 *)(param_2[1] + iVar3) = uVar1;
  iVar3 = iVar3 + 1;
  param_2[2] = iVar3;
  if (*param_2 == iVar3) {
    FUN_00edff4c(param_2,iVar3,1,1,1);
    iVar3 = param_2[2];
  }
  uVar4 = *param_1;
  *(undefined1 *)(param_2[1] + iVar3) = uVar2;
  iVar3 = iVar3 + 1;
  param_2[2] = iVar3;
  if ((uVar4 & 1) == 0) {
    if (*param_2 == iVar3) {
      FUN_00edff4c(param_2,iVar3,1,1,1);
      iVar3 = param_2[2];
    }
    *(undefined1 *)(param_2[1] + iVar3) = 0;
    param_2[2] = iVar3 + 1;
  }
  else {
    uVar5 = param_1[2];
    uVar6 = param_1[3];
    uVar7 = param_1[4];
    uVar8 = param_1[5];
    uVar4 = param_1[6];
    if (*param_2 == iVar3) {
      FUN_00edff4c(param_2,iVar3,1,1,1);
      iVar3 = param_2[2];
    }
    *(undefined1 *)(param_2[1] + iVar3) = 1;
    param_2[2] = iVar3 + 1;
    FUN_00f09308(param_2,iVar3,uVar4,0);
    FUN_00f09574(param_2,extraout_r1,uVar5,uVar6,uVar7,uVar8);
  }
  if (param_1[8] != 2 || param_1[9] != 0) {
    iVar3 = param_2[2];
    if (*param_2 == iVar3) {
      FUN_00edff4c(param_2,iVar3,1,1,1);
      iVar3 = param_2[2];
    }
    *(undefined1 *)(param_2[1] + iVar3) = 1;
    param_2[2] = iVar3 + 1;
    uVar9 = FUN_00e70e68(param_1 + 8,param_2);
    if ((int)uVar9 != 0) {
      return (int)uVar9;
    }
    FUN_00f09308(param_2,(int)((ulonglong)uVar9 >> 0x20),param_1[100],0);
    FUN_00f09308(param_2,extraout_r1_00,param_1[0x65],0);
    FUN_00f09308(param_2,extraout_r1_01,param_1[0x42],param_1[0x43]);
    FUN_00f09308(param_2,extraout_r1_02,param_1[0x44],param_1[0x45]);
    FUN_00f09308(param_2,extraout_r1_03,param_1[0x46],param_1[0x47]);
    FUN_00f09574(param_2,param_1[0x4b],param_1[0x48],param_1[0x49],param_1[0x4a],param_1[0x4b]);
    if (param_1[0x4c] == 0x80000000) {
      iVar3 = param_2[2];
      if (*param_2 == iVar3) {
        FUN_00edff4c(param_2,iVar3,1,1,1);
        iVar3 = param_2[2];
      }
      *(undefined1 *)(param_2[1] + iVar3) = 0;
      param_2[2] = iVar3 + 1;
    }
    else {
      FUN_00ea7944(param_2,param_1[0x4d],param_1[0x4e]);
      iVar3 = extraout_r1_04;
    }
    FUN_00f09308(param_2,iVar3,param_1[0x50],param_1[0x51]);
    FUN_00f09574(param_2,param_1[0x55],param_1[0x52],param_1[0x53],param_1[0x54],param_1[0x55]);
    if (param_1[0x56] == 0x80000000) {
      iVar3 = param_2[2];
      if (*param_2 == iVar3) {
        FUN_00edff4c(param_2,iVar3,1,1,1);
        iVar3 = param_2[2];
      }
      *(undefined1 *)(param_2[1] + iVar3) = 0;
      param_2[2] = iVar3 + 1;
    }
    else {
      FUN_00ea7944(param_2,param_1[0x57],param_1[0x58]);
      iVar3 = extraout_r1_05;
    }
    FUN_00f09308(param_2,iVar3,param_1[0x5a],param_1[0x5b]);
    FUN_00f09574(param_2,param_1[0x5f],param_1[0x5c],param_1[0x5d],param_1[0x5e],param_1[0x5f]);
    if (param_1[0x60] != 0x80000000) {
      FUN_00ea7944(param_2,param_1[0x61],param_1[0x62]);
      return 0;
    }
  }
  iVar3 = param_2[2];
  if (*param_2 == iVar3) {
    FUN_00edff4c(param_2,iVar3,1,1,1);
    iVar3 = param_2[2];
  }
  *(undefined1 *)(param_2[1] + iVar3) = 0;
  param_2[2] = iVar3 + 1;
  return 0;
}

