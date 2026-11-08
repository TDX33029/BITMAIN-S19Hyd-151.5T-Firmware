// FUN_019e5c10 @ 019e5c10 size=136 calls_out=2 calls_in=2
// strings: 

void FUN_019e5c10(int *param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_1;
  while( true ) {
    iVar3 = *(int *)(iVar2 + 0xc);
    ClearExclusiveLocal();
    DataMemoryBarrier(0xb);
    uVar1 = *(uint *)(iVar2 + 0x10);
    if (uVar1 - iVar3 < 0x100) {
      *(int *)(*(int *)(iVar2 + 0x14) + (uVar1 & 0xff) * 4) = param_2;
      DataMemoryBarrier(0xb);
      *(uint *)(iVar2 + 0x10) = uVar1 + 1;
      return;
    }
    if (iVar3 != *(int *)(iVar2 + 8)) break;
    param_2 = FUN_019e59c8(iVar2,param_2,iVar3,uVar1,param_3);
    if (param_2 == 0) {
      return;
    }
  }
  FUN_019ec2c0(param_3);
  return;
}

