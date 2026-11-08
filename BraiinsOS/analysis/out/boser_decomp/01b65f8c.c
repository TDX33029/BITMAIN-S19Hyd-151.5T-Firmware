// FUN_01b65f8c @ 01b65f8c size=316 calls_out=2 calls_in=4
// strings: 

undefined8 FUN_01b65f8c(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  if (param_3 == 0) {
    return 1;
  }
  uVar5 = *(uint *)(param_1 + 0x40);
  uVar7 = param_3 * 8;
  uVar3 = *(uint *)(param_1 + 0x44);
  uVar1 = param_3 >> 0x1d;
  if (CARRY4(uVar3,uVar1) || CARRY4(uVar3 + uVar1,(uint)CARRY4(uVar5,uVar7))) {
    uVar4 = *(uint *)(param_1 + 0x48);
    *(uint *)(param_1 + 0x48) = uVar4 + 1;
    *(uint *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + (uint)(0xfffffffe < uVar4);
  }
  iVar2 = param_1 + 0x50;
  iVar6 = *(int *)(param_1 + 0xd0);
  *(uint *)(param_1 + 0x40) = uVar5 + uVar7;
  *(uint *)(param_1 + 0x44) = uVar3 + uVar1 + (uint)CARRY4(uVar5,uVar7);
  if (iVar6 == 0) {
    if (param_3 < 0x80) goto LAB_01b660a4;
LAB_01b66080:
    FUN_01b20858(param_1,param_2,param_3 >> 7);
    param_2 = param_2 + (param_3 & 0xffffff80);
    param_3 = param_3 & 0x7f;
  }
  else {
    uVar7 = 0x80 - iVar6;
    if (param_3 < uVar7) {
      FUN_01b26974(iVar2 + iVar6,param_2,param_3);
      *(uint *)(param_1 + 0xd0) = *(int *)(param_1 + 0xd0) + param_3;
      return 1;
    }
    FUN_01b26974(iVar2 + iVar6,param_2,uVar7);
    param_3 = iVar6 + (param_3 - 0x80);
    *(undefined4 *)(param_1 + 0xd0) = 0;
    FUN_01b20858(param_1,iVar2,1);
    param_2 = param_2 + uVar7;
    if (0x7f < param_3) goto LAB_01b66080;
  }
  if (param_3 == 0) {
    return 1;
  }
LAB_01b660a4:
  FUN_01b26974(iVar2,param_2,param_3);
  *(uint *)(param_1 + 0xd0) = param_3;
  return 1;
}

