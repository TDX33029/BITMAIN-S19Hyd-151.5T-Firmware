// FUN_00bd377c @ 00bd377c size=1984 calls_out=15 calls_in=2
// strings: 

void FUN_00bd377c(uint *param_1,undefined8 *param_2,undefined4 param_3)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  uint *puVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  uint *puVar9;
  uint uVar10;
  int *piVar11;
  uint uVar12;
  undefined1 uVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  undefined8 *local_12c;
  undefined4 local_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined *local_110;
  undefined4 local_10c;
  undefined4 local_108;
  uint local_b0;
  uint local_ac;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  uint uStack_9c;
  uint uStack_98;
  uint uStack_94;
  uint local_90;
  undefined4 local_60;
  uint *local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined3 uStack_44;
  undefined1 local_40;
  undefined4 local_3f;
  undefined4 local_3b;
  undefined4 local_37;
  undefined3 uStack_33;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 2)) {
  case 0:
    uVar13 = 0;
    *(int *)(param_2 + 1) = *(int *)((int)param_2 + 0xc);
    piVar11 = (int *)(*(int *)(*(int *)((int)param_2 + 0xc) + 0x3c4) + 8);
    uVar14 = *param_2;
    *(undefined1 *)((int)param_2 + 0x2f) = 0;
    param_2[3] = uVar14;
    *(int **)(param_2 + 5) = piVar11;
    if (*(char *)((int)param_2 + 0x11) == '\0') {
LAB_00bd3984:
      *(undefined2 *)((int)param_2 + 0x2c) = 0;
      *(undefined1 *)((int)param_2 + 0x2e) = 0;
      local_90 = 0;
      local_a8 = CONCAT31(local_a8._1_3_,2);
      local_ac = 1;
      local_b0 = 1;
      local_5c = (uint *)thunk_FUN_016d4a50(0x24);
      if (local_5c == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0x24);
      }
      *local_5c = local_b0;
      local_5c[1] = local_ac;
      local_5c[2] = local_a8;
      local_5c[3] = local_a4;
      local_5c[4] = local_a0;
      local_5c[5] = uStack_9c;
      local_5c[6] = uStack_98;
      local_5c[7] = uStack_94;
      local_5c[8] = local_90;
      do {
        uVar4 = *local_5c;
        bVar3 = (bool)hasExclusiveAccess(local_5c);
      } while (!bVar3);
      *local_5c = uVar4 + 1;
      if ((int)uVar4 < 0) goto LAB_00bd3f94;
      local_120 = CONCAT31(local_120._1_3_,4);
      uStack_114 = (undefined4)((ulonglong)uVar14 >> 0x20);
      local_54 = uStack_114;
      *(undefined1 *)((int)param_2 + 0x2c) = 1;
      *(undefined2 *)((int)param_2 + 0x2d) = 1;
      local_118 = (undefined4)uVar14;
      *(uint **)(param_2 + 6) = local_5c;
      local_60 = local_120;
      local_58 = local_118;
      iVar7 = *piVar11;
      *(undefined1 *)((int)param_2 + 0x2d) = 0;
      FUN_016dd1aa(&local_110,&local_b0,0x60);
      FUN_016dd1aa(param_2 + 7,&local_110,0x60);
      *(undefined1 *)((int)param_2 + 0x9d) = 0;
      *(int *)(param_2 + 0x13) = iVar7 + 0x188;
LAB_00bd3c38:
      FUN_00bcc4dc(&local_b0,param_2 + 7,param_3);
      uVar13 = (char)local_b0;
      uVar4 = local_b0 & 0xff;
      if (uVar4 != 10) {
        local_50 = CONCAT13((undefined1)local_ac,local_b0._1_3_);
        uStack_4c = CONCAT13((undefined1)local_a8,local_ac._1_3_);
        uStack_44 = (undefined3)(local_a4 >> 8);
        uStack_48 = CONCAT13((undefined1)local_a4,local_a8._1_3_);
        FUN_00b2246c(param_2 + 7);
        if (uVar4 != 9) {
          local_40 = uVar13;
          local_3f = local_50;
          local_3b = uStack_4c;
          local_37 = uStack_48;
          uStack_33 = uStack_44;
          FUN_008ee7b0(&local_40,2);
        }
        *(undefined1 *)((int)param_2 + 0x2c) = 0;
        goto LAB_00bd3cc0;
      }
      uVar13 = 3;
LAB_00bd3dcc:
      *(undefined1 *)((int)param_2 + 0x2f) = uVar13;
LAB_00bd3dd0:
      *(undefined1 *)param_1 = 2;
      uVar13 = 4;
      goto LAB_00bd3ef8;
    }
    *(undefined1 *)(param_2 + 6) = 0;
