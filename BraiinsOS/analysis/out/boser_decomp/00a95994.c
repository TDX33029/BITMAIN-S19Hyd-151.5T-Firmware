// FUN_00a95994 @ 00a95994 size=176 calls_out=3 calls_in=2
// strings: 

void FUN_00a95994(int param_1)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = *(int *)(param_1 + 0xc);
  if (iVar7 != 0) {
    iVar5 = *(int *)(param_1 + 8);
    iVar4 = 0;
    do {
      iVar6 = iVar4 + 1;
      piVar2 = (int *)(iVar5 + iVar4 * 0x18 + 0x14);
      piVar3 = (int *)*piVar2;
      if (piVar3 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar4 = *piVar3;
          bVar1 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar1);
        *piVar3 = iVar4 + -1;
        if (iVar4 == 1) {
          DataMemoryBarrier(0xb);
          FUN_00a95ae4(*piVar2);
        }
      }
      iVar4 = iVar6;
    } while (iVar6 != iVar7);
    thunk_FUN_01be4678(iVar5);
  }
  if (param_1 != -1) {
    piVar2 = (int *)(param_1 + 4);
    DataMemoryBarrier(0xb);
    do {
      iVar7 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar7 + -1;
    if (iVar7 == 1) {
      DataMemoryBarrier(0xb);
      thunk_FUN_01be4678(param_1);
      return;
    }
  }
  return;
}

