// FUN_012bfc00 @ 012bfc00 size=160 calls_out=1 calls_in=1
// strings: 

void FUN_012bfc00(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x28);
  if (iVar2 == *(int *)(param_1 + 0x20)) {
    FUN_018c4418();
  }
  puVar1 = (undefined4 *)(*(int *)(param_1 + 0x24) + iVar2 * 0xc);
  *puVar1 = 0;
  puVar1[1] = 4;
  puVar1[2] = 0;
  *(int *)(param_1 + 0x28) = iVar2 + 1;
  iVar2 = *(int *)(param_1 + 0x34);
  if (iVar2 == *(int *)(param_1 + 0x2c)) {
    FUN_018c4418();
  }
  puVar1 = (undefined4 *)(*(int *)(param_1 + 0x30) + iVar2 * 0xc);
  *puVar1 = 0;
  puVar1[1] = 4;
  puVar1[2] = 0;
  *(int *)(param_1 + 0x34) = iVar2 + 1;
  return;
}

