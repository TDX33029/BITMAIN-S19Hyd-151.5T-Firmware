// FUN_015e1ed0 @ 015e1ed0 size=88 calls_out=2 calls_in=0
// strings: 

void FUN_015e1ed0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_2 + 0x24;
  FUN_015e9368(iVar1,*(ushort *)(param_1 + 0x4c) << 8 | *(ushort *)(param_1 + 0x4c) >> 8);
  FUN_015e9368(iVar1,*(ushort *)(param_1 + 0x4e) << 8 | *(ushort *)(param_1 + 0x4e) >> 8);
  FUN_015e9368(iVar1,*(ushort *)(param_1 + 0x50) << 8 | *(ushort *)(param_1 + 0x50) >> 8);
  FUN_015e2738(param_2,*(undefined4 *)(param_1 + 0x44),*(undefined4 *)(param_1 + 0x48));
  return;
}

