// FUN_0094cbc0 @ 0094cbc0 size=96 calls_out=3 calls_in=3
// strings: 

void FUN_0094cbc0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if ((iVar1 != 0) && (iVar2 = iVar1 * 4 + 4, iVar1 + iVar2 != -5)) {
    thunk_FUN_01be4678(*(int *)(param_1 + 0x1c) - iVar2);
  }
  uVar3 = *(undefined4 *)(param_1 + 0x14);
  FUN_01ae1648(uVar3,*(undefined4 *)(param_1 + 0x18));
  FUN_0134aee0(*(undefined4 *)(param_1 + 0x10),uVar3,8,0x1d8);
  return;
}

