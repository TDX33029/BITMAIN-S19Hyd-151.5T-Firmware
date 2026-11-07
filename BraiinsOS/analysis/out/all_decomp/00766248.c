// FUN_00766248 @ 00766248 size=1064 calls_out=13 calls_in=1
// strings: 

void FUN_00766248(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  
  if (*(char *)(param_1 + 0x498) != '\x03') {
    if (*(char *)(param_1 + 0x498) != '\0') {
      return;
    }
    FUN_005e6cdc(param_1);
    if (*(int *)(param_1 + 0xc) != -1) {
      FUN_016dffb2();
    }
    FUN_00a414e8(param_1);
    piVar2 = *(int **)(param_1 + 0x490);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_012c0f04(*(undefined4 *)(param_1 + 0x490));
    }
    piVar2 = *(int **)(param_1 + 0x494);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0078f120(*(undefined4 *)(param_1 + 0x494));
      return;
    }
    return;
  }
  iVar3 = 2;
  uVar5 = *(uint *)(param_1 + 0xb0);
  if ((uint)(uVar5 < 4) <= (uint)-*(int *)(param_1 + 0xb4)) {
    iVar3 = uVar5 - 4;
  }
  if (iVar3 == 0) {
    piVar2 = (int *)(param_1 + 0x158);
    if (*piVar2 != 2) {
      FUN_005e6cdc(piVar2,-(*(int *)(param_1 + 0xb4) + (uint)(uVar5 >= 4)));
      if (*(int *)(param_1 + 0x164) != -1) {
        FUN_016dffb2();
      }
      FUN_00a414e8(piVar2);
    }
    if (*(int *)(param_1 + 0xb8) != 2 || *(int *)(param_1 + 0xbc) != 0) {
      piVar2 = *(int **)(param_1 + 0xe0);
      if (piVar2 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar3 = *piVar2;
          bVar1 = (bool)hasExclusiveAccess(piVar2);
        } while (!bVar1);
        *piVar2 = iVar3 + -1;
        if (iVar3 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0089ddfc(*(undefined4 *)(param_1 + 0xe0),*(undefined4 *)(param_1 + 0xe4));
        }
      }
      piVar2 = *(int **)(param_1 + 0x148);
      if (piVar2 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar3 = *piVar2;
          bVar1 = (bool)hasExclusiveAccess(piVar2);
        } while (!bVar1);
        *piVar2 = iVar3 + -1;
        if (iVar3 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0089ddfc(*(undefined4 *)(param_1 + 0x148),*(undefined4 *)(param_1 + 0x14c));
        }
      }
    }
    piVar2 = *(int **)(param_1 + 0x188);
    if (piVar2 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar2;
        bVar1 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar1);
      *piVar2 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_012c0f04(*(undefined4 *)(param_1 + 0x188));
      }
      piVar2 = *(int **)(param_1 + 0x18c);
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar2;
        bVar1 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar1);
      *piVar2 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0078f120(*(undefined4 *)(param_1 + 0x18c));
      }
    }
  }
  else {
    if (iVar3 == 1) {
      FUN_0064bf10(param_1 + 0x1b8);
      piVar2 = *(int **)(param_1 + 0x220);
      if (((uint)piVar2 & 1) == 0) {
        piVar4 = piVar2 + 4;
        DataMemoryBarrier(0xb);
        do {
          iVar3 = *piVar4;
          bVar1 = (bool)hasExclusiveAccess(piVar4);
        } while (!bVar1);
        *piVar4 = iVar3 + -1;
        if (iVar3 == 1) {
          DataMemoryBarrier(0xb);
          if (*piVar2 != 0) {
            thunk_FUN_016d3fb4(piVar2[1]);
          }
          goto LAB_00766568;
        }
      }
      else if (*(int *)(param_1 + 0x21c) + ((uint)piVar2 >> 5) != 0) {
        piVar2 = (int *)(*(int *)(param_1 + 0x214) - ((uint)piVar2 >> 5));
LAB_00766568:
        thunk_FUN_016d3fb4(piVar2);
      }
      if (*(int *)(param_1 + 0x1e0) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x1e4));
      }
      FUN_014f059c((int *)(param_1 + 0x1f0));
      if (*(int *)(param_1 + 0x1f0) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 500));
      }
      FUN_0064bf9c(param_1 + 0xb8);
      FUN_0064c43c(param_1 + 0x23c);
      FUN_0143a0bc(param_1 + 0x228);
      piVar2 = *(int **)(param_1 + 0x248);
      iVar3 = 0;
      if (*piVar2 != 0) {
        iVar3 = piVar2[1];
      }
      if (*piVar2 != 0 && iVar3 != 0) {
        (**(code **)(iVar3 + 0x10))(piVar2 + 4,piVar2[2],piVar2[3]);
      }
      thunk_FUN_016d3fb4(piVar2);
      piVar2 = *(int **)(param_1 + 0x38);
      goto joined_r0x00766514;
    }
    piVar2 = *(int **)(param_1 + 0x480);
    if (piVar2 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar2;
        bVar1 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar1);
      *piVar2 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0089ddfc(*(undefined4 *)(param_1 + 0x480),*(undefined4 *)(param_1 + 0x484));
      }
    }
    piVar2 = *(int **)(param_1 + 0x478);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_012c0f04(*(undefined4 *)(param_1 + 0x478));
    }
    piVar2 = *(int **)(param_1 + 0x47c);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0078f120(*(undefined4 *)(param_1 + 0x47c));
    }
    FUN_0064bd14((uint *)(param_1 + 0xb0));
  }
  piVar2 = *(int **)(param_1 + 0x38);
joined_r0x00766514:
  if (piVar2 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0089ddfc(*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x3c));
    }
  }
  piVar2 = *(int **)(param_1 + 0xa0);
  if (piVar2 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0089ddfc(*(undefined4 *)(param_1 + 0xa0),*(undefined4 *)(param_1 + 0xa4));
    }
  }
  *(undefined2 *)(param_1 + 0x499) = 0;
  return;
}

