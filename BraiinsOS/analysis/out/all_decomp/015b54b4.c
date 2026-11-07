// FUN_015b54b4 @ 015b54b4 size=196 calls_out=2 calls_in=0
// strings: 

void FUN_015b54b4(int param_1,int param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  bVar1 = *(byte *)(param_1 + 0x68);
  uVar2 = (uint)bVar1;
  iVar4 = param_1 + 0x28;
  uVar3 = 0x40 - uVar2;
  if (param_3 < uVar3) {
    FUN_016dd1aa(iVar4 + uVar2,param_2,param_3);
    *(byte *)(param_1 + 0x68) = (char)param_3 + bVar1;
    return;
  }
  if (uVar2 != 0) {
    FUN_016dd1aa(iVar4 + uVar2,param_2,uVar3);
    uVar2 = *(uint *)(param_1 + 0x20);
    *(uint *)(param_1 + 0x20) = uVar2 + 1;
    *(uint *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + (uint)(0xfffffffe < uVar2);
    FUN_01585360(param_1,iVar4,1);
    param_2 = param_2 + uVar3;
    param_3 = param_3 - uVar3;
  }
  uVar2 = param_3 >> 6;
  if (uVar2 != 0) {
    uVar3 = *(uint *)(param_1 + 0x20);
    *(uint *)(param_1 + 0x20) = uVar3 + uVar2;
    *(uint *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + (uint)CARRY4(uVar3,uVar2);
    FUN_01585360(param_1);
  }
  FUN_016dd1aa(iVar4,param_2 + (param_3 & 0x7fffffc0),param_3 & 0x3f);
  *(char *)(param_1 + 0x68) = (char)(param_3 & 0x3f);
  return;
}

