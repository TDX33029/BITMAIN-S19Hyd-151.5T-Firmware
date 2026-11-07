// FUN_00bcb51c @ 00bcb51c size=2640 calls_out=29 calls_in=2
// strings: hashchain not running | SetGloba | SetGloba | lDefaultError | lDefaultError | SetGloba

longlong FUN_00bcb51c(undefined8 *param_1,undefined4 param_2)

{
  bool bVar1;
  undefined1 uVar2;
  char cVar3;
  int *piVar4;
  undefined *puVar5;
  uint *puVar6;
  int *piVar7;
  code *pcVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  byte *pbVar12;
  undefined4 *puVar13;
  byte bVar14;
  int iVar15;
  int iVar16;
  char *pcVar17;
  int iVar18;
  undefined8 *unaff_r9;
  uint uVar19;
  undefined8 uVar20;
  int ***local_150;
  int local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined *local_138;
  undefined4 *puStack_134;
  int ***pppiStack_130;
  undefined *puStack_12c;
  undefined2 local_124;
  undefined1 local_122;
  undefined *local_120;
  byte *local_11c;
  undefined **local_118;
  undefined **local_114;
  undefined *local_110;
  undefined4 local_10c;
  undefined *local_108;
  undefined4 *puStack_104;
  int ***pppiStack_100;
  undefined *local_fc;
  undefined4 local_f8;
  byte local_a8;
  undefined2 uStack_a7;
  undefined1 uStack_a5;
  undefined *local_a4;
  undefined *local_a0;
  undefined4 *puStack_9c;
  int ***local_98;
  undefined *local_94;
  undefined *puStack_90;
  undefined *puStack_8c;
  undefined *local_88;
  undefined **local_58;
  undefined **local_54;
  undefined *local_50;
  undefined4 local_4c;
  undefined ***local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined3 uStack_3c;
  byte local_38;
  undefined1 uStack_37;
  undefined1 uStack_36;
  undefined1 uStack_35;
  undefined4 *puStack_34;
  int ***pppiStack_30;
  undefined4 uStack_2c;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)((int)param_1 + 0x41)) {
  case 0:
    *(undefined1 *)(param_1 + 8) = 0;
    *(int *)(param_1 + 5) = *(int *)((int)param_1 + 0x3c);
    FUN_008ef954(&local_a8,*(int *)(*(int *)(*(int *)((int)param_1 + 0x3c) + 0x3c4) + 8) + 8);
    if ((local_a8 & 1) == 0) {
      uVar19 = FUN_00c70f88(&DAT_003500d1,0x1b);
      goto LAB_00bcb840;
    }
    *param_1 = CONCAT44(puStack_9c,local_a0);
    *(undefined1 *)((int)param_1 + 0x74) = 0;
    *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_1 + 5);
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01871530);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01871530);
  case 4:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_1 + 0xc)) {
    case 0:
      iVar10 = *(int *)(param_1 + 0xb);
      uVar20 = param_1[9];
      goto LAB_00bcb894;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_01871750);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01871750);
    case 3:
      goto switchD_00bcb5dc_caseD_3;
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)((int)param_1 + 0x7c)) {
    case 0:
      iVar10 = *(int *)(param_1 + 0xf);
      uVar20 = param_1[0xd];
      goto LAB_00bcb90c;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_01871880);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01871880);
    case 3:
      uVar20 = param_1[0xe];
      goto LAB_00bcb928;
    }
  case 5:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)((int)param_1 + 0x6f)) {
    case 0:
      piVar4 = *(int **)(param_1 + 0xd);
LAB_00bcbcc0:
      *(undefined2 *)((int)param_1 + 0x6c) = 0;
      *(undefined1 *)((int)param_1 + 0x6e) = 0;
      local_88 = (undefined *)0x0;
      local_a0 = (undefined *)0x0;
      local_a4 = (undefined *)0x1;
      local_a8 = 1;
      uStack_a7 = 0;
      uStack_a5 = 0;
      local_54 = (undefined **)thunk_FUN_016d4a50(0x24);
      if (local_54 == (undefined **)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0x24);
      }
      *local_54 = (undefined *)CONCAT13(uStack_a5,CONCAT21(uStack_a7,local_a8));
      local_54[1] = local_a4;
      local_54[2] = local_a0;
      local_54[3] = (undefined *)puStack_9c;
      local_54[4] = (undefined *)local_98;
      local_54[5] = local_94;
      local_54[6] = puStack_90;
      local_54[7] = puStack_8c;
      local_54[8] = local_88;
      do {
        puVar5 = *local_54;
        bVar1 = (bool)hasExclusiveAccess(local_54);
      } while (!bVar1);
      *local_54 = puVar5 + 1;
      if ((int)puVar5 < 0) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)software_udf(0xfdee,0xbcc080);
        (*pcVar8)();
      }
      *(undefined ***)(param_1 + 0xe) = local_54;
      *(undefined1 *)((int)param_1 + 0x6c) = 1;
      *(undefined2 *)((int)param_1 + 0x6d) = 1;
      local_118 = (undefined **)CONCAT31(local_118._1_3_,3);
      iVar10 = *piVar4;
      local_50 = local_110;
      local_58 = local_118;
      local_4c = local_10c;
      *(undefined1 *)((int)param_1 + 0x6d) = 0;
      local_114 = local_54;
      FUN_016dd1aa(&local_108,&local_a8,0x60);
      FUN_016dd1aa(param_1 + 0xf,&local_108,0x60);
      *(undefined1 *)((int)param_1 + 0xdd) = 0;
      *(int *)(param_1 + 0x1b) = iVar10 + 0x188;
      break;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_01875a78);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01875a78);
    case 3:
      break;
    case 4:
      goto LAB_00bcbe24;
    case 5:
      goto switchD_00bcb614_caseD_5;
    }
    FUN_00bcc4dc(&local_a8,param_1 + 0xf,param_2);
    bVar14 = local_a8;
    if (local_a8 == 10) {
      uVar2 = 3;
LAB_00bcbf04:
      *(undefined1 *)((int)param_1 + 0x6f) = uVar2;
      unaff_r9 = (undefined8 *)((int)param_1 + 0x6f);
      uVar2 = 5;
      goto LAB_00bcb868;
    }
    local_48 = (undefined ***)CONCAT13(local_a4._0_1_,CONCAT12(uStack_a5,uStack_a7));
    local_44 = CONCAT13(local_a0._0_1_,local_a4._1_3_);
    uStack_3c = (undefined3)((uint)puStack_9c >> 8);
    uStack_40 = (int *)CONCAT13(puStack_9c._0_1_,local_a0._1_3_);
    FUN_00b2246c(param_1 + 0xf);
    if (bVar14 != 9) {
      uStack_2c = CONCAT31(uStack_3c,uStack_40._3_1_);
      local_38 = bVar14;
      uStack_37 = SUB41(local_48,0);
      uStack_36 = (undefined1)((uint)local_48 >> 8);
      uStack_35 = (undefined1)((uint)local_48 >> 0x10);
      puStack_34._1_3_ = (undefined3)local_44;
      puStack_34 = (undefined4 *)CONCAT31(puStack_34._1_3_,(char)((uint)local_48 >> 0x18));
      pppiStack_30._0_1_ = (undefined1)((uint)local_44 >> 0x18);
      pppiStack_30 = (int ***)CONCAT31((int3)uStack_40,pppiStack_30._0_1_);
      FUN_008ee7b0(&local_38,2);
    }
    *(undefined1 *)((int)param_1 + 0x6c) = 0;
