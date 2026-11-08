// FUN_00e48a2c @ 00e48a2c size=3116 calls_out=34 calls_in=2
// strings: BUG: request parameters cell was already initialized. | autotuning is not supported | boser::api::grpc::utilsopen/boser/boser/src/api/grpc/utils.rs | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | BUG: request parameters cell was already initialized.

void FUN_00e48a2c(undefined4 *param_1,int param_2,undefined4 param_3)

{
  code *pcVar1;
  char *pcVar2;
  undefined1 uVar3;
  char cVar4;
  int *piVar5;
  undefined4 uVar6;
  uint *puVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  undefined *puVar11;
  uint uVar12;
  byte bVar13;
  int ***pppiVar14;
  int ****ppppiVar15;
  int *piVar16;
  uint uVar17;
  undefined1 *puVar18;
  undefined4 uVar19;
  int ****ppppiVar20;
  int ****ppppiVar21;
  int ****ppppiVar22;
  bool bVar23;
  undefined8 uVar24;
  undefined4 *local_318;
  undefined4 local_310;
  undefined4 local_30c;
  int ****local_308;
  int ****local_304;
  int ****local_300;
  undefined1 auStack_2fc [100];
  int ****local_298;
  undefined4 local_294;
  undefined4 *local_290;
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 local_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined2 local_1dc;
  undefined1 local_1da;
  int ***local_1d8;
  undefined4 local_1d4;
  undefined1 auStack_1d0 [12];
  int local_1c4;
  int ****local_1b0;
  int ****local_1ac;
  int ****local_1a8;
  int ****ppppiStack_1a4;
  int ****ppppiStack_1a0;
  int ****local_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  int ****local_150;
  int ****ppppiStack_14c;
  int ****ppppiStack_148;
  int ****ppppiStack_144;
  int ****ppppiStack_140;
  int ****local_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  int ****local_120;
  int ****local_11c;
  int ****local_118;
  undefined4 local_114;
  int ****local_110;
  int ****local_10c;
  int ****local_108;
  int ****local_104;
  int ****local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  int ****local_e8;
  int ****ppppiStack_e4;
  int ****ppppiStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  int ****local_b8;
  int ****local_b4;
  int ****local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  int ****local_88;
  int ****local_84;
  int ****local_80;
  int ****local_7c;
  int ****ppppiStack_78;
  int ****local_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  int ****local_5c;
  int ****ppppiStack_58;
  int ****ppppiStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 300)) {
  case 0:
    *(undefined1 *)(param_2 + 0x12d) = 0;
    piVar16 = *(int **)(param_2 + 0x128);
    FUN_01bed4e2(param_2 + 0x48,param_2,0x48);
    piVar5 = (int *)FUN_00a52660(*(undefined4 *)(param_2 + 0x88));
    if (piVar5 != (int *)0x0) {
      local_110 = (int ****)&DAT_80000000;
      local_114 = (int ****)0x0;
      local_11c = (int ****)0x0;
      local_120 = (int ****)0x0;
      FUN_0196ac88(&local_88,&local_120);
      uVar3 = local_88._0_1_;
      uVar17 = (uint)local_88 & 0xff;
      if (uVar17 == 6) {
        FUN_00e0fe5c(local_84);
      }
      else {
        FUN_01bed4e2((uint)&local_1b0 | 1,(uint)&local_88 | 1,0x17);
        local_1b0 = (int ****)CONCAT31(local_1b0._1_3_,uVar3);
        if (uVar17 == 5) {
          local_10c = (int ****)0x0;
          local_108 = local_1ac;
          local_100 = ppppiStack_1a4;
          if (local_1ac == (int ****)0x0) {
            local_100 = (int ****)0x0;
          }
          local_118 = local_1ac;
          local_120 = local_1ac;
          if (local_1ac != (int ****)0x0) {
            local_120 = (int ****)&DAT_00000001;
          }
          local_104 = local_1a8;
          local_114 = local_1a8;
          local_11c = (int ****)0x0;
          local_110 = local_120;
          FUN_00fea674(auStack_1d0,&local_120);
          if (local_1c4 != 0) {
            FUN_0067b1ac(&local_120,auStack_1d0);
            local_150 = local_120;
            ppppiStack_14c = local_11c;
            ppppiStack_148 = local_118;
            cVar4 = (char)local_114;
            local_1dc = local_114._1_2_;
            local_1da = local_114._3_1_;
            FUN_00e0febc(&local_1b0);
            if (cVar4 != '\x02') {
              local_120 = local_150;
              local_11c = ppppiStack_14c;
              local_118 = ppppiStack_148;
              local_114 = (int ****)CONCAT31(CONCAT12(local_1da,local_1dc),cVar4);
              DataMemoryBarrier(0xb);
              if (*(int *)(*piVar5 + 0x18) != 0) {
                FUN_00b065ec(*piVar5 + 8,&local_120);
              }
              if ((char)local_114 != '\x02') {
                local_88 = local_120;
                local_84 = local_11c;
                local_80 = local_118;
                local_7c = local_114;
                FUN_019cf348(&local_88);
                if ((DAT_01d50f88 < 5) &&
                   (((DAT_01d4c488 - 1 < 2 ||
                     ((DAT_01d4c488 != 0 && (cVar4 = FUN_01aaafa8(&DAT_01d4c480), cVar4 != '\0'))))
                    && (iVar10 = FUN_01aaa278(DAT_01d4c480), iVar10 != 0)))) {
                  local_1a8 = (int ****)(DAT_01d4c480 + 0x1c);
                  if (*(int *****)(DAT_01d4c480 + 0x20) == (int ****)0x0) {
LAB_00e496a4:
                    /* WARNING: Subroutine does not return */
                    FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c17708);
                  }
                  local_84 = (int ****)&local_298;
                  local_118 = *(int *****)(DAT_01d4c480 + 0x24);
                  local_114 = *(int *****)(DAT_01d4c480 + 0x28);
                  local_88 = (int ****)&local_120;
                  local_1ac = (int ****)&DAT_00000001;
                  local_110 = (int ****)0x0;
                  local_80 = (int ****)&DAT_01d2ea4c;
                  local_294 = 0x6b;
                  local_298 = (int ****)0x3fe987;
                  local_1b0 = (int ****)&local_88;
                  local_120 = (int ****)*local_1a8;
                  local_11c = *(int *****)(DAT_01d4c480 + 0x20);
                  FUN_00e0ff40(&local_1b0);
                }
                else {
                  iVar10 = DAT_01d4c480;
                  if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
                    local_b4 = *(int *****)(DAT_01d4c480 + 0x14);
                    local_b0 = *(int *****)(DAT_01d4c480 + 0x18);
                    local_b8 = (int ****)&DAT_00000001;
                    DataMemoryBarrier(0xb);
                    puVar8 = DAT_01d4edc8;
                    pcVar2 = DAT_01d4edc4;
                    if (DAT_01d51174 != 2) {
                      puVar8 = &DAT_01cfc5e0;
                      pcVar2 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
                    }
                    iVar9 = (*(code *)puVar8[3])(pcVar2,&local_b8);
                    if (iVar9 != 0) {
                      local_290 = (undefined4 *)(DAT_01d4c480 + 0x1c);
                      if (*(int *****)(DAT_01d4c480 + 0x20) == (int ****)0x0) goto LAB_00e496a4;
                      local_1ac = &local_1d8;
                      local_1b0 = (int ****)&local_120;
                      local_114 = *(int *****)(DAT_01d4c480 + 0x28);
                      local_298 = (int ****)&local_1b0;
                      local_118 = *(int *****)(DAT_01d4c480 + 0x24);
                      local_110 = (int ****)0x0;
                      local_294 = 1;
                      local_1a8 = (int ****)&DAT_01d2ea4c;
                      local_1d4 = 0x6b;
                      local_1d8 = (int ***)0x3fe987;
                      local_88 = local_b8;
                      local_84 = local_b4;
                      local_80 = local_b0;
                      local_120 = (int ****)*local_290;
                      local_11c = *(int *****)(DAT_01d4c480 + 0x20);
                      FUN_01aaa328(iVar10,pcVar2,puVar8[4],&local_88,&local_298);
                    }
                  }
                }
              }
            }
            goto LAB_00e48d94;
          }
          FUN_0165a1f4(auStack_1d0);
        }
        FUN_00e0febc(&local_1b0);
      }
    }
