// FUN_00ce1670 @ 00ce1670 size=116 calls_out=1 calls_in=3
// strings: 

void FUN_00ce1670(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = 0;
  while (iVar2 != param_2) {
    piVar3 = (int *)(param_1 + iVar2 * 0xc);
    iVar4 = piVar3[1];
    iVar5 = piVar3[2];
    for (iVar1 = 0; iVar5 != iVar1; iVar1 = iVar1 + 1) {
      if (*(int *)(iVar4 + iVar1 * 0x10) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(iVar4 + iVar1 * 0x10 + 4));
      }
    }
    iVar2 = iVar2 + 1;
    if (*piVar3 != 0) {
      thunk_FUN_016d3fb4(iVar4);
    }
  }
  return;
}

