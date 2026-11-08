// FUN_00a66e10 @ 00a66e10 size=7872 calls_out=45 calls_in=1
// strings: boser::metrics_scraper::filteropen/boser/boser/src/metrics_scraper/filter.rsevent open/boser/boser/src/metrics_scraper/filter.rs:413 | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | boser::metrics_scraper::filteropen/boser/boser/src/metrics_scraper/filter.rsevent open/boser/boser/src/metrics_scraper/filter.rs:413 | InvalidParamSegmentInvalidParamInvalidCatchAll | hashboard

/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x00a67d28 */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

bool FUN_00a66e10(undefined4 *param_1,undefined4 param_2)

{
  uint *****pppppuVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  uint ****ppppuVar8;
  int *piVar9;
  undefined4 extraout_r1;
  undefined1 *puVar10;
  uint *****pppppuVar11;
  uint *****pppppuVar12;
  undefined4 *puVar13;
  undefined4 *extraout_r2;
  uint *****pppppuVar14;
  uint *****extraout_r3;
  uint *****extraout_r3_00;
  undefined1 uVar15;
  uint *****pppppuVar16;
  uint *puVar17;
  uint *****pppppuVar18;
  char *pcVar19;
  undefined4 uVar20;
  char *pcVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  uint *****pppppuVar24;
  uint *****pppppuVar25;
  uint *****pppppuVar26;
  undefined4 *puVar27;
  uint uVar28;
  int iVar29;
  bool bVar30;
  bool bVar31;
  uint in_fpscr;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  double dVar35;
  double dVar36;
  ulonglong uVar37;
  ulonglong uVar38;
  uint *****local_298;
  uint *****local_294;
  undefined4 local_290;
  uint *****pppppuStack_268;
  uint *****pppppuStack_264;
  int *piStack_260;
  uint *****local_218;
  uint *****local_214;
  int *local_210;
  uint *****local_208;
  uint *****local_204;
  int *local_200;
  uint *****local_1f8;
  uint *****local_1f4;
  int *local_1f0;
  int local_1d8;
  uint *****local_1d4;
  int local_1d0;
  undefined4 uStack_1cc;
  uint *****local_1c8;
  uint *****local_1c4;
  int local_1c0;
  uint *****local_1bc;
  uint *****local_1b8;
  uint *****local_1b4;
  int *local_1b0;
  uint *****local_170;
  uint *****local_16c;
  int *local_168;
  int local_150;
  uint *****local_14c;
  int iStack_148;
  undefined4 uStack_144;
  uint ***pppuStack_140;
  undefined4 local_13c;
  int local_138;
  uint *****local_128;
  undefined4 local_124;
  undefined4 *local_120;
  uint ****local_11c;
  undefined4 local_118;
  uint ****local_114;
  uint *****local_110;
  undefined4 local_10c;
  undefined4 *local_108;
  uint *****local_100;
  uint *****pppppuStack_fc;
  uint *****local_f8;
  uint *****pppppuStack_f4;
  uint *****local_f0;
  undefined *local_ec;
  uint *****local_e8;
  uint *****local_e4;
  uint *****pppppuStack_e0;
  uint *****pppppuStack_dc;
  undefined4 local_d8;
  uint *****local_d0;
  undefined4 local_cc;
  undefined4 *local_c8;
  uint *****pppppuStack_c0;
  undefined4 uStack_bc;
  undefined4 *puStack_b8;
  uint *****local_b0;
  uint *****pppppuStack_ac;
  uint *****local_a8;
  uint *****local_a4;
  uint *****local_a0;
  uint ****local_98;
  int local_94;
  undefined8 local_90;
  uint *****local_88;
  undefined4 local_84;
  undefined8 local_80;
  int local_78;
  uint local_74;
  undefined1 *local_70;
  int local_68;
  int local_64;
  int local_60;
  undefined4 local_5c;
  undefined4 local_54;
  uint *****local_50;
  uint *****local_4c;
  undefined4 local_48;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0x12)) {
  case 0:
    param_1[0x11] = param_1[0x10];
    param_1[4] = *param_1;
    param_1[5] = param_1[1];
    param_1[6] = param_1[2];
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c0ecd8);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c0ecd8);
  case 3:
    goto switchD_00a66e44_caseD_3;
  }
