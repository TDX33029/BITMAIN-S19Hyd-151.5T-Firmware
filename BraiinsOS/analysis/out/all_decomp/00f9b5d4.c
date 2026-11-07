// FUN_00f9b5d4 @ 00f9b5d4 size=144 calls_out=1 calls_in=1
// strings: 

void FUN_00f9b5d4(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x28);
  if (iVar2 == *(int *)(param_1 + 0x20)) {
    FUN_00f98de8();
  }
  *(int *)(param_1 + 0x28) = iVar2 + 1;
  puVar1 = (undefined4 *)(*(int *)(param_1 + 0x24) + iVar2 * 0xc);
  *puVar1 = 0;
  puVar1[1] = 4;
  puVar1[2] = 0;
  iVar2 = *(int *)(param_1 + 0x34);
  if (iVar2 == *(int *)(param_1 + 0x2c)) {
    FUN_00f98de8();
  }
  *(int *)(param_1 + 0x34) = iVar2 + 1;
  puVar1 = (undefined4 *)(*(int *)(param_1 + 0x30) + iVar2 * 0xc);
  *puVar1 = 0;
  puVar1[1] = 4;
  puVar1[2] = 0;
  return;
}

