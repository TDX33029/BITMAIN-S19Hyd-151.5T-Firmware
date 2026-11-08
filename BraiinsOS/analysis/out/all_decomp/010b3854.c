// FUN_010b3854 @ 010b3854 size=200 calls_out=1 calls_in=5
// strings: 

void FUN_010b3854(int param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  iVar2 = *(int *)(param_1 + 0x40);
  if (((iVar2 == 1 || iVar2 == 2) && (*(uint *)(param_1 + 0x48) < 2)) &&
     (*(int *)(param_1 + 0x68) != 0)) {
    piVar4 = *(int **)(param_1 + 0x74);
    if (((uint)piVar4 & 1) == 0) {
      piVar3 = piVar4 + 4;
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar3;
        bVar1 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar1);
      *piVar3 = iVar2 + -1;
      if (iVar2 != 1) goto LAB_010b3900;
      DataMemoryBarrier(0xb);
      if (*piVar4 != 0) {
        thunk_FUN_016d3fb4(piVar4[1]);
      }
    }
    else {
      if (*(int *)(param_1 + 0x70) + ((uint)piVar4 >> 5) == 0) goto LAB_010b3900;
      piVar4 = (int *)(*(int *)(param_1 + 0x68) - ((uint)piVar4 >> 5));
    }
    thunk_FUN_016d3fb4(piVar4);
  }
LAB_010b3900:
  *(int *)(param_1 + 0x40) = 4;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined1 *)(param_1 + 0xf7) = 2;
  return;
}

