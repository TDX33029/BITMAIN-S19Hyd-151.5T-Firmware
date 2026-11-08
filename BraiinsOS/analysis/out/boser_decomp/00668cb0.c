// FUN_00668cb0 @ 00668cb0 size=128 calls_out=2 calls_in=8
// strings: 

void FUN_00668cb0(int param_1)

{
  int iVar1;
  bool bVar2;
  
  if (*(int *)(param_1 + 0x38) != -0x80000000) {
    FUN_019bb7e0(*(int *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x3c));
  }
  if (*(int *)(param_1 + 0x44) != -0x80000000) {
    FUN_019bb7e0(*(int *)(param_1 + 0x44),*(undefined4 *)(param_1 + 0x48));
  }
  if (*(char *)(param_1 + 0x1c) != '\x02') {
    FUN_0067e0f0(param_1 + 0x10);
  }
  if (*(int *)(param_1 + 0x50) != -0x80000000) {
    FUN_019bb7e0(*(int *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54));
  }
  if (*(int *)(param_1 + 0x5c) != -0x80000000) {
    FUN_019bb7e0(*(int *)(param_1 + 0x5c),*(undefined4 *)(param_1 + 0x60));
  }
  iVar1 = *(int *)(param_1 + 0x20);
  bVar2 = iVar1 != 2;
  if (bVar2) {
    iVar1 = *(int *)(param_1 + 0x28);
  }
  if (bVar2 && iVar1 != -0x80000000) {
    FUN_019bb7e0(iVar1,*(undefined4 *)(param_1 + 0x2c));
    return;
  }
  return;
}

