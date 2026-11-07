// FUN_00846334 @ 00846334 size=1804 calls_out=18 calls_in=3
// strings: 

longlong FUN_00846334(uint *param_1,int *param_2)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  undefined1 uVar5;
  undefined4 *puVar6;
  uint uVar7;
  char *pcVar8;
  int iVar9;
  int *piVar10;
  uint *puVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  undefined2 *puVar15;
  uint uVar16;
  uint uVar17;
  uint unaff_r11;
  undefined8 uVar18;
  int local_64;
  uint local_60;
  int local_58;
  uint local_54;
  int iStack_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  undefined2 *local_3c;
  uint local_38;
  undefined4 *local_34;
  undefined4 **local_30;
  uint *local_2c;
  uint *local_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_1[5]) {
  case '\0':
    uVar14 = param_1[4];
    *(undefined2 *)((int)param_1 + 0x15) = 0;
    *(undefined1 *)((int)param_1 + 0x17) = 1;
    local_44 = local_44 & 0xffffff00;
    local_48 = local_48 & 0xffffff00;
    local_54 = local_54 & 0xffffff00;
    local_60 = local_60 & 0xffffff00;
    piVar10 = (int *)thunk_FUN_016d4a50(0x30);
    if (piVar10 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x30);
    }
    *piVar10 = 1;
    piVar10[1] = 1;
    piVar10[2] = 0;
    piVar10[3] = local_64;
    piVar10[4] = local_60;
    piVar10[5] = 0;
    piVar10[6] = local_58;
    piVar10[7] = local_54;
    piVar10[8] = 0;
    piVar10[9] = iStack_4c;
    piVar10[10] = local_48;
    piVar10[0xb] = local_44;
    do {
      iVar9 = *piVar10;
      bVar3 = (bool)hasExclusiveAccess(piVar10);
    } while (!bVar3);
    *piVar10 = iVar9 + 1;
    if (iVar9 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x846a64);
      (*pcVar1)();
    }
    *(undefined2 *)((int)param_1 + 0x15) = 0x101;
    puVar6 = (undefined4 *)*param_1;
    puVar11 = (uint *)param_1[1];
    puVar12 = (uint *)param_1[2];
    uVar16 = param_1[3];
    param_1[6] = (uint)piVar10;
    *(undefined1 *)((int)param_1 + 0x17) = 0;
    local_3c = (undefined2 *)thunk_FUN_016d4a50(2);
    if (local_3c == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,2);
    }
    *local_3c = 0xaa55;
    uVar7 = 1;
    local_40 = 2;
    if ((int)puVar6 < 0) {
      uVar7 = (uint)puVar6 ^ 0x80000000;
    }
    local_38 = 2;
    if (uVar7 == 0) {
      DataMemoryBarrier(0xb);
      if (DAT_018dab30 != 0) {
        local_30 = &local_34;
        local_34 = &DAT_018dab30;
        FUN_015eedc4(&DAT_018dab30,1,&local_30,&DAT_01863e04,&DAT_018ac9b8);
      }
      uVar7 = (uint)DAT_018dab38._2_1_;
      uVar16 = 4;
      puVar12 = (uint *)FUN_016d38c8(4,1);
      if (puVar12 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,4);
      }
      *puVar12 = (uVar7 & 0xf | ((uint)puVar11 & 0xff) << 4) ^ 0x50 |
                 ((uint)puVar11 >> 8 & 0xff) << 0x10 | ((uint)puVar11 >> 0x10) << 0x18 | 0x500;
