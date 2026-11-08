// FUN_00b70a4c @ 00b70a4c size=2952 calls_out=36 calls_in=1
// strings: /tmp/resolv.conf.realevent open/boser/boser-buildroot/src/bos.rs:203 | boser_buildroot::bosopen/boser/boser-buildroot/src/bos.rs | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | boser_buildroot::bosopen/boser/boser-buildroot/src/bos.rs | InvalidParamSegmentInvalidParamInvalidCatchAll

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00b70a4c(int *param_1,int *param_2,undefined4 *param_3)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  int ****ppppiVar4;
  undefined1 uVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  undefined4 *puVar10;
  int iVar11;
  char *pcVar12;
  int iVar13;
  undefined *puVar14;
  int ****ppppiVar15;
  uint uVar16;
  int **ppiVar17;
  int ****ppppiVar18;
  int iVar19;
  uint unaff_r8;
  undefined4 *puVar20;
  int iVar21;
  undefined4 uVar22;
  undefined8 uVar23;
  ulonglong uVar24;
  int *local_1c4;
  int *local_1b8;
  int *local_1b4;
  int local_198;
  int iStack_194;
  int iStack_190;
  int iStack_18c;
  int local_188;
  int iStack_184;
  int iStack_180;
  int iStack_17c;
  int iStack_178;
  int ****local_170;
  int ****ppppiStack_16c;
  int ****ppppiStack_168;
  int ****ppppiStack_164;
  int ****ppppiStack_160;
  int ****local_140;
  int ****local_13c;
  int ****local_138;
  int ****local_134;
  int ****ppppiStack_130;
  int ****ppppiStack_12c;
  int ****local_128;
  int ****local_124;
  int ****local_120;
  int ****ppppiStack_11c;
  int ***pppiStack_118;
  int ****local_110;
  undefined1 local_10c;
  undefined2 uStack_10b;
  undefined1 uStack_109;
  int ****local_108;
  int ****local_104;
  int ****local_f8;
  int ****local_f4;
  int ****local_f0;
  int ****local_ec;
  int ****local_e8;
  undefined4 *local_e4;
  int ***local_e0;
  int ****local_dc;
  int ****local_d8;
  int ****ppppiStack_d4;
  int ****ppppiStack_d0;
  int ****ppppiStack_cc;
  int ***local_c8;
  int ****local_c4;
  int ****ppppiStack_c0;
  int ****ppppiStack_bc;
  int ****ppppiStack_b8;
  int ****local_b4;
  int ****ppppiStack_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  int ****local_a0;
  int ****local_9c;
  int ****local_98;
  int ****local_94;
  int ****local_90;
  int ****ppppiStack_8c;
  int ***local_88;
  int ****local_84;
  int ****ppppiStack_80;
  int ****ppppiStack_7c;
  int ****local_78;
  int ****local_74;
  int ****local_70;
  int local_6c;
  int local_68;
  int iStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int ***local_50;
  int ****local_4c;
  
  puVar10 = (undefined4 *)((uint)&local_a0 | 0x10);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_2[0x21]) {
  case '\0':
    iVar11 = *param_2;
    FUN_00797a34(&local_a0);
    ppppiVar18 = local_9c;
    ppppiVar15 = local_a0;
    iVar21 = -0x7fffffed;
    local_110 = (int ****)0x80000013;
    if (local_a0 != (int ****)&DAT_80000000) {
      local_128 = local_98;
      local_124 = local_94;
      local_120 = local_90;
      ppppiStack_11c = ppppiStack_8c;
      pppiStack_118 = local_88;
      local_140 = local_84;
      local_13c = ppppiStack_80;
      local_138 = ppppiStack_7c;
      local_134 = local_78;
      ppppiStack_130 = local_74;
      ppppiStack_12c = local_70;
      FUN_00b719dc(&local_110);
      local_a0 = local_140;
      local_9c = local_13c;
      local_98 = local_138;
      local_94 = local_134;
      local_90 = ppppiStack_130;
      ppppiStack_8c = ppppiStack_12c;
      param_2[1] = (int)ppppiVar15;
      param_2[2] = (int)ppppiVar18;
      param_2[3] = (int)local_128;
      param_2[4] = (int)local_124;
      param_2[5] = (int)local_120;
      param_2[6] = (int)ppppiStack_11c;
      param_2[7] = (int)pppiStack_118;
      param_2[8] = (int)local_140;
      param_2[9] = (int)local_13c;
      param_2[10] = (int)local_138;
      param_2[0xb] = (int)local_134;
      param_2[0xc] = (int)ppppiStack_130;
      param_2[0xd] = (int)ppppiStack_12c;
      ppppiVar15 = (int ****)(param_2 + 0xe);
      FUN_006666fc(ppppiVar15,ppppiVar18,param_2[3]);
      if ((param_2[0x10] != 4) || (*(int *)param_2[0xf] != 0x30687465)) {
        if ((DAT_01d50f88 < 4) &&
           (((DAT_01d4c338 - 1 < 2 ||
             ((DAT_01d4c338 != 0 && (cVar6 = FUN_01aaafa8(&DAT_01d4c330), cVar6 != '\0')))) &&
            (iVar21 = FUN_01aaa278(DAT_01d4c330), iVar21 != 0)))) {
          if (*(int *****)(DAT_01d4c330 + 0x20) == (int ****)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c13520);
          }
          local_98 = *(int *****)(DAT_01d4c330 + 0x24);
          local_13c = (int ****)&local_ec;
          local_94 = *(int *****)(DAT_01d4c330 + 0x28);
          local_128 = (int ****)&local_140;
          local_124 = (int ****)&DAT_00000001;
          local_e8 = (int ****)&local_110;
          local_90 = (int ****)0x0;
          local_138 = (int ****)&DAT_01d2ea4c;
          local_ec = (int ****)&DAT_005b76fe;
          local_104 = (int ****)&LAB_00632348;
          local_10c = 0xa0;
          uStack_10b = 0x32b6;
          uStack_109 = 1;
          local_110 = (int ****)&DAT_01c13518;
          local_140 = (int ****)&local_a0;
          local_120 = (int ****)(DAT_01d4c330 + 0x1c);
          local_108 = ppppiVar15;
          local_a0 = *(int *****)(DAT_01d4c330 + 0x1c);
          local_9c = *(int *****)(DAT_01d4c330 + 0x20);
          FUN_00b71ae8(&local_128);
        }
        else {
          iVar21 = DAT_01d4c330;
          if ((DAT_01d51ae9 == '\0') && (1 < DAT_01d51b00)) {
            local_f4 = *(int *****)(DAT_01d4c330 + 0x14);
            local_f0 = *(int *****)(DAT_01d4c330 + 0x18);
            local_f8 = (int ****)0x2;
            DataMemoryBarrier(0xb);
            puVar20 = DAT_01d4edc8;
            pcVar12 = DAT_01d4edc4;
            if (DAT_01d51174 != 2) {
              puVar20 = &DAT_01cfc5e0;
              pcVar12 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
            }
            iVar7 = (*(code *)puVar20[3])(pcVar12);
            if (iVar7 != 0) {
              local_e4 = (undefined4 *)(DAT_01d4c330 + 0x1c);
              if (*(int *****)(DAT_01d4c330 + 0x20) == (int ****)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c13520);
              }
              local_98 = *(int *****)(DAT_01d4c330 + 0x24);
              local_94 = *(int *****)(DAT_01d4c330 + 0x28);
              local_ec = (int ****)&local_128;
              local_124 = &local_e0;
              local_e8 = (int ****)&DAT_00000001;
              local_dc = (int ****)&local_110;
              local_90 = (int ****)0x0;
              local_120 = (int ****)&DAT_01d2ea4c;
              local_e0 = (int ***)&DAT_005b76fe;
              local_104 = (int ****)&LAB_00632348;
              local_10c = 0xa0;
              uStack_10b = 0x32b6;
              uStack_109 = 1;
              local_110 = (int ****)&DAT_01c13518;
              local_140 = local_f8;
              local_13c = local_f4;
              local_138 = local_f0;
              local_128 = (int ****)&local_a0;
              local_108 = ppppiVar15;
              local_a0 = (int ****)*local_e4;
              local_9c = *(int *****)(DAT_01d4c330 + 0x20);
              FUN_01aaa328(iVar21,pcVar12,puVar20[4],&local_140,&local_ec);
            }
          }
        }
      }
      iVar11 = FUN_007390f0(*(int *)(iVar11 + 8) + 8);
      puVar14 = &DAT_01c07e88;
      param_2[0x22] = iVar11;
      param_2[0x23] = (int)&DAT_01c07e88;
      goto LAB_00b70fbc;
    }
    iVar11 = -0x80000000;
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c13530);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c13530);
  case '\x03':
    iVar11 = param_2[0x22];
    puVar14 = (undefined *)param_2[0x23];
