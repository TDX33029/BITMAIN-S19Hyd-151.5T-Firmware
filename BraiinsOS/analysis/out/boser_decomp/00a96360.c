// FUN_00a96360 @ 00a96360 size=244 calls_out=4 calls_in=1
// strings: 

void FUN_00a96360(int *param_1)

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
  iVar8 = *(int *)(iVar2 + 0xc);
  if (iVar8 != 0) {
    iVar6 = *(int *)(iVar2 + 8);
    iVar4 = 0;
    do {
      iVar7 = iVar4 + 1;
      piVar5 = (int *)(iVar6 + iVar4 * 0x18 + 0x14);
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
          FUN_00a95f90(*piVar5);
        }
      }
      iVar4 = iVar7;
    } while (iVar7 != iVar8);
    thunk_FUN_01be4678(iVar6);
  }
  if (iVar2 != -1) {
    piVar5 = (int *)(iVar2 + 4);
    DataMemoryBarrier(0xb);
    do {
      iVar8 = *piVar5;
      bVar1 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar1);
    *piVar5 = iVar8 + -1;
    if (iVar8 == 1) {
      DataMemoryBarrier(0xb);
      thunk_FUN_01be4678(iVar2);
      return;
    }
  }
  return;
}

