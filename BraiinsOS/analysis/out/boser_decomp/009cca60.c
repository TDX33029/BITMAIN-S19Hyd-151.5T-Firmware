// FUN_009cca60 @ 009cca60 size=64 calls_out=1 calls_in=1
// strings: 

void FUN_009cca60(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  FUN_009ccae0();
  piVar2 = *(int **)(param_1 + 8);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 != 1) {
    return;
  }
  DataMemoryBarrier(0xb);
  iVar3 = *(int *)(param_1 + 8);
  iVar8 = *(int *)(iVar3 + 0xc);
  if (iVar8 != 0) {
    iVar6 = *(int *)(iVar3 + 8);
    iVar5 = 0;
    do {
      iVar7 = iVar5 + 1;
      piVar2 = (int *)(iVar6 + iVar5 * 0x18 + 0x14);
      piVar4 = (int *)*piVar2;
      if (piVar4 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar5 = *piVar4;
          bVar1 = (bool)hasExclusiveAccess(piVar4);
        } while (!bVar1);
        *piVar4 = iVar5 + -1;
        if (iVar5 == 1) {
          DataMemoryBarrier(0xb);
          FUN_00a95f90(*piVar2);
        }
      }
      iVar5 = iVar7;
    } while (iVar7 != iVar8);
    thunk_FUN_01be4678(iVar6);
  }
  if (iVar3 != -1) {
    piVar2 = (int *)(iVar3 + 4);
    DataMemoryBarrier(0xb);
    do {
      iVar8 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar8 + -1;
    if (iVar8 == 1) {
      DataMemoryBarrier(0xb);
      thunk_FUN_01be4678(iVar3);
      return;
    }
  }
  return;
}

