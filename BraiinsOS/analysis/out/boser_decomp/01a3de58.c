// FUN_01a3de58 @ 01a3de58 size=68 calls_out=2 calls_in=1
// strings: 

void FUN_01a3de58(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x38);
  if ((iVar1 != -0x7ffffffd) && (-1 < iVar1)) {
    FUN_0134bd64(iVar1,*(undefined4 *)(param_1 + 0x3c));
  }
  iVar1 = *(int *)(param_1 + 0x44);
  if ((iVar1 != -0x7ffffffd) && (-1 < iVar1)) {
    FUN_0134bd64(iVar1,*(undefined4 *)(param_1 + 0x48));
  }
  FUN_01272b84(param_1 + 8);
  return;
}

