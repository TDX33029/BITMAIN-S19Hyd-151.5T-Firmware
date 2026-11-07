// FUN_00d46228 @ 00d46228 size=80 calls_out=2 calls_in=1
// strings: 

void FUN_00d46228(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 == -0x80000000) {
    return;
  }
  iVar4 = *(int *)(param_1 + 0xc);
  iVar5 = *(int *)(param_1 + 0x10);
  for (iVar3 = 0; iVar5 != iVar3; iVar3 = iVar3 + 1) {
    iVar1 = iVar4 + iVar3 * 0x40;
    FUN_019bb7e0(*(undefined4 *)(iVar1 + 0x30),*(undefined4 *)(iVar1 + 0x34));
  }
  FUN_0132b958(iVar2,iVar4,8,0x40);
  return;
}