LAB_00a689f0:
  do {
    *(undefined1 *)(param_1 + 0xf) = 0;
    param_1[8] = param_1 + 4;
switchD_00a66e44_caseD_3:
    FUN_00a65c48(&local_98,param_1 + 8,param_2);
    iVar5 = local_94;
    ppppuVar8 = local_98;
    uVar4 = (uint)local_98 ^ 3;
    if (uVar4 == 0 && local_94 == 0) {
      uVar15 = 3;
LAB_00a68d14:
      *(undefined1 *)(param_1 + 0x12) = uVar15;
      return uVar4 == 0 && iVar5 == 0;
    }
    pppppuVar1 = (uint *****)local_90;
    pppppuVar25 = local_90._4_4_;
    if (*(char *)(param_1 + 0xf) == '\x03') {
      FUN_009cdcac(param_1 + 9);
    }
    if (!(ppppuVar8 == (uint ****)0x2 && iVar5 == 0)) {
      if (((uint)ppppuVar8 & 1) == 0) {
        FUN_009df188(param_1 + 4);
        uVar15 = 1;
        FUN_009df410(param_1[0x11]);
        goto LAB_00a68d14;
      }
      local_e4 = pppppuVar25;
      local_e8 = pppppuVar1;
      if ((DAT_01d50f88 < 4) &&
         (((DAT_01d4c2a8 - 1 < 2 ||
           ((DAT_01d4c2a8 != 0 && (cVar3 = FUN_01aaafa8(&DAT_01d4c2a0), cVar3 != '\0')))) &&
          (iVar5 = FUN_01aaa278(DAT_01d4c2a0), iVar5 != 0)))) {
        if (*(int *)(DAT_01d4c2a0 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c0ecf8);
        }
        local_1b4 = (uint *****)&local_b0;
        local_90 = *(undefined8 *)(DAT_01d4c2a0 + 0x24);
        local_1f0 = (int *)(DAT_01d4c2a0 + 0x1c);
        local_98 = (uint ****)*local_1f0;
        local_1f8 = (uint *****)&local_1b8;
        local_88 = (uint *****)0x0;
        local_1f4 = (uint *****)&DAT_00000001;
        pppppuStack_ac = (uint *****)&local_100;
        local_100 = (uint *****)&local_e8;
        local_1b0 = (int *)&DAT_01d2ea4c;
        local_b0 = (uint *****)&DAT_0059165f;
        pppppuStack_fc = (uint *****)FUN_012fd074;
        local_1b8 = &local_98;
        local_94 = *(int *)(DAT_01d4c2a0 + 0x20);
        FUN_01aaaecc(DAT_01d4c2a0,&local_1f8);
        iVar5 = DAT_01d4c2a0;
        if ((DAT_01d51ae9 == '\0') && (1 < DAT_01d51b00)) {
          local_16c = *(uint ******)(DAT_01d4c2a0 + 0x14);
          local_168 = *(int **)(DAT_01d4c2a0 + 0x18);
          local_170 = (uint *****)0x2;
          DataMemoryBarrier(0xb);
          puVar13 = DAT_01d4edc8;
          pcVar21 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            puVar13 = &DAT_01cfc5e0;
            pcVar21 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          iVar6 = (*(code *)puVar13[3])(pcVar21,&local_170);
          if (iVar6 != 0) {
            pppppuStack_268 = local_170;
            pppppuStack_264 = local_16c;
            piStack_260 = local_168;
            FUN_01aaa328(iVar5,pcVar21,puVar13[4]);
          }
        }
      }
      else {
        iVar5 = DAT_01d4c2a0;
        if ((DAT_01d51ae9 == '\0') && (1 < DAT_01d51b00)) {
          local_204 = *(uint ******)(DAT_01d4c2a0 + 0x14);
          local_200 = *(int **)(DAT_01d4c2a0 + 0x18);
          local_208 = (uint *****)0x2;
          DataMemoryBarrier(0xb);
          puVar13 = DAT_01d4edc8;
          pcVar21 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            puVar13 = &DAT_01cfc5e0;
            pcVar21 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          iVar6 = (*(code *)puVar13[3])(pcVar21,&local_208);
          if (iVar6 != 0) {
            if (*(int *)(DAT_01d4c2a0 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c0ecf8);
            }
            local_16c = (uint *****)&local_100;
            local_90 = *(undefined8 *)(DAT_01d4c2a0 + 0x24);
            local_1b8 = (uint *****)&local_170;
            local_88 = (uint *****)0x0;
            local_1b4 = (uint *****)&DAT_00000001;
            pppppuStack_fc = (uint *****)&local_1f8;
            local_1f8 = (uint *****)&local_e8;
            local_168 = (int *)&DAT_01d2ea4c;
            local_100 = (uint *****)&DAT_0059165f;
            local_1f4 = (uint *****)FUN_012fd074;
            pppppuStack_268 = local_208;
            pppppuStack_264 = local_204;
            piStack_260 = local_200;
            local_1b0 = (int *)(DAT_01d4c2a0 + 0x1c);
            local_170 = &local_98;
            local_98 = *(uint *****)(DAT_01d4c2a0 + 0x1c);
            local_94 = *(int *)(DAT_01d4c2a0 + 0x20);
            FUN_01aaa328(iVar5,pcVar21,puVar13[4]);
          }
        }
      }
      goto LAB_00a689f0;
    }
    FUN_019ac130(&local_170,0);
    piVar7 = local_168;
    pppppuVar18 = local_16c;
    pppppuVar25 = local_170;
    FUN_019f90e0(&local_170,extraout_r1,pppppuVar1[2],pppppuVar1[3]);
    iVar5 = (int)pppppuVar25 - (int)local_170;
    uVar4 = (int)pppppuVar18 - (int)((int)local_16c + (uint)(pppppuVar25 < local_170));
    if ((int)local_16c < 0 !=
        (int)(((uint)pppppuVar18 ^ (uint)local_16c) & ((uint)pppppuVar18 ^ uVar4)) < 0) {
LAB_00a68d54:
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("overflow when subtracting duration from instantMatching variant not foundrisingfalling"
                   ,0x2f,&DAT_01d28204);
    }
    puVar10 = (undefined1 *)((int)piVar7 - (int)local_168);
    if ((int)puVar10 < 0) {
      bVar30 = iVar5 == 0;
      iVar5 = iVar5 + -1;
      uVar28 = uVar4 - bVar30;
      if ((int)(uVar4 & (uVar4 ^ uVar28)) < 0) goto LAB_00a68d54;
      puVar10 = &DAT_3b9aca00 + (int)puVar10;
    }
    else {
      uVar28 = uVar4;
    }
    local_48 = 0;
    local_50 = (uint *****)0x0;
    local_54 = 0;
    local_5c = 0;
    local_60 = 0;
    local_64 = 8;
    local_68 = 0;
    local_88 = (uint *****)0x0;
    local_84 = 0;
    local_94 = 0;
    local_98 = (uint ****)0x0;
    local_70 = puVar10;
    local_78 = iVar5;
    local_74 = uVar28;
    FUN_00a58334(&local_170,pppppuVar1[7],pppppuVar1[8]);
    pppppuVar25 = local_170;
    if (local_150 == -0x80000000) {
      FUN_00a95b78(&local_98);
LAB_00a68624:
      local_1c8 = pppppuVar25;
      if ((DAT_01d50f88 < 5) &&
         ((DAT_01d4c2b4 - 1 < 2 ||
          ((DAT_01d4c2b4 != 0 && (cVar3 = FUN_01aaafa8(&DAT_01d4c2ac), cVar3 != '\0')))))) {
        iVar5 = FUN_01aaa278(DAT_01d4c2ac);
        if (iVar5 == 0) goto LAB_00a689a0;
        if (*(int *)(DAT_01d4c2ac + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c0ece8);
        }
        local_1f4 = (uint *****)&local_e8;
        local_90 = *(undefined8 *)(DAT_01d4c2ac + 0x24);
        local_f8 = (uint *****)(DAT_01d4c2ac + 0x1c);
        local_98 = *local_f8;
        local_100 = (uint *****)&local_1f8;
        local_88 = (uint *****)0x0;
        pppppuStack_fc = (uint *****)&DAT_00000001;
        local_e4 = (uint *****)&local_b0;
        local_b0 = (uint *****)&local_1c8;
        local_1f0 = (int *)&DAT_01d2ea4c;
        local_e8 = (uint *****)&DAT_005a00c6;
        pppppuStack_ac = (uint *****)FUN_00667a08;
        local_1f8 = &local_98;
        local_94 = *(int *)(DAT_01d4c2ac + 0x20);
        FUN_01aaaecc(DAT_01d4c2ac,&local_100);
        iVar5 = DAT_01d4c2ac;
        if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
          local_1b4 = *(uint ******)(DAT_01d4c2ac + 0x14);
          local_1b0 = *(int **)(DAT_01d4c2ac + 0x18);
          local_1b8 = (uint *****)&DAT_00000001;
          DataMemoryBarrier(0xb);
          puVar13 = DAT_01d4edc8;
          pcVar21 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            puVar13 = &DAT_01cfc5e0;
            pcVar21 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          iVar6 = (*(code *)puVar13[3])(pcVar21,&local_1b8);
          if (iVar6 != 0) {
            local_170 = local_1b8;
            local_16c = local_1b4;
            local_168 = local_1b0;
            FUN_01aaa328(iVar5,pcVar21,puVar13[4]);
          }
        }
      }
      else {
LAB_00a689a0:
        iVar5 = DAT_01d4c2ac;
        if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
          local_214 = *(uint ******)(DAT_01d4c2ac + 0x14);
          local_210 = *(int **)(DAT_01d4c2ac + 0x18);
          local_218 = (uint *****)&DAT_00000001;
          DataMemoryBarrier(0xb);
          puVar13 = DAT_01d4edc8;
          pcVar21 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            puVar13 = &DAT_01cfc5e0;
            pcVar21 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          iVar6 = (*(code *)puVar13[3])(pcVar21,&local_218);
          if (iVar6 != 0) {
            if (*(int *)(DAT_01d4c2ac + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c0ece8);
            }
            local_1b4 = (uint *****)&local_b0;
            local_90 = *(undefined8 *)(DAT_01d4c2ac + 0x24);
            local_1f8 = (uint *****)&local_1b8;
            local_88 = (uint *****)0x0;
            local_1f4 = (uint *****)&DAT_00000001;
            pppppuStack_ac = (uint *****)&local_100;
            local_1b0 = (int *)&DAT_01d2ea4c;
            pppppuStack_fc = (uint *****)FUN_00667a08;
            local_b0 = (uint *****)&DAT_005a00c6;
            local_100 = (uint *****)&local_1c8;
            local_170 = local_218;
            local_16c = local_214;
            local_168 = local_210;
            local_1f0 = (int *)(DAT_01d4c2ac + 0x1c);
            local_1b8 = &local_98;
            local_98 = *(uint *****)(DAT_01d4c2ac + 0x1c);
            local_94 = *(int *)(DAT_01d4c2ac + 0x20);
            FUN_01aaa328(iVar5,pcVar21,puVar13[4]);
          }
        }
      }
      (*(code *)**local_1c8)();
    }
    else {
      puVar27 = (undefined4 *)((uint)&local_170 | 4);
      puVar13 = (undefined4 *)((uint)&local_1f8 | 4);
      uVar20 = puVar27[1];
      uVar22 = puVar27[2];
      *puVar13 = *puVar27;
      puVar13[1] = uVar20;
      puVar13[2] = uVar22;
      uVar20 = puVar27[4];
      uVar22 = puVar27[5];
      uVar23 = puVar27[6];
      puVar13[3] = puVar27[3];
      puVar13[4] = uVar20;
      puVar13[5] = uVar22;
      puVar13[6] = uVar23;
      local_1d4 = local_14c;
      local_1d0 = iStack_148;
      uStack_1cc = uStack_144;
      local_1d8 = local_150;
      local_1c0 = local_150;
      local_1f8 = local_170;
      pppppuVar25 = local_14c + iStack_148 * 0x12;
      local_1c4 = local_14c;
      local_1c8 = local_14c;
      local_1bc = pppppuVar25;
      if (iStack_148 != 0) {
        pppppuVar18 = local_14c;
LAB_00a67258:
        pppppuVar26 = pppppuVar18 + 0x12;
        pppppuVar16 = (uint *****)*pppppuVar18;
        local_1c4 = pppppuVar26;
        FUN_01bed4e2(&local_1b8,pppppuVar18 + 1,0x44);
        if (pppppuVar16 != (uint *****)&DAT_00000005) {
          local_170 = pppppuVar16;
          FUN_01bed4e2(puVar27,&local_1b8,0x44);
          uVar20 = local_13c;
          switch(local_138) {
          case 8:
            iVar5 = thunk_FUN_01bed842(local_13c,&DAT_0056fed0,8);
            if ((iVar5 != 0) || (FUN_00b02b48(&local_100,&local_170), ((uint)local_100 & 1) != 0))
            break;
            dVar35 = (double)CONCAT44(pppppuStack_f4,local_f8);
            uVar37 = FUN_00b070a4(&local_170,"hashboard",9);
            pppppuVar18 = (uint *****)(uVar37 >> 0x20);
            if ((uVar37 & 1) != 0) break;
            uVar37 = FUN_00b070a4(&local_170,"chip_addr",9);
            if ((((uVar37 & 1) != 0) ||
                (uVar4 = FUN_00b070a4(&local_170,"voltage_domain",0xe), (uVar4 & 1) != 0)) ||
               (uVar4 = FUN_00b070a4(&local_170,
                                     "chip_in_domainevent open/boser/boser/src/metrics_scraper/metrics_datatypes.rs:356"
                                     ,0xe), (uVar4 & 1) != 0)) break;
            puVar13 = (undefined4 *)FUN_00b34484(&local_98,pppppuVar18,(int)(uVar37 >> 0x20));
            *(double *)(puVar13 + 2) = dVar35;
            *puVar13 = 1;
            puVar13[1] = 0;
            if (local_50 != (uint *****)0x0) {
              pppppuStack_fc = local_50;
              local_f8 = local_4c;
              do {
                local_f0 = (uint *****)(uint)*(ushort *)((int)pppppuStack_fc + 0x97a);
                iVar5 = (int)local_f0 << 2;
                iVar6 = 0x253;
                do {
                  iVar29 = iVar6;
                  if (iVar5 == 0) goto LAB_00a6743c;
                  iVar5 = iVar5 + -4;
                  bVar31 = pppppuVar18 < pppppuStack_fc[iVar29];
                  bVar30 = !bVar31 && pppppuVar18 != (uint *****)pppppuStack_fc[iVar29];
                  iVar6 = iVar29 + 1;
                } while ((char)(bVar30 - bVar31) == '\x01');
                if (bVar30 == bVar31) {
                  pppppuStack_f4 = (uint *****)(iVar29 + -0x253);
                  local_100 = (uint *****)0x0;
                  local_f0 = (uint *****)&local_50;
                  goto LAB_00a68400;
                }
                local_f0 = (uint *****)(iVar29 + -0x253);
LAB_00a6743c:
                if (local_f8 == (uint *****)0x0) goto LAB_00a6859c;
                local_f8 = (uint *****)((int)local_f8 + -1);
                pppppuStack_fc = (uint *****)pppppuStack_fc[(int)(local_f0 + 0x98)];
              } while( true );
            }
            local_f8 = (uint *****)0x0;
            goto LAB_00a683f4;
          case 9:
          case 10:
          case 0xb:
          case 0xc:
          case 0xf:
          case 0x10:
          case 0x13:
          case 0x14:
          case 0x15:
          case 0x16:
            break;
          case 0xd:
            iVar5 = thunk_FUN_01bed842(local_13c,"chip_hashrate",0xd);
            if ((iVar5 == 0) && (FUN_00b02b48(&local_100,&local_170), ((uint)local_100 & 1) == 0)) {
              uVar34 = CONCAT44(pppppuStack_f4,local_f8);
              uVar37 = FUN_00b070a4(&local_170,"hashboard",9);
              if ((uVar37 & 1) == 0) {
                uVar38 = FUN_00b070a4(&local_170,"chip_addr",9);
                if ((((uVar38 & 1) == 0) &&
                    (uVar4 = FUN_00b070a4(&local_170,"voltage_domain",0xe), (uVar4 & 1) == 0)) &&
                   ((uVar4 = FUN_00b070a4(&local_170,
                                          "chip_in_domainevent open/boser/boser/src/metrics_scraper/metrics_datatypes.rs:356"
                                          ,0xe), (uVar4 & 1) == 0 &&
                    (cVar3 = FUN_00b08c68(&local_170), cVar3 == '\0')))) {
                  iVar5 = FUN_00b34484(&local_98,(int)(uVar37 >> 0x20),(int)(uVar38 >> 0x20));
                  *(undefined4 *)(iVar5 + 0x20) = 1;
                  *(undefined4 *)(iVar5 + 0x24) = 0;
                  *(undefined8 *)(iVar5 + 0x28) = uVar34;
                }
              }
            }
            break;
          case 0xe:
            iVar5 = thunk_FUN_01bed842(local_13c,"chip_frequency",0xe);
            if ((iVar5 != 0) || (FUN_00b02b48(&local_100,&local_170), ((uint)local_100 & 1) != 0))
            break;
            dVar35 = (double)CONCAT44(pppppuStack_f4,local_f8);
            uVar37 = FUN_00b070a4(&local_170,"hashboard",9);
            pppppuVar18 = (uint *****)(uVar37 >> 0x20);
            if ((uVar37 & 1) != 0) break;
            uVar37 = FUN_00b070a4(&local_170,"chip_addr",9);
            if ((((uVar37 & 1) != 0) ||
                (uVar4 = FUN_00b070a4(&local_170,"voltage_domain",0xe), (uVar4 & 1) != 0)) ||
               (uVar4 = FUN_00b070a4(&local_170,
                                     "chip_in_domainevent open/boser/boser/src/metrics_scraper/metrics_datatypes.rs:356"
                                     ,0xe), (uVar4 & 1) != 0)) break;
            iVar5 = FUN_00b34484(&local_98,pppppuVar18,(int)(uVar37 >> 0x20));
            *(double *)(iVar5 + 0x18) = dVar35;
            *(undefined4 *)(iVar5 + 0x10) = 1;
            *(undefined4 *)(iVar5 + 0x14) = 0;
            if (local_50 != (uint *****)0x0) {
              pppppuStack_fc = local_50;
              local_f8 = local_4c;
              do {
                local_f0 = (uint *****)(uint)*(ushort *)((int)pppppuStack_fc + 0x97a);
                iVar5 = (int)local_f0 << 2;
                iVar6 = 0x253;
                do {
                  iVar29 = iVar6;
                  if (iVar5 == 0) goto LAB_00a6777c;
                  iVar5 = iVar5 + -4;
                  bVar31 = pppppuVar18 < pppppuStack_fc[iVar29];
                  bVar30 = !bVar31 && pppppuVar18 != (uint *****)pppppuStack_fc[iVar29];
                  iVar6 = iVar29 + 1;
                } while ((char)(bVar30 - bVar31) == '\x01');
                if (bVar30 == bVar31) {
                  pppppuStack_f4 = (uint *****)(iVar29 + -0x253);
                  local_100 = (uint *****)0x0;
                  local_f0 = (uint *****)&local_50;
                  goto LAB_00a68398;
                }
                local_f0 = (uint *****)(iVar29 + -0x253);
LAB_00a6777c:
                if (local_f8 == (uint *****)0x0) goto LAB_00a6858c;
                local_f8 = (uint *****)((int)local_f8 + -1);
                pppppuStack_fc = (uint *****)pppppuStack_fc[(int)(local_f0 + 0x98)];
              } while( true );
            }
            local_f8 = (uint *****)0x0;
            goto LAB_00a6838c;
          case 0x11:
            iVar5 = thunk_FUN_01bed842(local_13c,"hashboard_voltage",0x11);
            if ((iVar5 != 0) || (FUN_00b02b48(&local_100,&local_170), ((uint)local_100 & 1) != 0))
            break;
            uVar34 = CONCAT44(pppppuStack_f4,local_f8);
            uVar37 = FUN_00b070a4(&local_170,"hashboard",9);
            pppppuVar18 = (uint *****)(uVar37 >> 0x20);
            if (((uVar37 & 1) != 0) || (cVar3 = FUN_00b08058(&local_170), cVar3 != '\0')) break;
            if (local_50 != (uint *****)0x0) {
              pppppuStack_fc = local_50;
              local_f8 = local_4c;
              do {
                local_f0 = (uint *****)(uint)*(ushort *)((int)pppppuStack_fc + 0x97a);
                iVar5 = (int)local_f0 << 2;
                iVar6 = 0x253;
                do {
                  iVar29 = iVar6;
                  if (iVar5 == 0) goto LAB_00a67618;
                  iVar5 = iVar5 + -4;
                  bVar31 = pppppuVar18 < pppppuStack_fc[iVar29];
                  bVar30 = !bVar31 && pppppuVar18 != (uint *****)pppppuStack_fc[iVar29];
                  iVar6 = iVar29 + 1;
                } while ((char)(bVar30 - bVar31) == '\x01');
                if (bVar30 == bVar31) {
                  pppppuStack_f4 = (uint *****)(iVar29 + -0x253);
                  local_100 = (uint *****)0x0;
                  local_f0 = (uint *****)&local_50;
                  goto LAB_00a67eb0;
                }
                local_f0 = (uint *****)(iVar29 + -0x253);
LAB_00a67618:
                if (local_f8 == (uint *****)0x0) goto LAB_00a6857c;
                local_f8 = (uint *****)((int)local_f8 + -1);
                pppppuStack_fc = (uint *****)pppppuStack_fc[(int)(local_f0 + 0x98)];
              } while( true );
            }
            local_f8 = (uint *****)0x0;
            goto LAB_00a67ea4;
          case 0x12:
            iVar5 = thunk_FUN_01bed842(local_13c,"shared_psu_voltage",0x12);
            if (iVar5 == 0) {
              FUN_00b02b48(&local_100,&local_170);
              if (((uint)local_100 & 1) == 0) {
                uVar34 = CONCAT44(pppppuStack_f4,local_f8);
                bVar2 = FUN_00b08058(&local_170);
                if (bVar2 != 2) {
                  if ((bVar2 & 1) == 0) {
                    local_94 = 0;
                    local_98 = (uint ****)0x1;
                    local_90 = uVar34;
                  }
                  else {
                    local_88 = (uint *****)&DAT_00000001;
                    local_84 = 0;
                    local_80 = uVar34;
                  }
                }
              }
            }
            break;
          case 0x17:
            iVar5 = thunk_FUN_01bed842(local_13c,"pcb_temperature_celsius",0x17);
            if (iVar5 != 0) break;
            FUN_00b1c294(&local_b0,&local_170);
            pppppuVar18 = local_b0;
            uVar4 = (uint)local_a4 & 0xff;
            if (uVar4 == 5) break;
            uVar34 = CONCAT44(pppppuStack_ac,local_b0);
            if (local_50 != (uint *****)0x0) {
              pppppuVar16 = local_50;
              local_f8 = local_4c;
              do {
                local_f0 = (uint *****)(uint)*(ushort *)((int)pppppuVar16 + 0x97a);
                iVar5 = (int)local_f0 << 2;
                iVar6 = 0x253;
                do {
                  iVar29 = iVar6;
                  if (iVar5 == 0) goto LAB_00a67a0c;
                  iVar5 = iVar5 + -4;
                  bVar31 = local_a8 < pppppuVar16[iVar29];
                  bVar30 = !bVar31 && local_a8 != (uint *****)pppppuVar16[iVar29];
                  iVar6 = iVar29 + 1;
                } while ((char)(bVar30 - bVar31) == '\x01');
                if (bVar30 == bVar31) {
                  pppppuStack_f4 = (uint *****)(iVar29 + -0x253);
                  local_100 = (uint *****)0x0;
                  pppppuStack_fc = pppppuVar16;
                  local_f0 = (uint *****)&local_50;
                  goto LAB_00a67c94;
                }
                local_f0 = (uint *****)(iVar29 + -0x253);
LAB_00a67a0c:
                if (local_f8 == (uint *****)0x0) goto LAB_00a68148;
                local_f8 = (uint *****)((int)local_f8 + -1);
                pppppuVar16 = (uint *****)pppppuVar16[(int)(local_f0 + 0x98)];
              } while( true );
            }
            pppppuVar16 = (uint *****)0x0;
            goto LAB_00a67c88;
          case 0x18:
            iVar5 = thunk_FUN_01bed842(local_13c,"chip_temperature_celsius",0x18);
            if (iVar5 == 0) {
              FUN_00b02b48(&local_100,&local_170);
              if (((uint)local_100 & 1) == 0) {
                uVar34 = CONCAT44(pppppuStack_f4,local_f8);
                uVar37 = FUN_00b070a4(&local_170,"hashboard",9);
                pppppuVar18 = (uint *****)(uVar37 >> 0x20);
                if ((uVar37 & 1) == 0) {
                  FUN_00b087c4(&local_100,&local_170,
                               "sourceevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/tonic-0.13.1/src/codec/decode.rs:254"
                               ,6);
                  pppppuVar12 = pppppuStack_fc;
                  pppppuVar16 = local_100;
                  if (local_100 != (uint *****)&DAT_80000000) {
                    if (local_f8 == (uint *****)&DAT_00000018) {
                      iVar5 = thunk_FUN_01bed842(pppppuStack_fc,"approximated(pcb_sensor)",0x18);
                      if (iVar5 != 0) goto LAB_00a67f7c;
                      FUN_00b087c4(&local_100,&local_170,"idlast_updatedlast_ticknext_tickran",2);
                      if (local_100 == (uint *****)&DAT_80000000) goto LAB_00a6837c;
                      local_290 = 2;
LAB_00a68494:
                      bVar30 = false;
                      pppppuVar24 = local_100;
                      local_298 = local_f8;
                      local_294 = pppppuStack_fc;
LAB_00a684a4:
                      FUN_019bb7e0(pppppuVar16,pppppuVar12);
                      cVar3 = FUN_00b0785c(&local_170);
                      if (cVar3 == '\x05') {
                        if (!bVar30) {
                          pppppuVar16 = pppppuVar24;
                          pppppuVar12 = local_294;
                          goto LAB_00a6837c;
                        }
                      }
                      else {
                        if (bVar30) {
                          iVar5 = FUN_00b34484(&local_98,pppppuVar18,pppppuVar24);
                          *(undefined4 *)(iVar5 + 0x30) = 1;
                          *(undefined4 *)(iVar5 + 0x34) = 0;
                          *(undefined8 *)(iVar5 + 0x38) = uVar34;
                        }
                        iVar5 = local_60;
                        if (local_60 == local_68) {
                          FUN_00a20ed0(&local_68);
                        }
                        puVar13 = (undefined4 *)(local_64 + iVar5 * 0x20);
                        *puVar13 = local_290;
                        *(char *)(puVar13 + 7) = cVar3;
                        puVar13[2] = local_294;
                        puVar13[6] = pppppuVar18;
                        *(undefined8 *)(puVar13 + 4) = uVar34;
                        puVar13[1] = pppppuVar24;
                        puVar13[3] = local_298;
                        local_60 = iVar5 + 1;
                      }
                    }
                    else {
                      if (local_f8 == (uint *****)&DAT_0000000a) {
                        iVar5 = thunk_FUN_01bed842(pppppuStack_fc,"pcb_sensor",10);
                        if (iVar5 != 0) goto LAB_00a67f7c;
                        FUN_00b087c4(&local_100,&local_170,"idlast_updatedlast_ticknext_tickran",2);
                        if (local_100 != (uint *****)&DAT_80000000) {
                          local_290 = 1;
                          goto LAB_00a68494;
                        }
                      }
                      else if ((local_f8 == (uint *****)&SUB_00000004) &&
                              (*pppppuStack_fc == (uint ****)0x70696863)) {
                        uVar37 = FUN_00b070a4(&local_170,"idlast_updatedlast_ticknext_tickran",2);
                        if ((uVar37 & 1) == 0) {
                          bVar30 = true;
                          local_290 = 0;
                          pppppuVar24 = (uint *****)(uVar37 >> 0x20);
                          goto LAB_00a684a4;
                        }
                      }
                      else {
LAB_00a67f7c:
                        if ((DAT_01d50f88 < 5) &&
                           ((DAT_01d4bb70 - 1 < 2 ||
                            ((DAT_01d4bb70 != 0 &&
                             (cVar3 = FUN_01aaafa8(&DAT_01d4bb68), cVar3 != '\0')))))) {
                          iVar5 = FUN_01aaa278(DAT_01d4bb68);
                          pppppuVar24 = (uint *****)&local_170;
                          if (iVar5 != 0) {
                            pppppuVar11 = *(uint ******)(DAT_01d4bb68 + 0x20);
                            puVar13 = extraout_r2;
                            pppppuVar14 = extraout_r3;
                            if (pppppuVar11 != (uint *****)0x0) {
                              local_d8 = 0;
                              puVar13 = (undefined4 *)(DAT_01d4bb68 + 0x1c);
                              local_e8 = (uint *****)*puVar13;
                              local_118 = 0x25;
                              pppppuVar18 = *(uint ******)(DAT_01d4bb68 + 0x24);
                              pppppuVar24 = *(uint ******)(DAT_01d4bb68 + 0x28);
                              local_11c = (uint ****)0x3eca25;
                              local_e4 = pppppuVar11;
                              pppppuVar14 = local_e8;
                              pppppuStack_e0 = pppppuVar18;
                              pppppuStack_dc = pppppuVar24;
                            }
                            if (pppppuVar11 < (uint *****)0x2) goto LAB_00a68d38;
                            local_f0 = &local_114;
                            pppppuStack_f4 = (uint *****)&local_b0;
                            pppppuStack_fc = &local_11c;
                            local_100 = (uint *****)&local_e8;
                            local_128 = (uint *****)&local_100;
                            local_a0 = (uint *****)&DAT_00000001;
                            local_124 = 2;
                            local_ec = &DAT_01c119e8;
                            local_f8 = (uint *****)&DAT_01d2ea4c;
                            local_120 = puVar13;
                            local_114 = &pppuStack_140;
                            local_b0 = pppppuVar14;
                            pppppuStack_ac = pppppuVar11;
                            local_a8 = pppppuVar18;
                            local_a4 = pppppuVar24;
                            FUN_01aaaecc(DAT_01d4bb68,&local_128);
                            iVar5 = DAT_01d4bb68;
                            if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
                              local_cc = *(undefined4 *)(DAT_01d4bb68 + 0x14);
                              local_c8 = *(undefined4 **)(DAT_01d4bb68 + 0x18);
                              local_d0 = (uint *****)&DAT_00000001;
                              DataMemoryBarrier(0xb);
                              pcVar21 = DAT_01d4edc4;
                              if (DAT_01d51174 != 2) {
                                pcVar21 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
                              }
                              puVar13 = DAT_01d4edc8;
                              if (DAT_01d51174 != 2) {
                                puVar13 = &DAT_01cfc5e0;
                              }
                              iVar6 = (*(code *)puVar13[3])(pcVar21,&local_d0);
                              if (iVar6 != 0) {
                                pppppuStack_c0 = local_d0;
                                uStack_bc = local_cc;
                                puStack_b8 = local_c8;
                                FUN_01aaa328(iVar5,pcVar21,puVar13[4]);
                              }
                            }
                            goto LAB_00a6837c;
                          }
                        }
                        iVar5 = DAT_01d4bb68;
                        if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
                          local_10c = *(undefined4 *)(DAT_01d4bb68 + 0x14);
                          local_108 = *(undefined4 **)(DAT_01d4bb68 + 0x18);
                          local_110 = (uint *****)&DAT_00000001;
                          DataMemoryBarrier(0xb);
                          pcVar21 = DAT_01d4edc4;
                          if (DAT_01d51174 != 2) {
                            pcVar21 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
                          }
                          puVar13 = DAT_01d4edc8;
                          if (DAT_01d51174 != 2) {
                            puVar13 = &DAT_01cfc5e0;
                          }
                          iVar6 = (*(code *)puVar13[3])(pcVar21,&local_110);
                          pppppuVar18 = (uint *****)&local_170;
                          if (iVar6 != 0) {
                            pppppuVar11 = *(uint ******)(DAT_01d4bb68 + 0x1c);
                            pppppuVar14 = *(uint ******)(DAT_01d4bb68 + 0x20);
                            pppppuVar24 = extraout_r3_00;
                            if (pppppuVar14 != (uint *****)0x0) {
                              local_d8 = 0;
                              pppppuVar24 = *(uint ******)(DAT_01d4bb68 + 0x24);
                              pppppuVar18 = *(uint ******)(DAT_01d4bb68 + 0x28);
                              local_124 = 0x25;
                              local_128 = (uint *****)0x3eca25;
                              local_e8 = pppppuVar11;
                              local_e4 = pppppuVar14;
                              pppppuStack_e0 = pppppuVar24;
                              pppppuStack_dc = pppppuVar18;
                            }
                            if (pppppuVar14 < (uint *****)0x2) {
LAB_00a68d38:
                    /* WARNING: Subroutine does not return */
                              FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c119d8);
                            }
                            local_f0 = &local_11c;
                            pppppuStack_f4 = (uint *****)&local_b0;
                            pppppuStack_fc = (uint *****)&local_128;
                            local_100 = (uint *****)&local_e8;
                            local_d0 = (uint *****)&local_100;
                            local_a0 = (uint *****)&DAT_00000001;
                            local_cc = 2;
                            local_ec = &DAT_01c119e8;
                            local_f8 = (uint *****)&DAT_01d2ea4c;
                            pppppuStack_c0 = local_110;
                            uStack_bc = local_10c;
                            puStack_b8 = local_108;
                            local_11c = &pppuStack_140;
                            local_c8 = (undefined4 *)(DAT_01d4bb68 + 0x1c);
                            local_b0 = pppppuVar11;
                            pppppuStack_ac = pppppuVar14;
                            local_a8 = pppppuVar24;
                            local_a4 = pppppuVar18;
                            FUN_01aaa328(iVar5,pcVar21,puVar13[4]);
                          }
                        }
                      }
LAB_00a6837c:
                      FUN_019bb7e0(pppppuVar16,pppppuVar12);
                    }
                  }
                }
              }
              break;
            }
            iVar5 = thunk_FUN_01bed842(uVar20,"work_solver_hashrate_ths",0x18);
            if (iVar5 != 0) break;
            FUN_00b198bc(&local_100,&local_170);
            pppppuVar18 = local_f0;
            if (((uint)local_f0 & 0xff) == 2) break;
            if (pppppuStack_f4 != (uint *****)&DAT_00000005) break;
            uVar34 = CONCAT44(pppppuStack_fc,local_100);
            if (local_50 != (uint *****)0x0) {
              pppppuVar16 = local_50;
              local_a8 = local_4c;
              do {
                local_a0 = (uint *****)(uint)*(ushort *)((int)pppppuVar16 + 0x97a);
                iVar5 = (int)local_a0 << 2;
                iVar6 = 0x253;
                do {
                  iVar29 = iVar6;
                  if (iVar5 == 0) goto LAB_00a6794c;
                  iVar5 = iVar5 + -4;
                  bVar31 = local_f8 < pppppuVar16[iVar29];
                  bVar30 = !bVar31 && local_f8 != (uint *****)pppppuVar16[iVar29];
                  iVar6 = iVar29 + 1;
                } while ((char)(bVar30 - bVar31) == '\x01');
                if (bVar30 == bVar31) {
                  local_a4 = (uint *****)(iVar29 + -0x253);
                  local_b0 = (uint *****)0x0;
                  pppppuStack_ac = pppppuVar16;
                  local_a0 = (uint *****)&local_50;
                  goto LAB_00a67e2c;
                }
                local_a0 = (uint *****)(iVar29 + -0x253);
LAB_00a6794c:
                if (local_a8 == (uint *****)0x0) goto LAB_00a6846c;
                local_a8 = (uint *****)((int)local_a8 + -1);
                pppppuVar16 = (uint *****)pppppuVar16[(int)(local_a0 + 0x98)];
              } while( true );
            }
            pppppuVar16 = (uint *****)0x0;
            goto LAB_00a67e20;
          default:
            if (local_138 == 0x20) {
              iVar5 = thunk_FUN_01bed842(local_13c,&DAT_0056b108,0x20);
              if (iVar5 != 0) break;
              FUN_00b1c314(&local_100,&local_170);
              pppppuVar18 = local_f8;
              if (((uint)local_100 & 1) != 0) break;
              uVar34 = CONCAT44(pppppuStack_f4,local_f8);
              if (local_50 != (uint *****)0x0) {
                pppppuStack_ac = local_50;
                local_a8 = local_4c;
                do {
                  local_a0 = (uint *****)(uint)*(ushort *)((int)pppppuStack_ac + 0x97a);
                  iVar5 = (int)local_a0 << 2;
                  iVar6 = 0x253;
                  do {
                    iVar29 = iVar6;
                    if (iVar5 == 0) goto LAB_00a67b40;
                    iVar5 = iVar5 + -4;
                    bVar31 = local_f0 < pppppuStack_ac[iVar29];
                    bVar30 = !bVar31 && local_f0 != (uint *****)pppppuStack_ac[iVar29];
                    iVar6 = iVar29 + 1;
                  } while ((char)(bVar30 - bVar31) == '\x01');
                  if (bVar30 == bVar31) {
                    local_a4 = (uint *****)(iVar29 + -0x253);
                    local_b0 = (uint *****)0x0;
                    local_a0 = (uint *****)&local_50;
                    goto LAB_00a67d14;
                  }
                  local_a0 = (uint *****)(iVar29 + -0x253);
LAB_00a67b40:
                  if (local_a8 == (uint *****)0x0) goto LAB_00a681a0;
                  local_a8 = (uint *****)((int)local_a8 + -1);
                  pppppuStack_ac = (uint *****)pppppuStack_ac[(int)(local_a0 + 0x98)];
                } while( true );
              }
              local_a8 = (uint *****)0x0;
              goto LAB_00a67d08;
            }
            if (local_138 != 0x30) break;
            iVar5 = thunk_FUN_01bed842(local_13c,"hashboard_nominal_hashrate_gigahashes_per_second",
                                       0x30);
            if (iVar5 != 0) break;
            FUN_00b02b48(&local_100,&local_170);
            if (((uint)local_100 & 1) != 0) break;
            dVar35 = (double)CONCAT44(pppppuStack_f4,local_f8);
            uVar37 = FUN_00b070a4(&local_170,"hashboard",9);
            pppppuVar18 = (uint *****)(uVar37 >> 0x20);
            if ((uVar37 & 1) != 0) break;
            if (local_50 != (uint *****)0x0) {
              pppppuStack_fc = local_50;
              local_f8 = local_4c;
              do {
                local_f0 = (uint *****)(uint)*(ushort *)((int)pppppuStack_fc + 0x97a);
                iVar5 = (int)local_f0 << 2;
                iVar6 = 0x253;
                do {
                  iVar29 = iVar6;
                  if (iVar5 == 0) goto LAB_00a67524;
                  iVar5 = iVar5 + -4;
                  bVar31 = pppppuVar18 < pppppuStack_fc[iVar29];
                  bVar30 = !bVar31 && pppppuVar18 != (uint *****)pppppuStack_fc[iVar29];
                  iVar6 = iVar29 + 1;
                } while ((char)(bVar30 - bVar31) == '\x01');
                if (bVar30 == bVar31) {
                  pppppuStack_f4 = (uint *****)(iVar29 + -0x253);
                  local_100 = (uint *****)0x0;
                  local_f0 = (uint *****)&local_50;
                  goto LAB_00a67df8;
                }
                local_f0 = (uint *****)(iVar29 + -0x253);
LAB_00a67524:
                if (local_f8 == (uint *****)0x0) goto LAB_00a68458;
                local_f8 = (uint *****)((int)local_f8 + -1);
                pppppuStack_fc = (uint *****)pppppuStack_fc[(int)(local_f0 + 0x98)];
              } while( true );
            }
            local_f8 = (uint *****)0x0;
            goto LAB_00a67dec;
          }
          goto switchD_00a672ac_caseD_9;
        }
      }
