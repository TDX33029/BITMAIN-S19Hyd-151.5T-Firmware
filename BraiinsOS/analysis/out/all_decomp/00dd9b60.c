// FUN_00dd9b60 @ 00dd9b60 size=1112 calls_out=20 calls_in=1
// strings: 

void FUN_00dd9b60(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  FUN_005c384c(param_1 + 0x6c);
  piVar2 = (int *)param_1[0x124];
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00aacbe0(param_1[0x124]);
  }
  piVar2 = (int *)param_1[0x125];
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00aaaafc(param_1[0x125]);
  }
  piVar2 = (int *)param_1[0x126];
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00e46504(param_1[0x126]);
  }
  FUN_00e46678(param_1[0x127]);
  piVar2 = (int *)param_1[0x127];
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00aac878(param_1[0x127]);
  }
  piVar2 = (int *)param_1[0x128];
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00aad0bc(param_1[0x128]);
  }
  piVar2 = (int *)param_1[0x129];
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00aa6194(param_1[0x129]);
  }
  FUN_00e469ec(param_1[0x12a]);
  piVar2 = (int *)param_1[0x12a];
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00aa79bc(param_1[0x12a]);
  }
  iVar4 = param_1[0x83];
  if (iVar4 != 0) {
    piVar2 = (int *)param_1[0x82];
    do {
      iVar4 = iVar4 + -1;
      iVar3 = 0;
      if (*piVar2 != 0) {
        iVar3 = piVar2[1];
      }
      if (*piVar2 != 0 && iVar3 != 0) {
        (**(code **)(iVar3 + 0xc))(piVar2[2]);
      }
      piVar2 = piVar2 + 3;
    } while (iVar4 != 0);
  }
  if (param_1[0x81] != 0) {
    thunk_FUN_016d3fb4(param_1[0x82]);
  }
  if (param_1[0x89] == -0x80000000 || param_1[0x89] == 0) {
    iVar4 = param_1[0x86];
  }
  else {
    thunk_FUN_016d3fb4(param_1[0x8a]);
    iVar4 = param_1[0x86];
  }
  if (iVar4 != 0) {
    thunk_FUN_016d3fb4(param_1[0x87]);
  }
  iVar4 = param_1[299];
  piVar2 = (int *)(iVar4 + 0x48);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    FUN_00e46e30(iVar4 + 8);
  }
  piVar2 = (int *)param_1[299];
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00aab134(param_1[299]);
  }
  iVar4 = param_1[300];
  piVar2 = (int *)(iVar4 + 0x44);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    FUN_00e46e30(iVar4 + 8);
  }
  piVar2 = (int *)param_1[300];
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00aab134(param_1[300]);
  }
  iVar4 = param_1[0x91];
  if (iVar4 != 0) {
    piVar2 = (int *)param_1[0x90];
    do {
      iVar4 = iVar4 + -1;
      iVar3 = 0;
      if (*piVar2 != 0) {
        iVar3 = piVar2[1];
      }
      if (*piVar2 != 0 && iVar3 != 0) {
        (**(code **)(iVar3 + 0xc))(piVar2[2]);
      }
      piVar2 = piVar2 + 3;
    } while (iVar4 != 0);
  }
  if (param_1[0x8f] != 0) {
    thunk_FUN_016d3fb4(param_1[0x90]);
  }
  FUN_00dda4ac(param_1 + 0x94);
  FUN_005c73cc(param_1 + 0x1c);
  FUN_00aa313c(param_1[0x12d]);
  piVar2 = (int *)param_1[0x12d];
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00aad1e0(param_1[0x12d]);
  }
  iVar4 = param_1[0x12e];
  piVar2 = (int *)(iVar4 + 0x44);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    FUN_00e473d0(iVar4 + 8);
  }
  piVar2 = (int *)param_1[0x12e];
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00aacf14(param_1[0x12e]);
  }
  iVar4 = param_1[0x12f];
  piVar2 = (int *)(iVar4 + 0x48);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    FUN_00e473d0(iVar4 + 8);
  }
  piVar2 = (int *)param_1[0x12f];
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00aacf14(param_1[0x12f]);
  }
  if (*param_1 == 0 && param_1[1] == 0) {
    return;
  }
  FUN_00d67f2c(param_1 + 4);
  return;
}