LAB_00bd3850:
    *(undefined2 *)((int)param_2 + 0x2c) = 0;
    *(undefined1 *)((int)param_2 + 0x2e) = 0;
    local_90 = 0;
    local_a8 = CONCAT31(local_a8._1_3_,2);
    local_ac = 1;
    local_b0 = 1;
    local_5c = (uint *)thunk_FUN_016d4a50(0x24);
    if (local_5c == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x24);
    }
    *local_5c = local_b0;
    local_5c[1] = local_ac;
    local_5c[2] = local_a8;
    local_5c[3] = local_a4;
    local_5c[4] = local_a0;
    local_5c[5] = uStack_9c;
    local_5c[6] = uStack_98;
    local_5c[7] = uStack_94;
    local_5c[8] = local_90;
    do {
      uVar4 = *local_5c;
      bVar3 = (bool)hasExclusiveAccess(local_5c);
    } while (!bVar3);
    *local_5c = uVar4 + 1;
    if ((int)uVar4 < 0) {
LAB_00bd3f94:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0xbd3f94);
      (*pcVar1)();
    }
    local_120 = CONCAT31(CONCAT21(local_120._2_2_,uVar13),5);
    uStack_114 = (undefined4)((ulonglong)uVar14 >> 0x20);
    local_54 = uStack_114;
    *(undefined1 *)((int)param_2 + 0x2c) = 1;
    *(undefined2 *)((int)param_2 + 0x2d) = 1;
    local_118 = (undefined4)uVar14;
    *(uint **)(param_2 + 7) = local_5c;
    local_60 = local_120;
    local_58 = local_118;
    iVar7 = *piVar11;
    *(undefined1 *)((int)param_2 + 0x2d) = 0;
    FUN_016dd1aa(&local_110,&local_b0,0x60);
    FUN_016dd1aa(param_2 + 8,&local_110,0x60);
    *(undefined1 *)((int)param_2 + 0xa5) = 0;
    *(int *)(param_2 + 0x14) = iVar7 + 0x188;
LAB_00bd3a78:
    FUN_00bcc4dc(&local_b0,param_2 + 8,param_3);
    uVar13 = (char)local_b0;
    uVar4 = local_b0 & 0xff;
    if (uVar4 == 10) {
      uVar13 = 3;
      goto LAB_00bd3c10;
    }
    local_50 = CONCAT13((undefined1)local_ac,local_b0._1_3_);
    uStack_4c = CONCAT13((undefined1)local_a8,local_ac._1_3_);
    uStack_44 = (undefined3)(local_a4 >> 8);
    uStack_48 = CONCAT13((undefined1)local_a4,local_a8._1_3_);
    FUN_00b2246c(param_2 + 8);
    if (uVar4 != 9) {
      local_40 = uVar13;
      local_3f = local_50;
      local_3b = uStack_4c;
      local_37 = uStack_48;
      uStack_33 = uStack_44;
      FUN_008ee7b0(&local_40,2);
    }
    *(undefined1 *)((int)param_2 + 0x2c) = 0;
LAB_00bd3b08:
    local_12c = param_2 + 3;
    piVar11 = (int *)(param_2 + 7);
    FUN_00d40834(&local_b0,piVar11,param_3);
    if ((char)local_b0 == '\x03') {
      uVar13 = 4;
      goto LAB_00bd3c10;
    }
    puVar9 = (uint *)(param_2 + 4);
    *puVar9 = local_b0;
    uVar4 = *(uint *)(param_2 + 7);
    *(uint *)((int)param_2 + 0x24) = local_ac;
    if (uVar4 != 0) {
      puVar5 = (uint *)(uVar4 + 0x20);
      do {
        uVar12 = *puVar5;
        bVar3 = (bool)hasExclusiveAccess(puVar5);
      } while (!bVar3);
      *puVar5 = uVar12 | 4;
      DataMemoryBarrier(0xb);
      if ((uVar12 & 10) == 8) {
        (**(code **)(*(int *)(uVar4 + 0x10) + 8))(*(undefined4 *)(uVar4 + 0x14));
      }
      if ((uVar12 & 2) != 0) {
        bVar2 = *(byte *)(uVar4 + 8);
        *(undefined1 *)(uVar4 + 8) = 2;
        if ((bVar2 & 0xfd) != 0) {
          (**(code **)**(undefined4 **)(uVar4 + 0xc))();
        }
      }
      piVar6 = (int *)*piVar11;
      if (piVar6 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar7 = *piVar6;
          bVar3 = (bool)hasExclusiveAccess(piVar6);
        } while (!bVar3);
        *piVar6 = iVar7 + -1;
        if (iVar7 == 1) {
          DataMemoryBarrier(0xb);
          FUN_008f2f58(*piVar11);
        }
      }
    }
    if ((char)*puVar9 == '\x02') goto switchD_00bd3820_caseD_5;
    uVar12 = *(uint *)(param_2 + 4);
    uVar8 = *(undefined4 *)((int)param_2 + 0x24);
    *(undefined1 *)((int)param_2 + 0x2d) = 0;
    *(undefined2 *)((int)param_2 + 0x2e) = 0x100;
    *(undefined1 *)((int)param_2 + 0x2c) = 0;
    if ((char)*puVar9 != '\x02') {
      FUN_00bcdee0(local_12c);
      goto LAB_00bd3e4c;
    }
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01871520);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01871520);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)((int)param_2 + 0x2f)) {
    case 0:
      uVar13 = *(undefined1 *)(param_2 + 6);
      piVar11 = *(int **)(param_2 + 5);
      uVar14 = param_2[3];
      goto LAB_00bd3850;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_01875a68);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01875a68);
    case 3:
      goto LAB_00bd3a78;
    case 4:
      goto LAB_00bd3b08;
    }
