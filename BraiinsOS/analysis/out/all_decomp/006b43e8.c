// FUN_006b43e8 @ 006b43e8 size=864 calls_out=7 calls_in=1
// strings: 

void FUN_006b43e8(int *param_1)

{
  char cVar1;
  short sVar2;
  int *piVar3;
  int iVar4;
  bool bVar5;
  
  if (*param_1 != 0 || param_1[1] != 0) {
    cVar1 = (char)param_1[0x88];
    if (cVar1 == '\0') {
      FUN_006a7ac0(param_1 + 0x22);
      sVar2 = (short)param_1[0x3c];
      if (sVar2 != 2) {
        iVar4 = 0;
        if (sVar2 != 0) {
          iVar4 = param_1[0x3d];
        }
        if (sVar2 != 0 && iVar4 != 0) {
          thunk_FUN_016d3fb4(param_1[0x3e]);
        }
        bVar5 = (short)param_1[0x45] != 0;
        iVar4 = 0;
        if (bVar5) {
          iVar4 = param_1[0x46];
        }
        if (bVar5 && iVar4 != 0) {
          thunk_FUN_016d3fb4(param_1[0x47]);
        }
      }
      piVar3 = (int *)param_1[0x19];
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar5 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar5);
      *piVar3 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01089b40(param_1[0x19]);
      }
      if ((param_1[0x16] & 0x7fffffffU) != 0) {
        thunk_FUN_016d3fb4(param_1[0x17]);
      }
      piVar3 = (int *)param_1[0x82];
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar5 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar5);
      *piVar3 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0063c510(param_1[0x82],param_1[0x83]);
      }
      piVar3 = (int *)param_1[0x86];
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar5 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar5);
      *piVar3 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00aaaeec(param_1[0x86]);
      }
      piVar3 = (int *)param_1[0x84];
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar5 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar5);
      *piVar3 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0063c510(param_1[0x84],param_1[0x85]);
      }
      FUN_006a7ac0(param_1 + 0x52);
      sVar2 = (short)param_1[0x6c];
      if (sVar2 != 2) {
        iVar4 = 0;
        if (sVar2 != 0) {
          iVar4 = param_1[0x6d];
        }
        if (sVar2 != 0 && iVar4 != 0) {
          thunk_FUN_016d3fb4(param_1[0x6e]);
        }
        bVar5 = (short)param_1[0x75] != 0;
        iVar4 = 0;
        if (bVar5) {
          iVar4 = param_1[0x76];
        }
        if (bVar5 && iVar4 != 0) {
          thunk_FUN_016d3fb4(param_1[0x77]);
        }
      }
      piVar3 = (int *)param_1[0x87];
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar5 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar5);
      *piVar3 = iVar4 + -1;
    }
    else {
      if (cVar1 == '\x03') {
        FUN_006b83b0(param_1 + 0x8a);
      }
      else {
        if (cVar1 != '\x04') {
          return;
        }
        FUN_006b83b0(param_1 + 0xa8);
        if (param_1[0x8a] == -0x80000000) {
          FUN_006a6e14(param_1 + 0x8b);
        }
        else {
          FUN_006a7ac0();
          if (param_1[0xa4] != 0) {
            thunk_FUN_016d3fb4(param_1[0xa5]);
          }
        }
      }
      if (*(char *)((int)param_1 + 0x223) != '\0') {
        piVar3 = (int *)param_1[0x19];
        DataMemoryBarrier(0xb);
        do {
          iVar4 = *piVar3;
          bVar5 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar5);
        *piVar3 = iVar4 + -1;
        if (iVar4 == 1) {
          DataMemoryBarrier(0xb);
          FUN_01089b40(param_1[0x19]);
        }
        if ((param_1[0x16] & 0x7fffffffU) != 0) {
          thunk_FUN_016d3fb4(param_1[0x17]);
        }
      }
      piVar3 = (int *)param_1[0x86];
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar5 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar5);
      *piVar3 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00aaaeec(param_1[0x86]);
      }
      if (*(char *)((int)param_1 + 0x222) != '\0') {
        piVar3 = (int *)param_1[0x84];
        DataMemoryBarrier(0xb);
        do {
          iVar4 = *piVar3;
          bVar5 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar5);
        *piVar3 = iVar4 + -1;
        if (iVar4 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0063c510(param_1[0x84],param_1[0x85]);
        }
      }
      if (*(char *)((int)param_1 + 0x221) != '\0') {
        FUN_006a7ac0(param_1 + 0x52);
        sVar2 = (short)param_1[0x6c];
        if (sVar2 != 2) {
          iVar4 = 0;
          if (sVar2 != 0) {
            iVar4 = param_1[0x6d];
          }
          if (sVar2 != 0 && iVar4 != 0) {
            thunk_FUN_016d3fb4(param_1[0x6e]);
          }
          bVar5 = (short)param_1[0x75] != 0;
          iVar4 = 0;
          if (bVar5) {
            iVar4 = param_1[0x76];
          }
          if (bVar5 && iVar4 != 0) {
            thunk_FUN_016d3fb4(param_1[0x77]);
          }
        }
      }
      piVar3 = (int *)param_1[0x87];
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar5 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar5);
      *piVar3 = iVar4 + -1;
    }
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00aaaeec(param_1[0x87]);
      return;
    }
  }
  return;
}

