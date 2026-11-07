// FUN_007bf844 @ 007bf844 size=496 calls_out=4 calls_in=5
// strings: 

void FUN_007bf844(int *param_1)

{
  bool bVar1;
  int iVar2;
  uint *puVar3;
  int *piVar4;
  uint local_20 [4];
  
  if ((char)param_1[3] == '\0') {
    iVar2 = *param_1;
    if (iVar2 == 0) {
      return;
    }
    DataMemoryBarrier(0xb);
    if (*(int *)(iVar2 + 0x10) < 0) {
      puVar3 = (uint *)(iVar2 + 0x10);
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(puVar3);
      } while (!bVar1);
      *puVar3 = *puVar3 & 0x7fffffff;
      DataMemoryBarrier(0xb);
      iVar2 = *param_1;
    }
    else {
      iVar2 = *param_1;
    }
    if (iVar2 == 0) {
      return;
    }
    do {
      while (FUN_008b55d8(local_20,param_1), local_20[0] == 2) {
        if (*param_1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa444(&DAT_0187bde8);
        }
        DataMemoryBarrier(0xb);
        if (*(int *)(*param_1 + 0x10) == 0) goto LAB_007bf9d4;
        FUN_016da3a8();
      }
    } while ((local_20[0] & 1) != 0);
LAB_007bf9d4:
    piVar4 = (int *)*param_1;
    if (piVar4 == (int *)0x0) {
      return;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar2 + -1;
  }
  else {
    if ((char)param_1[3] != '\x03') {
      return;
    }
    iVar2 = *param_1;
    if (iVar2 == 0) {
      return;
    }
    DataMemoryBarrier(0xb);
    if (*(int *)(iVar2 + 0x10) < 0) {
      puVar3 = (uint *)(iVar2 + 0x10);
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(puVar3);
      } while (!bVar1);
      *puVar3 = *puVar3 & 0x7fffffff;
      DataMemoryBarrier(0xb);
      iVar2 = *param_1;
    }
    else {
      iVar2 = *param_1;
    }
    if (iVar2 == 0) {
      return;
    }
    do {
      while (FUN_008b55d8(local_20,param_1), local_20[0] == 2) {
        if (*param_1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa444(&DAT_0187bde8);
        }
        DataMemoryBarrier(0xb);
        if (*(int *)(*param_1 + 0x10) == 0) goto LAB_007bf934;
        FUN_016da3a8();
      }
    } while ((local_20[0] & 1) != 0);
LAB_007bf934:
    piVar4 = (int *)*param_1;
    if (piVar4 == (int *)0x0) {
      return;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar2 + -1;
  }
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0089e44c(*param_1);
    return;
  }
  return;
}