switchD_00bd3820_caseD_5:
    uVar13 = 5;
LAB_00bd3c10:
    *(undefined1 *)((int)param_2 + 0x2f) = uVar13;
    break;
  case 4:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)((int)param_2 + 0x2f)) {
    case 0:
      piVar11 = *(int **)(param_2 + 5);
      uVar14 = param_2[3];
      goto LAB_00bd3984;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_018714f0);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_018714f0);
    case 3:
      goto LAB_00bd3c38;
    case 5:
LAB_00bd3dc4:
      uVar13 = 5;
      goto LAB_00bd3dcc;
    }
LAB_00bd3cc0:
    local_12c = param_2 + 3;
    piVar11 = (int *)(param_2 + 6);
    FUN_00d40834(&local_b0,piVar11,param_3);
    if ((char)local_b0 == '\x03') {
      uVar13 = 4;
      goto LAB_00bd3dcc;
    }
    puVar9 = (uint *)(param_2 + 4);
    *puVar9 = local_b0;
    uVar4 = *(uint *)(param_2 + 6);
    *(uint *)((int)param_2 + 0x24) = local_ac;
    if (uVar4 != 0) {
      puVar5 = (uint *)(uVar4 + 0x20);
      do {
        uVar12 = *puVar5;
        bVar3 = (bool)hasExclusiveAccess(puVar5);
      } while (!bVar3);
      *puVar5 = uVar12 | 4;
      DataMemoryBarrier(0xb);
      if ((uVar12 & 10) == 8) {
        (**(code **)(*(int *)(uVar4 + 0x10) + 8))(*(undefined4 *)(uVar4 + 0x14));
      }
      if ((uVar12 & 2) != 0) {
        bVar2 = *(byte *)(uVar4 + 8);
        *(undefined1 *)(uVar4 + 8) = 2;
        if ((bVar2 & 0xfd) != 0) {
          (**(code **)**(undefined4 **)(uVar4 + 0xc))();
        }
      }
      piVar6 = (int *)*piVar11;
      if (piVar6 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar7 = *piVar6;
          bVar3 = (bool)hasExclusiveAccess(piVar6);
        } while (!bVar3);
        *piVar6 = iVar7 + -1;
        if (iVar7 == 1) {
          DataMemoryBarrier(0xb);
          FUN_008f2f58(*piVar11);
        }
      }
    }
    if ((char)*puVar9 == '\x02') goto LAB_00bd3dc4;
    uVar12 = *(uint *)(param_2 + 4);
    uVar8 = *(undefined4 *)((int)param_2 + 0x24);
    *(undefined1 *)((int)param_2 + 0x2d) = 0;
    *(undefined2 *)((int)param_2 + 0x2e) = 0x100;
    *(undefined1 *)((int)param_2 + 0x2c) = 0;
    if ((char)*puVar9 == '\x02') goto LAB_00bd3dd0;
    FUN_00bce158(local_12c);
LAB_00bd3e4c:
    if ((uVar12 & 1) == 0) {
      uVar10 = uVar12 & 1;
      if (((uVar12 & 0x100) != 0) && ((uVar12 & 1) == 0)) {
        *(undefined1 *)((int)param_2 + 0x59) = 0;
        *(undefined4 *)((int)param_2 + 0x54) = *(undefined4 *)(param_2 + 1);
        goto switchD_00bd37a4_caseD_5;
      }
    }
    else {
      local_b0 = 3;
      local_10c = 0x16;
      local_110 = &DAT_003500bb;
      local_108 = uVar8;
      uVar4 = FUN_00c70528(&local_110,&local_b0);
      uVar10 = uVar12 & 1;
    }
    goto LAB_00bd3ef0;
  case 5:
switchD_00bd37a4_caseD_5:
    uVar15 = FUN_00bcb51c(param_2 + 3,param_3);
    uVar4 = (uint)(uVar15 >> 0x20);
    if ((uVar15 & 1) != 0) {
      *(undefined1 *)param_1 = 2;
      uVar13 = 5;
      goto LAB_00bd3ef8;
    }
    FUN_00bcb384(param_2 + 3);
    uVar10 = 1;
    if (uVar4 == 0) {
      uVar10 = 0x100;
    }
LAB_00bd3ef0:
    *param_1 = uVar10;
    param_1[1] = uVar4;
    uVar13 = 1;
    goto LAB_00bd3ef8;
  }
  *(undefined1 *)param_1 = 2;
  uVar13 = 3;
LAB_00bd3ef8:
  *(undefined1 *)(param_2 + 2) = uVar13;
  return;
}

