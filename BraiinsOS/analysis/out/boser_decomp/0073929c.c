// FUN_0073929c @ 0073929c size=2700 calls_out=26 calls_in=1
// strings: 00000000

void FUN_0073929c(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 **ppuVar3;
  undefined4 ***pppuVar4;
  char cVar5;
  undefined1 uVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  undefined4 uVar9;
  undefined4 **ppuVar10;
  char *pcVar11;
  int iVar12;
  uint uVar13;
  int *piVar14;
  undefined4 uVar15;
  int iVar16;
  undefined4 **unaff_r6;
  uint uVar17;
  undefined4 **ppuVar18;
  undefined4 *puVar19;
  undefined4 *puVar20;
  undefined4 *puVar21;
  code *pcVar22;
  int iVar23;
  undefined4 extraout_r12;
  undefined4 extraout_r12_00;
  undefined4 **ppuVar24;
  bool bVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  ulonglong uVar28;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_128;
  undefined1 local_124;
  undefined4 **local_120;
  undefined4 uStack_11c;
  undefined4 **ppuStack_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 local_f4;
  uint *puStack_f0;
  int iStack_ec;
  undefined4 **ppuStack_e8;
  undefined4 **local_e0;
  undefined4 local_dc;
  undefined4 **local_d8;
  undefined4 **local_d0;
  undefined4 local_cc;
  undefined4 **local_c8;
  undefined4 **local_c0;
  undefined1 local_bc;
  undefined2 uStack_bb;
  undefined1 uStack_b9;
  undefined4 **local_b8;
  int local_b4;
  undefined4 **local_b0;
  undefined *local_ac;
  undefined4 local_a8;
  undefined2 local_a4;
  undefined4 ***local_a0;
  code *local_9c;
  undefined4 **local_98;
  undefined4 local_94;
  undefined4 **local_90;
  undefined4 local_8c;
  uint *local_88;
  int local_84;
  undefined4 **local_80;
  undefined2 local_7c;
  undefined4 local_78;
  undefined4 **local_70;
  undefined4 local_6c;
  undefined4 **local_68;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  uint *local_48;
  int local_44;
  
  ppuVar18 = (undefined4 **)((uint)&local_a0 | 0x10);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0xe)) {
  case 0:
    *(undefined1 *)(param_2 + 0x1a) = 0;
    param_2[0xf] = *param_2;
    param_2[1] = *param_2;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c07e98);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c07e98);
  case 4:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x1b)) {
    case 0:
      puVar8 = (undefined *)param_2[0xf];
      uVar15 = param_2[0x10];
      goto LAB_0073942c;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c131ac);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c131ac);
    }
    goto switchD_00739378_caseD_3;
  case 5:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x1d)) {
    case 0:
      uVar15 = param_2[0x10];
      goto LAB_00739524;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c07d00);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c07d00);
    }
    goto switchD_0073934c_caseD_3;
  case 6:
    local_130 = *param_3;
    goto LAB_00739a54;
  }
  local_130 = *param_3;
  ppuVar24 = (undefined4 **)0x739318;
  FUN_0073a0c4(&local_a0,param_2 + 0xf);
  ppuVar10 = local_90;
  uVar15 = local_94;
  ppuVar3 = local_98;
  pcVar22 = local_9c;
  pppuVar4 = local_a0;
  if (local_a0 == (undefined4 ***)0x80000002) {
    *param_1 = 0x80000001;
    uVar6 = 3;
    goto LAB_00739c74;
  }
  local_f4 = local_8c;
  puStack_f0 = local_88;
  iStack_ec = local_84;
  ppuStack_e8 = local_80;
  puVar7 = (undefined1 *)(uint)*(byte *)(param_2 + 0x1a);
  bVar25 = puVar7 == &DAT_00000003;
  if (bVar25) {
    puVar7 = (undefined1 *)(uint)*(byte *)(param_2 + 0x19);
  }
  uVar26 = CONCAT44(&local_f4,puVar7);
  uVar9 = extraout_r12;
  if (bVar25 && puVar7 == &DAT_00000003) {
    ppuVar24 = (undefined4 **)0x739838;
    uVar26 = FUN_00b71be0(param_2 + 0x14);
    uVar9 = extraout_r12_00;
  }
  if (pppuVar4 == (undefined4 ***)&DAT_80000001) {
    ppuVar18 = (undefined4 **)&DAT_80000000;
LAB_00739c0c:
    *param_1 = ppuVar18;
    param_1[1] = pcVar22;
    param_1[2] = (int)((ulonglong)uVar26 >> 0x20);
    param_1[3] = local_110;
    param_1[4] = uStack_10c;
    param_1[5] = uStack_108;
    param_1[8] = local_130;
    param_1[6] = uVar9;
    param_1[7] = ppuVar24;
    param_1[9] = local_120;
    param_1[10] = uStack_11c;
    param_1[0xb] = ppuStack_118;
    *(char *)((int)param_1 + 0x36) = (char)((ulonglong)uVar26 >> 0x10);
    *(short *)(param_1 + 0xd) = (short)uVar26;
    param_1[0xc] = local_134;
    uVar6 = 1;
    *(char *)(param_1 + 0xf) = (char)param_3;
    *(undefined4 *)((int)param_1 + 0x37) = local_128;
    *(undefined1 *)((int)param_1 + 0x3b) = local_124;
  }
  else {
    param_2[2] = pppuVar4;
    param_2[3] = pcVar22;
    param_2[4] = ppuVar3;
    param_2[5] = uVar15;
    param_2[6] = ppuVar10;
    param_2[7] = local_f4;
    param_2[8] = puStack_f0;
    param_2[9] = iStack_ec;
    param_2[10] = ppuStack_e8;
    if (pppuVar4 == (undefined4 ***)&DAT_80000000) {
      *(undefined1 *)(param_2 + 0x1b) = 0;
      uVar15 = 0x10;
      puVar8 = &DAT_00568188;
      param_2[0xf] = &DAT_00568188;
      param_2[0x10] = 0x10;
LAB_0073942c:
      param_2[0x11] = puVar8;
      param_2[0x12] = uVar15;
      *(undefined1 *)(param_2 + 0x1a) = 0;
switchD_00739378_caseD_3:
      puVar19 = param_2 + 0x1b;
      FUN_0073b128(&local_c0,param_2 + 0x11,*param_3);
      if (local_c0 == (undefined4 **)&DAT_80000001) {
        *(undefined1 *)puVar19 = 3;
LAB_00739460:
        *param_1 = 0x80000001;
        uVar6 = 4;
        goto LAB_00739c74;
      }
      local_cc = CONCAT13(uStack_b9,CONCAT21(uStack_bb,local_bc));
      local_d0 = local_c0;
      local_c8 = local_b8;
      if (*(char *)(param_2 + 0x1a) == '\x03') {
        FUN_00b71be0(param_2 + 0x15);
      }
      unaff_r6 = local_d0;
      if (local_d0 == (undefined4 **)&DAT_80000000) {
        FUN_00740540(&local_d0);
        local_98 = (undefined4 **)0x0;
        local_9c = (code *)0x1;
        local_a0 = (undefined4 ***)0x0;
        *(undefined1 *)puVar19 = 1;
      }
      else {
        FUN_00797b20(&local_a0,local_cc,local_c8);
        FUN_019bb7e0(unaff_r6,local_cc);
        *(undefined1 *)puVar19 = 1;
        if (local_a0 == (undefined4 ***)&DAT_80000000) goto LAB_00739460;
      }
      param_2[0xb] = local_a0;
      param_2[0xc] = local_9c;
      param_2[0xd] = local_98;
      uVar9 = *(undefined4 *)(param_2[1] + 4);
      uVar15 = *(undefined4 *)(param_2[1] + 8);
      *(undefined1 *)(param_2 + 0x1d) = 0;
      param_2[0xf] = uVar9;
      param_2[0x10] = uVar15;
LAB_00739524:
      *(undefined1 *)(param_2 + 0x1c) = 0;
      param_2[0x11] = param_2[0xf];
      param_2[0x12] = uVar15;
      param_2[0x13] = &DAT_003e0568;
      param_2[0x14] = 0xf;
switchD_0073934c_caseD_3:
      local_130 = *param_3;
      FUN_0073b128(&local_a0,param_2 + 0x13);
      if (local_a0 == (undefined4 ***)&DAT_80000001) {
        *(undefined1 *)(param_2 + 0x1d) = 3;
        *param_1 = 0x80000001;
        uVar6 = 5;
        goto LAB_00739c74;
      }
      local_d0 = local_a0;
      local_cc = local_9c;
      local_c8 = local_98;
      if (*(char *)(param_2 + 0x1c) == '\x03') {
        FUN_00b71be0(param_2 + 0x17);
      }
      uVar15 = local_cc;
      ppuVar3 = local_d0;
      if (local_d0 == (undefined4 **)&DAT_80000000) {
        FUN_00740540(&local_d0);
        bVar25 = false;
      }
      else {
        bVar25 = false;
        local_7c = 0;
        local_88 = (uint *)CONCAT31(local_88._1_3_,1);
        local_78 = 0;
        local_80 = local_c8;
        local_84 = 0;
        local_8c = 10;
        local_90 = local_c8;
        local_94 = 0;
        local_98 = local_c8;
        local_9c = (code *)local_cc;
        local_a0 = (undefined4 ***)&DAT_0000000a;
        iVar23 = FUN_0073b3ec(&local_a0);
        if (iVar23 != 0) {
          iVar23 = param_2[0x12];
          uVar9 = param_2[0x11];
LAB_00739650:
          do {
            do {
              do {
                do {
                  uVar26 = FUN_0073b3ec(&local_a0);
                  iVar16 = (int)((ulonglong)uVar26 >> 0x20);
                  ppuVar10 = (undefined4 **)uVar26;
                  if (ppuVar10 == (undefined4 **)0x0) {
                    bVar25 = false;
                    goto LAB_0073983c;
                  }
                  local_ac = (undefined *)((int)ppuVar10 + iVar16);
                  local_a4 = 1;
                  local_a8 = 0;
                  local_c0 = (undefined4 **)0x0;
                  local_bc = (undefined1)((ulonglong)uVar26 >> 0x20);
                  uStack_bb = (undefined2)((ulonglong)uVar26 >> 0x28);
                  uStack_b9 = (undefined1)((ulonglong)uVar26 >> 0x38);
                  local_b8 = ppuVar10;
                  local_b4 = iVar16;
                  local_b0 = ppuVar10;
                  uVar26 = FUN_013182f8(&local_c0);
                } while ((int)uVar26 == 0);
                uVar27 = FUN_013182f8(&local_c0);
                ppuVar10 = (undefined4 **)uVar27;
              } while (ppuVar10 == (undefined4 **)0x0);
              uVar28 = FUN_013182f8(&local_c0);
              iVar16 = (int)(uVar28 >> 0x20);
              pcVar11 = (char *)uVar28;
              unaff_r6 = ppuVar10;
            } while ((((pcVar11 == (char *)0x0) || ((int)((ulonglong)uVar26 >> 0x20) != iVar23)) ||
                     (iVar12 = thunk_FUN_01bed842((int)uVar26,uVar9,iVar23),
                     iVar12 != 0 || (int)((ulonglong)uVar27 >> 0x20) != 8)) ||
                    ((iVar12 = thunk_FUN_01bed842(ppuVar10,"00000000",8), iVar12 != 0 ||
                     (iVar16 == 0))));
            if (iVar16 == 1) {
              cVar5 = *pcVar11;
              if ((cVar5 == '+') || (cVar5 == '-')) goto LAB_00739650;
            }
            else {
              cVar5 = *pcVar11;
            }
            if (cVar5 == '+') {
              uVar28 = CONCAT44(iVar16 + -1,pcVar11 + 1);
            }
            if (uVar28 < 0x900000000) {
              if ((int)(uVar28 >> 0x20) == 0) goto LAB_00739650;
              unaff_r6 = (undefined4 **)0x0;
              do {
                uVar17 = (uint)*(byte *)uVar28;
                uVar13 = uVar17 - 0x30;
                if (0x39 < uVar17) {
                  uVar13 = (uVar17 - 0x41 & 0xffffffdf) + 10;
                }
                if (0xf < uVar13) goto LAB_00739650;
                unaff_r6 = (undefined4 **)(uVar13 | (int)unaff_r6 << 4);
                iVar16 = (int)(uVar28 >> 0x20) + -1;
                uVar28 = CONCAT44(iVar16,(byte *)uVar28 + 1);
              } while (iVar16 != 0);
            }
            else {
              unaff_r6 = (undefined4 **)0x0;
              do {
                if ((undefined4 **)0xfffffff < unaff_r6) goto LAB_00739650;
                uVar17 = (uint)*(byte *)uVar28;
                uVar13 = uVar17 - 0x30;
                if (0x39 < uVar17) {
                  uVar13 = (uVar17 - 0x41 & 0xffffffdf) + 10;
                }
                if (0xf < uVar13) goto LAB_00739650;
                unaff_r6 = (undefined4 **)(uVar13 | (int)unaff_r6 << 4);
                iVar16 = (int)(uVar28 >> 0x20) + -1;
                uVar28 = CONCAT44(iVar16,(byte *)uVar28 + 1);
              } while (iVar16 != 0);
            }
          } while (unaff_r6 == (undefined4 **)0x0);
          bVar25 = true;
        }
LAB_0073983c:
        FUN_019bb7e0(ppuVar3,uVar15);
      }
      *(undefined1 *)(param_2 + 0x1d) = 1;
      local_e0 = (undefined4 **)param_2[0xb];
      local_dc = param_2[0xc];
      local_d8 = (undefined4 **)param_2[0xd];
    }
    else {
      unaff_r6 = (undefined4 **)param_2[7];
      FUN_00745244(&local_a0,pcVar22,param_2[4]);
      bVar25 = unaff_r6 != (undefined4 **)0x0;
      local_e0 = local_a0;
      local_dc = local_9c;
      local_d8 = local_98;
    }
    param_2[0x11] = local_e0;
    param_2[0x12] = local_dc;
    param_2[0x13] = local_d8;
    *(undefined4 ***)((int)param_2 + 0x3d) = unaff_r6;
    *(bool *)(param_2 + 0xf) = bVar25;
    FUN_006666fc(&local_e0,*(undefined4 *)(param_2[1] + 4),*(undefined4 *)(param_2[1] + 8));
    ppuVar10 = local_d8;
    uVar15 = local_dc;
    ppuVar3 = local_e0;
    uVar28 = FUN_019ef7f4(&DAT_01c07ea8);
    iVar23 = (int)(uVar28 >> 0x20);
    iVar16 = 0x218;
    if ((uVar28 & 1) != 0) {
      iVar16 = 0x148;
    }
    uVar9 = *(undefined4 *)(iVar23 + iVar16);
    do {
      do {
        puVar2 = DAT_01d50474;
        puVar19 = DAT_01d50470;
        puVar20 = (undefined4 *)((int)DAT_01d50470 + 1);
        puVar21 = (undefined4 *)
                  ((int)DAT_01d50474 + (uint)((undefined4 *)0xfffffffe < DAT_01d50470));
        bVar25 = (bool)hasExclusiveAccess(0x1d50470);
      } while (!bVar25);
      bVar25 = DAT_01d50470 == (undefined4 *)0x0;
      bVar1 = DAT_01d50474 == (undefined4 *)0x0;
      DAT_01d50470 = puVar20;
      DAT_01d50474 = puVar21;
    } while (bVar25 && bVar1);
    local_44 = 0x200;
    if ((uVar28 & 1) != 0) {
      local_44 = 0x138;
    }
    local_44 = iVar23 + local_44;
    local_48 = *(uint **)(local_44 + 8);
    if (local_48 != (uint *)0x0) {
      do {
        uVar13 = *local_48;
        bVar25 = (bool)hasExclusiveAccess(local_48);
      } while (!bVar25);
      *local_48 = uVar13 + 1;
      if ((int)uVar13 < 0) {
LAB_0073996c:
                    /* WARNING: Does not return */
        pcVar22 = (code *)software_udf(0xfdee,0x73996c);
        (*pcVar22)();
      }
      local_44 = *(int *)(local_44 + 0xc);
      do {
        uVar13 = *local_48;
        bVar25 = (bool)hasExclusiveAccess(local_48);
      } while (!bVar25);
      *local_48 = uVar13 + 1;
      if (0x7fffffff < uVar13) goto LAB_0073996c;
    }
    local_68 = ppuVar10;
    ppuVar18[4] = puVar19;
    ppuVar18[5] = puVar2;
    local_a0 = (undefined4 ***)0xcc;
    *ppuVar18 = (undefined4 *)0x0;
    ppuVar18[1] = (undefined4 *)0x0;
    local_6c = uVar15;
    local_70 = ppuVar3;
    local_78 = 0;
    local_9c = (code *)0x0;
    local_50 = 0;
    local_54 = 0;
    local_58 = 0;
    local_98 = (undefined4 **)&DAT_01c08058;
    local_c0 = (undefined4 **)0x0;
    local_88 = local_48;
    local_84 = local_44;
    iVar16 = FUN_01be5878(&local_c0,0x20,0x60);
    ppuVar18 = local_c0;
    if ((iVar16 != 0) || (local_c0 == (undefined4 **)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(0x20,0x60);
    }
    FUN_01bed4e2(local_c0,&local_a0,0x60);
    FUN_019f02d4(&local_a0,uVar9,ppuVar18,1,uVar28);
    if (((uint)local_a0 & 0xfe) != 4) {
      local_bc = SUB41(local_9c,0);
      uStack_b9 = (undefined1)((uint)local_9c >> 0x18);
      local_c0 = local_a0;
      uStack_bb = (undefined2)((uint)local_9c >> 8);
      local_9c = FUN_019a7d7c;
      local_a0 = &local_c0;
                    /* WARNING: Subroutine does not return */
      FUN_012fb100(&DAT_005ab28b,&local_a0,&DAT_01c07ea8);
    }
    FUN_014397e4((int)uVar28,iVar23);
    param_2[0x14] = ppuVar18;
LAB_00739a54:
    local_a0 = (undefined4 ***)0x2;
    uVar13 = FUN_019ec670(local_130);
    if ((uVar13 & 0xff) == 2) {
      uVar17 = 0;
LAB_00739a98:
      (**(code **)(*(int *)(param_2[0x14] + 8) + 0xc))(param_2[0x14],&local_a0,local_130);
      uVar15 = local_8c;
      ppuVar24 = local_90;
      uVar9 = local_94;
      ppuVar3 = local_98;
      pppuVar4 = local_a0;
      local_134 = local_9c;
      if (local_a0 != (undefined4 ***)0x2) {
        uVar17 = 0;
      }
      local_130 = local_8c;
      FUN_019edbc4(uVar17,ppuVar18);
      if (pppuVar4 != (undefined4 ***)0x2) {
        piVar14 = (int *)param_2[0x14];
        if (*piVar14 == 0xcc) {
          DataMemoryBarrier(0xb);
          bVar25 = (bool)hasExclusiveAccess(piVar14);
          if (!bVar25) goto LAB_00739b2c;
          *piVar14 = 0x84;
        }
        else {
          ClearExclusiveLocal();
LAB_00739b2c:
          (**(code **)(piVar14[2] + 0x10))();
        }
        if (((uint)pppuVar4 & 1) != 0) {
          local_94 = uVar15;
          local_98 = ppuVar24;
          local_9c = (code *)uVar9;
          local_a0 = (undefined4 ***)ppuVar3;
                    /* WARNING: Subroutine does not return */
          FUN_013073dc(&DAT_003e070c,0x21,&local_a0,&DAT_01c07d28,&DAT_01c07eb8);
        }
        FUN_006666fc(&local_d0,*(undefined4 *)(param_2[1] + 4),*(undefined4 *)(param_2[1] + 8));
        if ((param_2[8] == -0x80000000) ||
           (FUN_006666fc(&local_a0,param_2[9],param_2[10]),
           local_a0 == (undefined4 ***)&DAT_80000000)) {
          FUN_007a8074(&local_c0);
        }
        else {
          local_c0 = local_a0;
          local_bc = SUB41(local_9c,0);
          uStack_bb = (undefined2)((uint)local_9c >> 8);
          uStack_b9 = (undefined1)((uint)local_9c >> 0x18);
          local_b8 = local_98;
        }
        pcVar22 = (code *)local_cc;
        ppuVar18 = local_d0;
        uVar27 = CONCAT44(local_c8,ppuVar3);
        uVar26 = CONCAT44(local_c8,ppuVar3);
        iVar23 = param_2[2];
        local_110 = param_2[0x11];
        uStack_10c = param_2[0x12];
        uStack_108 = param_2[0x13];
        local_124 = *(undefined1 *)(param_2 + 0x10);
        local_128 = param_2[0xf];
        uStack_11c = CONCAT13(uStack_b9,CONCAT21(uStack_bb,local_bc));
        local_120 = local_c0;
        ppuStack_118 = local_b8;
        FUN_0073b590(param_2 + 2);
        param_3 = (undefined4 *)0x0;
        if (iVar23 != -0x80000000) {
          param_3 = (undefined4 *)&DAT_00000001;
          uVar26 = uVar27;
        }
        goto LAB_00739c0c;
      }
    }
    else {
      if ((uVar13 & 1) == 0) {
        uVar17 = (uVar13 & 0xffffff) >> 8;
        ppuVar18 = (undefined4 **)((uVar13 & 0xffffff) >> 0x10);
        goto LAB_00739a98;
      }
      FUN_00748c98(&local_a0);
    }
    *param_1 = 0x80000001;
    uVar6 = 6;
  }
LAB_00739c74:
  *(undefined1 *)(param_2 + 0xe) = uVar6;
  return;
}

