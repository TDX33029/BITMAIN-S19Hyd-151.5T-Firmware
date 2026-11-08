// FUN_010f8594 @ 010f8594 size=1152 calls_out=7 calls_in=1
// strings: BUG: I2C request failedAsyncI2c reply send failed - remote side may have ended 

void FUN_010f8594(int *param_1,undefined4 *param_2,int *param_3)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  undefined1 *puVar9;
  undefined4 *puVar10;
  int *unaff_r8;
  undefined1 *puVar11;
  int *unaff_r9;
  undefined4 *puVar12;
  undefined8 uVar13;
  undefined4 *puVar14;
  int *piVar15;
  int *piVar16;
  int local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  int local_58;
  int local_54;
  int *local_50;
  int iStack_4c;
  int local_48;
  uint local_44;
  int local_40;
  int iStack_3c;
  uint local_38;
  int local_34;
  int iStack_30;
  uint local_2c;
  uint local_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)((int)param_2 + 0x23)) {
  case 0:
    puVar12 = param_2 + 1;
    *puVar12 = *param_2;
    puVar10 = (undefined4 *)param_2[7];
    *(undefined1 *)((int)param_2 + 0x21) = *(undefined1 *)(param_2 + 8);
    puVar11 = (undefined1 *)((int)param_2 + 0x22);
    *puVar11 = *(undefined1 *)(param_2 + 8);
    param_2[2] = puVar11;
    param_2[5] = puVar10;
    param_2[3] = puVar12;
    *(undefined1 *)((int)param_2 + 0x1b) = 0;
LAB_010f8644:
    puVar14 = param_2 + 2;
    puVar9 = (undefined1 *)((int)param_2 + 0x1b);
    *(undefined1 *)((int)param_2 + 0x1a) = 1;
    *(undefined2 *)(param_2 + 6) = 0;
    local_28 = local_28 & 0xffffff00;
    local_2c = local_2c & 0xffffff00;
    local_34 = 0;
    local_38 = local_38 & 0xffffff00;
    local_40 = 0;
    local_44 = local_44 & 0xffffff00;
    local_54 = 1;
    local_58 = 1;
    local_50 = (int *)0x80000001;
    piVar4 = (int *)thunk_FUN_016d4a50(0x34);
    if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x34);
    }
    *piVar4 = local_58;
    piVar4[1] = local_54;
    piVar4[2] = (int)local_50;
    piVar4[3] = iStack_4c;
    piVar4[4] = local_48;
    piVar4[5] = local_44;
    piVar4[6] = local_40;
    piVar4[7] = iStack_3c;
    piVar4[8] = local_38;
    piVar4[9] = local_34;
    piVar4[10] = iStack_30;
    piVar4[0xb] = local_2c;
    piVar4[0xc] = local_28;
    do {
      iVar5 = *piVar4;
      bVar3 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar3);
    *piVar4 = iVar5 + 1;
    if (iVar5 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x10f8a40);
      (*pcVar1)();
    }
    *(undefined1 *)(param_2 + 6) = 1;
    *(undefined2 *)((int)param_2 + 0x19) = 0;
    local_54 = *puVar12;
    local_58 = (uint)CONCAT21((short)((uint)local_58 >> 0x10),*puVar11) << 8;
    unaff_r8 = &local_70;
    piVar15 = piVar4;
    piVar16 = piVar4;
    local_50 = piVar4;
    FUN_010fc484(unaff_r8,*puVar10,&local_58);
    if ((char)local_70 != '\x05') {
      local_58 = local_70;
      local_54 = uStack_6c;
      local_50 = (int *)uStack_68;
      iStack_4c = uStack_64;
      local_48 = uStack_60;
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8("BUG: I2C request failedAsyncI2c reply send failed - remote side may have ended\n"
                   ,0x17,&local_58,&DAT_018868d4,&DAT_01886884,puVar14,puVar9,param_3,piVar15,
                   piVar16);
    }
    param_2[4] = piVar4;
    *(undefined1 *)(param_2 + 6) = 0;
    unaff_r9 = param_1;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01886924);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01886924);
  case 3:
    puVar9 = (undefined1 *)((int)param_2 + 0x1b);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*puVar9) {
    case 0:
      puVar11 = (undefined1 *)param_2[2];
      puVar12 = (undefined4 *)param_2[3];
      puVar10 = (undefined4 *)param_2[5];
      goto LAB_010f8644;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_01886894);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01886894);
    case 3:
      piVar4 = (int *)param_2[4];
    }
  }
  uVar13 = CONCAT44(unaff_r9,unaff_r8);
  piVar15 = param_2 + 4;
  DataMemoryBarrier(0xb);
  if ((char)piVar4[0xc] == '\0') {
    uVar13 = (*(code *)**(undefined4 **)*param_3)(((undefined4 *)*param_3)[1]);
    piVar16 = piVar4 + 8;
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar16;
      bVar3 = (bool)hasExclusiveAccess(piVar16);
    } while (!bVar3);
    *(char *)piVar16 = '\x01';
    DataMemoryBarrier(0xb);
    if ((char)iVar5 == '\0') {
      if (piVar4[6] != 0) {
        (**(code **)(piVar4[6] + 0xc))(piVar4[7]);
      }
      *(undefined8 *)(piVar4 + 6) = uVar13;
      DataMemoryBarrier(0xb);
      *(undefined1 *)(piVar4 + 8) = 0;
      DataMemoryBarrier(0xb);
      DataMemoryBarrier(0xb);
      if ((char)piVar4[0xc] == '\0') goto LAB_010f884c;
    }
    else {
      (**(code **)((int)uVar13 + 0xc))((int)((ulonglong)uVar13 >> 0x20));
    }
  }
  piVar16 = piVar4 + 5;
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar16;
    bVar3 = (bool)hasExclusiveAccess(piVar16);
  } while (!bVar3);
  *(char *)piVar16 = '\x01';
  DataMemoryBarrier(0xb);
  if ((char)iVar5 == '\0') {
    iVar5 = piVar4[2];
    uVar13 = CONCAT44(piVar4[3],piVar4[4]);
    piVar4[2] = -0x7fffffff;
    DataMemoryBarrier(0xb);
    *(undefined1 *)(piVar4 + 5) = 0;
    DataMemoryBarrier(0xb);
    if (iVar5 == -0x7ffffffe) {
LAB_010f884c:
      *puVar9 = 3;
      *param_1 = -0x7fffffff;
      *(undefined1 *)((int)param_2 + 0x23) = 3;
      return;
    }
  }
  else {
    iVar5 = -0x7fffffff;
  }
  iVar8 = *piVar15;
  DataMemoryBarrier(0xb);
  pcVar7 = (char *)(iVar8 + 0x20);
  *(undefined1 *)(iVar8 + 0x30) = 1;
  DataMemoryBarrier(0xb);
  do {
    cVar2 = *pcVar7;
    bVar3 = (bool)hasExclusiveAccess(pcVar7);
  } while (!bVar3);
  *pcVar7 = '\x01';
  DataMemoryBarrier(0xb);
  if (cVar2 == '\0') {
    iVar6 = *(int *)(iVar8 + 0x18);
    *(undefined4 *)(iVar8 + 0x18) = 0;
    DataMemoryBarrier(0xb);
    *(undefined1 *)(iVar8 + 0x20) = 0;
    DataMemoryBarrier(0xb);
    if (iVar6 != 0) {
      (**(code **)(iVar6 + 0xc))(*(undefined4 *)(iVar8 + 0x1c));
    }
  }
  pcVar7 = (char *)(iVar8 + 0x2c);
  DataMemoryBarrier(0xb);
  do {
    cVar2 = *pcVar7;
    bVar3 = (bool)hasExclusiveAccess(pcVar7);
  } while (!bVar3);
  *pcVar7 = '\x01';
  DataMemoryBarrier(0xb);
  if (cVar2 == '\0') {
    iVar6 = *(int *)(iVar8 + 0x24);
    *(undefined4 *)(iVar8 + 0x24) = 0;
    if (iVar6 == 0) {
      DataMemoryBarrier(0xb);
      *(undefined1 *)(iVar8 + 0x2c) = 0;
      DataMemoryBarrier(0xb);
    }
    else {
      DataMemoryBarrier(0xb);
      *pcVar7 = '\0';
      DataMemoryBarrier(0xb);
      (**(code **)(iVar6 + 4))(*(undefined4 *)(iVar8 + 0x28));
    }
  }
  piVar4 = (int *)*piVar15;
  DataMemoryBarrier(0xb);
  do {
    iVar8 = *piVar4;
    bVar3 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar3);
  *piVar4 = iVar8 + -1;
  if (iVar8 == 1) {
    DataMemoryBarrier(0xb);
    FUN_010fe564(*piVar15);
  }
  if (iVar5 == -0x7fffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00566410,0x20,&local_58,&DAT_018868c4,&DAT_018868a4);
  }
  *param_1 = iVar5;
  param_1[1] = (int)((ulonglong)uVar13 >> 0x20);
  *(undefined1 *)(param_2 + 6) = 0;
  *(undefined1 *)((int)param_2 + 0x19) = 0;
  *(undefined2 *)((int)param_2 + 0x1a) = 0x100;
  param_1[2] = (int)uVar13;
  *(undefined1 *)((int)param_2 + 0x23) = 1;
  return;
}

