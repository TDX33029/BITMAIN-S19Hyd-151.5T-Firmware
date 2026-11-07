// FUN_00e4b784 @ 00e4b784 size=6844 calls_out=50 calls_in=1
// strings: save_action | enable | enable_shutdown | shutdown_duration | on_start_target_percent | dps is not supported

void FUN_00e4b784(undefined4 *param_1,int param_2,undefined4 param_3)

{
  code *pcVar1;
  char *pcVar2;
  undefined1 uVar3;
  char cVar4;
  uint *puVar5;
  int *piVar6;
  double ****ppppdVar7;
  int iVar8;
  undefined4 uVar9;
  double *****pppppdVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  int iVar14;
  undefined *puVar15;
  uint uVar16;
  int extraout_r2;
  uint *puVar17;
  uint uVar18;
  uint uVar19;
  double *****pppppdVar20;
  uint uVar21;
  undefined4 *puVar22;
  uint uVar23;
  undefined4 *puVar24;
  undefined4 *puVar25;
  byte bVar26;
  uint extraout_r12;
  double *****extraout_r12_00;
  uint extraout_r12_01;
  uint uVar27;
  bool bVar28;
  uint in_fpscr;
  double unaff_d8;
  double unaff_d9;
  double unaff_d10;
  double dVar29;
  undefined8 uVar30;
  uint local_450;
  double *****local_444;
  uint local_440;
  double *****local_43c;
  double *****local_438;
  int local_430;
  int local_428;
  int local_424;
  uint local_420;
  uint local_41c;
  double *****local_414;
  int local_410;
  undefined4 local_400;
  undefined4 local_3fc;
  double *****local_3f8;
  double *****local_3f4;
  uint *local_3f0;
  undefined1 auStack_3ec [44];
  uint *local_3c0;
  undefined1 auStack_3bc [92];
  undefined4 local_360;
  undefined1 auStack_358 [72];
  double *****local_310;
  double *****local_30c;
  undefined8 local_308;
  double *****local_300;
  int local_2fc;
  undefined8 local_2f8;
  uint local_2f0;
  uint local_2ec;
  double local_2e8;
  uint local_2e0;
  int local_2dc;
  uint local_2d8;
  int local_2d4;
  uint local_2d0;
  uint local_2cc;
  char local_2c8;
  undefined1 local_2c7;
  byte local_2c6;
  undefined4 local_288;
  double *****local_280;
  double *****local_27c;
  undefined1 *local_278;
  undefined1 auStack_220 [96];
  undefined1 auStack_1c0 [12];
  int local_1b4;
  double *****local_1a0;
  int local_19c;
  undefined4 *local_198;
  uint uStack_194;
  int local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  double *****local_130;
  double ****local_12c;
  undefined4 *local_128;
  double *****local_d0;
  double *****local_cc;
  undefined1 *local_c8;
  undefined4 local_c4;
  double *****local_c0;
  int iStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined2 local_74;
  undefined1 local_72;
  double ****local_68;
  double ****local_64;
  undefined4 local_60;
  double *****local_58;
  double *****local_54;
  uint *local_50;
  code *local_4c;
  uint *local_48;
  code *local_44;
  
  puVar5 = (uint *)(param_2 + 0x168);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x2e4)) {
  case 0:
    *(undefined2 *)(param_2 + 0x2e5) = 1;
    puVar22 = *(undefined4 **)(param_2 + 0x2e0);
    FUN_01bed4e2(param_2 + 0x90,param_2,0x90);
    piVar6 = (int *)FUN_00a52660(*(undefined4 *)(param_2 + 0x118));
    if (piVar6 != (int *)0x0) {
      local_c0 = (double *****)&DAT_80000000;
      local_c4 = 0;
      local_cc = (double *****)0x0;
      local_d0 = (double *****)0x0;
      ppppdVar7 = (double ****)
                  FUN_014a7b90(&local_d0,"save_action",0xb,*(undefined4 *)(param_2 + 0x110));
      if (((((ppppdVar7 == (double ****)0x0) &&
            (ppppdVar7 = (double ****)
                         FUN_00a46668(&local_d0,"enable",6,*(undefined1 *)(param_2 + 0x114)),
            ppppdVar7 == (double ****)0x0)) &&
           (ppppdVar7 = (double ****)
                        FUN_00a46668(&local_d0,"enable_shutdown",0xf,
                                     *(undefined1 *)(param_2 + 0x115)),
           ppppdVar7 == (double ****)0x0)) &&
          ((ppppdVar7 = (double ****)
                        FUN_00a47c50(&local_d0,"shutdown_duration",*(undefined4 *)(param_2 + 0xf8),
                                     *(undefined4 *)(param_2 + 0xfc)), ppppdVar7 == (double ****)0x0
           && (ppppdVar7 = (double ****)FUN_00a47350(&local_d0,&DAT_00531484,param_2 + 0xd0),
              ppppdVar7 == (double ****)0x0)))) &&
         ((ppppdVar7 = (double ****)
                       FUN_00a47800(&local_d0,&DAT_0056d358,4,*(undefined4 *)(param_2 + 0x100),
                                    *(undefined4 *)(param_2 + 0x104)), ppppdVar7 == (double ****)0x0
          && (ppppdVar7 = (double ****)
                          FUN_00a4723c(&local_d0,"on_start_target_percent",0x17,
                                       *(undefined4 *)(param_2 + 0x108),
                                       *(undefined4 *)(param_2 + 0x10c)),
             ppppdVar7 == (double ****)0x0)))) {
        local_310 = local_d0;
        local_30c = local_cc;
        local_308 = (double)CONCAT44(local_c4,local_c8);
        local_300 = local_c0;
        local_2fc = iStack_bc;
        local_2f8 = (double)CONCAT44(uStack_b4,uStack_b8);
        FUN_0196ac88(&local_130,&local_310);
        uVar3 = local_130._0_1_;
        uVar19 = (uint)local_130 & 0xff;
        if (uVar19 != 6) {
          FUN_01bed4e2((uint)&local_1a0 | 1,(uint)&local_130 | 1,0x17);
          local_1a0 = (double *****)CONCAT31(local_1a0._1_3_,uVar3);
          if (uVar19 == 5) {
            local_2fc = 0;
            local_2f0 = uStack_194;
            if (local_19c == 0) {
              local_2f0 = 0;
            }
            local_310 = (double *****)(uint)(local_19c != 0);
            local_2f8 = (double)CONCAT44(local_198,local_19c);
            local_308 = (double)CONCAT44(local_198,local_19c);
            local_30c = (double *****)0x0;
            local_300 = local_310;
            FUN_00fea674(auStack_1c0,&local_310);
            if (local_1b4 != 0) {
              FUN_0067b1ac(&local_310,auStack_1c0);
              local_58 = local_310;
              local_54 = local_30c;
              local_50 = (uint *)local_308;
              cVar4 = local_308._4_1_;
              local_74 = local_308._5_2_;
              local_72 = local_308._7_1_;
              FUN_00e0febc(&local_1a0);
              if (cVar4 != '\x02') {
                local_310 = local_58;
                local_30c = local_54;
                local_308 = (double)CONCAT35(CONCAT12(local_72,local_74),CONCAT14(cVar4,local_50));
                DataMemoryBarrier(0xb);
                if (*(int *)(*piVar6 + 0x18) != 0) {
                  FUN_00b065ec(*piVar6 + 8,&local_310);
                }
                if (local_308._4_1_ != '\x02') {
                  local_d0 = local_310;
                  local_cc = local_30c;
                  local_c8 = (undefined1 *)(uint *)local_308;
                  local_c4 = (undefined4)((ulonglong)local_308 >> 0x20);
                  FUN_019cf348();
                  if (((DAT_01d50f88 < 5) &&
                      ((DAT_01d4c488 - 1 < 2 ||
                       ((DAT_01d4c488 != 0 && (cVar4 = FUN_01aaafa8(&DAT_01d4c480), cVar4 != '\0')))
                       ))) && (iVar8 = FUN_01aaa278(DAT_01d4c480), iVar8 != 0)) {
                    local_128 = (undefined4 *)(DAT_01d4c480 + 0x1c);
                    if (*(double ******)(DAT_01d4c480 + 0x20) == (double *****)0x0) {
LAB_00e4d30c:
                    /* WARNING: Subroutine does not return */
                      FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c17708);
                    }
                    local_cc = (double *****)&local_1a0;
                    local_308 = *(double *)(DAT_01d4c480 + 0x24);
                    local_d0 = (double *****)&local_310;
                    local_130 = (double *****)&local_d0;
                    local_12c = (double ****)&DAT_00000001;
                    local_300 = (double *****)0x0;
                    local_c8 = &DAT_01d2ea4c;
                    local_19c = 0x6b;
                    local_1a0 = (double *****)0x3fe987;
                    local_310 = (double *****)*local_128;
                    local_30c = *(double ******)(DAT_01d4c480 + 0x20);
                    FUN_00e0ff40(&local_130);
                  }
                  else {
                    iVar8 = DAT_01d4c480;
                    if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
                      local_27c = *(double ******)(DAT_01d4c480 + 0x14);
                      local_278 = *(undefined1 **)(DAT_01d4c480 + 0x18);
                      local_280 = (double *****)&DAT_00000001;
                      DataMemoryBarrier(0xb);
                      puVar24 = DAT_01d4edc8;
                      pcVar2 = DAT_01d4edc4;
                      if (DAT_01d51174 != 2) {
                        puVar24 = &DAT_01cfc5e0;
                        pcVar2 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
                      }
                      iVar14 = (*(code *)puVar24[3])(pcVar2,&local_280);
                      if (iVar14 != 0) {
                        local_198 = (undefined4 *)(DAT_01d4c480 + 0x1c);
                        if (*(double ******)(DAT_01d4c480 + 0x20) == (double *****)0x0)
                        goto LAB_00e4d30c;
                        local_130 = (double *****)&local_310;
                        local_308 = *(double *)(DAT_01d4c480 + 0x24);
                        local_12c = (double ****)&local_64;
                        local_1a0 = (double *****)&local_130;
                        local_300 = (double *****)0x0;
                        local_19c = 1;
                        local_64 = (double ****)0x3fe987;
                        local_128 = (undefined4 *)&DAT_01d2ea4c;
                        local_60 = 0x6b;
                        local_d0 = local_280;
                        local_cc = local_27c;
                        local_c8 = local_278;
                        local_310 = (double *****)*local_198;
                        local_30c = *(double ******)(DAT_01d4c480 + 0x20);
                        FUN_01aaa328(iVar8,pcVar2,puVar24[4],&local_d0,&local_1a0);
                      }
                    }
                  }
                }
              }
              goto LAB_00e4b950;
            }
            FUN_0165a1f4(auStack_1c0);
          }
          FUN_00e0febc(&local_1a0);
          goto LAB_00e4b950;
        }
        ppppdVar7 = local_12c;
      }
      else {
        local_130 = (double *****)CONCAT31(local_130._1_3_,6);
        local_12c = ppppdVar7;
        FUN_01276d58(&local_d0);
      }
      FUN_00e0fe5c(ppppdVar7);
    }