LAB_00bcbe24:
    piVar4 = (int *)(param_1 + 0xe);
    uVar20 = FUN_00d40494(piVar4,param_2);
    if ((int)uVar20 == 2) {
      uVar2 = 4;
      goto LAB_00bcbf04;
    }
    iVar10 = *(int *)(param_1 + 0xe);
    param_1[0xc] = uVar20;
    if (iVar10 != 0) {
      puVar6 = (uint *)(iVar10 + 0x20);
      do {
        uVar19 = *puVar6;
        bVar1 = (bool)hasExclusiveAccess(puVar6);
      } while (!bVar1);
      *puVar6 = uVar19 | 4;
      DataMemoryBarrier(0xb);
      if ((uVar19 & 10) == 8) {
        (**(code **)(*(int *)(iVar10 + 0x10) + 8))(*(undefined4 *)(iVar10 + 0x14));
      }
      if ((uVar19 & 2) != 0) {
        iVar15 = *(int *)(iVar10 + 8);
        puVar13 = *(undefined4 **)(iVar10 + 0xc);
        *(undefined4 *)(iVar10 + 8) = 0;
        if (iVar15 != 0 && puVar13 != (undefined4 *)0x0) {
          (**(code **)*puVar13)(puVar13);
        }
      }
      piVar7 = (int *)*piVar4;
      if (piVar7 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar10 = *piVar7;
          bVar1 = (bool)hasExclusiveAccess(piVar7);
        } while (!bVar1);
        *piVar7 = iVar10 + -1;
        if (iVar10 == 1) {
          DataMemoryBarrier(0xb);
          FUN_008f4380(*piVar4);
        }
      }
    }
    if (*(int *)(param_1 + 0xc) != 0) {
switchD_00bcb614_caseD_5:
      uVar2 = 5;
      goto LAB_00bcbf04;
    }
    puVar5 = *(undefined **)((int)param_1 + 100);
    *(undefined1 *)((int)param_1 + 0x6d) = 0;
    *(undefined2 *)((int)param_1 + 0x6e) = 0x100;
    *(undefined1 *)((int)param_1 + 0x6c) = 0;
    FUN_00b221f4(param_1 + 0xc);
    pcVar17 = (char *)(param_1 + 9);
    if (puVar5 == (undefined *)0x0) {
      *(undefined1 *)(param_1 + 8) = 0;
      uVar11 = *(undefined4 *)pcVar17;
      local_a4 = *(undefined **)((int)param_1 + 0x4c);
      local_a0 = *(undefined **)(param_1 + 10);
      puStack_9c = *(undefined4 **)((int)param_1 + 0x54);
      local_98 = *(int ****)(param_1 + 0xb);
      local_94 = *(undefined **)((int)param_1 + 0x5c);
      local_a8 = (byte)uVar11;
      uStack_a7 = (undefined2)((uint)uVar11 >> 8);
      uStack_a5 = (undefined1)((uint)uVar11 >> 0x18);
      uVar19 = FUN_00c78efc();
    }
    else {
      local_a8 = (byte)pcVar17;
      uStack_a7 = (undefined2)((uint)pcVar17 >> 8);
      uStack_a5 = (undefined1)((uint)pcVar17 >> 0x18);
      local_a4 = (undefined *)0x8e3048;
      FUN_00600d2c(&local_38,&DAT_003553ef,&local_a8);
      local_a8 = 3;
      uStack_a7 = 0;
      uStack_a5 = 0;
      local_108 = (undefined *)CONCAT13(uStack_35,CONCAT12(uStack_36,CONCAT11(uStack_37,local_38)));
      puStack_104 = puStack_34;
      pppiStack_100 = pppiStack_30;
      local_fc = puVar5;
      uVar19 = FUN_00c7abf0(&local_108,&local_a8);
    }
    if ((*(char *)(param_1 + 8) != '\0') && (*pcVar17 == '\x03')) {
      (**(code **)**(undefined4 **)((int)param_1 + 0x4c))();
    }
    iVar18 = *(int *)(param_1 + 6);
    iVar15 = *(int *)((int)param_1 + 0x34);
    *(undefined1 *)(param_1 + 8) = 0;
    iVar10 = 0;
    if (iVar15 != 0) {
      do {
        piVar4 = *(int **)(iVar18 + iVar10 * 4);
        iVar16 = iVar10 + 1;
        DataMemoryBarrier(0xb);
        do {
          iVar9 = *piVar4;
          bVar1 = (bool)hasExclusiveAccess(piVar4);
        } while (!bVar1);
        *piVar4 = iVar9 + -1;
        if (iVar9 == 1) {
          DataMemoryBarrier(0xb);
          FUN_008f31e8(*(undefined4 *)(iVar18 + iVar10 * 4));
        }
        iVar10 = iVar16;
      } while (iVar16 != iVar15);
    }
    if (*(int *)((int)param_1 + 0x2c) == 0) goto LAB_00bcb840;
    goto LAB_00bcb838;
  }
  FUN_00b23e50(&local_148,param_1 + 9,param_2);
  if (local_148 == -0x80000000) {
    uVar2 = 3;
LAB_00bcb868:
    *(undefined1 *)((int)param_1 + 0x41) = uVar2;
    return CONCAT44(unaff_r9,1);
  }
  *(int *)((int)param_1 + 0x2c) = local_148;
  *(undefined4 *)(param_1 + 6) = uStack_144;
  *(undefined4 *)((int)param_1 + 0x34) = uStack_140;
  FUN_00b216bc(param_1 + 9);
  piVar4 = *(int **)(param_1 + 6);
  *(int **)(param_1 + 1) = piVar4;
  *(int **)((int)param_1 + 0xc) = piVar4 + *(int *)((int)param_1 + 0x34);
  if (piVar4 != piVar4 + *(int *)((int)param_1 + 0x34)) {
    do {
      *(int **)(param_1 + 1) = piVar4 + 1;
      *(int **)(param_1 + 7) = piVar4;
      uVar20 = *param_1;
      iVar10 = *piVar4 + 0x10;
      *(int *)(param_1 + 0xb) = iVar10;
      param_1[9] = uVar20;
      *(undefined1 *)(param_1 + 0xc) = 0;
LAB_00bcb894:
      *(int *)(param_1 + 0xd) = iVar10 + 900;
      *(undefined4 *)((int)param_1 + 0x6c) = 0xffffffff;
      param_1[10] = uVar20;
switchD_00bcb5dc_caseD_3:
      iVar10 = FUN_00c8101c(param_1 + 0xd,param_2);
      if (iVar10 == 0) {
        uVar2 = 3;
LAB_00bcbc88:
        unaff_r9 = param_1 + 0xc;
        *(undefined1 *)(param_1 + 0xc) = uVar2;
        uVar2 = 4;
        goto LAB_00bcb868;
      }
      *(int *)((int)param_1 + 0x5c) = iVar10;
      if (*(int *)(param_1 + 0xd) != 0) {
        FUN_00c8204c(*(int *)(param_1 + 0xd),*(undefined4 *)((int)param_1 + 0x6c),1);
        iVar10 = *(int *)((int)param_1 + 0x5c);
      }
      iVar10 = *(int *)(iVar10 + 0x20);
      if (iVar10 == 0) {
        puVar5 = (undefined *)FUN_00c70f88("hashchain not running",0x15);
        bVar14 = 3;
        FUN_00c822ec(*(undefined4 *)((int)param_1 + 0x5c));
      }
      else {
        *(undefined1 *)((int)param_1 + 0x7c) = 0;
        iVar10 = iVar10 + 8;
        uVar20 = param_1[10];
        *(int *)(param_1 + 0xf) = iVar10;
        param_1[0xd] = uVar20;
LAB_00bcb90c:
        uVar20 = (**(code **)(*(int *)(iVar10 + 0x154) + 0x20))
                           ((int)uVar20,*(undefined4 *)(iVar10 + 0x150));
        param_1[0xe] = uVar20;
LAB_00bcb928:
        (**(code **)((int)((ulonglong)uVar20 >> 0x20) + 0xc))(&local_a8,(int)uVar20,param_2);
        bVar14 = local_a8;
        if (local_a8 == 5) {
          *(undefined1 *)((int)param_1 + 0x7c) = 3;
          uVar2 = 4;
          goto LAB_00bcbc88;
        }
        uVar11 = *(undefined4 *)(param_1 + 0xe);
        puVar13 = *(undefined4 **)((int)param_1 + 0x74);
        pcVar8 = (code *)*puVar13;
        if (pcVar8 != (code *)0x0) {
          (*pcVar8)(uVar11);
        }
        if (puVar13[1] != 0) {
          thunk_FUN_016d3fb4(uVar11);
        }
        puVar5 = local_a4;
        local_108 = local_a0;
        puStack_104 = puStack_9c;
        pppiStack_100 = local_98;
        local_fc = local_94;
        *(undefined1 *)((int)param_1 + 0x7c) = 1;
        local_38 = (byte)uStack_a7;
        uStack_37 = (undefined1)((ushort)uStack_a7 >> 8);
        uStack_36 = uStack_a5;
        FUN_00c822ec(*(undefined4 *)((int)param_1 + 0x5c));
      }
      local_150 = (int ***)(param_1 + 9);
      local_124 = CONCAT11(uStack_37,local_38);
      *(undefined1 *)(param_1 + 0xc) = 1;
      local_138 = local_108;
      puStack_134 = puStack_104;
      pppiStack_130 = pppiStack_100;
      puStack_12c = local_fc;
      pbVar12 = (byte *)(param_1 + 2);
      *pbVar12 = bVar14;
      local_122 = uStack_36;
      *(undefined2 *)((int)param_1 + 0x11) = local_124;
      *(undefined1 *)((int)param_1 + 0x13) = uStack_36;
      *(undefined **)((int)param_1 + 0x14) = puVar5;
      *(undefined **)(param_1 + 3) = local_108;
      *(undefined4 **)((int)param_1 + 0x1c) = puStack_104;
      *(int ****)(param_1 + 4) = pppiStack_100;
      *(undefined **)((int)param_1 + 0x24) = local_fc;
      FUN_00bcc3cc(local_150);
      if (*pbVar12 != 4) {
        *(undefined1 *)(param_1 + 8) = 1;
        *local_150 = *(int ***)pbVar12;
        *(undefined4 *)((int)param_1 + 0x4c) = *(undefined4 *)((int)param_1 + 0x14);
        *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_1 + 3);
        *(undefined4 *)((int)param_1 + 0x54) = *(undefined4 *)((int)param_1 + 0x1c);
        *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_1 + 4);
        *(undefined4 *)((int)param_1 + 0x5c) = *(undefined4 *)((int)param_1 + 0x24);
        if ((DAT_018d9130 < 4) && (DAT_018d9ae8 != '\0')) {
          if (DAT_018d9ae8 == '\x01') {
LAB_00bcbaf0:
            DataMemoryBarrier(0xb);
            pcVar17 = s_SetGloba_00414c05;
            puVar5 = &DAT_018ae394;
            if ((DAT_018dd984 == 2) &&
               (pcVar17 = DAT_018daa74, puVar5 = DAT_018daa78, DAT_018daa70 != 0)) {
              pcVar17 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
            }
            iVar10 = (**(code **)(puVar5 + 0x14))(pcVar17,DAT_018d9ae0);
            if (iVar10 == 0) goto LAB_00bcbca0;
          }
          else if (DAT_018d9ae8 != '\x02') {
            cVar3 = FUN_0169ac90(&DAT_018d9ae0);
            if (cVar3 == '\0') goto LAB_00bcbca0;
            if (cVar3 != '\x02') goto LAB_00bcbaf0;
          }
          local_94 = DAT_018d9ae0;
          if (*(undefined4 **)(DAT_018d9ae0 + 0x20) == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_01871540);
          }
          local_fc = *(undefined **)(DAT_018d9ae0 + 0x28);
          uStack_40 = (int *)(DAT_018d9ae0 + 0x1c);
          local_108 = (undefined *)*uStack_40;
          pppiStack_100 = *(int ****)(DAT_018d9ae0 + 0x24);
          local_11c = &local_38;
          local_f8 = 0;
          local_120 = &DAT_0057be07;
          local_114 = &local_120;
          local_118 = &local_108;
          iVar10 = **(int **)(param_1 + 7) + 0x38c;
          local_38 = (byte)iVar10;
          uStack_37 = (undefined1)((uint)iVar10 >> 8);
          uStack_36 = (undefined1)((uint)iVar10 >> 0x10);
          uStack_35 = (undefined1)((uint)iVar10 >> 0x18);
          local_48 = &local_118;
          local_110 = &DAT_018abb78;
          uStack_2c = 0x8e3048;
          pppiStack_30 = local_150;
          puStack_34 = &DAT_00f5c97c;
          local_44 = 1;
          local_a8 = 1;
          uStack_a7 = 0;
          uStack_a5 = 0;
          local_98 = (int ***)&local_48;
          local_a4 = (undefined *)0x0;
          DataMemoryBarrier(0xb);
          pcVar17 = s_SetGloba_00414c05;
          puVar5 = &DAT_018ae394;
          if ((DAT_018dd984 == 2) &&
             (pcVar17 = DAT_018daa74, puVar5 = DAT_018daa78, DAT_018daa70 != 0)) {
            pcVar17 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
          }
          puStack_104 = *(undefined4 **)(DAT_018d9ae0 + 0x20);
          iVar10 = (**(code **)(puVar5 + 0x28))(pcVar17,&local_a8);
          if (iVar10 != 0) {
            (**(code **)(puVar5 + 0x2c))(pcVar17,&local_a8);
          }
        }