LAB_00a685e4:
      FUN_009634ec(&local_1c8);
      iVar5 = local_94;
      ppppuVar8 = local_98;
      pppppuVar25 = (uint *****)local_90;
      FUN_01bed4e2(&pppppuStack_268,(int)&local_90 + 4,0x4c);
      FUN_0126f23c(&local_1f8);
      if (ppppuVar8 == (uint ****)0x2 && iVar5 == 0) goto LAB_00a68624;
      local_94 = 1;
      local_98 = (uint ****)0x1;
      local_88 = pppppuVar25;
      local_90 = CONCAT44(iVar5,ppppuVar8);
      FUN_01bed4e2(&local_84,&pppppuStack_268,0x4c);
      piVar7 = (int *)thunk_FUN_01be5118(0x60);
      if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(8,0x60);
      }
      FUN_01bed4e2(piVar7,&local_98,0x60);
      iVar5 = param_1[0x11];
      pcVar21 = (char *)(iVar5 + 0x10);
      if (*pcVar21 == '\0') {
        bVar30 = (bool)hasExclusiveAccess(pcVar21);
        if (!bVar30) goto LAB_00a68b60;
        *pcVar21 = '\x01';
        DataMemoryBarrier(0xb);
      }
      else {
        ClearExclusiveLocal();
LAB_00a68b60:
        FUN_0164fba8(pcVar21);
      }
      FUN_0165098c(pcVar21);
      iVar6 = *(int *)(iVar5 + 0x28);
      if (iVar6 == 0) {
        FUN_01650a90(pcVar21);
        if (*pcVar21 == '\x01') {
          DataMemoryBarrier(0xb);
          do {
            bVar30 = (bool)hasExclusiveAccess(pcVar21);
            if (bVar30) {
              *pcVar21 = '\0';
              goto LAB_00a68c04;
            }
          } while (*pcVar21 == '\x01');
        }
        ClearExclusiveLocal();
        FUN_0164f86c(pcVar21);
LAB_00a68c04:
        DataMemoryBarrier(0xb);
        do {
          iVar5 = *piVar7;
          bVar30 = (bool)hasExclusiveAccess(piVar7);
        } while (!bVar30);
        *piVar7 = iVar5 + -1;
        if (iVar5 == 1) {
          DataMemoryBarrier(0xb);
          FUN_00a95ae4(piVar7);
        }
      }
      else {
        uVar28 = *(uint *)(iVar5 + 0x18);
        iVar29 = *(int *)(iVar5 + 0x1c);
        uVar4 = *(uint *)(iVar5 + 0x40) & uVar28;
        *(uint *)(iVar5 + 0x18) = uVar28 + 1;
        *(uint *)(iVar5 + 0x1c) = iVar29 + (uint)(0xfffffffe < uVar28);
        if (*(uint *)(iVar5 + 0xc) <= uVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar4,*(uint *)(iVar5 + 0xc),&DAT_01d2a530);
        }
        pcVar19 = (char *)(*(int *)(iVar5 + 8) + uVar4 * 0x18);
        if (*pcVar19 == '\0') {
          bVar30 = (bool)hasExclusiveAccess(pcVar19);
          if (!bVar30) goto LAB_00a68c4c;
          *pcVar19 = '\x01';
          DataMemoryBarrier(0xb);
        }
        else {
          ClearExclusiveLocal();
LAB_00a68c4c:
          FUN_0164fba8(pcVar19);
        }
        FUN_0165098c(pcVar19);
        piVar9 = *(int **)(pcVar19 + 0x14);
        *(uint *)(pcVar19 + 8) = uVar28;
        *(int *)(pcVar19 + 0xc) = iVar29;
        *(int *)(pcVar19 + 0x10) = iVar6;
        if (piVar9 != (int *)0x0) {
          DataMemoryBarrier(0xb);
          do {
            iVar6 = *piVar9;
            bVar30 = (bool)hasExclusiveAccess(piVar9);
          } while (!bVar30);
          *piVar9 = iVar6 + -1;
          if (iVar6 == 1) {
            DataMemoryBarrier(0xb);
            FUN_00a95ae4(*(undefined4 *)(pcVar19 + 0x14));
          }
        }
        *(int **)(pcVar19 + 0x14) = piVar7;
        FUN_01650a90(pcVar19);
        if (*pcVar19 == '\x01') {
          DataMemoryBarrier(0xb);
          do {
            bVar30 = (bool)hasExclusiveAccess(pcVar19);
            if (bVar30) {
              *pcVar19 = '\0';
              goto LAB_00a68ce8;
            }
          } while (*pcVar19 == '\x01');
        }
        ClearExclusiveLocal();
        FUN_0164f86c(pcVar19);
