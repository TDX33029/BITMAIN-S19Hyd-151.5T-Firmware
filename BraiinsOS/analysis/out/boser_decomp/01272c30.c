// FUN_01272c30 @ 01272c30 size=44 calls_out=2 calls_in=2
// strings: 

void FUN_01272c30(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if ((iVar1 != -0x7ffffffd) && (-1 < iVar1)) {
    FUN_019bb7e0(iVar1,*(undefined4 *)(param_1 + 0x1c));
  }
  FUN_00a25e80(param_1 + 0x24);
  return;
}