LAB_00e48d94:
    piVar16 = (int *)*piVar16;
    do {
      iVar10 = *piVar16;
      bVar23 = (bool)hasExclusiveAccess(piVar16);
    } while (!bVar23);
    *piVar16 = iVar10 + 1;
    if (iVar10 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0xe496bc);
      (*pcVar1)();
    }
    *(undefined1 *)(param_2 + 0xe4) = 0;
    *(int **)(param_2 + 0xd8) = piVar16;
LAB_00e48dd4:
    piVar5 = piVar16 + 2;
    *(int **)(param_2 + 0xe8) = piVar5;
    *(int **)(param_2 + 0xdc) = piVar16;
    *(undefined1 *)(param_2 + 0x124) = 0;
LAB_00e48df0:
    *(undefined1 *)(param_2 + 0x120) = 0;
    *(int **)(param_2 + 0xec) = piVar5 + 0xf;
switchD_00e48d60_caseD_3:
    puVar18 = (undefined1 *)(param_2 + 0x124);
    uVar24 = FUN_00df39fc(param_2 + 0xec,param_3);
    if ((int)uVar24 == 0) {
      uVar3 = 3;
LAB_00e48f98:
      *puVar18 = 3;
    }
    else {
      if (*(char *)(param_2 + 0x120) == '\x03') {
        cVar4 = *(char *)(param_2 + 0x11c);
        bVar23 = cVar4 == '\x03';
        if (bVar23) {
          cVar4 = *(char *)(param_2 + 0x118);
        }
        if (bVar23 && cVar4 == '\x03') {
          FUN_0193c3cc(param_2 + 0xf8);
        }
      }
      *(int *)(param_2 + 0x90) = (int)uVar24;
      *(undefined1 *)(param_2 + 0x124) = 1;
      *(int *)(param_2 + 0x94) = (int)((ulonglong)uVar24 >> 0x20);
      FUN_00bba254(param_2 + 0xe8);
      *(undefined1 *)(param_2 + 0x11c) = 0;
      *(int *)(param_2 + 0xe8) = *(int *)(param_2 + 0x94) + 0x44;
switchD_00e48afc_caseD_4:
      uVar24 = FUN_00e06fc8(param_2 + 0xe8,param_3);
      if ((int)uVar24 != 0) {
        *(undefined8 *)(param_2 + 0x98) = uVar24;
        if (*(char *)(param_2 + 0x11c) == '\x03') {
          cVar4 = *(char *)(param_2 + 0x118);
          bVar23 = cVar4 == '\x03';
          if (bVar23) {
            cVar4 = *(char *)(param_2 + 0x114);
          }
          if (bVar23 && cVar4 == '\x03') {
            FUN_0193c3cc(param_2 + 0xf4);
          }
        }
        *(undefined1 *)(param_2 + 0xf4) = 0;
        iVar10 = *(int *)(param_2 + 0xdc) + 8;
        *(int *)(param_2 + 0xe8) = iVar10;
LAB_00e48ecc:
        uVar6 = FUN_00b8a1bc(*(int *)(iVar10 + 0x34) + 8);
        puVar11 = &DAT_01c13d9c;
        *(undefined4 *)(param_2 + 0xec) = uVar6;
        *(undefined **)(param_2 + 0xf0) = &DAT_01c13d9c;
        goto LAB_00e48ee4;
      }
      uVar3 = 4;
    }
