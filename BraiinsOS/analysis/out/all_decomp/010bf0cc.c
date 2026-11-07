// FUN_010bf0cc @ 010bf0cc size=348 calls_out=3 calls_in=3
// strings: 

void FUN_010bf0cc(undefined4 *param_1,int *param_2,int *param_3)

{
  bool bVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  if (param_2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_018a47a4);
  }
  if (param_2[7] != 0) {
    FUN_010bf29c(param_2 + 8);
  }
  param_2[7] = 1;
  iVar5 = param_3[1];
  iVar6 = param_3[2];
  iVar7 = param_3[3];
  iVar8 = param_3[4];
  iVar9 = param_3[5];
  param_2[8] = *param_3;
  param_2[9] = iVar5;
  param_2[10] = iVar6;
  param_2[0xb] = iVar7;
  param_2[0xc] = iVar8;
  param_2[0xd] = iVar9;
  puVar2 = (uint *)(param_2 + 6);
  uVar4 = param_2[6];
  do {
    while( true ) {
      uVar3 = uVar4;
      if ((uVar3 & 4) != 0) goto LAB_010bf170;
      uVar4 = *puVar2;
      if (uVar4 == uVar3) break;
      ClearExclusiveLocal();
      DataMemoryBarrier(0xb);
    }
    DataMemoryBarrier(0xb);
    bVar1 = (bool)hasExclusiveAccess(puVar2);
    if (bVar1) {
      *puVar2 = uVar3 | 2;
    }
    DataMemoryBarrier(0xb);
  } while (!bVar1);
LAB_010bf170:
  if ((uVar3 & 5) == 1) {
    (**(code **)(param_2[4] + 8))(param_2[5]);
  }
  if ((uVar3 & 4) == 0) {
    *param_1 = 0;
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *param_2;
      bVar1 = (bool)hasExclusiveAccess(param_2);
    } while (!bVar1);
    *param_2 = iVar5 + -1;
  }
  else {
    uVar4 = param_2[7];
    param_2[7] = 0;
    if ((uVar4 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_018a47b4);
    }
    iVar5 = param_2[9];
    iVar6 = param_2[10];
    iVar7 = param_2[0xb];
    iVar8 = param_2[0xc];
    iVar9 = param_2[0xd];
    param_1[1] = param_2[8];
    param_1[2] = iVar5;
    param_1[3] = iVar6;
    param_1[4] = iVar7;
    param_1[5] = iVar8;
    param_1[6] = iVar9;
    *param_1 = 1;
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *param_2;
      bVar1 = (bool)hasExclusiveAccess(param_2);
    } while (!bVar1);
    *param_2 = iVar5 + -1;
  }
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_010b50b8(param_2);
  }
  return;
}