LAB_00a68ce8:
        FUN_01a14524((int *)(iVar5 + 8),pcVar21);
      }
    }
    DataMemoryBarrier(0xb);
    do {
      ppppuVar8 = *pppppuVar1;
      bVar30 = (bool)hasExclusiveAccess(pppppuVar1);
    } while (!bVar30);
    *pppppuVar1 = (uint ****)((int)ppppuVar8 + -1);
    if (ppppuVar8 == (uint ****)0x1) {
      DataMemoryBarrier(0xb);
      FUN_00a92e0c(pppppuVar1);
    }
  } while( true );
LAB_00a681a0:
  local_a4 = (uint *****)0x0;
  local_a8 = pppppuStack_ac;
LAB_00a67d08:
  pppppuStack_ac = local_f0;
  local_b0 = (uint *****)&local_50;
LAB_00a67d14:
  iVar5 = FUN_00950068(&local_b0);
  uVar33 = *(undefined8 *)(iVar5 + 0x70);
  FUN_01be5bd8((int)uVar33,(int)((ulonglong)uVar33 >> 0x20),pppppuVar18);
  uVar4 = *(uint *)(iVar5 + 0x68);
  *(undefined4 *)(iVar5 + 0x68) = 1;
  if ((uVar4 & 1) != 0) {
    uVar34 = uVar33;
  }
  *(undefined4 *)(iVar5 + 0x6c) = 0;
  *(undefined8 *)(iVar5 + 0x70) = uVar34;
  goto switchD_00a672ac_caseD_9;
