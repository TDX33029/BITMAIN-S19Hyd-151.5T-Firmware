// FUN_00d3b694 @ 00d3b694 size=340 calls_out=5 calls_in=2
// strings: 

void FUN_00d3b694(int *param_1)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  
  if (*param_1 == 1) {
    bVar3 = param_1[2] != 0 || param_1[3] != 0;
    iVar2 = 0;
    if (bVar3) {
      iVar2 = param_1[4];
    }
    if (bVar3 && iVar2 != 0) {
      FUN_01443048(iVar2,param_1[5]);
      return;
    }
  }
  else if (*param_1 == 0) {
    if ((char)param_1[0x12] == '\x03') {
      if ((char)param_1[0xd] == '\x03') {
        FUN_01a17e08(param_1 + 7);
        if (param_1[8] != 0) {
          (**(code **)(param_1[8] + 0xc))(param_1[9]);
        }
      }
      FUN_00d35adc(param_1 + 2);
      piVar1 = (int *)param_1[0x11];
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar1;
        bVar3 = (bool)hasExclusiveAccess(piVar1);
      } while (!bVar3);
      *piVar1 = iVar2 + -1;
      if (iVar2 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01182478(param_1[0x11]);
      }
      piVar1 = (int *)param_1[0x10];
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar1;
        bVar3 = (bool)hasExclusiveAccess(piVar1);
      } while (!bVar3);
      *piVar1 = iVar2 + -1;
      if (iVar2 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01181abc(param_1[0x10]);
        return;
      }
      return;
    }
    if ((char)param_1[0x12] == '\0') {
      piVar1 = (int *)param_1[0xe];
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar1;
        bVar3 = (bool)hasExclusiveAccess(piVar1);
      } while (!bVar3);
      *piVar1 = iVar2 + -1;
      if (iVar2 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01181abc(param_1[0xe]);
      }
      piVar1 = (int *)param_1[0xf];
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar1;
        bVar3 = (bool)hasExclusiveAccess(piVar1);
      } while (!bVar3);
      *piVar1 = iVar2 + -1;
      if (iVar2 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01182478(param_1[0xf]);
        return;
      }
    }
  }
  return;
}

