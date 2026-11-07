// FUN_00deded4 @ 00deded4 size=112 calls_out=3 calls_in=2
// strings: 

void FUN_00deded4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x18) != -0x80000000) {
    FUN_019bb7e0(*(int *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
  }
  if (*(int *)(param_1 + 0x24) != -0x80000000) {
    FUN_019bb7e0(*(int *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28));
  }
  iVar1 = *(int *)(param_1 + 0x30);
  if (iVar1 == -0x80000000) {
    return;
  }
  uVar2 = *(undefined4 *)(param_1 + 0x34);
  FUN_00b1646c(uVar2,*(undefined4 *)(param_1 + 0x38));
  FUN_0132b958(iVar1,uVar2,4,0x28);
  return;
}

