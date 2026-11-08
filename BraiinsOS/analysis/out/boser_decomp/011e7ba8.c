// FUN_011e7ba8 @ 011e7ba8 size=344 calls_out=8 calls_in=2
// strings: 

void FUN_011e7ba8(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  if (*param_1 == 1) {
    bVar7 = param_1[2] != 0 || param_1[3] != 0;
    iVar2 = 0;
    if (bVar7) {
      iVar2 = param_1[4];
    }
    if (bVar7 && iVar2 != 0) {
      FUN_01443048(iVar2,param_1[5]);
      return;
    }
  }
  else if (*param_1 == 0) {
    if ((char)param_1[0x17] == '\0') {
      FUN_00b21e9c(param_1[0x15],param_1[0x16]);
      piVar3 = param_1 + 2;
      FUN_0132b958(param_1[0x14],param_1[0x15],4,0xc);
      piVar1 = (int *)param_1[2];
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar1;
        bVar7 = (bool)hasExclusiveAccess(piVar1);
      } while (!bVar7);
      *piVar1 = iVar2 + -1;
    }
    else {
      if ((char)param_1[0x17] != '\x03') {
        return;
      }
      if (param_1[0x10] == -0x80000000) {
        iVar5 = param_1[6];
        iVar6 = param_1[7];
        iVar4 = iVar6 + 1;
        iVar2 = iVar5;
        while (iVar4 = iVar4 + -1, iVar4 != 0) {
          FUN_011e7e04(iVar2);
          iVar2 = iVar2 + 0xc;
        }
        if (iVar6 != 0) {
          thunk_FUN_01be4678(iVar5);
        }
      }
      else {
        piVar3 = param_1 + 10;
        FUN_0120954c(piVar3);
        piVar1 = (int *)*piVar3;
        DataMemoryBarrier(0xb);
        do {
          iVar2 = *piVar1;
          bVar7 = (bool)hasExclusiveAccess(piVar1);
        } while (!bVar7);
        *piVar1 = iVar2 + -1;
        if (iVar2 == 1) {
          DataMemoryBarrier(0xb);
          FUN_00a903d0(*piVar3);
        }
        FUN_0132b958(param_1[0xd],param_1[0xe],8,8);
      }
      piVar3 = param_1 + 4;
      piVar1 = (int *)*piVar3;
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar1;
        bVar7 = (bool)hasExclusiveAccess(piVar1);
      } while (!bVar7);
      *piVar1 = iVar2 + -1;
    }
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_018531c0(*piVar3,piVar3[1]);
      return;
    }
  }
  return;
}