LAB_00b70fbc:
    (**(code **)(puVar14 + 0xc))(&local_a0,iVar11,param_3);
    ppppiVar18 = local_9c;
    ppppiVar15 = local_a0;
    if (local_a0 == (int ****)&DAT_80000001) {
      *param_1 = -0x7fffffff;
      uVar5 = 3;
      goto LAB_00b7150c;
    }
    local_d8 = local_98;
    ppppiStack_d4 = local_94;
    ppppiStack_d0 = local_90;
    ppppiStack_cc = ppppiStack_8c;
    local_c8 = local_88;
    local_c4 = local_84;
    ppppiStack_c0 = ppppiStack_80;
    ppppiStack_bc = ppppiStack_7c;
    ppppiStack_b8 = local_78;
    local_b4 = local_74;
    ppppiStack_b0 = local_70;
    iStack_ac = local_6c;
    iStack_a8 = local_68;
    iStack_a4 = iStack_64;
    FUN_01139b38(param_2[0x22],param_2[0x23]);
    if (ppppiVar15 != (int ****)&DAT_80000000) {
      param_2[0x11] = (int)ppppiVar15;
      param_2[0x12] = (int)ppppiVar18;
      pcVar12 = "/tmp/resolv.conf.realevent open/boser/boser-buildroot/src/bos.rs:203";
      param_2[0x13] = (int)local_d8;
      param_2[0x14] = (int)ppppiStack_d4;
      param_2[0x15] = (int)ppppiStack_d0;
      param_2[0x16] = (int)ppppiStack_cc;
      param_2[0x17] = (int)local_c8;
      param_2[0x18] = (int)local_c4;
      param_2[0x19] = (int)ppppiStack_c0;
      param_2[0x1a] = (int)ppppiStack_bc;
      param_2[0x1b] = (int)ppppiStack_b8;
      param_2[0x1c] = (int)local_b4;
      param_2[0x1d] = (int)ppppiStack_b0;
      param_2[0x1e] = iStack_ac;
      param_2[0x1f] = iStack_a8;
      param_2[0x20] = iStack_a4;
      iVar11 = 0x15;
      *(undefined1 *)(param_2 + 0x2b) = 0;
      param_2[0x22] = (int)"/tmp/resolv.conf.realevent open/boser/boser-buildroot/src/bos.rs:203";
      param_2[0x23] = 0x15;
      goto LAB_00b710e4;
    }
    uVar23 = (*(code *)(*ppppiVar18)[2])(ppppiVar18);
    FUN_019a6b0c(&local_9c,0x28,(int)uVar23,(int)((ulonglong)uVar23 >> 0x20));
    local_170 = local_9c;
    ppppiStack_16c = local_98;
    ppppiStack_168 = local_94;
    ppppiStack_164 = local_90;
    ppppiStack_160 = ppppiStack_8c;
    FUN_019bb7e0(param_2[0xe],param_2[0xf]);
    FUN_007390c4(param_2 + 1);
    iVar11 = -0x80000000;
    iVar21 = -0x7ffffffe;
    break;
  case '\x04':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x2b]) {
    case '\0':
      pcVar12 = (char *)param_2[0x22];
      iVar11 = param_2[0x23];
LAB_00b710e4:
      param_2[0x24] = (int)pcVar12;
      param_2[0x25] = iVar11;
      FUN_019afae4(&local_128,pcVar12,iVar11);
      param_2[0x26] = (int)local_128;
      param_2[0x27] = (int)local_124;
      param_2[0x28] = (int)local_120;
      *(undefined1 *)(param_2 + 0x2a) = 0;
switchD_00b70bec_caseD_0:
      iVar11 = param_2[0x27];
      iVar21 = param_2[0x28];
      ppppiVar15 = (int ****)param_2[0x26];
      uVar24 = FUN_019ef7f4(&DAT_01c230d0);
      iVar7 = (int)(uVar24 >> 0x20);
      iVar13 = 0x218;
      if ((uVar24 & 1) != 0) {
        iVar13 = 0x148;
      }
      uVar22 = *(undefined4 *)(iVar7 + iVar13);
      do {
        do {
          iVar13 = DAT_01d50474;
          unaff_r8 = DAT_01d50470;
          uVar16 = DAT_01d50470 + 1;
          iVar19 = DAT_01d50474 + (uint)(0xfffffffe < DAT_01d50470);
          bVar2 = (bool)hasExclusiveAccess(0x1d50470);
        } while (!bVar2);
        bVar2 = DAT_01d50470 == 0;
        bVar3 = DAT_01d50474 == 0;
        DAT_01d50470 = uVar16;
        DAT_01d50474 = iVar19;
      } while (bVar2 && bVar3);
      iVar19 = 0x200;
      if ((uVar24 & 1) != 0) {
        iVar19 = 0x138;
      }
      local_84 = (int ****)(iVar7 + iVar19);
      local_88 = local_84[2];
      if (local_88 != (int ***)0x0) {
        do {
          ppiVar17 = *local_88;
          bVar2 = (bool)hasExclusiveAccess(local_88);
        } while (!bVar2);
        *local_88 = (int **)((int)ppiVar17 + 1);
        if ((int)ppiVar17 < 0) {
LAB_00b711e4:
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xfdee,0xb711e4);
          (*pcVar1)();
        }
        local_84 = (int ****)local_84[3];
        do {
          ppiVar17 = *local_88;
          bVar2 = (bool)hasExclusiveAccess(local_88);
        } while (!bVar2);
        *local_88 = (int **)((int)ppiVar17 + 1);
        if ((int **)0x7fffffff < ppiVar17) goto LAB_00b711e4;
      }
      *puVar10 = 0;
      puVar10[1] = 0;
      puVar10[4] = unaff_r8;
      puVar10[5] = iVar13;
      local_a0 = (int ****)0xcc;
      local_78 = (int ****)0x0;
      local_9c = (int ****)0x0;
      local_58 = 0;
      local_5c = 0;
      local_60 = 0;
      local_98 = (int ****)&PTR_LAB_01c13e3c;
      local_110 = (int ****)0x0;
      local_70 = ppppiVar15;
      local_6c = iVar11;
      local_68 = iVar21;
      local_50 = local_88;
      local_4c = local_84;
      iVar11 = FUN_01be5878(&local_110,0x20,0x60);
      ppppiVar15 = local_110;
      if ((iVar11 != 0) || (local_110 == (int ****)0x0)) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(0x20,0x60);
      }
      FUN_01bed4e2(local_110,&local_a0,0x60);
      FUN_019f02d4(&local_a0,uVar22,ppppiVar15,1,uVar24);
      if (((uint)local_a0 & 0xfe) != 4) {
        local_10c = SUB41(local_9c,0);
        uStack_109 = (undefined1)((uint)local_9c >> 0x18);
        local_110 = local_a0;
        uStack_10b = (undefined2)((uint)local_9c >> 8);
        local_9c = (int ****)FUN_019a7d7c;
        local_a0 = (int ****)&local_110;
                    /* WARNING: Subroutine does not return */
        FUN_012fb100(&DAT_005ab28b,&local_a0,&DAT_01c230d0);
      }
      FUN_014397e4((int)uVar24,iVar7);
      param_2[0x29] = (int)ppppiVar15;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c13300);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c13300);
    case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_2[0x2a]) {
      case '\0':
        goto switchD_00b70bec_caseD_0;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c230e0);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c230e0);
      }
    }
    local_1b4 = param_2 + 0x2b;
    local_1b8 = param_2 + 0x2a;
    local_1c4 = param_2 + 0x26;
    uVar22 = *param_3;
    uVar16 = 0;
    local_9c = (int ****)0x0;
    local_a0 = (int ****)&DAT_00000001;
    uVar8 = FUN_019ec670(uVar22);
    if ((uVar8 & 0xff) == 2) {
LAB_00b71314:
      (**(code **)(*(int *)(param_2[0x29] + 8) + 0xc))(param_2[0x29],&local_a0,uVar22);
      ppppiVar15 = local_a0;
      uVar8 = 0;
      if (local_a0 != (int ****)0x0 || local_9c != (int ****)0x0) {
        uVar8 = uVar16;
      }
      local_110 = local_98;
      local_10c = SUB41(local_94,0);
      uStack_10b = (undefined2)((uint)local_94 >> 8);
      uStack_109 = (undefined1)((uint)local_94 >> 0x18);
      local_108 = local_90;
      local_104 = ppppiStack_8c;
      FUN_019edbc4(uVar8,unaff_r8);
      if (((uint)ppppiVar15 & 1) != 0) goto LAB_00b71370;
      local_13c = (int ****)CONCAT13(uStack_109,CONCAT21(uStack_10b,local_10c));
      local_140 = local_110;
      local_138 = local_108;
      local_134 = local_104;
      piVar9 = (int *)param_2[0x29];
      if (*piVar9 == 0xcc) {
        DataMemoryBarrier(0xb);
        bVar2 = (bool)hasExclusiveAccess(piVar9);
        if (!bVar2) goto LAB_00b713b8;
        *piVar9 = 0x84;
      }
      else {
        ClearExclusiveLocal();
LAB_00b713b8:
        (**(code **)(piVar9[2] + 0x10))();
      }
      if (local_140 == (int ****)0x0 && local_13c == (int ****)0x0) {
        ppppiVar15 = local_138;
        ppppiVar18 = local_134;
      }
      else {
        FUN_019a18a8(&local_a0,0x28,"background task failed",0x16);
        ppppiVar18 = local_9c;
        ppppiVar15 = local_a0;
        FUN_00b71c38(&local_140);
      }
      *(undefined1 *)local_1b8 = 1;
      if (((uint)ppppiVar15 & 0xff) != 5) {
        FUN_00b71be0(local_1c4);
        *(undefined1 *)local_1b4 = 1;
        if (((uint)ppppiVar15 & 0xff) == 4) {
          if (((uint)ppppiVar15 & 0x100) != 0) {
            *(undefined1 *)(param_2 + 0x2e) = 0;
            iVar11 = 0x15;
            param_2[0x22] =
                 (int)"/tmp/resolv.conf.realevent open/boser/boser-buildroot/src/bos.rs:203";
            param_2[0x23] = 0x15;
            goto LAB_00b70b28;
          }
        }
        else {
          FUN_0187266c(ppppiVar15,ppppiVar18);
        }
        goto LAB_00b71494;
      }
    }
    else {
      if ((uVar8 & 1) == 0) {
        uVar16 = (uVar8 & 0xffffff) >> 8;
        unaff_r8 = (uVar8 & 0xffffff) >> 0x10;
        goto LAB_00b71314;
      }
      FUN_00b92374(&local_a0);
LAB_00b71370:
      *(undefined1 *)local_1b8 = 3;
    }
    *(undefined1 *)local_1b4 = 3;
    *param_1 = -0x7fffffff;
    uVar5 = 4;
    goto LAB_00b7150c;
  case '\x05':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x2e]) {
    case '\0':
      iVar11 = param_2[0x23];
LAB_00b70b28:
      *(undefined1 *)(param_2 + 0x2d) = 0;
      param_2[0x24] = param_2[0x22];
      param_2[0x25] = iVar11;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c131ac);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c131ac);
    }
    piVar9 = param_2 + 0x2e;
    FUN_00b69fb0(&local_110,param_2 + 0x24,*param_3);
    if (local_110 == (int ****)&DAT_80000001) {
      *(undefined1 *)piVar9 = 3;
LAB_00b70b60:
      *param_1 = -0x7fffffff;
      uVar5 = 5;
      goto LAB_00b7150c;
    }
    local_13c = (int ****)CONCAT13(uStack_109,CONCAT21(uStack_10b,local_10c));
    local_140 = local_110;
    local_138 = local_108;
    if ((char)param_2[0x2d] == '\x03') {
      FUN_00b71be0(param_2 + 0x28);
    }
    ppppiVar18 = local_13c;
    ppppiVar15 = local_140;
    if (local_140 == (int ****)&DAT_80000000) {
      FUN_00eab9a0(&local_140);
      local_98 = (int ****)0x0;
      local_9c = (int ****)&DAT_00000001;
      *(undefined1 *)piVar9 = 1;
      ppppiVar15 = (int ****)0x0;
    }
    else {
      FUN_00797b20(&local_a0,local_13c,local_138);
      FUN_019bb7e0(ppppiVar15,ppppiVar18);
      *(undefined1 *)piVar9 = 1;
      ppppiVar15 = local_a0;
      if (local_a0 == (int ****)&DAT_80000000) goto LAB_00b70b60;
    }
    ppppiVar4 = local_98;
    ppppiVar18 = local_9c;
    FUN_0134aee0(param_2[0x14],param_2[0x15],1,4);
    param_2[0x14] = (int)ppppiVar15;
    param_2[0x15] = (int)ppppiVar18;
    param_2[0x16] = (int)ppppiVar4;
