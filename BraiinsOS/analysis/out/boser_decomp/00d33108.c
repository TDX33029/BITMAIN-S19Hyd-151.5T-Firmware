// FUN_00d33108 @ 00d33108 size=272 calls_out=6 calls_in=2
// strings: 

void FUN_00d33108(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  undefined4 *puVar5;
  
  if (*param_1 == 1) {
    FUN_00d332bc(param_1 + 2);
    return;
  }
  if (*param_1 == 0) {
    if ((char)param_1[9] == '\x03') {
      puVar5 = (undefined4 *)param_1[8];
      iVar3 = param_1[7];
      pcVar4 = (code *)*puVar5;
      if (pcVar4 != (code *)0x0) {
        (*pcVar4)(iVar3);
      }
      if (puVar5[1] != 0) {
        thunk_FUN_01be4678(iVar3);
        return;
      }
    }
    else if ((char)param_1[9] == '\0') {
      piVar2 = (int *)param_1[2];
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar2;
        bVar1 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar1);
      *piVar2 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01177254(param_1[2],param_1[3]);
      }
      FUN_005faf6c(param_1 + 4);
      piVar2 = (int *)param_1[5];
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar2;
        bVar1 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar1);
      *piVar2 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_011772ac(param_1[5]);
      }
      piVar2 = (int *)param_1[6];
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar2;
        bVar1 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar1);
      *piVar2 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01177340(param_1[6]);
        return;
      }
      return;
    }
  }
  return;
}

