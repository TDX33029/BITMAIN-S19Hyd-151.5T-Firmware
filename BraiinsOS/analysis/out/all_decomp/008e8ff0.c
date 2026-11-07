// FUN_008e8ff0 @ 008e8ff0 size=332 calls_out=2 calls_in=2
// strings: 

void FUN_008e8ff0(int *param_1,int *param_2,undefined4 *param_3)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  
  if (param_2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_018a47a4);
  }
  pbVar8 = (byte *)(param_2 + 2);
  if ((*pbVar8 & 1) != 0) {
    (*(code *)**(undefined4 **)param_2[3])();
  }
  iVar3 = param_3[1];
  iVar6 = param_3[2];
  iVar7 = param_3[3];
  *(undefined4 *)pbVar8 = *param_3;
  param_2[3] = iVar3;
  param_2[4] = iVar6;
  param_2[5] = iVar7;
  puVar2 = (uint *)(param_2 + 10);
  uVar5 = param_2[10];
  do {
    while( true ) {
      uVar4 = uVar5;
      if ((uVar4 & 4) != 0) goto LAB_008e908c;
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
LAB_008e908c:
  if ((uVar4 & 5) == 1) {
    (**(code **)(param_2[8] + 8))(param_2[9]);
  }
  if ((uVar4 & 4) == 0) {
    *param_1 = 2;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *param_2;
      bVar1 = (bool)hasExclusiveAccess(param_2);
    } while (!bVar1);
    *param_2 = iVar3 + -1;
  }
  else {
    pbVar8[0] = 2;
    pbVar8[1] = 0;
    pbVar8[2] = 0;
    pbVar8[3] = 0;
    if (*(int *)pbVar8 == 2) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_018a47b4);
    }
    iVar3 = param_2[3];
    iVar6 = param_2[4];
    iVar7 = param_2[5];
    *param_1 = *(int *)pbVar8;
    param_1[1] = iVar3;
    param_1[2] = iVar6;
    param_1[3] = iVar7;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *param_2;
      bVar1 = (bool)hasExclusiveAccess(param_2);
    } while (!bVar1);
    *param_2 = iVar3 + -1;
  }
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_008f427c(param_2);
  }
  return;
}

