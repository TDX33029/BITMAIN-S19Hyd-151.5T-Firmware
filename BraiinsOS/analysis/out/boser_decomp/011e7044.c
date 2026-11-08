// FUN_011e7044 @ 011e7044 size=96 calls_out=3 calls_in=8
// strings: 

void FUN_011e7044(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if ((iVar1 != 0) && (iVar2 = iVar1 * 4 + 4, iVar1 + iVar2 != -5)) {
    thunk_FUN_01be4678(*(int *)(param_1 + 0x1c) - iVar2);
  }
  uVar3 = *(undefined4 *)(param_1 + 0x14);
  FUN_006d0f78(uVar3,*(undefined4 *)(param_1 + 0x18));
  FUN_0132b958(*(undefined4 *)(param_1 + 0x10),uVar3,4,0x6c);
  return;
}

