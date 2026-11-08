// FUN_006129ec @ 006129ec size=208 calls_out=2 calls_in=2
// strings: 

void FUN_006129ec(int param_1,int param_2)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = 0;
  while (iVar3 != param_2) {
    iVar5 = iVar3 + 1;
    iVar4 = param_1 + iVar3 * 0x120;
    piVar2 = *(int **)(iVar4 + 0x100);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00614130(*(undefined4 *)(iVar4 + 0x100));
    }
    iVar3 = iVar5;
    if (*(int *)(iVar4 + 0x10) != 0x2f || *(int *)(iVar4 + 0x14) != 0) {
      if (*(int *)(iVar4 + 0x70) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(iVar4 + 0x74));
      }
      if (*(int *)(iVar4 + 0x7c) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(iVar4 + 0x80));
      }
      if (*(int *)(iVar4 + 0x88) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(iVar4 + 0x8c));
      }
      if (*(int *)(iVar4 + 0x94) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(iVar4 + 0x98));
      }
    }
  }
  return;
}