LAB_00b71494:
    iVar11 = param_2[0x11];
    iVar21 = param_2[0x12];
    local_170 = (int ****)param_2[0x13];
    ppppiStack_16c = (int ****)param_2[0x14];
    ppppiStack_168 = (int ****)param_2[0x15];
    ppppiStack_164 = (int ****)param_2[0x16];
    ppppiStack_160 = (int ****)param_2[0x17];
    local_198 = param_2[0x18];
    iStack_194 = param_2[0x19];
    iStack_190 = param_2[0x1a];
    iStack_18c = param_2[0x1b];
    local_188 = param_2[0x1c];
    iStack_184 = param_2[0x1d];
    iStack_180 = param_2[0x1e];
    iStack_17c = param_2[0x1f];
    iStack_178 = param_2[0x20];
    FUN_019bb7e0(param_2[0xe],param_2[0xf]);
    FUN_007390c4(param_2 + 1);
  }
  *param_1 = iVar11;
  param_1[1] = iVar21;
  param_1[2] = (int)local_170;
  param_1[3] = (int)ppppiStack_16c;
  param_1[4] = (int)ppppiStack_168;
  param_1[5] = (int)ppppiStack_164;
  param_1[6] = (int)ppppiStack_160;
  param_1[7] = local_198;
  param_1[8] = iStack_194;
  param_1[9] = iStack_190;
  param_1[10] = iStack_18c;
  param_1[0xb] = local_188;
  param_1[0xc] = iStack_184;
  param_1[0xd] = iStack_180;
  param_1[0xe] = iStack_17c;
  param_1[0xf] = iStack_178;
  uVar5 = 1;
LAB_00b7150c:
  *(undefined1 *)(param_2 + 0x21) = uVar5;
  return;
}