LAB_00a68458:
  pppppuStack_f4 = (uint *****)0x0;
  local_f8 = pppppuStack_fc;
LAB_00a67dec:
  local_100 = (uint *****)&local_50;
  pppppuStack_fc = pppppuVar18;
LAB_00a67df8:
  iVar5 = FUN_00950068(&local_100);
  *(undefined4 *)(iVar5 + 0x10) = 1;
  *(undefined4 *)(iVar5 + 0x14) = 0;
  *(double *)(iVar5 + 0x18) = dVar35 / 1000.0;
  goto switchD_00a672ac_caseD_9;
LAB_00a6846c:
  local_a4 = (uint *****)0x0;
LAB_00a67e20:
  pppppuStack_ac = local_f8;
  local_b0 = (uint *****)&local_50;
  local_a8 = pppppuVar16;
LAB_00a67e2c:
  puVar13 = (undefined4 *)FUN_00950068(&local_b0);
  if (((uint)pppppuVar18 & 1) == 0) {
    *puVar13 = 1;
    puVar13[1] = 0;
    iVar5 = 8;
  }
  else {
    puVar13[8] = 1;
    puVar13[9] = 0;
    iVar5 = 0x28;
  }
  *(undefined8 *)((int)puVar13 + iVar5) = uVar34;
  goto switchD_00a672ac_caseD_9;
