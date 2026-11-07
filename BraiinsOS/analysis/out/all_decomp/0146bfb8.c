// FUN_0146bfb8 @ 0146bfb8 size=324 calls_out=3 calls_in=2
// strings: 

undefined8 FUN_0146bfb8(int *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  
  if (param_1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_018a47a4);
  }
  iVar2 = 0;
  if (param_1[2] != 0) {
    iVar2 = param_1[3];
  }
  if (param_1[2] != 0 && iVar2 != 0) {
    FUN_0145d684();
  }
  puVar3 = (uint *)(param_1 + 8);
  param_1[2] = 1;
  param_1[3] = param_2;
  uVar5 = param_1[8];
  do {
    while( true ) {
      uVar4 = uVar5;
      if ((uVar4 & 4) != 0) goto LAB_0146c048;
      uVar5 = *puVar3;
      if (uVar5 == uVar4) break;
      ClearExclusiveLocal();
      DataMemoryBarrier(0xb);
    }
    DataMemoryBarrier(0xb);
    bVar1 = (bool)hasExclusiveAccess(puVar3);
    if (bVar1) {
      *puVar3 = uVar4 | 2;
    }
    DataMemoryBarrier(0xb);
  } while (!bVar1);
LAB_0146c048:
  if ((uVar4 & 5) == 1) {
    (**(code **)(param_1[6] + 8))(param_1[7]);
  }
  if ((uVar4 & 4) == 0) {
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *param_1;
      bVar1 = (bool)hasExclusiveAccess(param_1);
    } while (!bVar1);
    *param_1 = iVar2 + -1;
    uVar6 = 0;
  }
  else {
    iVar2 = param_1[2];
    param_2 = param_1[3];
    param_1[2] = 0;
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_018a47b4);
    }
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *param_1;
      bVar1 = (bool)hasExclusiveAccess(param_1);
    } while (!bVar1);
    *param_1 = iVar2 + -1;
    uVar6 = 1;
  }
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_014a45ec(param_1);
  }
  return CONCAT44(param_2,uVar6);
}