LAB_008465d4:
      bVar3 = false;
    }
    else {
      if (uVar7 == 1) {
        uVar7 = uVar16 >> 8;
        uVar13 = uVar16 & 0xff;
        uVar4 = uVar16 >> 0x10;
        DataMemoryBarrier(0xb);
        if (DAT_018dab30 != 0) {
          local_30 = &local_34;
          local_34 = &DAT_018dab30;
          FUN_015eedc4(&DAT_018dab30,1,&local_30,&DAT_01863e04,&DAT_018ac9b8);
        }
        if (puVar12 == (uint *)&DAT_00000004) {
          puVar11 = (uint *)*puVar11;
          if (puVar6 != (undefined4 *)0x0) {
            thunk_FUN_016d3fb4();
          }
        }
        else if (puVar6 != (undefined4 *)0x80000000) {
          local_30 = (undefined4 **)puVar6;
          local_2c = puVar11;
          local_28 = puVar12;
                    /* WARNING: Subroutine does not return */
          FUN_00fb74f8(&DAT_0034521e,0x14,&local_30,&DAT_01863e18,&DAT_01863df4);
        }
        uVar17 = (uint)DAT_018dab38._1_1_;
        uVar16 = 8;
        puVar12 = (uint *)FUN_016d38c8(8,1);
        if (puVar12 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,8);
        }
        puVar12[1] = (uint)puVar11;
        *puVar12 = (uVar17 & 0xf | uVar13 << 4) ^ 0x50 | (uVar7 & 0xff) << 0x10 | uVar4 << 0x18 |
                   0x900;
        goto LAB_008465d4;
      }
      bVar3 = puVar11 == (uint *)0x0;
    }
    if (local_40 - local_38 < uVar16) {
      FUN_008cf370(&local_40,local_38,uVar16,1,1);
    }
    uVar4 = local_38;
    puVar15 = local_3c;
    uVar7 = local_40;
    FUN_016dd1aa((int)local_3c + local_38,puVar12,uVar16);
    unaff_r11 = uVar4 + uVar16;
    local_38 = unaff_r11;
    uVar5 = FUN_008b8f10(puVar12,uVar16,0x1f,1);
    if (unaff_r11 == uVar7) {
      FUN_006029c0(&local_40);
      puVar15 = local_3c;
      uVar7 = local_40;
    }
    *(undefined1 *)((int)puVar15 + unaff_r11) = uVar5;
    if (!bVar3) {
      thunk_FUN_016d3fb4(puVar12);
    }
    puVar12 = (uint *)thunk_FUN_016d4a50(0xc);
    if (puVar12 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0xc);
    }
    puVar12[2] = unaff_r11 + 1;
    param_1[0x1a] = uVar14;
    *puVar12 = uVar7;
    puVar12[1] = (uint)puVar15;
    *(undefined1 *)(param_1 + 0x1b) = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 400000;
    param_1[8] = 0;
    param_1[9] = (uint)puVar12;
    param_1[10] = (uint)piVar10;
    *(undefined1 *)((int)param_1 + 0x16) = 0;
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01860eec);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01860eec);
  case '\x04':
    goto switchD_00846350_caseD_4;
  }
  iVar9 = FUN_00845c8c(param_1 + 8,param_2);
  if (iVar9 != 0) {
    uVar5 = 3;
LAB_008466c8:
    *(undefined1 *)(param_1 + 5) = uVar5;
    return CONCAT44(unaff_r11,1);
  }
  if ((char)param_1[0x1b] == '\x03') {
    FUN_00845020(param_1 + 0x10);
  }
  else if ((char)param_1[0x1b] == '\0') {
    FUN_00845840(param_1 + 8);
  }
  *(undefined1 *)((int)param_1 + 0x15) = 0;