LAB_00a68148:
  pppppuStack_f4 = (uint *****)0x0;
LAB_00a67c88:
  pppppuStack_fc = local_a8;
  local_100 = (uint *****)&local_50;
  local_f8 = pppppuVar16;
LAB_00a67c94:
  iVar5 = FUN_00950068(&local_100);
  uVar32 = *(undefined8 *)(iVar5 + 0x60);
  FUN_01be5bd8((int)uVar32,(int)((ulonglong)uVar32 >> 0x20),pppppuVar18);
  uVar28 = *(uint *)(iVar5 + 0x58);
  *(undefined4 *)(iVar5 + 0x58) = 1;
  uVar33 = uVar34;
  if ((uVar28 & 1) != 0) {
    uVar33 = uVar32;
  }
  *(undefined4 *)(iVar5 + 0x5c) = 0;
  *(undefined8 *)(iVar5 + 0x60) = uVar33;
  iVar6 = 0x78;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(uVar4) {
  case 0:
    goto switchD_00a672ac_caseD_9;
  case 2:
    iVar6 = 0x88;
    break;
  case 3:
    iVar6 = 0x98;
    break;
  case 4:
    iVar6 = 0xa8;
  }
  puVar17 = (uint *)(iVar5 + iVar6);
  uVar4 = *puVar17;
  uVar33 = *(undefined8 *)(puVar17 + 2);
  FUN_01be5bd8((int)uVar33,(int)((ulonglong)uVar33 >> 0x20),pppppuVar18);
  if ((uVar4 & 1) != 0) {
    uVar34 = uVar33;
  }
  *puVar17 = 1;
  puVar17[1] = 0;
  *(undefined8 *)(puVar17 + 2) = uVar34;
  goto switchD_00a672ac_caseD_9;
