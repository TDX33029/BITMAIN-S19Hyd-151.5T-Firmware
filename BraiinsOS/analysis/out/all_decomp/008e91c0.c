// FUN_008e91c0 @ 008e91c0 size=340 calls_out=2 calls_in=2
// strings: 

void FUN_008e91c0(byte *param_1,int *param_2,undefined4 *param_3)

{
  byte bVar1;
  bool bVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  undefined4 uVar7;
  int iVar8;
  
  if (param_2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_018a47a4);
  }
  uVar7 = *param_3;
  iVar8 = param_3[1];
  pbVar6 = (byte *)(param_2 + 2);
  if ((*pbVar6 & 1) != 0) {
    (*(code *)**(undefined4 **)param_2[3])();
  }
  *(undefined4 *)pbVar6 = uVar7;
  param_2[3] = iVar8;
  puVar3 = (uint *)(param_2 + 8);
  uVar5 = param_2[8];
  do {
    while( true ) {
      uVar4 = uVar5;
      if ((uVar4 & 4) != 0) goto LAB_008e9258;
      uVar5 = *puVar3;
      if (uVar5 == uVar4) break;
      ClearExclusiveLocal();
      DataMemoryBarrier(0xb);
    }
    DataMemoryBarrier(0xb);
    bVar2 = (bool)hasExclusiveAccess(puVar3);
    if (bVar2) {
      *puVar3 = uVar4 | 2;
    }
    DataMemoryBarrier(0xb);
  } while (!bVar2);
LAB_008e9258:
  if ((uVar4 & 5) == 1) {
    (**(code **)(param_2[6] + 8))(param_2[7]);
  }
  if ((uVar4 & 4) == 0) {
    *param_1 = 2;
    DataMemoryBarrier(0xb);
    do {
      iVar8 = *param_2;
      bVar2 = (bool)hasExclusiveAccess(param_2);
    } while (!bVar2);
    *param_2 = iVar8 + -1;
  }
  else {
    bVar1 = *pbVar6;
    *pbVar6 = 2;
    if (bVar1 == 2) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_018a47b4);
    }
    uVar7 = *(undefined4 *)((int)param_2 + 9);
    *(int *)(param_1 + 4) = param_2[3];
    *param_1 = bVar1;
    *(undefined4 *)(param_1 + 1) = uVar7;
    DataMemoryBarrier(0xb);
    do {
      iVar8 = *param_2;
      bVar2 = (bool)hasExclusiveAccess(param_2);
    } while (!bVar2);
    *param_2 = iVar8 + -1;
  }
  if (iVar8 == 1) {
    DataMemoryBarrier(0xb);
    FUN_008f2f58(param_2);
  }
  return;
}