LAB_00e48fa0:
    *(undefined1 *)(param_2 + 0xe4) = uVar3;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c172c4);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c172c4);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0xe4)) {
    case 0:
      piVar16 = *(int **)(param_2 + 0xd8);
      goto LAB_00e48dd4;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c17528);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c17528);
    case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_2 + 0x124)) {
      case 0:
        piVar5 = *(int **)(param_2 + 0xe8);
        goto LAB_00e48df0;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c183ac);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c183ac);
      }
      goto switchD_00e48d60_caseD_3;
    case 4:
      goto switchD_00e48afc_caseD_4;
    case 5:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_2 + 0xf4)) {
      case 0:
        iVar10 = *(int *)(param_2 + 0xe8);
        goto LAB_00e48ecc;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(0x1c201d4);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(0x1c201d4);
      case 3:
        uVar6 = *(undefined4 *)(param_2 + 0xec);
        puVar11 = *(undefined **)(param_2 + 0xf0);
      }
LAB_00e48ee4:
      puVar18 = (undefined1 *)(param_2 + 0xf4);
      iVar10 = (**(code **)(puVar11 + 0xc))(uVar6,param_3);
      if (iVar10 == 0) {
        uVar3 = 5;
        goto LAB_00e48f98;
      }
      FUN_01139b38(*(undefined4 *)(param_2 + 0xec),*(undefined4 *)(param_2 + 0xf0));
      *(int *)(param_2 + 0xe0) = iVar10;
      *(undefined1 *)(param_2 + 0xf4) = 1;
      ppppiVar21 = (int ****)(iVar10 + 0x1b0);
      pppiVar14 = *ppppiVar21;
      iVar10 = *(int *)(iVar10 + 0x1b4);
      FUN_01a71aac(&local_120,9,"autotuning is not supported",0x1b);
      ppppiVar22 = local_118;
      ppppiVar15 = local_11c;
      ppppiVar20 = local_120;
      if (pppiVar14 != (int ***)0x2 || iVar10 != 0) {
        FUN_005f6588(&local_120);
LAB_00e48fc8:
        puVar7 = *(uint **)(param_2 + 0x9c);
        if (*puVar7 == 2 && puVar7[1] == 0) {
LAB_00e49028:
          *(undefined4 *)(param_2 + 0xa0) = 3;
          *(undefined4 *)(param_2 + 0xa4) = 0;
          *(undefined1 *)(param_2 + 0x11c) = 0;
          *(int *)(param_2 + 0xe8) = *(int *)(param_2 + 0x94) + 0x38;
          goto switchD_00e48afc_caseD_6;
        }
        bVar13 = *(byte *)(ppppiVar21 + 0x1d);
        if ((byte)puVar7[6] != 2) {
          bVar13 = (byte)puVar7[6];
        }
        if ((bVar13 & 1) == 0) goto LAB_00e49028;
        uVar12 = (uint)*(byte *)((int)puVar7 + 0x19);
        uVar17 = (uint)*(byte *)((int)ppppiVar21 + 0x75);
        if (uVar12 != 2) {
          uVar17 = uVar12;
        }
        if ((uVar17 & 1) == 0) {
          uVar12 = puVar7[4];
          if (uVar12 != 1) {
            uVar6 = 0;
            goto LAB_00e49304;
          }
          puVar7 = (uint *)puVar7[5];
          uVar12 = 0;
          uVar19 = 1;
          uVar6 = 0;
        }
        else if ((*puVar7 & 1) == 0) {
          uVar6 = 1;
LAB_00e49304:
          uVar19 = 0;
        }
        else {
          uVar12 = puVar7[3];
          uVar6 = 1;
          uVar19 = 1;
          puVar7 = (uint *)puVar7[2];
        }
        ppppiVar22 = (int ****)0x2;
        *(uint **)(param_2 + 0xb8) = puVar7;
        *(uint *)(param_2 + 0xbc) = uVar12;
        *(undefined4 *)(param_2 + 0xa0) = 2;
        *(undefined4 *)(param_2 + 0xa4) = 0;
        *(undefined4 *)(param_2 + 0xa8) = uVar6;
        *(undefined4 *)(param_2 + 0xac) = 0;
        *(undefined4 *)(param_2 + 0xb0) = uVar19;
        *(undefined4 *)(param_2 + 0xb4) = 0;
        local_150 = *(int *****)(param_2 + 0xa4);
        ppppiStack_14c = *(int *****)(param_2 + 0xa8);
        ppppiStack_148 = *(int *****)(param_2 + 0xac);
        ppppiStack_144 = *(int *****)(param_2 + 0xb0);
        ppppiStack_140 = *(int *****)(param_2 + 0xb4);
        local_13c = *(int *****)(param_2 + 0xb8);
        uStack_138 = *(undefined4 *)(param_2 + 0xbc);
        uStack_134 = *(undefined4 *)(param_2 + 0xc0);
        uStack_130 = *(undefined4 *)(param_2 + 0xc4);
        uStack_12c = *(undefined4 *)(param_2 + 200);
        uStack_128 = *(undefined4 *)(param_2 + 0xcc);
        goto LAB_00e49348;
      }
      FUN_01bed4e2(&local_1b0,&local_114,0x5c);
      ppppiVar21 = ppppiVar22;
      if (ppppiVar20 == (int ****)&DAT_00000003 && ppppiVar15 == (int ****)0x0) goto LAB_00e48fc8;
      FUN_01bed4e2(&local_88,&local_1b0,0x5c);
      goto LAB_00e491f8;
    case 6:
switchD_00e48afc_caseD_6:
      uVar24 = FUN_00df39fc(param_2 + 0xe8,param_3);
      if ((int)uVar24 == 0) {
        uVar3 = 6;
        goto LAB_00e48fa0;
      }
      *(undefined8 *)(param_2 + 0xd0) = uVar24;
      if (*(char *)(param_2 + 0x11c) == '\x03') {
        cVar4 = *(char *)(param_2 + 0x118);
        bVar23 = cVar4 == '\x03';
        if (bVar23) {
          cVar4 = *(char *)(param_2 + 0x114);
        }
        if (bVar23 && cVar4 == '\x03') {
          FUN_0193c3cc(param_2 + 0xf4);
        }
      }
      *(undefined1 *)(param_2 + 0x11c) = 0;
      *(int *)(param_2 + 0xe8) = *(int *)(param_2 + 0x94) + 0x34;
    }
    uVar24 = FUN_00e06fc8(param_2 + 0xe8,param_3);
    iVar10 = (int)uVar24;
    if (iVar10 == 0) {
      uVar3 = 7;
      goto LAB_00e48fa0;
    }
    if (*(char *)(param_2 + 0x11c) == '\x03') {
      cVar4 = *(char *)(param_2 + 0x118);
      bVar23 = cVar4 == '\x03';
      if (bVar23) {
        cVar4 = *(char *)(param_2 + 0x114);
      }
      if (bVar23 && cVar4 == '\x03') {
        FUN_0193c3cc(param_2 + 0xf4);
      }
    }
    FUN_00a210f8(&local_120,(int)((ulonglong)uVar24 >> 0x20),
                 *(undefined4 *)(*(int *)(param_2 + 0xd4) + 4),
                 *(undefined4 *)(*(int *)(param_2 + 0xd4) + 8));
    ppppiVar22 = local_118;
    ppppiVar15 = local_11c;
    ppppiVar20 = local_120;
    local_1b0 = local_114;
    local_1ac = local_110;
    local_1a8 = local_10c;
    ppppiStack_1a4 = local_108;
    ppppiStack_1a0 = local_104;
    local_19c = local_100;
    uStack_198 = uStack_fc;
    uStack_194 = uStack_f8;
    uStack_190 = uStack_f4;
    uStack_18c = uStack_f0;
    uStack_188 = uStack_ec;
    if (local_120 == (int ****)&DAT_00000003 && local_11c == (int ****)0x0) {
      local_150 = local_114;
      ppppiStack_14c = local_110;
      ppppiStack_148 = local_10c;
      ppppiStack_144 = local_108;
      ppppiStack_140 = local_104;
      local_13c = local_100;
      uStack_138 = uStack_fc;
      uStack_134 = uStack_f8;
      uStack_130 = uStack_f4;
      uStack_12c = uStack_f0;
      uStack_128 = uStack_ec;
      FUN_019f8c54(iVar10,1);
      FUN_019f8c54(*(undefined4 *)(param_2 + 0xd0),1);
LAB_00e49348:
      local_318 = (undefined4 *)(param_2 + 0x90);
      local_88 = local_150;
      local_84 = ppppiStack_14c;
      local_80 = ppppiStack_148;
      local_7c = ppppiStack_144;
      ppppiStack_78 = ppppiStack_140;
      local_74 = local_13c;
      uStack_70 = uStack_138;
      uStack_6c = uStack_134;
      uStack_68 = uStack_130;
      uStack_64 = uStack_12c;
      uStack_60 = uStack_128;
      piVar5 = *(int **)(param_2 + 0xe0);
      DataMemoryBarrier(0xb);
      do {
        iVar10 = *piVar5;
        bVar23 = (bool)hasExclusiveAccess(piVar5);
      } while (!bVar23);
      *piVar5 = iVar10 + -1;
      if (iVar10 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00a967c0(*(undefined4 *)(param_2 + 0xe0));
      }
      FUN_019f8c54(*(undefined4 *)(param_2 + 0x98),1);
      FUN_019f8c54(*local_318,1);
      piVar5 = *(int **)(param_2 + 0xdc);
      DataMemoryBarrier(0xb);
      do {
        iVar10 = *piVar5;
        bVar23 = (bool)hasExclusiveAccess(piVar5);
      } while (!bVar23);
      *piVar5 = iVar10 + -1;
      if (iVar10 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01177340(*(undefined4 *)(param_2 + 0xdc));
      }
      FUN_01bed4e2(&local_298,&local_88,0x5c);
      ppppiVar15 = (int ****)0x0;
      ppppiVar20 = (int ****)&DAT_00000003;
      *(undefined1 *)(param_2 + 0xe4) = 1;
LAB_00e493fc:
      local_318 = (undefined4 *)(param_2 + 0x90);
      FUN_01bed4e2(&local_238,&local_298,0x5c);
      FUN_00e49980(local_318);
      if (ppppiVar20 == (int ****)&DAT_00000003 && ppppiVar15 == (int ****)0x0) {
        puVar8 = (undefined4 *)((uint)&local_120 | 4);
        *puVar8 = local_238;
        puVar8[1] = uStack_234;
        puVar8[2] = uStack_230;
        puVar8[3] = uStack_22c;
        puVar8[4] = uStack_228;
        puVar8[5] = local_224;
        puVar8[6] = uStack_220;
        puVar8[7] = uStack_21c;
        puVar8[8] = uStack_218;
        puVar8[9] = uStack_214;
        puVar8[10] = uStack_210;
        local_120 = ppppiVar22;
        FUN_00d91e04(&local_310);
      }
      else {
        local_308 = ppppiVar20;
        local_304 = ppppiVar15;
        local_300 = ppppiVar22;
        FUN_01bed4e2(auStack_2fc,&local_238,0x5c);
        local_30c = 0;
        local_310 = 3;
      }
      FUN_00f9604c(param_2 + 0x48);
      FUN_01bed4e2(param_1,&local_310,0x78);
      uVar3 = 1;
      goto LAB_00e48fb4;
    }
    local_b8 = local_e8;
    local_b4 = ppppiStack_e4;
    local_b0 = ppppiStack_e0;
    uStack_ac = uStack_dc;
    uStack_a8 = uStack_d8;
    uStack_a4 = uStack_d4;
    local_a0 = local_d0;
    uStack_9c = uStack_cc;
    uStack_98 = uStack_c8;
    uStack_94 = uStack_c4;
    uStack_90 = uStack_c0;
    uStack_8c = uStack_bc;
    local_88 = local_114;
    local_84 = local_110;
    local_80 = local_10c;
    local_7c = local_108;
    ppppiStack_78 = local_104;
    local_74 = local_100;
    uStack_70 = uStack_fc;
    uStack_6c = uStack_f8;
    uStack_68 = uStack_f4;
    uStack_64 = uStack_f0;
    uStack_60 = uStack_ec;
    local_5c = local_e8;
    ppppiStack_58 = ppppiStack_e4;
    ppppiStack_54 = ppppiStack_e0;
    uStack_50 = uStack_dc;
    uStack_4c = uStack_d8;
    uStack_48 = uStack_d4;
    local_44 = local_d0;
    uStack_40 = uStack_cc;
    uStack_3c = uStack_c8;
    uStack_38 = uStack_c4;
    uStack_34 = uStack_c0;
    uStack_30 = uStack_bc;
    FUN_019f8c54(iVar10,1);
    FUN_019f8c54(*(undefined4 *)(param_2 + 0xd0),1);
