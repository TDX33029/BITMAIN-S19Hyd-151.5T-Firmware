// FUN_00b17128 @ 00b17128 size=136 calls_out=5 calls_in=1
// strings: 

void FUN_00b17128(int param_1)

{
  undefined4 uVar1;
  
  FUN_019bb7e0(*(undefined4 *)(param_1 + 0x158),*(undefined4 *)(param_1 + 0x15c));
  FUN_00a9586c(param_1);
  FUN_00b9a82c(param_1 + 0x50);
  if (*(int *)(param_1 + 0x164) != -0x80000000) {
    FUN_0132b958(*(int *)(param_1 + 0x164),*(undefined4 *)(param_1 + 0x168),8,0x18);
  }
  if (*(int *)(param_1 + 0x170) == -0x80000000) {
    return;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x174);
  FUN_00b170d8(uVar1,*(undefined4 *)(param_1 + 0x178));
  FUN_0132b958(*(int *)(param_1 + 0x170),uVar1,8,0x180);
  return;
}

