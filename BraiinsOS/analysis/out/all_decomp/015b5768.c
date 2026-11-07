// FUN_015b5768 @ 015b5768 size=236 calls_out=2 calls_in=0
// strings: 

void FUN_015b5768(int param_1,int param_2,uint param_3)

{
  bool bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  bVar2 = *(byte *)(param_1 + 0xd0);
  uVar5 = (uint)bVar2;
  iVar7 = param_1 + 0x50;
  uVar6 = 0x80 - uVar5;
  if (param_3 < uVar6) {
    FUN_016dd1aa(iVar7 + uVar5,param_2,param_3);
    *(byte *)(param_1 + 0xd0) = (char)param_3 + bVar2;
    return;
  }
  if (uVar5 != 0) {
    FUN_016dd1aa(iVar7 + uVar5,param_2,uVar6);
    uVar5 = *(uint *)(param_1 + 0x40);
    uVar3 = *(uint *)(param_1 + 0x44);
    uVar4 = *(uint *)(param_1 + 0x48);
    bVar1 = CARRY4(uVar3,(uint)(0xfffffffe < uVar5));
    *(uint *)(param_1 + 0x40) = uVar5 + 1;
    *(uint *)(param_1 + 0x44) = uVar3 + (0xfffffffe < uVar5);
    *(uint *)(param_1 + 0x48) = uVar4 + bVar1;
    *(uint *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + (uint)CARRY4(uVar4,(uint)bVar1);
    FUN_01587654(param_1,iVar7,1);
    param_2 = param_2 + uVar6;
    param_3 = param_3 - uVar6;
  }
  uVar5 = param_3 >> 7;
  if (uVar5 != 0) {
    uVar6 = *(uint *)(param_1 + 0x40);
    uVar3 = *(uint *)(param_1 + 0x44);
    uVar4 = *(uint *)(param_1 + 0x48);
    bVar1 = CARRY4(uVar3,(uint)CARRY4(uVar6,uVar5));
    *(uint *)(param_1 + 0x40) = uVar6 + uVar5;
    *(uint *)(param_1 + 0x44) = uVar3 + CARRY4(uVar6,uVar5);
    *(uint *)(param_1 + 0x48) = uVar4 + bVar1;
    *(uint *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + (uint)CARRY4(uVar4,(uint)bVar1);
    FUN_01587654(param_1);
  }
  FUN_016dd1aa(iVar7,param_2 + (param_3 & 0x7fffff80),param_3 & 0x7f);
  *(char *)(param_1 + 0xd0) = (char)(param_3 & 0x7f);
  return;
}