LAB_00e491f8:
    local_318 = (undefined4 *)(param_2 + 0x90);
    piVar5 = *(int **)(param_2 + 0xe0);
    DataMemoryBarrier(0xb);
    do {
      iVar10 = *piVar5;
      bVar23 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar23);
    *piVar5 = iVar10 + -1;
    if (iVar10 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00a967c0(*(undefined4 *)(param_2 + 0xe0));
    }
    FUN_019f8c54(*(undefined4 *)(param_2 + 0x98),1);
    FUN_019f8c54(*local_318,1);
    piVar5 = *(int **)(param_2 + 0xdc);
    DataMemoryBarrier(0xb);
    do {
      iVar10 = *piVar5;
      bVar23 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar23);
    *piVar5 = iVar10 + -1;
    if (iVar10 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01177340(*(undefined4 *)(param_2 + 0xdc));
    }
    FUN_01bed4e2(&local_298,&local_88,0x5c);
    *(undefined1 *)(param_2 + 0xe4) = 1;
    if (ppppiVar20 != (int ****)&SUB_00000004 || ppppiVar15 != (int ****)0x0) goto LAB_00e493fc;
  }
  *param_1 = 4;
  param_1[1] = 0;
  uVar3 = 3;
LAB_00e48fb4:
  *(undefined1 *)(param_2 + 300) = uVar3;
  return;
}

