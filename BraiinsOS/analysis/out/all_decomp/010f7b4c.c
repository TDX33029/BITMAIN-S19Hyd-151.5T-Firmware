// FUN_010f7b4c @ 010f7b4c size=1152 calls_out=8 calls_in=2
// strings: BUG: I2C request failedAsyncI2c reply send failed - remote side may have ended 

undefined8 FUN_010f7b4c(undefined4 *param_1,int *param_2)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  char *pcVar9;
  int *piVar10;
  uint uVar11;
  undefined1 *puVar12;
  undefined4 *puVar13;
  undefined8 uVar14;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 local_58;
  int *local_54;
  int local_50;
  int iStack_4c;
  uint local_48;
  int local_44;
  int local_40;
  uint local_3c;
  int local_38;
  int iStack_34;
  uint local_30;
  uint local_2c;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0xb)) {
  case 0:
    param_1[4] = *param_1;
    *(undefined1 *)((int)param_1 + 0x2e) = *(undefined1 *)((int)param_1 + 0x2d);
    *(undefined1 *)((int)param_1 + 0x2f) = *(undefined1 *)((int)param_1 + 0x2d);
    puVar13 = (undefined4 *)param_1[3];
    *(undefined2 *)(param_1 + 0xc) = 0;
    param_1[5] = param_1[1];
    param_1[6] = param_1[2];
    param_1[7] = (undefined1 *)((int)param_1 + 0x2f);
    param_1[8] = puVar13;
    *(undefined1 *)(param_1 + 10) = 0;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01886904);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01886904);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_1 + 10)) {
    case 0:
      puVar13 = (undefined4 *)param_1[8];
      break;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_01886894);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01886894);
    case 3:
      piVar4 = (int *)param_1[9];
      goto LAB_010f7ce8;
    }
  }
  puVar12 = (undefined1 *)param_1[7];
  *(undefined2 *)((int)param_1 + 0x29) = 0;
  local_2c = local_2c & 0xffffff00;
  local_30 = local_30 & 0xffffff00;
  local_38 = 0;
  local_3c = local_3c & 0xffffff00;
  local_44 = 0;
  local_48 = local_48 & 0xffffff00;
  local_50 = 0;
  *(undefined1 *)((int)param_1 + 0x2b) = 1;
  local_54 = (int *)0x1;
  local_58 = 1;
  piVar4 = (int *)thunk_FUN_016d4a50(0x30);
  if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x30);
  }
  *piVar4 = local_58;
  piVar4[1] = (int)local_54;
  piVar4[2] = local_50;
  piVar4[3] = iStack_4c;
  piVar4[4] = local_48;
  piVar4[5] = local_44;
  piVar4[6] = local_40;
  piVar4[7] = local_3c;
  piVar4[8] = local_38;
  piVar4[9] = iStack_34;
  piVar4[10] = local_30;
  piVar4[0xb] = local_2c;
  do {
    iVar5 = *piVar4;
    bVar3 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar3);
  *piVar4 = iVar5 + 1;
  if (iVar5 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x10f7ff8);
    (*pcVar1)();
  }
  *(undefined1 *)((int)param_1 + 0x29) = 1;
  *(undefined2 *)((int)param_1 + 0x2a) = 0;
  local_50 = param_1[4];
  iStack_4c = param_1[5];
  local_48 = param_1[6];
  local_58._0_2_ = CONCAT11(*puVar12,2);
  local_54 = piVar4;
  FUN_010fc484(&local_70,*puVar13,&local_58);
  if ((char)local_70 != '\x05') {
    local_58 = local_70;
    local_54 = (int *)uStack_6c;
    local_50 = uStack_68;
    iStack_4c = uStack_64;
    local_48 = uStack_60;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8("BUG: I2C request failedAsyncI2c reply send failed - remote side may have ended\n",
                 0x17,&local_58,&DAT_018868d4,&DAT_01886884);
  }
  param_1[9] = piVar4;
  *(undefined1 *)((int)param_1 + 0x29) = 0;
