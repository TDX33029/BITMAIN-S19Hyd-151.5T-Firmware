// FUN_008e8e20 @ 008e8e20 size=336 calls_out=2 calls_in=2
// strings: 

undefined8 FUN_008e8e20(int *param_1,int param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  int unaff_r7;
  
  if (param_1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_018a47a4);
  }
  puVar2 = (undefined4 *)0x0;
  if (param_1[2] != 0) {
    puVar2 = (undefined4 *)param_1[3];
  }
  if (param_1[2] != 0 && puVar2 != (undefined4 *)0x0) {
    (**(code **)*puVar2)();
  }
  param_1[2] = 1;
  puVar3 = (uint *)(param_1 + 8);
  param_1[3] = param_2;
  uVar6 = param_1[8];
  do {
    while( true ) {
      uVar5 = uVar6;
      if ((uVar5 & 4) != 0) goto LAB_008e8ebc;
      uVar6 = *puVar3;
      if (uVar6 == uVar5) break;
      ClearExclusiveLocal();
      DataMemoryBarrier(0xb);
    }
    DataMemoryBarrier(0xb);
    bVar1 = (bool)hasExclusiveAccess(puVar3);
    if (bVar1) {
      *puVar3 = uVar5 | 2;
    }
    DataMemoryBarrier(0xb);
  } while (!bVar1);
LAB_008e8ebc:
  if ((uVar5 & 5) == 1) {
    (**(code **)(param_1[6] + 8))(param_1[7]);
  }
  if ((uVar5 & 4) == 0) {
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *param_1;
      bVar1 = (bool)hasExclusiveAccess(param_1);
    } while (!bVar1);
    *param_1 = iVar4 + -1;
    uVar7 = 0;
  }
  else {
    iVar4 = param_1[2];
    unaff_r7 = param_1[3];
    param_1[2] = 0;
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_018a47b4);
    }
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *param_1;
      bVar1 = (bool)hasExclusiveAccess(param_1);
    } while (!bVar1);
    *param_1 = iVar4 + -1;
    uVar7 = 1;
  }
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_008f4380(param_1);
  }
  return CONCAT44(unaff_r7,uVar7);
}

