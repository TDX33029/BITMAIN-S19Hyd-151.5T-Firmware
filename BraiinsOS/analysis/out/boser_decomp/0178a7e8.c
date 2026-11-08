// FUN_0178a7e8 @ 0178a7e8 size=68 calls_out=2 calls_in=3
// strings: 

void FUN_0178a7e8(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = param_1[1];
  iVar4 = param_1[2];
  for (iVar2 = 0; iVar4 != iVar2; iVar2 = iVar2 + 1) {
    iVar1 = iVar3 + iVar2 * 0x10;
    FUN_019bb7e0(*(undefined4 *)(iVar1 + 4),*(undefined4 *)(iVar1 + 8));
  }
  FUN_0132b958(*param_1,iVar3,4,0x10);
  return;
}

