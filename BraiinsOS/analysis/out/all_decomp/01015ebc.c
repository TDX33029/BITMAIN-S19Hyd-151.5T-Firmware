// FUN_01015ebc @ 01015ebc size=3136 calls_out=13 calls_in=0
// strings: 

/* WARNING: Type propagation algorithm not settling */

void FUN_01015ebc(undefined4 *param_1,int param_2,int *param_3,int *param_4,int param_5)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  ulonglong uVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  undefined2 uVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined *puVar13;
  undefined *puVar14;
  byte *pbVar15;
  int *piVar16;
  undefined1 uVar17;
  int *piVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  undefined1 local_3e4;
  undefined1 auStack_3d8 [68];
  int local_394;
  ushort local_384;
  int local_380;
  int iStack_37c;
  int iStack_378;
  int iStack_374;
  int iStack_370;
  int local_36c;
  int iStack_368;
  int iStack_364;
  int iStack_360;
  int iStack_35c;
  int local_358;
  int iStack_354;
  int iStack_350;
  int iStack_34c;
  int iStack_348;
  int iStack_344;
  uint local_340;
  int local_33c;
  int local_338;
  int iStack_334;
  int iStack_330;
  int iStack_32c;
  int iStack_328;
  int iStack_324;
  undefined1 auStack_320 [104];
  int local_2b8;
  int iStack_2b4;
  int iStack_2b0;
  int iStack_2ac;
  int iStack_2a8;
  int iStack_2a4;
  uint local_2a0;
  int local_29c;
  int local_298;
  int local_294;
  undefined4 local_290;
  int local_28c;
  int local_288;
  int local_284;
  int local_280;
  int local_27c;
  int local_278;
  int local_274;
  int local_270;
  int local_26c;
  uint local_268;
  int local_264;
  uint uStack_260;
  int iStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  int local_218;
  int iStack_214;
  undefined4 uStack_210;
  int iStack_20c;
  int iStack_208;
  int local_204;
  int iStack_200;
  int iStack_1fc;
  int iStack_1f8;
  int iStack_1f4;
  int local_1f0;
  int iStack_1ec;
  uint uStack_1e8;
  int iStack_1e4;
  uint uStack_1e0;
  int iStack_1dc;
  int *local_1d8;
  code *local_1d4;
  int local_1d0;
  int local_1cc;
  int iStack_1c8;
  int local_1c4;
  int iStack_1c0;
  int iStack_1bc;
  undefined4 local_1b4;
  undefined4 local_1a4;
  undefined4 local_194;
  short local_184;
  int local_150;
  int local_14c;
  int local_148;
  int local_144;
  int local_140;
  int local_13c;
  int local_138;
  int local_134;
  int local_130;
  int local_12c;
  int local_128;
  int local_124;
  uint local_120;
  int local_11c;
  uint local_118;
  int iStack_114;
  undefined4 local_110;
  undefined4 local_10c;
  int local_f8;
  int iStack_f4;
  int iStack_f0;
  int iStack_ec;
  int local_e8;
  int iStack_e4;
  int iStack_e0;
  uint uStack_dc;
  int local_d8;
  uint uStack_d4;
  int iStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined2 local_c2;
  uint local_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
  int local_ac;
  int iStack_a8;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  int local_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  uint uStack_88;
  int iStack_84;
  undefined1 auStack_80 [92];
  
  iVar21 = *param_4;
  uVar20 = param_4[1];
  iVar19 = param_4[2];
  local_2a0 = uVar20;
  local_29c = iVar19;
  if (((*(uint *)(iVar21 + 0x38) <= uVar20) ||
      (piVar18 = (int *)(*(int *)(iVar21 + 0x34) + uVar20 * 0xf8), *piVar18 == 3 && piVar18[1] == 0)
      ) || (piVar18[0x35] != iVar19)) {
    puVar14 = &DAT_01882560;
    goto LAB_01016aa8;
  }
  uVar9 = (uint)*(byte *)(piVar18 + 8);
  uVar12 = uVar9 - 6;
  if (uVar9 < 6) {
    uVar12 = 6;
  }
  if (4 < (uVar12 & 0xff)) goto switchD_01015f60_caseD_1;
  bVar1 = *(byte *)(param_3 + 0x2b);
  sVar3 = (short)param_3[0x25];
  piVar16 = &local_29c;
  switch(uVar12 & 0xff) {
  case 0:
    bVar5 = 1;
    if ((bVar1 & 1) == 0) {
      local_3e4 = 0;
LAB_01016008:
      uVar17 = 9;
      piVar16 = (int *)(uint)((ushort)(sVar3 - 200U) < 0xff9c);
    }
    else {
      local_3e4 = 0;
LAB_0101613c:
      uVar17 = 0xb;
    }
    break;
  case 1:
    goto switchD_01015f60_caseD_1;
  case 2:
    if ((bVar1 & 1) == 0) {
      if ((ushort)(sVar3 - 100U) < 100) {
        uVar17 = 8;
      }
      else {
        uVar17 = 10;
      }
      bVar5 = 1;
joined_r0x010161e8:
      local_3e4 = 1;
    }
    else {
      bVar5 = 1;
LAB_0101611c:
      uVar17 = 3;
    }
    break;
  case 3:
    if (*(char *)((int)piVar18 + 0x22) == '\0') {
      local_3e4 = *(undefined1 *)((int)piVar18 + 0x21);
      if ((bVar1 & 1) != 0) {
        bVar5 = 0;
        goto LAB_0101613c;
      }
      bVar5 = 0;
      goto LAB_01016008;
    }
    goto switchD_01015f60_caseD_1;
  case 4:
    if (*(char *)((int)piVar18 + 0x21) != '\0') goto switchD_01015f60_caseD_1;
    bVar5 = 0;
    if ((bVar1 & 1) != 0) goto LAB_0101611c;
    uVar17 = 10;
    if (99 < (ushort)(sVar3 - 100U)) goto joined_r0x010161e8;
    local_3e4 = 0;
    bVar5 = 0;
  }
  if (((5 < uVar9 - 6) && (uVar9 < 3)) && (uVar9 != 0)) {
    if (uVar9 == 1) {
      (**(code **)(piVar18[10] + 0x10))(piVar18 + 0xd,piVar18[0xb],piVar18[0xc]);
    }
    else if ((piVar18[9] & 0x7fffffffU) != 0) {
      thunk_FUN_016d3fb4(piVar18[10]);
    }
  }
  *(undefined1 *)((int)piVar18 + 0x21) = local_3e4;
  *(char *)((int)piVar18 + 0x22) = (char)piVar16;
  *(undefined1 *)(piVar18 + 8) = uVar17;
  if (bVar5 == 0) {
LAB_01016280:
    if (uVar20 < *(uint *)(iVar21 + 0x38)) {
      piVar18 = (int *)(*(int *)(iVar21 + 0x34) + uVar20 * 0xf8);
      if ((*piVar18 != 3 || piVar18[1] != 0) && (piVar18[0x35] == iVar19)) {
        local_2a0 = uVar20;
        local_29c = iVar19;
        if (*piVar18 != 1 || piVar18[1] != 0) {
          local_1cc = 0;
          local_1d0 = 0;
          local_1d4 = (code *)0x18;
          local_1d8 = (int *)0x0;
          iVar10 = FUN_01029b24(param_3,&local_1d8);
          if (iVar10 != 0) {
            uVar12 = *(uint *)(iVar10 + 8);
            if (0x13 < uVar12) {
LAB_01016314:
              if (((*(uint *)(iVar21 + 0x38) <= uVar20) ||
                  (piVar18 = (int *)(*(int *)(iVar21 + 0x34) + uVar20 * 0xf8),
                  *piVar18 == 3 && piVar18[1] == 0)) || (piVar18[0x35] != iVar19)) {
                puVar14 = &DAT_01882550;
                goto LAB_01016aa8;
              }
              *param_1 = 4;
              param_1[1] = 0;
              uVar8 = 0x100;
              param_1[3] = iVar19;
              param_1[4] = 1;
LAB_01016374:
              *(undefined2 *)(param_1 + 2) = uVar8;
              local_2a0 = uVar20;
              local_29c = iVar19;
              goto LAB_0101637c;
            }
            if (uVar12 == 0) {
              uVar4 = 0;
            }
            else {
              pbVar15 = *(byte **)(iVar10 + 4);
              uVar4 = 0;
              do {
                bVar1 = *pbVar15;
                if ((bVar1 - 0x3a & 0xff) < 0xf6) goto LAB_01016314;
                pbVar15 = pbVar15 + 1;
                uVar12 = uVar12 - 1;
                uVar4 = (uVar4 & 0xffffffff) * 10 +
                        (CONCAT44((int)(uVar4 >> 0x20) * 10,bVar1 - 0x30) & 0xffffffff000000ff);
              } while (uVar12 != 0);
            }
            if (((*(uint *)(iVar21 + 0x38) <= uVar20) ||
                (piVar18 = (int *)(*(int *)(iVar21 + 0x34) + uVar20 * 0xf8),
                *piVar18 == 3 && piVar18[1] == 0)) || (piVar18[0x35] != iVar19)) {
              puVar14 = &DAT_01882560;
              goto LAB_01016aa8;
            }
            piVar18[3] = (int)(uVar4 >> 0x20);
            *piVar18 = 2;
            piVar18[1] = 0;
            piVar18[2] = (int)uVar4;
            bVar1 = 0;
            if (uVar4 != 0) {
              bVar1 = *(byte *)(param_3 + 0x2b);
            }
            local_2a0 = uVar20;
            local_29c = iVar19;
            if ((uVar4 != 0 && (bVar1 & 1) != 0) &&
               ((short)param_3[0x25] != 0xcc && (short)param_3[0x25] != 0x130)) {
              iVar19 = FUN_0101c55c(param_4);
              *param_1 = 4;
              param_1[1] = 0;
              uVar11 = *(undefined4 *)(iVar19 + 0xd4);
              *(undefined2 *)(param_1 + 2) = 0x100;
              param_1[3] = uVar11;
              param_1[4] = 1;
              goto LAB_0101637c;
            }
          }
        }
        if ((char)param_3[0x27] == '\0') {
          iVar10 = param_3[0x2a];
          local_380 = *param_3;
          iStack_37c = param_3[1];
          iStack_378 = param_3[2];
          iStack_374 = param_3[3];
          iStack_370 = param_3[4];
          local_36c = param_3[5];
          iStack_368 = param_3[6];
          iStack_364 = param_3[7];
          iStack_360 = param_3[8];
          iStack_35c = param_3[9];
          local_358 = param_3[10];
          iStack_354 = param_3[0xb];
          iStack_350 = param_3[0xc];
          iStack_34c = param_3[0xd];
          iStack_348 = param_3[0xe];
          iStack_344 = param_3[0xf];
          piVar18 = param_3 + 0x10;
          FUN_016dd1aa(auStack_3d8,piVar18,0x58);
          cVar2 = *(char *)(param_5 + 0x2c);
          if ((((local_394 != 0) && (cVar2 != '\0')) && ((*(byte *)(param_2 + 0x89) & 1) == 0)) ||
             (local_384 != 0 && cVar2 != '\0')) {
            if (((*(uint *)(iVar21 + 0x38) <= uVar20) ||
                (piVar18 = (int *)(*(int *)(iVar21 + 0x34) + uVar20 * 0xf8),
                *piVar18 == 3 && piVar18[1] == 0)) || (piVar18[0x35] != iVar19)) {
              local_1d4 = FUN_0101a4ac;
              local_2a0 = uVar20;
              local_29c = iVar19;
              local_1d8 = &local_29c;
                    /* WARNING: Subroutine does not return */
              FUN_00faa478(&DAT_00599806,&local_1d8,&DAT_01882550);
            }
            *param_1 = 4;
            param_1[1] = 0;
            *(undefined2 *)(param_1 + 2) = 0x100;
            param_1[3] = iVar19;
            param_1[4] = 1;
            local_2a0 = uVar20;
            local_29c = iVar19;
            FUN_01015c1c(&local_380);
LAB_010166d8:
            FUN_01404298(auStack_3d8);
            return;
          }
          if (local_384 - 100 < 100) {
            *param_1 = 5;
            param_1[1] = 0;
            FUN_01015c1c(&local_380);
            goto LAB_010166d8;
          }
          local_218 = *param_3;
          iStack_214 = param_3[1];
          uStack_210 = param_3[2];
          iStack_20c = param_3[3];
          iStack_208 = param_3[4];
          local_204 = param_3[5];
          iStack_200 = param_3[6];
          iStack_1fc = param_3[7];
          iStack_1f8 = param_3[8];
          iStack_1f4 = param_3[9];
          local_1f0 = param_3[10];
          iStack_1ec = param_3[0xb];
          uStack_1e8 = param_3[0xc];
          iStack_1e4 = param_3[0xd];
          uStack_1e0 = param_3[0xe];
          iStack_1dc = param_3[0xf];
          if (cVar2 == '\0') {
            FUN_016dd1aa(&local_1d8,piVar18,0x58);
            local_14c = 0;
            local_150 = 0;
            if (local_184 == 0) {
              local_184 = 200;
            }
            local_110 = 0;
            local_118 = local_118 & 0xffff0000;
            local_11c = 0;
            local_124 = 0;
            local_128 = 0;
            local_130 = 0;
            local_134 = 0;
            local_120 = 4;
            local_12c = 4;
            local_138 = 2;
            local_10c = CONCAT22(3,local_184);
            FUN_01015c1c(&local_150);
            iVar7 = iStack_208;
            iVar6 = iStack_20c;
            iVar10 = uStack_210;
            iVar21 = iStack_214;
            iVar19 = local_218;
            local_150 = local_218;
            local_14c = iStack_214;
            local_148 = uStack_210;
            local_144 = iStack_20c;
            local_140 = iStack_208;
            local_13c = local_204;
            local_138 = iStack_200;
            local_134 = iStack_1fc;
            local_130 = iStack_1f8;
            local_12c = iStack_1f4;
            local_128 = local_1f0;
            local_124 = iStack_1ec;
            local_120 = uStack_1e8;
            local_11c = iStack_1e4;
            local_118 = uStack_1e0;
            iStack_114 = iStack_1dc;
            local_c2 = uStack_210._2_2_;
            local_f8 = local_204;
            iStack_f4 = iStack_200;
            iStack_f0 = iStack_1fc;
            iStack_ec = iStack_1f8;
            local_e8 = iStack_1f4;
            iStack_e4 = local_1f0;
            iStack_e0 = iStack_1ec;
            uStack_dc = uStack_1e8;
            local_d8 = iStack_1e4;
            uStack_d4 = uStack_1e0;
            iStack_d0 = iStack_1dc;
            uStack_cc = local_110;
            uStack_c8 = local_10c;
            FUN_01404298(&local_1d8);
            if (iVar19 != 3 || iVar21 != 0) {
              local_33c = 0;
              local_298 = iVar19;
              local_294 = iVar21;
              local_340 = 3;
              local_288 = iVar7;
              local_28c = iVar6;
              local_290 = CONCAT22(uStack_210._2_2_,(short)iVar10);
              local_284 = local_f8;
              local_280 = iStack_f4;
              local_27c = iStack_f0;
              local_278 = iStack_ec;
              local_274 = local_e8;
              local_270 = iStack_e4;
              local_26c = iStack_e0;
              local_268 = uStack_dc;
              local_264 = local_d8;
              uStack_260 = uStack_d4;
              iStack_25c = iStack_d0;
              uStack_258 = uStack_cc;
              uStack_254 = uStack_c8;
              goto LAB_01016928;
            }
            local_290 = iVar7;
            local_298 = CONCAT22(local_c2,(short)iVar10);
            local_294 = iVar6;
            local_28c = local_f8;
            local_288 = iStack_f4;
            local_284 = iStack_f0;
          }
          else {
            FUN_016dd1aa(&local_150,piVar18,0x58);
            FUN_0101de8c(&local_1d8,&local_150,&local_218,iVar10);
            if (local_1d8 != (int *)0x3 || local_1d4 != (code *)0x0) {
              FUN_016dd1aa(&local_2a0,&local_1d8,0x88);
              local_33c = local_29c;
              local_340 = local_2a0;
              goto LAB_01016928;
            }
            local_298 = local_1d0;
            local_294 = local_1cc;
            local_290 = iStack_1c8;
            local_28c = local_1c4;
            local_288 = iStack_1c0;
            local_284 = iStack_1bc;
          }
          local_33c = 0;
          local_340 = 4;
LAB_01016928:
          local_2b8 = local_298;
          iStack_2b4 = local_294;
          iStack_2b0 = local_290;
          iStack_2ac = local_28c;
          iStack_2a8 = local_288;
          iStack_2a4 = local_284;
          if (local_340 == 4 && local_33c == 0) {
            param_1[2] = local_298;
            param_1[3] = local_294;
            param_1[4] = local_290;
            param_1[5] = local_28c;
            param_1[6] = local_288;
            param_1[7] = local_284;
            *param_1 = 4;
            param_1[1] = 0;
            return;
          }
          FUN_016dd1aa(auStack_320,&local_280,0x68);
          local_338 = local_2b8;
          iStack_334 = iStack_2b4;
          iStack_330 = iStack_2b0;
          iStack_32c = iStack_2ac;
          iStack_328 = iStack_2a8;
          iStack_324 = iStack_2a4;
          iVar19 = FUN_0101c5e8(param_4);
          FUN_0102fe64(iVar19 + 0xb4,param_2 + 100,&local_340);
          iVar19 = FUN_0101c5e8(param_4);
          iVar21 = *(int *)(iVar19 + 0x50);
          *(undefined4 *)(iVar19 + 0x50) = 0;
          if (iVar21 != 0) {
            (**(code **)(iVar21 + 4))(*(undefined4 *)(iVar19 + 0x54));
          }
          if (cVar2 != '\0') {
            FUN_006caa7c(param_2 + 0x3c,param_4);
          }
          *param_1 = 5;
          param_1[1] = 0;
          return;
        }
        if ((*(byte *)(param_5 + 0x2c) & bVar5) == 0) {
          *param_1 = 3;
          param_1[1] = 0;
LAB_0101637c:
          FUN_01015c1c(param_3);
          FUN_01404298(param_3 + 0x10);
          return;
        }
        if (((uVar20 < *(uint *)(iVar21 + 0x38)) &&
            (piVar18 = (int *)(*(int *)(iVar21 + 0x34) + uVar20 * 0xf8),
            *piVar18 != 3 || piVar18[1] != 0)) && (piVar18[0x35] == iVar19)) {
          local_184 = 0x1af;
          local_1d8 = (int *)CONCAT31(local_1d8._1_3_,0xb);
          local_270 = 4;
          local_27c = 4;
          local_194 = 0;
          local_1a4 = 0;
          local_1b4 = 0;
          local_1c4 = 0;
          local_29c = 0;
          local_2a0 = 0;
          local_268 = local_268 & 0xffff0000;
          local_26c = 0;
          local_274 = 0;
          local_278 = 0;
          local_280 = 0;
          local_284 = 0;
          local_288 = 2;
          uVar11 = FUN_01022864(&local_2a0);
          local_c0 = local_2a0;
          iStack_bc = local_29c;
          iStack_b8 = local_298;
          iStack_b4 = local_294;
          iStack_b0 = local_290;
          local_ac = local_28c;
          iStack_a8 = local_288;
          iStack_a4 = local_284;
          iStack_a0 = local_280;
          iStack_9c = local_27c;
          local_98 = local_278;
          iStack_94 = local_274;
          iStack_90 = local_270;
          iStack_8c = local_26c;
          uStack_88 = local_268;
          iStack_84 = local_264;
          FUN_016dd1aa(auStack_80,&local_1d8,0x58);
          FUN_016dd1aa(param_1,&local_c0,0x98);
          param_1[0x2a] = iVar19;
          *(undefined1 *)(param_1 + 0x2b) = 5;
          *(undefined1 *)((int)param_1 + 0xa5) = 2;
          *(undefined1 *)(param_1 + 0x27) = 0;
          param_1[0x26] = uVar11;
          goto LAB_0101637c;
        }
      }
    }
  }
  else {
    if (*(uint *)(param_2 + 0x80) < (uint)param_3[0x2a]) {
      *(int *)(param_2 + 0x80) = param_3[0x2a];
    }
    uVar12 = *(uint *)(param_5 + 0x14);
    if (*(uint *)(param_5 + 0x10) <= uVar12) {
      uVar11 = 0x31;
      puVar13 = &DAT_01883008;
      puVar14 = &DAT_00383270;
LAB_01016a7c:
                    /* WARNING: Subroutine does not return */
      FUN_00faa464(puVar14,uVar11,puVar13);
    }
    if (((uVar20 < *(uint *)(iVar21 + 0x38)) &&
        (piVar18 = (int *)(*(int *)(iVar21 + 0x34) + uVar20 * 0xf8),
        *piVar18 != 3 || piVar18[1] != 0)) && (piVar18[0x35] == iVar19)) {
      if ((char)piVar18[0x3a] != '\0') {
        uVar11 = 0x24;
        puVar13 = &DAT_01883018;
        puVar14 = &DAT_003832a1;
        local_2a0 = uVar20;
        local_29c = iVar19;
        goto LAB_01016a7c;
      }
      *(undefined1 *)(piVar18 + 0x3a) = 1;
      *(uint *)(param_5 + 0x14) = uVar12 + 1;
      goto LAB_01016280;
    }
  }
  puVar14 = &DAT_01882550;
LAB_01016aa8:
  local_1d4 = FUN_0101a4ac;
  local_2a0 = uVar20;
  local_29c = iVar19;
  local_1d8 = &local_29c;
                    /* WARNING: Subroutine does not return */
  FUN_00faa478(&DAT_00599806,&local_1d8,puVar14);
switchD_01015f60_caseD_1:
  param_1[4] = &PTR_LAB_01882ab4;
  *param_1 = 4;
  param_1[1] = 0;
  uVar8 = 0x101;
  param_1[3] = 1;
  param_1[5] = 1;
  param_1[6] = 0;
  param_1[7] = 0;
  goto LAB_01016374;
}