switchD_00846350_caseD_4:
  puVar12 = param_1 + 6;
  uVar14 = *puVar12;
  DataMemoryBarrier(0xb);
  if (*(char *)(uVar14 + 0x2c) == '\0') {
    uVar18 = (*(code *)**(undefined4 **)*param_2)(((undefined4 *)*param_2)[1]);
    pcVar8 = (char *)(uVar14 + 0x1c);
    DataMemoryBarrier(0xb);
    do {
      cVar2 = *pcVar8;
      bVar3 = (bool)hasExclusiveAccess(pcVar8);
    } while (!bVar3);
    *pcVar8 = '\x01';
    DataMemoryBarrier(0xb);
    if (cVar2 == '\0') {
      if (*(int *)(uVar14 + 0x14) != 0) {
        (**(code **)(*(int *)(uVar14 + 0x14) + 0xc))(*(undefined4 *)(uVar14 + 0x18));
      }
      *(undefined8 *)(uVar14 + 0x14) = uVar18;
      DataMemoryBarrier(0xb);
      *(undefined1 *)(uVar14 + 0x1c) = 0;
      DataMemoryBarrier(0xb);
      DataMemoryBarrier(0xb);
      if (*(char *)(uVar14 + 0x2c) == '\0') {
        uVar5 = 4;
        goto LAB_008466c8;
      }
    }
    else {
      (**(code **)((int)uVar18 + 0xc))((int)((ulonglong)uVar18 >> 0x20));
    }
  }
  pcVar8 = (char *)(uVar14 + 0x10);
  DataMemoryBarrier(0xb);
  do {
    cVar2 = *pcVar8;
    bVar3 = (bool)hasExclusiveAccess(pcVar8);
  } while (!bVar3);
  *pcVar8 = '\x01';
  uVar16 = 1;
  DataMemoryBarrier(0xb);
  if (cVar2 == '\0') {
    uVar16 = *(uint *)(uVar14 + 8);
    unaff_r11 = *(uint *)(uVar14 + 0xc);
    *(undefined4 *)(uVar14 + 8) = 0;
    uVar16 = uVar16 ^ 1;
    DataMemoryBarrier(0xb);
    *(undefined1 *)(uVar14 + 0x10) = 0;
    DataMemoryBarrier(0xb);
  }
  uVar14 = *puVar12;
  DataMemoryBarrier(0xb);
  pcVar8 = (char *)(uVar14 + 0x1c);
  *(undefined1 *)(uVar14 + 0x2c) = 1;
  DataMemoryBarrier(0xb);
  do {
    cVar2 = *pcVar8;
    bVar3 = (bool)hasExclusiveAccess(pcVar8);
  } while (!bVar3);
  *pcVar8 = '\x01';
  DataMemoryBarrier(0xb);
  if (cVar2 == '\0') {
    iVar9 = *(int *)(uVar14 + 0x14);
    *(undefined4 *)(uVar14 + 0x14) = 0;
    DataMemoryBarrier(0xb);
    *(undefined1 *)(uVar14 + 0x1c) = 0;
    DataMemoryBarrier(0xb);
    if (iVar9 != 0) {
      (**(code **)(iVar9 + 0xc))(*(undefined4 *)(uVar14 + 0x18));
    }
  }
  pcVar8 = (char *)(uVar14 + 0x28);
  DataMemoryBarrier(0xb);
  do {
    cVar2 = *pcVar8;
    bVar3 = (bool)hasExclusiveAccess(pcVar8);
  } while (!bVar3);
  *pcVar8 = '\x01';
  DataMemoryBarrier(0xb);
  if (cVar2 == '\0') {
    iVar9 = *(int *)(uVar14 + 0x20);
    *(undefined4 *)(uVar14 + 0x20) = 0;
    if (iVar9 == 0) {
      DataMemoryBarrier(0xb);
      *(undefined1 *)(uVar14 + 0x28) = 0;
      DataMemoryBarrier(0xb);
    }
    else {
      DataMemoryBarrier(0xb);
      *pcVar8 = '\0';
      DataMemoryBarrier(0xb);
      (**(code **)(iVar9 + 4))(*(undefined4 *)(uVar14 + 0x24));
    }
  }
  piVar10 = (int *)*puVar12;
  DataMemoryBarrier(0xb);
  do {
    iVar9 = *piVar10;
    bVar3 = (bool)hasExclusiveAccess(piVar10);
  } while (!bVar3);
  *piVar10 = iVar9 + -1;
  if (iVar9 == 1) {
    DataMemoryBarrier(0xb);
    FUN_010fee9c(*puVar12);
  }
  if (uVar16 != 0) {
    unaff_r11 = FUN_008b6bf0();
  }
  param_1[5] = 1;
  return (ulonglong)unaff_r11 << 0x20;
}

