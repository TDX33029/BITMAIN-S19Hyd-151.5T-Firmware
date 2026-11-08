// FUN_00b9a7e0 @ 00b9a7e0 size=136 calls_out=5 calls_in=6
// strings: 

void FUN_00b9a7e0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_019bb7e0(*(undefined4 *)(param_1 + 0x158),*(undefined4 *)(param_1 + 0x15c));
  FUN_00a9586c(param_1);
  FUN_00b9a82c(param_1 + 0x50);
  if (*(int *)(param_1 + 0x164) != -0x80000000) {
    FUN_0132b958(*(int *)(param_1 + 0x164),*(undefined4 *)(param_1 + 0x168),8,0x18);
  }
  iVar1 = *(int *)(param_1 + 0x170);
  if (iVar1 == -0x80000000) {
    return;
  }
  uVar2 = *(undefined4 *)(param_1 + 0x174);
  FUN_00b170d8(uVar2,*(undefined4 *)(param_1 + 0x178));
  FUN_0132b958(iVar1,uVar2,8,0x180);
  return;
}