LAB_00e4b950:
    *(undefined1 *)(param_2 + 0x2e5) = 0;
    FUN_01bed4e2(&local_310,param_2 + 0x90,0x90);
    FUN_01bed4e2(auStack_358,param_2 + 0xd0,0x48);
    FUN_0142e6dc(&local_310);
    FUN_0178e884(local_288);
    piVar6 = (int *)*puVar22;
    do {
      iVar8 = *piVar6;
      bVar28 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar28);
    *piVar6 = iVar8 + 1;
    if (iVar8 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0xe4d324);
      (*pcVar1)();
    }
    FUN_01bed4e2(param_2 + 0x120,auStack_358,0x48);
    *(undefined1 *)(param_2 + 0x1d0) = 0;
    *(int **)(param_2 + 0x1b8) = piVar6;
LAB_00e4b9d4:
    FUN_01bed4e2(puVar5,param_2 + 0x120,0x48);
    *(int **)(param_2 + 0x1bc) = piVar6;
    FUN_00a21428(&local_310,*(undefined4 *)(param_2 + 0x1a8));
    pppppdVar20 = local_30c;
    pppppdVar10 = local_310;
    if (local_310 == (double *****)&DAT_00000003 && local_30c == (double *****)0x0) {
      *(undefined1 *)(param_2 + 0x1e4) = 0;
      *(undefined1 *)(param_2 + 0x1d1) = (undefined1)local_308;
      iVar8 = *(int *)(param_2 + 0x1bc) + 8;
      *(int *)(param_2 + 0x1d8) = iVar8;
LAB_00e4ba2c:
      uVar9 = FUN_00b8a1bc(*(int *)(iVar8 + 0x34) + 8);
      *(undefined4 *)(param_2 + 0x1dc) = uVar9;
      puVar15 = &DAT_01c13d9c;
      *(undefined **)(param_2 + 0x1e0) = &DAT_01c13d9c;
LAB_00e4ba4c:
      iVar8 = (**(code **)(puVar15 + 0xc))(uVar9,param_3);
      if (iVar8 == 0) {
        uVar3 = 3;
        *(undefined1 *)(param_2 + 0x1e4) = 3;
        goto LAB_00e4cb50;
      }
      FUN_01139b38(*(undefined4 *)(param_2 + 0x1dc),*(undefined4 *)(param_2 + 0x1e0));
      *(int *)(param_2 + 0x1c0) = iVar8;
      *(undefined1 *)(param_2 + 0x1e4) = 1;
      puVar17 = (uint *)(iVar8 + 0x228);
      uVar19 = *puVar17;
      iVar8 = *(int *)(iVar8 + 0x22c);
      FUN_01a71aac(&local_310,9,"dps is not supported",0x14);
      pppppdVar20 = local_30c;
      pppppdVar10 = local_310;
      if (uVar19 == 2 && iVar8 == 0) {
        puVar17 = (uint *)local_308;
        FUN_01bed4e2(&local_1a0,(int)&local_308 + 4,0x5c);
        if (pppppdVar10 == (double *****)&DAT_00000003 && pppppdVar20 == (double *****)0x0)
        goto LAB_00e4bb48;
      }
      else {
        FUN_005f6588(&local_310);
LAB_00e4bb48:
        if ((uint)(*puVar5 < 2) <= (uint)-*(int *)(param_2 + 0x16c)) goto LAB_00e4beb0;
        pppppdVar10 = (double *****)(param_2 + 0x178);
        if ((*puVar5 & 1) == 0) {
          if (*(int *)(param_2 + 0x170) != 0) {
            if (((puVar17[0x36] == 1) && (*pppppdVar10 < (double ****)puVar17[0x37])) ||
               ((puVar17[0x38] == 1 && ((double ****)puVar17[0x39] < *pppppdVar10)))) {
              local_48 = puVar17 + 0x38;
              local_44 = (code *)&LAB_01a54920;
              local_4c = (code *)&LAB_01a54920;
              local_54 = (double *****)FUN_012fd074;
              local_58 = pppppdVar10;
              local_50 = puVar17 + 0x36;
              FUN_00664898(&local_64,&DAT_005763d9,&local_58);
              FUN_01a70fd4(&local_310,3,&local_64);
              if (local_310 != (double *****)&DAT_00000003 || local_30c != (double *****)0x0)
              goto LAB_00e4c23c;
            }
          }
          if ((*(uint *)(param_2 + 0x180) & 1) != 0) {
            ppppdVar7 = *(double *****)(param_2 + 0x188);
            if (((puVar17[0x3e] == 1) && (ppppdVar7 < (double ****)puVar17[0x3f])) ||
               ((puVar17[0x40] == 1 && ((double ****)puVar17[0x41] < ppppdVar7)))) {
              local_48 = puVar17 + 0x40;
              local_44 = (code *)&LAB_01a54920;
              local_4c = (code *)&LAB_01a54920;
              local_54 = (double *****)FUN_012fd074;
              local_58 = (double *****)(param_2 + 0x188);
              local_50 = puVar17 + 0x3e;
              FUN_00664898(&local_64,&DAT_00578d82,&local_58);
              FUN_01a70fd4(&local_310,3,&local_64);
LAB_00e4be9c:
              if (local_310 != (double *****)&DAT_00000003 || local_30c != (double *****)0x0)
              goto LAB_00e4c23c;
            }
          }
LAB_00e4beb0:
          if (*(int *)(param_2 + 400) == 1) {
            dVar29 = (double)VectorUnsignedToFloat
                                       (*(double *****)(param_2 + 0x194),
                                        (byte)(in_fpscr >> 0x16) & 3);
            if ((((puVar17[0x24] & 1) != 0) &&
                (uVar19 = in_fpscr & 0xfffffff |
                          (uint)(*(double *)(puVar17 + 0x26) == dVar29) << 0x1e,
                in_fpscr = uVar19 | (uint)(dVar29 <= *(double *)(puVar17 + 0x26)) << 0x1d,
                (bool)((byte)(in_fpscr >> 0x1d) & 1) && !SUB41(uVar19 >> 0x1e,0))) ||
               (((puVar17[0x28] & 1) != 0 &&
                (uVar19 = in_fpscr & 0xfffffff |
                          (uint)(*(double *)(puVar17 + 0x2a) < dVar29) << 0x1f,
                in_fpscr = uVar19 | (uint)(NAN(*(double *)(puVar17 + 0x2a)) || NAN(dVar29)) << 0x1c,
                (byte)(uVar19 >> 0x1f) != ((byte)(in_fpscr >> 0x1c) & 1))))) {
              local_48 = puVar17 + 0x28;
              local_44 = FUN_00e3bda8;
              local_4c = FUN_00e3bda8;
              local_54 = (double *****)FUN_012fd02c;
              local_58 = (double *****)(param_2 + 0x194);
              local_50 = puVar17 + 0x24;
              FUN_00664898(&local_64,&DAT_005952e7,&local_58);
              FUN_01a70fd4(&local_310,3,&local_64);
              if (local_310 != (double *****)&DAT_00000003 || local_30c != (double *****)0x0)
              goto LAB_00e4c23c;
            }
          }
          if ((*(int *)(param_2 + 0x198) != 0) && (*(int *)(param_2 + 0x19c) - 3U < 0xfffffffe)) {
            local_58 = (double *****)0x3e5949;
            local_310 = &local_64;
            local_64 = (double ****)0x3e593a;
            local_60 = 0xf;
            local_54 = (double *****)&DAT_0000000e;
            local_308 = (double)CONCAT44(&DAT_0132b6a0,&local_58);
            local_30c = (double *****)&DAT_0132b6a0;
            FUN_00664898(&local_74,&DAT_00576db3,&local_310);
            FUN_01a70fd4(&local_310,3,&local_74);
            if (local_310 != (double *****)&DAT_00000003 || local_30c != (double *****)0x0)
            goto LAB_00e4c23c;
          }
          if (*(int *)(param_2 + 0x1a0) != 0) {
            local_68 = *(double *****)(param_2 + 0x1a4);
            if (((puVar17[0x46] == 1) && (local_68 < (double ****)puVar17[0x47])) ||
               ((puVar17[0x48] == 1 && ((double ****)puVar17[0x49] < local_68)))) {
              local_48 = puVar17 + 0x48;
              local_4c = (code *)&LAB_01a54920;
              local_58 = &local_68;
              local_44 = (code *)&LAB_01a54920;
              local_54 = (double *****)FUN_012fd02c;
              local_50 = puVar17 + 0x46;
              FUN_00664898(&local_64,&DAT_005b5d80,&local_58);
              FUN_01a70fd4(&local_310,3,&local_64);
              if (local_310 != (double *****)&DAT_00000003 || local_30c != (double *****)0x0)
              goto LAB_00e4c23c;
            }
          }
          *(int *)(param_2 + 0x1d8) = *(int *)(param_2 + 0x1bc) + 8;
          *(undefined1 *)(param_2 + 0x214) = 0;
          goto switchD_00e4bce4_caseD_0;
        }
        if ((*(int *)(param_2 + 0x170) == 0) ||
           (((dVar29 = *(double *)pppppdVar10, (*puVar17 & 1) == 0 ||
             (uVar19 = in_fpscr & 0xfffffff | (uint)(dVar29 < *(double *)(puVar17 + 2)) << 0x1f,
             in_fpscr = uVar19 | (uint)(NAN(dVar29) || NAN(*(double *)(puVar17 + 2))) << 0x1c,
             (byte)(uVar19 >> 0x1f) == ((byte)(in_fpscr >> 0x1c) & 1))) &&
            (((puVar17[4] & 1) == 0 ||
             (uVar19 = in_fpscr & 0xfffffff | (uint)(dVar29 == *(double *)(puVar17 + 6)) << 0x1e,
             in_fpscr = uVar19 | (uint)(*(double *)(puVar17 + 6) <= dVar29) << 0x1d,
             !(bool)((byte)(in_fpscr >> 0x1d) & 1) || SUB41(uVar19 >> 0x1e,0))))))) {
LAB_00e4bc1c:
          if ((*(uint *)(param_2 + 0x180) & 1) != 0) {
            dVar29 = *(double *)(param_2 + 0x188);
            if ((((puVar17[0x12] & 1) != 0) &&
                (uVar19 = in_fpscr & 0xfffffff |
                          (uint)(dVar29 < *(double *)(puVar17 + 0x14)) << 0x1f,
                in_fpscr = uVar19 | (uint)(NAN(dVar29) || NAN(*(double *)(puVar17 + 0x14))) << 0x1c,
                (byte)(uVar19 >> 0x1f) != ((byte)(in_fpscr >> 0x1c) & 1))) ||
               (((puVar17[0x16] & 1) != 0 &&
                (uVar19 = in_fpscr & 0xfffffff |
                          (uint)(dVar29 == *(double *)(puVar17 + 0x18)) << 0x1e,
                in_fpscr = uVar19 | (uint)(*(double *)(puVar17 + 0x18) <= dVar29) << 0x1d,
                (bool)((byte)(in_fpscr >> 0x1d) & 1) && !SUB41(uVar19 >> 0x1e,0))))) {
              local_48 = puVar17 + 0x16;
              local_44 = FUN_00e3bda8;
              local_4c = FUN_00e3bda8;
              local_54 = (double *****)FUN_013025ec;
              local_58 = (double *****)(param_2 + 0x188);
              local_50 = puVar17 + 0x12;
              FUN_00664898(&local_64,&DAT_00586ddf,&local_58);
              FUN_01a70fd4(&local_310,3,&local_64);
              goto LAB_00e4be9c;
            }
          }
          goto LAB_00e4beb0;
        }
        local_44 = FUN_00e3bda8;
        local_4c = FUN_00e3bda8;
        local_54 = (double *****)FUN_013025ec;
        local_58 = pppppdVar10;
        local_50 = puVar17;
        local_48 = puVar17 + 4;
        FUN_00664898(&local_64,&DAT_0058c734,&local_58);
        FUN_01a70fd4(&local_310,3,&local_64);
        if (local_310 == (double *****)&DAT_00000003 && local_30c == (double *****)0x0)
        goto LAB_00e4bc1c;
LAB_00e4c23c:
        pppppdVar20 = local_30c;
        pppppdVar10 = local_310;
        puVar17 = (uint *)local_308;
        FUN_01bed4e2(&local_1a0,(int)&local_308 + 4,0x5c);
      }
      FUN_01bed4e2(&local_d0,&local_1a0,0x5c);
LAB_00e4cce0:
      piVar6 = *(int **)(param_2 + 0x1c0);
      DataMemoryBarrier(0xb);
      do {
        iVar8 = *piVar6;
        bVar28 = (bool)hasExclusiveAccess(piVar6);
      } while (!bVar28);
      *piVar6 = iVar8 + -1;
      if (iVar8 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00a967c0(*(undefined4 *)(param_2 + 0x1c0));
      }
    }
    else {
      puVar17 = (uint *)local_308;
      FUN_01bed4e2(&local_d0,(int)&local_308 + 4,0x5c);
    }
    piVar6 = *(int **)(param_2 + 0x1bc);
    DataMemoryBarrier(0xb);
    do {
      iVar8 = *piVar6;
      bVar28 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar28);
    *piVar6 = iVar8 + -1;
    if (iVar8 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01177340(*(undefined4 *)(param_2 + 0x1bc));
    }
    FUN_01bed4e2(&local_280,&local_d0,0x5c);
    *(undefined1 *)(param_2 + 0x1d0) = 1;
    if (pppppdVar10 != (double *****)&SUB_00000004 || pppppdVar20 != (double *****)0x0) {
LAB_00e4cd88:
      local_410 = param_2 + 0x120;
      FUN_01bed4e2(auStack_220,&local_280,0x5c);
      FUN_00e4d614(local_410);
      if (pppppdVar10 == (double *****)&DAT_00000003 && pppppdVar20 == (double *****)0x0) {
        FUN_0160aaa4(&local_400,0);
        local_3c0 = puVar17;
        FUN_01bed4e2(auStack_3bc,auStack_220,0x5c);
        local_360 = 0;
      }
      else {
        local_3f8 = pppppdVar10;
        local_3f4 = pppppdVar20;
        local_3f0 = puVar17;
        FUN_01bed4e2(auStack_3ec,auStack_220,0x5c);
        local_3fc = 0;
        local_400 = 3;
      }
      *(undefined1 *)(param_2 + 0x2e5) = 0;
      FUN_01bed4e2(param_1,&local_400,0xa8);
      uVar3 = 1;
      goto LAB_00e4ce28;
    }
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c17344);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c17344);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x1d0)) {
    case 0:
      piVar6 = *(int **)(param_2 + 0x1b8);
      goto LAB_00e4b9d4;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c17518);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c17518);
    case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_2 + 0x1e4)) {
      case 0:
        iVar8 = *(int *)(param_2 + 0x1d8);
        goto LAB_00e4ba2c;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(0x1c201d4);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(0x1c201d4);
      case 3:
        uVar9 = *(undefined4 *)(param_2 + 0x1dc);
        puVar15 = *(undefined **)(param_2 + 0x1e0);
      }
      goto LAB_00e4ba4c;
    case 4:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_2 + 0x214)) {
      case 0:
switchD_00e4bce4_caseD_0:
        *(undefined1 *)(param_2 + 0x210) = 0;
        *(int *)(param_2 + 0x1dc) = *(int *)(param_2 + 0x1d8) + 0x3c;
        break;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c183ac);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c183ac);
      }
      uVar30 = FUN_00df39fc(param_2 + 0x1dc,param_3);
      if ((int)uVar30 != 0) {
        if (*(char *)(param_2 + 0x210) == '\x03') {
          cVar4 = *(char *)(param_2 + 0x20c);
          bVar28 = cVar4 == '\x03';
          if (bVar28) {
            cVar4 = *(char *)(param_2 + 0x208);
          }
          if (bVar28 && cVar4 == '\x03') {
            FUN_0193c3cc(param_2 + 0x1e8);
          }
        }
        *(int *)(param_2 + 0x1b0) = (int)uVar30;
        *(undefined1 *)(param_2 + 0x214) = 1;
        *(int *)(param_2 + 0x1b4) = (int)((ulonglong)uVar30 >> 0x20);
        FUN_00bba254(param_2 + 0x1d8);
        *(undefined1 *)(param_2 + 0x20c) = 0;
        *(int *)(param_2 + 0x1d8) = *(int *)(param_2 + 0x1b4) + 0x48;
        goto switchD_00e4baf0_caseD_5;
      }
      *(undefined1 *)(param_2 + 0x214) = 3;
      uVar3 = 4;
      break;
    case 5:
switchD_00e4baf0_caseD_5:
      FUN_00bd2a8c(&local_140,param_2 + 0x1d8,param_3);
      if (local_140 != 0) {
        *(int *)(param_2 + 0x1c4) = local_140;
        *(undefined4 *)(param_2 + 0x1c8) = uStack_13c;
        *(undefined4 *)(param_2 + 0x1cc) = uStack_138;
        uVar19 = extraout_r12;
        if (*(char *)(param_2 + 0x20c) == '\x03') {
          cVar4 = *(char *)(param_2 + 0x208);
          bVar28 = cVar4 == '\x03';
          if (bVar28) {
            cVar4 = *(char *)(param_2 + 0x204);
          }
          if (bVar28 && cVar4 == '\x03') {
            FUN_0193c3cc(param_2 + 0x1e4);
            uVar19 = extraout_r12_01;
          }
        }
        puVar22 = *(undefined4 **)(param_2 + 0x1cc);
        pppppdVar20 = (double *****)*puVar22;
        pppppdVar10 = (double *****)puVar22[1];
        uVar11 = (uint)pppppdVar20 ^ 2;
        uVar12 = *puVar5;
        if (uVar11 == 0 && pppppdVar10 == (double *****)0x0) {
          uVar16 = 2;
          uVar27 = 0;
          bVar26 = 2;
          local_41c = 0;
          cVar4 = '\x02';
          uVar21 = 0;
          local_440 = 0;
          local_420 = 0;
          local_438 = (double *****)0x0;
          local_430 = 0;
          local_43c = (double *****)0x0;
          local_444 = (double *****)0x0;
        }
        else {
          local_438 = (double *****)puVar22[4];
          local_430 = puVar22[5];
          local_420 = puVar22[9];
          local_440 = puVar22[0xc];
          local_424 = puVar22[0xd];
          local_41c = puVar22[0xe];
          local_428 = puVar22[0xf];
          bVar26 = *(byte *)((int)puVar22 + 0x4a);
          uVar21 = puVar22[8];
          uVar27 = puVar22[0x10];
          uVar19 = puVar22[0x11];
          uVar16 = (uint)*(byte *)((int)puVar22 + 0x49);
          cVar4 = *(char *)(puVar22 + 0x12);
          unaff_d10 = *(double *)(puVar22 + 2);
          unaff_d9 = *(double *)(puVar22 + 6);
          unaff_d8 = *(double *)(puVar22 + 10);
          local_444 = pppppdVar10;
          local_43c = pppppdVar20;
        }
        if (*(char *)(param_2 + 0x1ac) != '\x02') {
          cVar4 = *(char *)(param_2 + 0x1ac);
        }
        uVar23 = *(uint *)(param_2 + 0x19c);
        uVar18 = (uint)*(byte *)(param_2 + 0x1ad);
        if (uVar12 != 3 || *(int *)(param_2 + 0x16c) != 0) {
          if (uVar12 != 2 || *(int *)(param_2 + 0x16c) != 0) {
            if ((uVar12 & 1) == 0) {
              if ((*(uint *)(param_2 + 0x180) & 1) != 0) {
                local_41c = 1;
                local_428 = *(int *)(param_2 + 0x188);
              }
              if ((*(uint *)(param_2 + 0x170) & 1) != 0) {
                local_440 = 1;
                local_424 = *(int *)(param_2 + 0x178);
              }
            }
            else {
              bVar28 = (*(uint *)(param_2 + 0x180) & 1) != 0;
              if (bVar28) {
                local_438 = (double *****)&DAT_00000001;
              }
              if (bVar28) {
                local_430 = 0;
                unaff_d9 = (double)CONCAT44(*(undefined4 *)(param_2 + 0x18c),
                                            *(int *)(param_2 + 0x188));
              }
              if ((*(uint *)(param_2 + 0x170) & 1) != 0) {
                local_444 = (double *****)0x0;
                local_43c = (double *****)&DAT_00000001;
                unaff_d10 = (double)CONCAT44(*(undefined4 *)(param_2 + 0x17c),
                                             *(int *)(param_2 + 0x178));
              }
            }
          }
        }
        if (uVar18 != 2) {
          uVar16 = uVar18;
        }
        bVar28 = (*(uint *)(param_2 + 400) & 1) != 0;
        if (bVar28) {
          local_420 = 0;
          uVar21 = 1;
        }
        dVar29 = (double)VectorUnsignedToFloat
                                   (*(undefined4 *)(param_2 + 0x194),(byte)(in_fpscr >> 0x16) & 3);
        if (bVar28) {
          unaff_d8 = dVar29;
        }
        if (*(int *)(param_2 + 0x198) != 0) {
          uVar12 = uVar23;
          if (2 < uVar23) {
            uVar12 = 0;
          }
          bVar26 = 0;
          if (uVar12 != 1) {
            if (uVar12 != 2) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb100("internal error: entered unreachable code: BUG: unspecified value should not get here because of validation"
                           ,0xd5,&DAT_01c0d914);
            }
            bVar26 = 1;
          }
        }
        local_300 = local_438;
        local_2fc = local_430;
        local_310 = local_43c;
        local_2d4 = local_428;
        local_2d8 = local_41c;
        local_2dc = local_424;
        local_2e0 = local_440;
        local_30c = local_444;
        if ((*(uint *)(param_2 + 0x1a0) & 1) != 0) {
          uVar27 = 1;
          uVar19 = *(uint *)(param_2 + 0x1a4);
        }
        uVar3 = (undefined1)uVar16;
        local_308 = unaff_d10;
        local_2f8 = unaff_d9;
        local_2f0 = uVar21;
        local_2e8 = unaff_d8;
        local_2d0 = uVar27;
        local_2cc = uVar19;
        local_2c8 = cVar4;
        local_2c7 = uVar3;
        local_2c6 = bVar26;
        local_2ec = local_420;
        iVar8 = FUN_00b52ab0(&local_310);
        if (iVar8 == 0) {
          if (uVar11 == 0 && pppppdVar10 == (double *****)0x0) {
            local_414 = local_444;
            local_450 = 0;
            uVar11 = uVar21;
            uVar18 = uVar27;
          }
          else {
            if (*(char *)(puVar22 + 0x12) != cVar4) {
LAB_00e4c8ac:
              local_414 = local_444;
              goto LAB_00e4c8cc;
            }
            if (local_440 == 0) {
              if (puVar22[0xc] == 0) goto LAB_00e4c604;
              local_440 = 0;
              local_414 = local_444;
              goto LAB_00e4c8cc;
            }
            if ((puVar22[0xc] == 0) || (local_424 != puVar22[0xd])) {
              local_440 = 1;
              goto LAB_00e4c8ac;
            }
LAB_00e4c604:
            if (local_41c == 0) {
              if (puVar22[0xe] != 0) {
                local_41c = 0;
LAB_00e4c678:
                local_414 = local_444;
                goto LAB_00e4c8cc;
              }
            }
            else if ((puVar22[0xe] == 0) || (local_428 != puVar22[0xf])) {
              local_41c = 1;
              goto LAB_00e4c678;
            }
            if (((uint)local_43c & 1) == 0) {
              if (((uint)pppppdVar20 & 1) == 0) goto LAB_00e4c6f4;
              local_43c = (double *****)0x0;
              local_414 = (double *****)0x0;
LAB_00e4c8cc:
              local_450 = 0;
            }
            else {
              if (((uint)pppppdVar20 & (uint)(unaff_d10 == *(double *)(puVar22 + 2))) == 0) {
                local_43c = (double *****)&DAT_00000001;
                local_414 = (double *****)0x0;
                goto LAB_00e4c8cc;
              }
LAB_00e4c6f4:
              uVar11 = puVar22[4];
              if (((uint)local_438 & 1) == 0) {
                if (uVar11 == 0) goto LAB_00e4c760;
                local_438 = (double *****)0x0;
                local_414 = local_444;
                local_430 = 0;
                goto LAB_00e4c8cc;
              }
              if ((uVar11 & unaff_d9 == *(double *)(puVar22 + 6)) == 0) {
                local_438 = (double *****)&DAT_00000001;
                local_414 = local_444;
                local_430 = 0;
                goto LAB_00e4c8cc;
              }
LAB_00e4c760:
              if (*(byte *)((int)puVar22 + 0x49) != uVar16) goto LAB_00e4c8ac;
              if ((uVar21 & 1) == 0) {
                if (puVar22[8] != 0) {
                  uVar21 = 0;
LAB_00e4c820:
                  local_414 = local_444;
                  local_420 = 0;
                  goto LAB_00e4c8cc;
                }
              }
              else if ((puVar22[8] & (uint)(unaff_d8 == *(double *)(puVar22 + 10))) == 0) {
                uVar21 = 1;
                goto LAB_00e4c820;
              }
              if (*(byte *)((int)puVar22 + 0x4a) != bVar26) goto LAB_00e4c8ac;
              if (uVar27 == 0) {
                local_450 = puVar22[0x10] ^ 1;
                uVar27 = 0;
              }
              else {
                if (puVar22[0x10] == 0) {
                  local_450 = 0;
                }
                else {
                  local_450 = (uint)(uVar19 == puVar22[0x11]);
                }
                uVar27 = 1;
              }
              local_414 = local_444;
            }
            uVar11 = uVar21;
            uVar18 = uVar27;
          }
        }
        else {
          local_43c = (double *****)0x2;
          local_450 = (uint)(uVar11 == 0 && pppppdVar10 == (double *****)0x0);
          local_414 = (double *****)0x0;
          uVar11 = 0;
          local_430 = extraout_r2;
          local_440 = local_420;
          uVar19 = uVar27;
          local_41c = uVar21;
          local_420 = uVar23;
          local_438 = extraout_r12_00;
        }
        *(uint *)(param_2 + 0x268) = local_41c;
        *(uint *)(param_2 + 0x274) = uVar19;
        *(byte *)(param_2 + 0x27a) = bVar26;
        *(int *)(param_2 + 0x264) = local_424;
        *(int *)(param_2 + 0x26c) = local_428;
        *(undefined4 *)(param_2 + 0x230) = local_43c;
        *(uint *)(param_2 + 0x250) = uVar11;
        *(uint *)(param_2 + 0x254) = local_420;
        puVar24 = (undefined4 *)(param_2 + 0x280);
        *(char *)(param_2 + 0x278) = cVar4;
        *(uint *)(param_2 + 0x270) = uVar18;
        *(double ******)(param_2 + 0x240) = local_438;
        *(int *)(param_2 + 0x244) = local_430;
        uVar12 = (uint)local_43c ^ 2 | (uint)local_414;
        *(double *)(param_2 + 0x238) = unaff_d10;
        *(double *)(param_2 + 0x248) = unaff_d9;
        *(undefined1 *)(param_2 + 0x279) = uVar3;
        *(uint *)(param_2 + 0x260) = local_440;
        *(double *)(param_2 + 600) = unaff_d8;
        *(double ******)(param_2 + 0x234) = local_414;
        if (uVar12 == 0) {
          *(undefined2 *)(param_2 + 0x2d8) = 0x202;
          *puVar24 = 2;
          *(undefined4 *)(param_2 + 0x284) = 0;
          *(undefined4 *)(param_2 + 0x2a0) = 2;
          *(undefined4 *)(param_2 + 0x2a4) = 0;
          *(undefined4 *)(param_2 + 0x2c0) = 0;
          *(undefined4 *)(param_2 + 0x2d0) = 0;
          *(undefined4 *)(param_2 + 0x2c8) = 0;
        }
        else {
          if (local_440 == 0) {
            uVar27 = uVar18;
            if (local_41c != 0) {
              uVar9 = 0;
              goto LAB_00e4ca04;
            }
            uVar9 = 2;
            puVar25 = puVar24;
          }
          else {
            uVar9 = 1;
            if ((local_41c & 1) == 0) {
              uVar12 = 0;
              puVar25 = (undefined4 *)0x0;
              uVar27 = 0;
            }
            else {
              uVar27 = 0;
LAB_00e4ca04:
              uVar12 = 0;
              puVar25 = (undefined4 *)&DAT_00000001;
            }
          }
          if (local_43c == (double *****)0x0 && local_414 == (double *****)0x0) {
            bVar28 = local_430 == 0;
            local_430 = 0;
            if (local_438 == (double *****)0x0 && bVar28) {
              uVar13 = 2;
            }
            else {
              local_438 = (double *****)&DAT_00000001;
              uVar13 = 0;
            }
          }
          else {
            uVar13 = 1;
          }
          *(undefined1 *)(param_2 + 0x2d9) = uVar3;
          *(int *)(param_2 + 0x2b4) = local_430;
          *(undefined4 *)(param_2 + 0x2a0) = uVar13;
          *(undefined4 *)(param_2 + 0x284) = 0;
          uVar13 = 1;
          *(char *)(param_2 + 0x2d8) = cVar4;
          if ((bVar26 & 1) != 0) {
            uVar13 = 2;
          }
          *(uint *)(param_2 + 0x2c0) = uVar11;
          *(undefined4 *)(param_2 + 0x2cc) = uVar13;
          *(uint *)(param_2 + 0x294) = uVar12;
          *(uint *)(param_2 + 0x29c) = uVar12;
          *(int *)(param_2 + 0x288) = local_424;
          *(uint *)(param_2 + 0x2d0) = uVar18;
          *(undefined4 **)(param_2 + 0x290) = puVar25;
          *puVar24 = uVar9;
          *(double ******)(param_2 + 0x2b0) = local_438;
          *(double *)(param_2 + 0x2a8) = unaff_d10;
          *(double *)(param_2 + 0x2b8) = unaff_d9;
          *(uint *)(param_2 + 0x28c) = uVar27;
          *(int *)(param_2 + 0x298) = local_428;
          *(undefined4 *)(param_2 + 0x2a4) = 0;
          *(uint *)(param_2 + 0x2c8) = (uint)(bVar26 != 2);
          *(uint *)(param_2 + 0x2d4) = uVar19;
          *(uint *)(param_2 + 0x2c4) = (uint)(0.0 < unaff_d8) * (int)(longlong)unaff_d8;
        }
        if (*(char *)(param_2 + 0x1d1) != '\0') {
          *(undefined1 *)(param_2 + 0x22c) = 0;
          goto switchD_00e4baf0_caseD_6;
        }
        if (local_450 == 0) {
          FUN_01bed864(puVar22,(undefined4 *)(param_2 + 0x230),0x50);
          FUN_019e0044(*(int *)(*(int *)(param_2 + 0x1bc) + 0x54) + 8);
        }
        goto LAB_00e4cc04;
      }
      uVar3 = 5;
      break;
    case 6:
