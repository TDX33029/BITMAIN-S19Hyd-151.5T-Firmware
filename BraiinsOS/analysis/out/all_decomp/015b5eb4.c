// FUN_015b5eb4 @ 015b5eb4 size=236 calls_out=2 calls_in=0
// strings: 

void FUN_015b5eb4(int param_1,int param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  bVar1 = *(byte *)(param_1 + 0x68);
  uVar2 = (uint)bVar1;
  iVar4 = param_1 + 0x28;
  uVar5 = 0x40 - uVar2;
  if (param_3 <= uVar5) {
    FUN_016dd1aa(iVar4 + uVar2,param_2,param_3);
    *(byte *)(param_1 + 0x68) = (char)param_3 + bVar1;
    return;
  }
  if (uVar2 != 0) {
    FUN_016dd1aa(iVar4 + uVar2,param_2,uVar5);
    uVar2 = *(uint *)(param_1 + 0x20);
    *(uint *)(param_1 + 0x20) = uVar2 + 0x40;
    *(uint *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + (uint)(0xffffffbf < uVar2);
    FUN_00636768(param_1,iVar4,0);
    param_3 = param_3 - uVar5;
    param_2 = param_2 + uVar5;
  }
  uVar5 = param_3 & 0x3f;
  uVar2 = param_3 >> 6;
  if (uVar5 == 0) {
    uVar2 = (param_3 >> 6) - 1;
    uVar5 = 0x40;
  }
  iVar6 = param_2 + uVar2 * 0x40;
  if (uVar2 != 0) {
    iVar3 = uVar2 << 6;
    do {
      uVar2 = *(uint *)(param_1 + 0x20);
      *(uint *)(param_1 + 0x20) = uVar2 + 0x40;
      *(uint *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + (uint)(0xffffffbf < uVar2);
      FUN_00636768(param_1,param_2,0);
      param_2 = param_2 + 0x40;
      iVar3 = iVar3 + -0x40;
    } while (iVar3 != 0);
  }
  FUN_016dd1aa(iVar4,iVar6,uVar5);
  *(char *)(param_1 + 0x68) = (char)uVar5;
  return;
}

