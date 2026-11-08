// FUN_009dee28 @ 009dee28 size=68 calls_out=1 calls_in=2
// strings: 

void FUN_009dee28(int *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  piVar5 = (int *)*param_1;
  FUN_012cb6a8(piVar5);
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar5;
    bVar1 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar1);
  *piVar5 = iVar2 + -1;
  if (iVar2 != 1) {
    return;
  }
  DataMemoryBarrier(0xb);
  iVar2 = *param_1;
  iVar7 = *(int *)(iVar2 + 0xc);
  if (iVar7 != 0) {
    iVar6 = *(int *)(iVar2 + 8);
    iVar8 = 0;
    do {
      piVar5 = (int *)(iVar6 + iVar8 * 0x18 + 0x14);
      piVar3 = (int *)*piVar5;
      if (piVar3 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar4 = *piVar3;
          bVar1 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar1);
        *piVar3 = iVar4 + -1;
        if (iVar4 == 1) {
          DataMemoryBarrier(0xb);
          FUN_00a92e0c(*piVar5);
        }
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 != iVar7);
    thunk_FUN_01be4678(iVar6);
  }
  if (iVar2 != -1) {
    piVar5 = (int *)(iVar2 + 4);
    DataMemoryBarrier(0xb);
    do {
      iVar7 = *piVar5;
      bVar1 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar1);
    *piVar5 = iVar7 + -1;
    if (iVar7 == 1) {
      DataMemoryBarrier(0xb);
      thunk_FUN_01be4678(iVar2);
      return;
    }
  }
  return;
}