switchD_00e4baf0_caseD_6:
      FUN_00e100c8(&local_310,param_2 + 0x1d8,param_3);
      pppppdVar20 = local_30c;
      pppppdVar10 = local_310;
      if (local_310 != (double *****)&SUB_00000004 || local_30c != (double *****)0x0) {
        puVar17 = (uint *)local_308;
        FUN_01bed4e2(&local_130,(int)&local_308 + 4,0x5c);
        if (*(char *)(param_2 + 0x22c) == '\x03') {
          FUN_00e1003c(param_2 + 0x1d8);
        }
        if (pppppdVar10 != (double *****)&DAT_00000003 || pppppdVar20 != (double *****)0x0) {
          FUN_01bed4e2(&local_d0,&local_130,0x5c);
          FUN_019f8c54(*(undefined4 *)(param_2 + 0x1c4),*(undefined4 *)(param_2 + 0x1c8));
          FUN_019f8c54(*(undefined4 *)(param_2 + 0x1b0),1);
          goto LAB_00e4cce0;
        }
        FUN_01bed864(*(undefined4 *)(param_2 + 0x1cc),param_2 + 0x230,0x50);
        *(undefined1 *)(*(int *)(*(int *)(param_2 + 0x1bc) + 0x58) + 8) = 1;
        FUN_019e0044(*(int *)(*(int *)(param_2 + 0x1bc) + 0x54) + 8);
LAB_00e4cc04:
        puVar17 = *(uint **)(param_2 + 0x280);
        FUN_01bed4e2(&local_d0,param_2 + 0x284,0x5c);
        FUN_019f8c54(*(undefined4 *)(param_2 + 0x1c4),*(undefined4 *)(param_2 + 0x1c8));
        FUN_019f8c54(*(undefined4 *)(param_2 + 0x1b0),1);
        piVar6 = *(int **)(param_2 + 0x1c0);
        DataMemoryBarrier(0xb);
        do {
          iVar8 = *piVar6;
          bVar28 = (bool)hasExclusiveAccess(piVar6);
        } while (!bVar28);
        *piVar6 = iVar8 + -1;
        if (iVar8 == 1) {
          DataMemoryBarrier(0xb);
          FUN_00a967c0(*(undefined4 *)(param_2 + 0x1c0));
        }
        piVar6 = *(int **)(param_2 + 0x1bc);
        DataMemoryBarrier(0xb);
        do {
          iVar8 = *piVar6;
          bVar28 = (bool)hasExclusiveAccess(piVar6);
        } while (!bVar28);
        *piVar6 = iVar8 + -1;
        if (iVar8 == 1) {
          DataMemoryBarrier(0xb);
          FUN_01177340(*(undefined4 *)(param_2 + 0x1bc));
        }
        FUN_01bed4e2(&local_280,&local_d0,0x5c);
        pppppdVar20 = (double *****)0x0;
        *(undefined1 *)(param_2 + 0x1d0) = 1;
        pppppdVar10 = (double *****)&DAT_00000003;
        goto LAB_00e4cd88;
      }
      uVar3 = 6;
    }
LAB_00e4cb50:
    *(undefined1 *)(param_2 + 0x1d0) = uVar3;
  }
  *param_1 = 4;
  param_1[1] = 0;
  uVar3 = 3;
LAB_00e4ce28:
  *(undefined1 *)(param_2 + 0x2e4) = uVar3;
  return;
}