LAB_00bcbca0:
        iVar10 = *(int *)(*(int *)(param_1 + 5) + 0x3c4);
        *(undefined1 *)((int)param_1 + 0x6f) = 0;
        piVar4 = (int *)(iVar10 + 8);
        *(int **)(param_1 + 0xd) = piVar4;
        goto LAB_00bcbcc0;
      }
      piVar4 = *(int **)(param_1 + 1);
    } while (piVar4 != *(int **)((int)param_1 + 0xc));
  }
  iVar10 = *(int *)(param_1 + 6);
  iVar15 = *(int *)((int)param_1 + 0x34);
  if (iVar15 != 0) {
    iVar18 = 0;
    do {
      piVar4 = *(int **)(iVar10 + iVar18 * 4);
      iVar16 = iVar18 + 1;
      DataMemoryBarrier(0xb);
      do {
        iVar9 = *piVar4;
        bVar1 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar1);
      *piVar4 = iVar9 + -1;
      if (iVar9 == 1) {
        DataMemoryBarrier(0xb);
        FUN_008f31e8(*(undefined4 *)(iVar10 + iVar18 * 4));
      }
      iVar18 = iVar16;
    } while (iVar16 != iVar15);
  }
  uVar19 = 0;
  if (*(int *)((int)param_1 + 0x2c) != 0) {
LAB_00bcb838:
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 6));
  }
LAB_00bcb840:
  *(undefined1 *)((int)param_1 + 0x41) = 1;
  return (ulonglong)uVar19 << 0x20;
}

