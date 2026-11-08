// FUN_008e8b74 @ 008e8b74 size=272 calls_out=2 calls_in=2
// strings: 

void FUN_008e8b74(int *param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  if (param_1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_018a47a4);
  }
  *(undefined1 *)(param_1 + 7) = 1;
  puVar2 = (uint *)(param_1 + 6);
  uVar5 = param_1[6];
  do {
    while( true ) {
      uVar4 = uVar5;
      if ((uVar4 & 4) != 0) goto LAB_008e8be8;
      uVar5 = *puVar2;
      if (uVar5 == uVar4) break;
      ClearExclusiveLocal();
      DataMemoryBarrier(0xb);
    }
    DataMemoryBarrier(0xb);
    bVar1 = (bool)hasExclusiveAccess(puVar2);
    if (bVar1) {
      *puVar2 = uVar4 | 2;
    }
    DataMemoryBarrier(0xb);
  } while (!bVar1);
LAB_008e8be8:
  if ((uVar4 & 5) == 1) {
    (**(code **)(param_1[4] + 8))(param_1[5]);
  }
  if ((uVar4 & 4) == 0) {
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *param_1;
      bVar1 = (bool)hasExclusiveAccess(param_1);
    } while (!bVar1);
    *param_1 = iVar3 + -1;
  }
  else {
    iVar3 = param_1[7];
    *(undefined1 *)(param_1 + 7) = 0;
    if ((char)iVar3 == '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_018a47b4);
    }
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *param_1;
      bVar1 = (bool)hasExclusiveAccess(param_1);
    } while (!bVar1);
    *param_1 = iVar3 + -1;
  }
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0165863c(param_1);
    return;
  }
  return;
}