LAB_00a6857c:
  pppppuStack_f4 = (uint *****)0x0;
  local_f8 = pppppuStack_fc;
LAB_00a67ea4:
  local_100 = (uint *****)&local_50;
  pppppuStack_fc = pppppuVar18;
LAB_00a67eb0:
  iVar5 = FUN_00950068(&local_100,pppppuVar18);
  *(undefined4 *)(iVar5 + 0x30) = 1;
  *(undefined4 *)(iVar5 + 0x34) = 0;
  *(undefined8 *)(iVar5 + 0x38) = uVar34;
  goto switchD_00a672ac_caseD_9;
LAB_00a6858c:
  pppppuStack_f4 = (uint *****)0x0;
  local_f8 = pppppuStack_fc;
LAB_00a6838c:
  local_100 = (uint *****)&local_50;
  pppppuStack_fc = pppppuVar18;
LAB_00a68398:
  iVar5 = FUN_00950068(&local_100,pppppuVar18);
  iVar6 = *(int *)(iVar5 + 0x50) + 1;
  *(int *)(iVar5 + 0x50) = iVar6;
  if ((*(uint *)(iVar5 + 0x40) & 1) != 0) {
    dVar36 = (double)VectorUnsignedToFloat(iVar6,(byte)(in_fpscr >> 0x16) & 3);
    dVar35 = *(double *)(iVar5 + 0x48) + (dVar35 - *(double *)(iVar5 + 0x48)) / dVar36;
  }
  *(uint *)(iVar5 + 0x40) = 1;
  *(undefined4 *)(iVar5 + 0x44) = 0;
  *(double *)(iVar5 + 0x48) = dVar35;
  goto switchD_00a672ac_caseD_9;
