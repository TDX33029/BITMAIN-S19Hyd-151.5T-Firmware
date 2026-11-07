// FUN_014a6764 @ 014a6764 size=68 calls_out=2 calls_in=1
// strings: 

void FUN_014a6764(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(param_1 + 0x24);
  iVar4 = *(int *)(param_1 + 0x28);
  for (iVar2 = 0; iVar4 != iVar2; iVar2 = iVar2 + 1) {
    iVar1 = iVar3 + iVar2 * 0x40;
    FUN_019bb7e0(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x24));
  }
  FUN_0132b958(*(undefined4 *)(param_1 + 0x20),iVar3,8,0x40);
  return;
}

