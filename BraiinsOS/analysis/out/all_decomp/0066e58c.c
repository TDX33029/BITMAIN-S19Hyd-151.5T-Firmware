// FUN_0066e58c @ 0066e58c size=228 calls_out=3 calls_in=0
// strings: 

void FUN_0066e58c(int param_1)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x50) != 0) {
    if (*(int *)(param_1 + 0x54) == 0) {
      piVar2 = *(int **)(param_1 + 0x58);
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar2;
        bVar1 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar1);
      *piVar2 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_015614d8(*(undefined4 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x5c));
      }
    }
    else {
      piVar2 = *(int **)(param_1 + 0x60);
      if (((uint)piVar2 & 1) == 0) {
        piVar3 = piVar2 + 4;
        DataMemoryBarrier(0xb);
        do {
          iVar4 = *piVar3;
          bVar1 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar1);
        *piVar3 = iVar4 + -1;
        if (iVar4 == 1) {
          DataMemoryBarrier(0xb);
          if (*piVar2 != 0) {
            thunk_FUN_016d3fb4(piVar2[1]);
          }
          thunk_FUN_016d3fb4(piVar2);
          FUN_00a07b4c(param_1);
          return;
        }
      }
      else if (*(int *)(param_1 + 0x5c) + ((uint)piVar2 >> 5) != 0) {
        thunk_FUN_016d3fb4(*(int *)(param_1 + 0x54) - ((uint)piVar2 >> 5));
      }
    }
  }
  FUN_00a07b4c(param_1);
  return;
}

