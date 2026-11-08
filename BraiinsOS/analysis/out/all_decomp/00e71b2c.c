// FUN_00e71b2c @ 00e71b2c size=540 calls_out=3 calls_in=0
// strings: 

void FUN_00e71b2c(int *param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 extraout_r1;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  
  uVar5 = *(undefined4 *)(param_2 + 4);
  uVar6 = *(uint *)(param_2 + 8);
  FUN_00f09308(param_1,param_2,uVar6,0);
  iVar3 = param_1[2];
  if ((uint)(*param_1 - iVar3) < uVar6) {
    FUN_00edff4c(param_1,iVar3,uVar6,1,1);
    iVar3 = param_1[2];
  }
  FUN_016dd1aa(param_1[1] + iVar3,uVar5,uVar6);
  uVar4 = *(uint *)(param_2 + 0x14);
  param_1[2] = iVar3 + uVar6;
  uVar5 = *(undefined4 *)(param_2 + 0x10);
  FUN_00f09308(param_1,extraout_r1,uVar4,0);
  iVar3 = param_1[2];
  if ((uint)(*param_1 - iVar3) < uVar4) {
    FUN_00edff4c(param_1,iVar3,uVar4,1,1);
    iVar3 = param_1[2];
  }
  FUN_016dd1aa(param_1[1] + iVar3,uVar5,uVar4);
  iVar2 = *(int *)(param_2 + 0x18);
  iVar3 = iVar3 + uVar4;
  param_1[2] = iVar3;
  if (iVar2 == -0x80000000) {
    if (*param_1 == iVar3) {
      FUN_00edff4c(param_1,iVar3,1,1,1);
      iVar3 = param_1[2];
    }
    *(undefined1 *)(param_1[1] + iVar3) = 0;
    iVar3 = iVar3 + 1;
  }
  else {
    uVar5 = *(undefined4 *)(param_2 + 0x1c);
    uVar6 = *(uint *)(param_2 + 0x20);
    if (*param_1 == iVar3) {
      FUN_00edff4c(param_1,iVar3,1,1,1);
      iVar3 = param_1[2];
    }
    *(undefined1 *)(param_1[1] + iVar3) = 1;
    param_1[2] = iVar3 + 1;
    FUN_00f09308(param_1,iVar3,uVar6,0);
    iVar3 = param_1[2];
    if ((uint)(*param_1 - iVar3) < uVar6) {
      FUN_00edff4c(param_1,iVar3,uVar6,1,1);
      iVar3 = param_1[2];
    }
    FUN_016dd1aa(param_1[1] + iVar3,uVar5,uVar6);
    iVar3 = iVar3 + uVar6;
  }
  uVar1 = *(undefined1 *)(param_2 + 0x24);
  param_1[2] = iVar3;
  if (*param_1 == iVar3) {
    FUN_00edff4c(param_1,iVar3,1,1,1);
    iVar3 = param_1[2];
  }
  *(undefined1 *)(param_1[1] + iVar3) = uVar1;
  param_1[2] = iVar3 + 1;
  return;
}