LAB_010f7ce8:
  piVar10 = param_1 + 9;
  DataMemoryBarrier(0xb);
  if ((char)piVar4[0xb] == '\0') {
    uVar14 = (*(code *)**(undefined4 **)*param_2)(((undefined4 *)*param_2)[1]);
    uVar8 = (undefined4)((ulonglong)uVar14 >> 0x20);
    piVar6 = piVar4 + 7;
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar6;
      bVar3 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar3);
    *(char *)piVar6 = '\x01';
    DataMemoryBarrier(0xb);
    if ((char)iVar5 == '\0') {
      if (piVar4[5] != 0) {
        (**(code **)(piVar4[5] + 0xc))(piVar4[6]);
      }
      *(undefined8 *)(piVar4 + 5) = uVar14;
      DataMemoryBarrier(0xb);
      *(undefined1 *)(piVar4 + 7) = 0;
      DataMemoryBarrier(0xb);
      DataMemoryBarrier(0xb);
      if ((char)piVar4[0xb] == '\0') {
        *(undefined1 *)(param_1 + 10) = 3;
        *(undefined1 *)(param_1 + 0xb) = 3;
        return CONCAT44(uVar8,1);
      }
    }
    else {
      (**(code **)((int)uVar14 + 0xc))(uVar8);
    }
  }
  piVar6 = piVar4 + 4;
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar6;
    bVar3 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar3);
  *(char *)piVar6 = '\x01';
  uVar11 = 1;
  DataMemoryBarrier(0xb);
  if ((char)iVar5 == '\0') {
    uVar11 = piVar4[2];
    piVar4[2] = 0;
    uVar11 = uVar11 ^ 1;
    DataMemoryBarrier(0xb);
    *(undefined1 *)(piVar4 + 4) = 0;
    DataMemoryBarrier(0xb);
  }
  iVar5 = *piVar10;
  DataMemoryBarrier(0xb);
  pcVar9 = (char *)(iVar5 + 0x1c);
  *(undefined1 *)(iVar5 + 0x2c) = 1;
  DataMemoryBarrier(0xb);
  do {
    cVar2 = *pcVar9;
    bVar3 = (bool)hasExclusiveAccess(pcVar9);
  } while (!bVar3);
  *pcVar9 = '\x01';
  DataMemoryBarrier(0xb);
  if (cVar2 == '\0') {
    iVar7 = *(int *)(iVar5 + 0x14);
    *(undefined4 *)(iVar5 + 0x14) = 0;
    DataMemoryBarrier(0xb);
    *(undefined1 *)(iVar5 + 0x1c) = 0;
    DataMemoryBarrier(0xb);
    if (iVar7 != 0) {
      (**(code **)(iVar7 + 0xc))(*(undefined4 *)(iVar5 + 0x18));
    }
  }
  pcVar9 = (char *)(iVar5 + 0x28);
  DataMemoryBarrier(0xb);
  do {
    cVar2 = *pcVar9;
    bVar3 = (bool)hasExclusiveAccess(pcVar9);
  } while (!bVar3);
  *pcVar9 = '\x01';
  DataMemoryBarrier(0xb);
  if (cVar2 == '\0') {
    iVar7 = *(int *)(iVar5 + 0x20);
    *(undefined4 *)(iVar5 + 0x20) = 0;
    if (iVar7 == 0) {
      DataMemoryBarrier(0xb);
      *(undefined1 *)(iVar5 + 0x28) = 0;
      DataMemoryBarrier(0xb);
    }
    else {
      DataMemoryBarrier(0xb);
      *pcVar9 = '\0';
      DataMemoryBarrier(0xb);
      (**(code **)(iVar7 + 4))(*(undefined4 *)(iVar5 + 0x24));
    }
  }
  piVar4 = (int *)*piVar10;
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar4;
    bVar3 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar3);
  *piVar4 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_010fee9c(*piVar10);
  }
  if (uVar11 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00566410,0x20,&local_58,&DAT_018868c4,&DAT_018868a4);
  }
  *(undefined1 *)((int)param_1 + 0x29) = 0;
  *(undefined1 *)((int)param_1 + 0x2a) = 0;
  *(undefined1 *)((int)param_1 + 0x2b) = 0;
  *(undefined1 *)(param_1 + 10) = 1;
  FUN_010f8178(param_1 + 4);
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0xb) = 1;
  return 0;
}

