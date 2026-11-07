// FUN_0120cfd0 @ 0120cfd0 size=380 calls_out=8 calls_in=1
// strings: 

void FUN_0120cfd0(undefined4 *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if (*(char *)(param_1 + 0x15) == '\0') {
    FUN_00b21e9c(param_1[0x13],param_1[0x14]);
    FUN_0132b958(param_1[0x12],param_1[0x13],4,0xc);
    piVar2 = (int *)*param_1;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
  }
  else {
    if (*(char *)(param_1 + 0x15) != '\x03') {
      return;
    }
    if (param_1[0xe] == -0x80000000) {
      iVar6 = param_1[4];
      iVar7 = param_1[5];
      iVar5 = iVar7 + 1;
      iVar3 = iVar6;
      while (iVar5 = iVar5 + -1, iVar5 != 0) {
        FUN_011e7e04(iVar3);
        iVar3 = iVar3 + 0xc;
      }
      if (iVar7 != 0) {
        thunk_FUN_01be4678(iVar6);
      }
    }
    else {
      puVar4 = param_1 + 8;
      FUN_0120954c(puVar4);
      piVar2 = (int *)*puVar4;
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar2;
        bVar1 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar1);
      *piVar2 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00a903d0(*puVar4);
      }
      FUN_0132b958(param_1[0xb],param_1[0xc],8,8);
    }
    param_1 = param_1 + 2;
    piVar2 = (int *)*param_1;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
  }
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_018531c0(*param_1,param_1[1]);
    return;
  }
  return;
}