LAB_00a6859c:
  pppppuStack_f4 = (uint *****)0x0;
  local_f8 = pppppuStack_fc;
LAB_00a683f4:
  local_100 = (uint *****)&local_50;
  pppppuStack_fc = pppppuVar18;
LAB_00a68400:
  iVar5 = FUN_00950068(&local_100,pppppuVar18);
  iVar6 = *(int *)(iVar5 + 200) + 1;
  *(int *)(iVar5 + 200) = iVar6;
  if ((*(uint *)(iVar5 + 0xb8) & 1) != 0) {
    dVar36 = (double)VectorUnsignedToFloat(iVar6,(byte)(in_fpscr >> 0x16) & 3);
    dVar35 = *(double *)(iVar5 + 0xc0) + (dVar35 - *(double *)(iVar5 + 0xc0)) / dVar36;
  }
  *(uint *)(iVar5 + 0xb8) = 1;
  *(undefined4 *)(iVar5 + 0xbc) = 0;
  *(double *)(iVar5 + 0xc0) = dVar35;
switchD_00a672ac_caseD_9:
  FUN_00943864(&local_170);
  pppppuVar18 = pppppuVar26;
  if (pppppuVar26 == pppppuVar25) goto LAB_00a685e4;
  goto LAB_00a67258;
}

