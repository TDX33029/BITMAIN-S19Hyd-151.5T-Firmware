// FUN_006721f4 @ 006721f4 size=5876 calls_out=40 calls_in=0
// strings: BUG: `common_info` field was already initialized. | BUG: cannot get `ApiLogCommonInfo` from request data. | api_logging::middleware::graphql_extensionopen/utils-rs/api-logging/src/middleware/graphql_extension.rsevent open/utils-rs/api-logging/src/middleware/graphql_extension.rs:245event open/utils-rs/api-logging/src/middleware/graphql_extension.rs:259event open/utils-rs/api-logging/src/middleware/graphql_extension.rs:283 | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | BUG: cannot get `ApiLogCommonInfo` from request data.

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_006721f4(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  byte bVar1;
  char *pcVar2;
  uint ****ppppuVar3;
  uint ****ppppuVar4;
  uint ***pppuVar5;
  uint ***pppuVar6;
  uint ***pppuVar7;
  undefined1 uVar8;
  char cVar9;
  int *piVar10;
  uint ****ppppuVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  undefined4 uVar16;
  undefined4 *puVar17;
  uint ****ppppuVar18;
  uint ****extraout_r1;
  uint ****extraout_r1_00;
  uint ****extraout_r1_01;
  undefined4 uVar19;
  int extraout_r2;
  uint ****ppppuVar20;
  undefined4 uVar21;
  bool bVar22;
  uint ***pppuVar23;
  uint uVar24;
  int iVar25;
  uint uVar26;
  uint *puVar27;
  int iVar28;
  uint ***pppuVar29;
  uint ****ppppuVar30;
  undefined1 *puVar31;
  uint uVar32;
  undefined4 uVar33;
  undefined8 uVar34;
  uint local_2dc;
  int *local_2d8;
  uint ****local_2c4;
  undefined4 *local_2a4;
  undefined4 local_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 local_288;
  uint ***pppuStack_284;
  int iStack_280;
  undefined4 uStack_27c;
  uint ****ppppuStack_278;
  undefined4 local_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  uint ****local_260;
  uint ****ppppuStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  uint ****local_248;
  uint ****local_244;
  uint ****local_240;
  undefined4 local_23c;
  uint ***local_238;
  int local_234;
  undefined4 uStack_230;
  uint ****local_22c;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  uint ****local_214;
  uint ****ppppuStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 local_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  uint ****local_1f0;
  uint ****local_1ec;
  uint ****local_1e8;
  undefined1 *local_1e4;
  uint local_1e0;
  uint ***local_1dc;
  uint local_1d8;
  uint local_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 local_1a0;
  uint ***pppuStack_19c;
  int iStack_198;
  undefined4 uStack_194;
  uint ****ppppuStack_190;
  undefined4 local_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  uint ****local_178;
  uint ****ppppuStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 local_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  uint ****local_150;
  uint ****local_14c;
  uint ****local_148;
  uint ****local_140;
  uint ****local_13c;
  uint ****local_138;
  uint ****local_130;
  undefined4 local_12c;
  undefined4 *local_128;
  char local_124;
  uint ****local_120;
  uint ****local_11c;
  uint ****local_118;
  uint **local_110;
  undefined4 local_10c;
  int local_108;
  uint ***local_104;
  uint ***local_100;
  uint ***local_fc;
  uint ****local_f8;
  uint ***local_f4;
  uint ***pppuStack_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  uint ****local_e0;
  uint ****local_dc;
  uint ****local_d8;
  undefined4 local_d4;
  uint ****local_d0;
  uint ***local_cc;
  uint local_c8;
  uint local_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  uint ****local_88;
  uint ****local_84;
  uint ****local_80;
  undefined1 *local_7c;
  uint local_78;
  uint ***local_74;
  uint uStack_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_38;
  uint ****local_34;
  uint ****local_30;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x15)) {
  case 0:
    param_2[9] = *param_2;
    uVar16 = param_2[5];
    uVar19 = param_2[6];
    uVar21 = param_2[7];
    uVar33 = param_2[8];
    param_2[10] = param_2[1];
    param_2[0xb] = param_2[2];
    param_2[0xc] = param_2[3];
    param_2[0xd] = param_2[4];
    *(undefined1 *)(param_2 + 0x12) = 0;
    param_2[0x11] = uVar33;
    param_2[0x10] = uVar21;
    param_2[0xf] = uVar19;
    param_2[0xe] = uVar16;
LAB_006722b0:
    ppppuVar30 = (uint ****)param_2[0xc];
    puVar31 = (undefined1 *)param_2[0xd];
    if (param_2[0xb] != 0) {
      piVar10 = (int *)param_2[10];
      local_dc = (uint ****)(param_2[0xb] + -1);
      local_e0 = (uint ****)(piVar10 + 2);
      local_d8 = ppppuVar30;
      local_d4 = (undefined4 *)puVar31;
      uVar34 = (**(code **)(piVar10[1] + 0x18))
                         (*piVar10 + (*(int *)(piVar10[1] + 8) - 1U & 0xfffffff8) + 8,uVar16,uVar19,
                          uVar21,uVar33,&local_e0);
      *(undefined8 *)(param_2 + 0x13) = uVar34;
      goto LAB_00672344;
    }
    param_2[0x13] = ppppuVar30;
    param_2[0x14] = puVar31;
LAB_00672398:
    (**(code **)(puVar31 + 0xc))(&local_e0,ppppuVar30,param_3);
    ppppuVar11 = local_d8;
    ppppuVar30 = local_e0;
    if (local_d8 != (uint ****)0x80000002) {
      local_2c4 = local_dc;
      FUN_01bed4e2(&local_88,&local_d4,0x4c);
      goto LAB_006723ec;
    }
    uVar8 = 4;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c04558);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c04558);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x12)) {
    case 0:
      uVar16 = param_2[0xe];
      uVar19 = param_2[0xf];
      uVar21 = param_2[0x10];
      uVar33 = param_2[0x11];
      goto LAB_006722b0;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c14c68);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c14c68);
    case 3:
      uVar34 = *(undefined8 *)(param_2 + 0x13);
      break;
    case 4:
      ppppuVar30 = (uint ****)param_2[0x13];
      puVar31 = (undefined1 *)param_2[0x14];
      goto LAB_00672398;
    }
LAB_00672344:
    (**(code **)((int)((ulonglong)uVar34 >> 0x20) + 0xc))(&local_e0,(int)uVar34,param_3);
    ppppuVar11 = local_d8;
    ppppuVar30 = local_e0;
    if (local_d8 != (uint ****)0x80000002) {
      local_2c4 = local_dc;
      FUN_01bed4e2(&local_88,&local_d4,0x4c);
      FUN_01139b38(param_2[0x13],param_2[0x14]);
LAB_006723ec:
      ppppuVar20 = (uint ****)&local_1f0;
      FUN_01bed4e2(ppppuVar20,&local_88,0x4c);
      *(undefined1 *)(param_2 + 0x12) = 1;
      FUN_01bed4e2(&local_1a0,ppppuVar20,0x4c);
      if (ppppuVar11 == (uint ****)&DAT_80000001) {
        local_288 = local_1a0;
        pppuStack_284 = pppuStack_19c;
        iStack_280 = iStack_198;
        uStack_27c = uStack_194;
        ppppuStack_278 = ppppuStack_190;
        local_274 = local_18c;
        uStack_270 = uStack_188;
        uStack_26c = uStack_184;
        uStack_268 = uStack_180;
        uStack_264 = uStack_17c;
        local_260 = local_178;
        ppppuStack_25c = ppppuStack_174;
        uStack_258 = uStack_170;
        uStack_254 = uStack_16c;
        uStack_250 = uStack_168;
        ppppuVar11 = (uint ****)&DAT_80000001;
        ppppuVar30 = local_178;
      }
      else {
        local_200 = local_164;
        uStack_1fc = uStack_160;
        uStack_1f8 = uStack_15c;
        uStack_1f4 = uStack_158;
        local_23c = local_1a0;
        local_238 = pppuStack_19c;
        local_234 = iStack_198;
        uStack_230 = uStack_194;
        local_22c = ppppuStack_190;
        local_228 = local_18c;
        uStack_224 = uStack_188;
        uStack_220 = uStack_184;
        uStack_21c = uStack_180;
        uStack_218 = uStack_17c;
        local_214 = local_178;
        ppppuStack_210 = ppppuStack_174;
        uStack_20c = uStack_170;
        uStack_208 = uStack_16c;
        uStack_204 = uStack_168;
        local_244 = local_2c4;
        local_248 = ppppuVar30;
        local_240 = ppppuVar11;
        iVar12 = FUN_0067ace4(param_2[5]);
        if (iVar12 == 0) {
          if ((DAT_01d50f88 < 5) &&
             (((DAT_01d4b4f0 - 1 < 2 ||
               ((DAT_01d4b4f0 != 0 && (cVar9 = FUN_01aaafa8(&DAT_01d4b4e8), cVar9 != '\0')))) &&
              (iVar12 = FUN_01aaa278(DAT_01d4b4e8), iVar12 != 0)))) {
            local_1e8 = (uint ****)(DAT_01d4b4e8 + 0x1c);
            if (*(uint *****)(DAT_01d4b4e8 + 0x20) == (uint ****)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c04578);
            }
            local_84 = (uint ****)&local_130;
            local_d8 = *(uint *****)(DAT_01d4b4e8 + 0x24);
            local_d4 = *(undefined4 **)(DAT_01d4b4e8 + 0x28);
            local_88 = (uint ****)&local_e0;
            local_1f0 = (uint ****)&local_88;
            local_1ec = (uint ****)&DAT_00000001;
            local_d0 = (uint ****)0x0;
            local_80 = (uint ****)&DAT_01d2ea4c;
            local_12c = 0x6b;
            local_130 = (uint ****)0x3d45a0;
            local_e0 = (uint ****)*local_1e8;
            local_dc = *(uint *****)(DAT_01d4b4e8 + 0x20);
            FUN_00673ebc(&local_1f0);
          }
          else {
            iVar12 = DAT_01d4b4e8;
            if ((DAT_01d51ae9 == 0) && (DAT_01d51b00 != 0)) {
              local_13c = *(uint *****)(DAT_01d4b4e8 + 0x14);
              local_138 = *(uint *****)(DAT_01d4b4e8 + 0x18);
              local_140 = (uint ****)&DAT_00000001;
              DataMemoryBarrier(0xb);
              puVar17 = DAT_01d4edc8;
              pcVar2 = DAT_01d4edc4;
              if (DAT_01d51174 != 2) {
                puVar17 = &DAT_01cfc5e0;
                pcVar2 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
              }
              iVar25 = (*(code *)puVar17[3])(pcVar2,&local_140);
              if (iVar25 != 0) {
                local_128 = (undefined4 *)(DAT_01d4b4e8 + 0x1c);
                if (*(uint *****)(DAT_01d4b4e8 + 0x20) == (uint ****)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c04578);
                }
                local_1ec = (uint ****)&local_38;
                local_d8 = *(uint *****)(DAT_01d4b4e8 + 0x24);
                local_d4 = *(undefined4 **)(DAT_01d4b4e8 + 0x28);
                local_1f0 = (uint ****)&local_e0;
                local_130 = (uint ****)&local_1f0;
                local_d0 = (uint ****)0x0;
                local_12c = 1;
                local_34 = (uint ****)&DAT_0000006b;
                local_1e8 = (uint ****)&DAT_01d2ea4c;
                local_38 = "BUG: cannot get `ApiLogCommonInfo` from request data.";
                local_88 = local_140;
                local_84 = local_13c;
                local_80 = local_138;
                local_e0 = (uint ****)*local_128;
                local_dc = *(uint *****)(DAT_01d4b4e8 + 0x20);
                FUN_01aaa328(iVar12,pcVar2,puVar17[4],&local_88,&local_130);
              }
            }
          }
        }
        else {
          iVar12 = param_2[9];
          FUN_00671a1c(&local_88);
          local_e0 = local_88;
          local_dc = local_84;
          local_d8 = local_80;
          local_d4 = (undefined4 *)local_7c;
          local_d0 = (uint ****)local_78;
          local_cc = local_74;
          local_c8 = uStack_70;
          local_c4 = uStack_6c;
          uStack_c0 = uStack_68;
          uStack_bc = uStack_64;
          local_b8 = local_60;
          uStack_b4 = uStack_5c;
          uStack_b0 = uStack_58;
          uStack_ac = uStack_54;
          uStack_a8 = uStack_50;
          DataMemoryBarrier(0xb);
          if (*(int *)(iVar12 + 0x24) != 0) {
            FUN_0068c71c(iVar12 + 0x24,&local_e0);
          }
          if (local_e0 != (uint ****)&DAT_80000000) {
            puVar17 = (undefined4 *)((uint)&local_e0 | 4);
            local_1ec = (uint ****)*puVar17;
            local_1e8 = (uint ****)puVar17[1];
            local_1e4 = (undefined1 *)puVar17[2];
            local_1e0 = puVar17[3];
            local_1dc = (uint ***)puVar17[4];
            local_1d8 = puVar17[5];
            local_1d4 = puVar17[6];
            uStack_1d0 = puVar17[7];
            uStack_1cc = puVar17[8];
            local_1c8 = puVar17[9];
            uStack_1c4 = puVar17[10];
            uStack_1c0 = puVar17[0xb];
            uStack_1bc = puVar17[0xc];
            uStack_1b8 = puVar17[0xd];
            local_1f0 = local_e0;
            FUN_00673d80();
            if (((DAT_01d50f88 < 5) &&
                ((DAT_01d4b4e4 - 1 < 2 ||
                 ((DAT_01d4b4e4 != 0 && (cVar9 = FUN_01aaafa8(&DAT_01d4b4dc), cVar9 != '\0')))))) &&
               (iVar12 = FUN_01aaa278(DAT_01d4b4dc), iVar12 != 0)) {
              if (*(uint *****)(DAT_01d4b4dc + 0x20) == (uint ****)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c04568);
              }
              local_d8 = *(uint *****)(DAT_01d4b4dc + 0x24);
              local_d4 = *(undefined4 **)(DAT_01d4b4dc + 0x28);
              local_84 = (uint ****)&local_130;
              local_88 = (uint ****)&local_e0;
              local_1ec = (uint ****)&DAT_00000001;
              local_d0 = (uint ****)0x0;
              local_80 = (uint ****)&DAT_01d2ea4c;
              local_12c = 99;
              local_130 = (uint ****)0x3d456f;
              local_1f0 = (uint ****)&local_88;
              local_1e8 = (uint ****)(DAT_01d4b4dc + 0x1c);
              local_e0 = *(uint *****)(DAT_01d4b4dc + 0x1c);
              local_dc = *(uint *****)(DAT_01d4b4dc + 0x20);
              FUN_00673dc0(&local_1f0);
            }
            else {
              iVar12 = DAT_01d4b4dc;
              if ((DAT_01d51ae9 == 0) && (DAT_01d51b00 != 0)) {
                local_14c = *(uint *****)(DAT_01d4b4dc + 0x14);
                local_148 = *(uint *****)(DAT_01d4b4dc + 0x18);
                local_150 = (uint ****)&DAT_00000001;
                DataMemoryBarrier(0xb);
                puVar17 = DAT_01d4edc8;
                pcVar2 = DAT_01d4edc4;
                if (DAT_01d51174 != 2) {
                  puVar17 = &DAT_01cfc5e0;
                  pcVar2 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
                }
                iVar25 = (*(code *)puVar17[3])(pcVar2,&local_150);
                if (iVar25 != 0) {
                  local_128 = (undefined4 *)(DAT_01d4b4dc + 0x1c);
                  if (*(uint *****)(DAT_01d4b4dc + 0x20) == (uint ****)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c04568);
                  }
                  local_1ec = (uint ****)&local_38;
                  local_d8 = *(uint *****)(DAT_01d4b4dc + 0x24);
                  local_d4 = *(undefined4 **)(DAT_01d4b4dc + 0x28);
                  local_1f0 = (uint ****)&local_e0;
                  local_130 = (uint ****)&local_1f0;
                  local_12c = 1;
                  local_34 = (uint ****)0x63;
                  local_d0 = (uint ****)0x0;
                  local_1e8 = (uint ****)&DAT_01d2ea4c;
                  local_38 = "BUG: `common_info` field was already initialized.";
                  local_88 = local_150;
                  local_84 = local_14c;
                  local_80 = local_148;
                  local_e0 = (uint ****)*local_128;
                  local_dc = *(uint *****)(DAT_01d4b4dc + 0x20);
                  FUN_01aaa328(iVar12,pcVar2,puVar17[4],&local_88,&local_130);
                }
              }
            }
          }
        }
        iVar12 = *(int *)(param_2[8] + 8);
        local_2a4 = &DAT_01d30848;
        if (iVar12 == 0) {
          local_124 = '\x02';
          iVar12 = *(int *)(param_2[9] + 0x20);
          iVar25 = iVar12 + 8;
LAB_00672ac8:
          cVar9 = '\x02';
        }
        else {
          uVar34 = thunk_FUN_01bee35a(param_2,param_2[8],0x2c0);
          piVar10 = (int *)((ulonglong)uVar34 >> 0x20);
          iVar25 = *piVar10;
          puVar27 = (uint *)((int)uVar34 + extraout_r2);
          uVar24 = piVar10[1];
          if (iVar25 == 0) {
            iVar12 = 0;
          }
          bVar22 = iVar25 != 0;
          if ((char)puVar27[4] == '\0') {
            FUN_019ae6ac(&local_88);
            *puVar27 = (uint)local_88;
            puVar27[1] = (uint)local_84;
            puVar27[2] = (uint)local_80;
            puVar27[3] = (uint)local_7c;
            *(undefined1 *)(puVar27 + 4) = 1;
          }
          local_d0 = (uint ****)*puVar27;
          local_cc = (uint ***)puVar27[1];
          local_c8 = puVar27[2];
          local_c4 = puVar27[3];
          *puVar27 = (int)local_d0 + 1;
          puVar27[1] = (int)local_cc + (uint)(0xfffffffe < local_d0);
          local_e0 = (uint ****)&DAT_0056d238;
          ppppuVar18 = (uint ****)0x0;
          local_d8 = (uint ****)0x0;
          local_d4 = (undefined4 *)0x0;
          local_dc = ppppuVar18;
          if (iVar25 != 0) {
            FUN_0067eac8(&local_e0,iVar12);
            ppppuVar18 = extraout_r1_01;
          }
          iVar28 = 0;
          for (; iVar12 != 0; iVar12 = iVar12 + -1) {
            if (!bVar22) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb0cc(&DAT_01d2ffe0,ppppuVar18);
            }
            if (iVar28 == 0) {
              iVar13 = 0;
              for (; uVar24 != 0; uVar24 = uVar24 - 1) {
                iVar25 = *(int *)(iVar25 + 0x270);
              }
              uVar24 = 0;
            }
            else {
              iVar13 = iVar25;
              iVar25 = iVar28;
            }
            iVar28 = iVar25;
            if (uVar24 < *(ushort *)(iVar25 + 0x26e)) {
              uVar26 = uVar24;
            }
            else {
              do {
                iVar25 = *(int *)(iVar28 + 0x268);
                if (iVar25 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_012fb0cc(&DAT_01d2fff0);
                }
                uVar26 = (uint)*(ushort *)(iVar28 + 0x26c);
                iVar13 = iVar13 + 1;
                iVar28 = iVar25;
              } while (*(ushort *)(iVar25 + 0x26e) <= uVar26);
            }
            if (iVar13 == 0) {
              uVar24 = uVar26 + 1;
              iVar28 = iVar25;
            }
            else {
              piVar10 = (int *)(iVar25 + uVar26 * 4 + 0x274);
              do {
                iVar28 = *piVar10;
                iVar13 = iVar13 + -1;
                piVar10 = (int *)(iVar28 + 0x270);
              } while (iVar13 != 0);
              uVar24 = 0;
            }
            local_1e8 = (uint ****)0x0;
            local_1f0 = (uint ****)0x0;
            local_7c = (undefined1 *)0x0;
            local_1ec = (uint ****)&DAT_00000001;
            local_80 = (uint ****)0x60000020;
            local_84 = (uint ****)&DAT_01c047fc;
            local_88 = (uint ****)&local_1f0;
            iVar13 = iVar25 + uVar26 * 8;
            iVar13 = FUN_012fb940(&local_88,*(int *)(iVar13 + 0x210) + 8,
                                  *(undefined4 *)(iVar13 + 0x214));
            ppppuVar4 = local_1e8;
            ppppuVar3 = local_1ec;
            ppppuVar18 = local_1f0;
            if (iVar13 != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_013073dc(&DAT_00533383,0x37,&local_104,&DAT_01c04814,&DAT_01d30334);
            }
            local_30 = (uint ****)0x0;
            local_38 = (char *)0x0;
            local_7c = (undefined1 *)0x0;
            local_34 = (uint ****)&DAT_00000001;
            local_80 = (uint ****)0x60000020;
            local_84 = (uint ****)&DAT_01c047fc;
            local_88 = (uint ****)&local_38;
            iVar25 = FUN_00700f8c(iVar25 + uVar26 * 0x30,&local_88);
            if (iVar25 != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_013073dc(&DAT_00533383,0x37,&local_104,&DAT_01c04814,&DAT_01d30334);
            }
            local_1f0 = (uint ****)local_38;
            local_1ec = local_34;
            local_1e8 = local_30;
            local_38 = (char *)ppppuVar18;
            local_34 = ppppuVar3;
            local_30 = ppppuVar4;
            FUN_0067d104(&local_88,&local_e0);
            ppppuVar18 = extraout_r1;
            if (local_88 != (uint ****)&DAT_80000000) {
              FUN_019bb7e0();
              ppppuVar18 = extraout_r1_00;
            }
            iVar25 = 0;
            bVar22 = true;
          }
          local_88 = local_e0;
          local_84 = local_dc;
          local_80 = local_d8;
          local_7c = (undefined1 *)local_d4;
          local_78 = (uint)local_d0;
          local_74 = local_cc;
          uStack_70 = local_c8;
          uStack_6c = local_c4;
          FUN_0067b1ac(&local_130);
          cVar9 = local_124;
          iVar12 = *(int *)(param_2[9] + 0x20);
          iVar25 = iVar12 + 8;
          if (local_124 == '\x02') goto LAB_00672ac8;
          FUN_0067e188(&local_e0,&local_130);
          local_1f0 = local_e0;
          local_1ec = local_dc;
          local_1e8 = local_d8;
          local_38 = (char *)CONCAT22(CONCAT11(local_38._3_1_,local_d4._3_1_),local_d4._1_2_);
        }
        local_2d8 = param_2 + 9;
        ppppuVar18 = (uint ****)&local_248;
        local_e0 = local_1f0;
        local_dc = local_1ec;
        local_d8 = local_1e8;
        local_d4 = (undefined4 *)CONCAT13(local_38._2_1_,CONCAT21((undefined2)local_38,cVar9));
        DataMemoryBarrier(0xb);
        if (*(int *)(iVar12 + 0x18) != 0) {
          FUN_0068c594(iVar25,&local_e0);
        }
        uVar24 = (uint)local_d4 & 0xff;
        if (uVar24 != 3) {
          local_88 = local_e0;
          local_84 = local_dc;
          local_80 = local_d8;
          local_7c = (undefined1 *)local_d4;
          if (uVar24 < 2) {
            FUN_0067e0f0(&local_88);
          }
          if (((DAT_01d50f88 < 5) &&
              ((DAT_01d4b4cc - 1 < 2 ||
               ((DAT_01d4b4cc != 0 && (cVar9 = FUN_01aaafa8(&DAT_01d4b4c4), cVar9 != '\0')))))) &&
             (iVar12 = FUN_01aaa278(DAT_01d4b4c4), iVar12 != 0)) {
            if (*(uint *****)(DAT_01d4b4c4 + 0x20) == (uint ****)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c04588);
            }
            local_34 = (uint ****)&local_110;
            local_d8 = *(uint *****)(DAT_01d4b4c4 + 0x24);
            local_d4 = *(undefined4 **)(DAT_01d4b4c4 + 0x28);
            local_fc = (uint ***)(DAT_01d4b4c4 + 0x1c);
            local_e0 = (uint ****)*local_fc;
            local_38 = (char *)&local_e0;
            local_104 = (uint ***)&local_38;
            local_d0 = (uint ****)0x0;
            local_100 = (uint ***)0x1;
            local_30 = (uint ****)&DAT_01d2ea4c;
            local_10c = 0x69;
            local_110 = (uint **)0x3d45d5;
            local_dc = *(uint *****)(DAT_01d4b4c4 + 0x20);
            FUN_01aaaecc(DAT_01d4b4c4,&local_104);
            iVar12 = DAT_01d4b4c4;
            uVar24 = (uint)DAT_01d51ae9;
            if ((uVar24 == 0) && (uVar24 = 0, DAT_01d51b00 != 0)) {
              local_1ec = *(uint *****)(DAT_01d4b4c4 + 0x14);
              local_1e8 = *(uint *****)(DAT_01d4b4c4 + 0x18);
              local_1f0 = (uint ****)&DAT_00000001;
              DataMemoryBarrier(0xb);
              puVar17 = DAT_01d4edc8;
              pcVar2 = DAT_01d4edc4;
              if (DAT_01d51174 != 2) {
                puVar17 = &DAT_01cfc5e0;
                pcVar2 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
              }
              iVar25 = (*(code *)puVar17[3])(pcVar2,&local_1f0);
              uVar24 = 0;
              if (iVar25 != 0) {
                local_88 = local_1f0;
                local_84 = local_1ec;
                local_80 = local_1e8;
                uVar24 = FUN_01aaa328(iVar12,pcVar2,puVar17[4],&local_88,&local_104);
              }
            }
          }
          else {
            iVar12 = DAT_01d4b4c4;
            uVar24 = (uint)DAT_01d51ae9;
            if ((uVar24 == 0) && (uVar24 = 0, DAT_01d51b00 != 0)) {
              local_11c = *(uint *****)(DAT_01d4b4c4 + 0x14);
              local_118 = *(uint *****)(DAT_01d4b4c4 + 0x18);
              local_120 = (uint ****)&DAT_00000001;
              DataMemoryBarrier(0xb);
              puVar17 = DAT_01d4edc8;
              pcVar2 = DAT_01d4edc4;
              if (DAT_01d51174 != 2) {
                puVar17 = &DAT_01cfc5e0;
                pcVar2 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
              }
              iVar25 = (*(code *)puVar17[3])(pcVar2,&local_120);
              uVar24 = 0;
              if (iVar25 != 0) {
                if (*(uint *****)(DAT_01d4b4c4 + 0x20) == (uint ****)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c04588);
                }
                local_1ec = &local_104;
                local_d8 = *(uint *****)(DAT_01d4b4c4 + 0x24);
                local_d4 = *(undefined4 **)(DAT_01d4b4c4 + 0x28);
                local_1f0 = (uint ****)&local_e0;
                local_38 = (char *)&local_1f0;
                local_d0 = (uint ****)0x0;
                local_34 = (uint ****)&DAT_00000001;
                local_100 = (uint ***)0x69;
                local_1e8 = (uint ****)&DAT_01d2ea4c;
                local_104 = (uint ***)0x3d45d5;
                local_88 = local_120;
                local_84 = local_11c;
                local_80 = local_118;
                local_e0 = *(uint *****)(DAT_01d4b4c4 + 0x1c);
                local_dc = *(uint *****)(DAT_01d4b4c4 + 0x20);
                local_30 = (uint ****)(DAT_01d4b4c4 + 0x1c);
                uVar24 = FUN_01aaa328(iVar12,pcVar2,puVar17[4],&local_88,&local_38);
              }
            }
          }
        }
        uVar34 = thunk_FUN_01bee35a(uVar24,0x2c0);
        puVar27 = (uint *)((int)uVar34 + (int)((ulonglong)uVar34 >> 0x20));
        if ((char)puVar27[4] == '\0') {
          FUN_019ae6ac(&local_e0);
          *puVar27 = (uint)local_e0;
          puVar27[1] = (uint)local_dc;
          puVar27[2] = (uint)local_d8;
          puVar27[3] = (uint)local_d4;
          *(undefined1 *)(puVar27 + 4) = 1;
        }
        local_1e0 = *puVar27;
        local_1dc = (uint ***)puVar27[1];
        local_1d8 = puVar27[2];
        local_1d4 = puVar27[3];
        *puVar27 = local_1e0 + 1;
        puVar27[1] = (int)local_1dc + (uint)(0xfffffffe < local_1e0);
        local_1f0 = (uint ****)&DAT_0056d238;
        local_1ec = (uint ****)0x0;
        local_1e8 = (uint ****)0x0;
        local_1e4 = (undefined1 *)0x0;
        if (local_240 == (uint ****)&DAT_80000000) {
          local_2a4 = (undefined4 *)((int)local_238 + local_234 + 1);
          ppppuVar18 = (uint ****)(~(uint)*local_238 & 0x80808080);
          local_e0 = (uint ****)local_238;
          local_d8 = (uint ****)(local_238 + 1);
          ppppuVar20 = local_22c;
        }
        else {
          local_e0 = (uint ****)0x0;
          local_d8 = (uint ****)local_1dc;
        }
        local_dc = ppppuVar18;
        local_d4 = local_2a4;
        local_d0 = ppppuVar20;
LAB_00672f00:
        uVar34 = FUN_006fc150(&local_e0);
        iVar12 = (int)((ulonglong)uVar34 >> 0x20);
        piVar10 = (int *)uVar34;
        if (iVar12 != 0) {
          local_108 = 0;
          local_10c = 4;
          local_110 = (uint **)0x0;
          FUN_006740b4(iVar12 + 0x28,1,0,&local_110);
          if (local_108 != 0) {
            FUN_01ac6460(&local_38,local_10c,local_108,",",1);
            local_88 = (uint ****)(iVar12 + 0x34);
            local_7c = &LAB_00632348;
            local_84 = (uint ****)FUN_006fc490;
            local_80 = (uint ****)&local_38;
            FUN_00664898(&local_104,&DAT_005848bb,&local_88);
            FUN_019bb7e0(local_38,local_34);
            pppuVar7 = local_fc;
            pppuVar6 = local_100;
            pppuVar5 = local_104;
            if (piVar10 == (int *)0x0) {
              local_f8 = (uint ****)&DAT_80000000;
            }
            else {
              local_30 = (uint ****)0x0;
              local_34 = (uint ****)&DAT_00000001;
              local_38 = (char *)0x0;
              local_7c = (undefined1 *)0x0;
              local_80 = (uint ****)0x60000020;
              local_84 = (uint ****)&DAT_01c04724;
              local_88 = (uint ****)&local_38;
              iVar12 = FUN_012fb940(&local_88,*piVar10 + 8,piVar10[1]);
              if (iVar12 != 0) {
                    /* WARNING: Subroutine does not return */
                FUN_013073dc(&DAT_00533383,0x37,&local_104,&DAT_01c0473c,&DAT_01d30334);
              }
              local_f8 = (uint ****)local_38;
              local_f4 = (uint ***)local_34;
              pppuStack_f0 = (uint ***)local_30;
            }
            uVar24 = FUN_0068fd90(local_1e0,local_1dc,local_1d8,local_1d4,&local_f8);
            if (local_1e8 == (uint ****)0x0) {
              FUN_00680120(&local_1f0,&local_1e0);
            }
            ppppuVar18 = local_1ec;
            ppppuVar20 = local_1f0;
            iVar12 = 0;
            bVar22 = false;
            uVar26 = uVar24;
            do {
              uVar26 = (uint)ppppuVar18 & uVar26;
              uVar32 = *(uint *)((int)ppppuVar20 + uVar26);
              uVar14 = uVar32 ^ (uVar24 >> 0x19) * 0x1010101;
              uVar14 = ~uVar14 & 0x80808080 & uVar14 + 0xfefefeff;
              while (uVar14 != 0) {
                uVar15 = uVar26 + ((uint)LZCOUNT(uVar14 << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 |
                                                 (uVar14 >> 0x10 & 0xff) << 8 | uVar14 >> 0x18) >> 3
                                  ) & (uint)ppppuVar18;
                iVar25 = FUN_0067c4d4(&local_f8,ppppuVar20 + uVar15 * -6 + -6);
                uVar14 = uVar14 - 1 & uVar14;
                if (iVar25 != 0) {
                  pppuVar23 = ppppuVar20[uVar15 * -6 + -3];
                  pppuVar29 = ppppuVar20[uVar15 * -6 + -2];
                    /* WARNING (jumptable): Read-only address (ram,0x0056d22c) is written */
                  ppppuVar20[uVar15 * -6 + -3] = pppuVar5;
                    /* WARNING (jumptable): Read-only address (ram,0x0056d230) is written */
                  ppppuVar20[uVar15 * -6 + -2] = pppuVar6;
                  ppppuVar20[uVar15 * -6 + -1] = pppuVar7;
                  if (local_f8 != (uint ****)&DAT_80000000) {
                    FUN_019bb7e0(local_f8,local_f4);
                  }
                  if (pppuVar23 != (uint ***)0x80000000) {
                    FUN_019bb7e0(pppuVar23,pppuVar29);
                  }
                  goto LAB_006731bc;
                }
              }
              uVar15 = uVar32 & 0x80808080;
              uVar14 = local_2dc;
              if (bVar22) {
LAB_0067312c:
                if ((uVar15 & uVar32 << 1) != 0) goto LAB_006731c8;
                bVar22 = true;
                local_2dc = uVar14;
              }
              else {
                if (uVar15 != 0) {
                  uVar14 = uVar26 + ((uint)LZCOUNT((uVar32 & 0x80) << 0x18 |
                                                   (uVar15 >> 8 & 0xff) << 0x10 |
                                                   (uVar15 >> 0x10 & 0xff) << 8 | uVar15 >> 0x18) >>
                                    3) & (uint)ppppuVar18;
                  goto LAB_0067312c;
                }
                bVar22 = false;
              }
              iVar12 = iVar12 + 4;
              uVar26 = iVar12 + uVar26;
            } while( true );
          }
          goto LAB_006731bc;
        }
        local_e0 = local_1f0;
        local_dc = local_1ec;
        local_d8 = local_1e8;
        local_d4 = (undefined4 *)local_1e4;
        local_d0 = (uint ****)local_1e0;
        local_cc = local_1dc;
        local_c8 = local_1d8;
        local_c4 = local_1d4;
        DataMemoryBarrier(0xb);
        if (*(int *)(*(int *)(*local_2d8 + 0x1c) + 0x28) != 0) {
          FUN_0068c424(*(int *)(*local_2d8 + 0x1c) + 8,&local_e0);
        }
        if (local_e0 != (uint ****)0x0) {
          local_88 = local_e0;
          local_84 = local_dc;
          local_80 = local_d8;
          local_7c = (undefined1 *)local_d4;
          local_78 = (uint)local_d0;
          local_74 = local_cc;
          uStack_70 = local_c8;
          uStack_6c = local_c4;
          if (local_e0 != (uint ****)0x0) {
            FUN_0067e2a4(&local_88);
            if ((DAT_01d50f88 < 5) &&
               (((DAT_01d4b4d8 - 1 < 2 ||
                 ((DAT_01d4b4d8 != 0 && (cVar9 = FUN_01aaafa8(&DAT_01d4b4d0), cVar9 != '\0')))) &&
                (iVar12 = FUN_01aaa278(DAT_01d4b4d0), iVar12 != 0)))) {
              if (*(uint *****)(DAT_01d4b4d0 + 0x20) == (uint ****)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c04598);
              }
              local_d8 = *(uint *****)(DAT_01d4b4d0 + 0x24);
              local_d4 = *(undefined4 **)(DAT_01d4b4d0 + 0x28);
              local_84 = &local_104;
              local_34 = (uint ****)&DAT_00000001;
              local_88 = (uint ****)&local_e0;
              local_d0 = (uint ****)0x0;
              local_80 = (uint ****)&DAT_01d2ea4c;
              local_100 = (uint ***)0x6f;
              local_104 = (uint ***)0x3d4609;
              local_e0 = *(uint *****)(DAT_01d4b4d0 + 0x1c);
              local_dc = *(uint *****)(DAT_01d4b4d0 + 0x20);
              local_38 = (char *)&local_88;
              local_30 = (uint ****)(DAT_01d4b4d0 + 0x1c);
              FUN_00673fb8(&local_38);
            }
            else {
              iVar12 = DAT_01d4b4d0;
              if ((DAT_01d51ae9 == 0) && (DAT_01d51b00 != 0)) {
                local_e8 = *(undefined4 *)(DAT_01d4b4d0 + 0x14);
                local_e4 = *(undefined4 *)(DAT_01d4b4d0 + 0x18);
                local_ec = 1;
                DataMemoryBarrier(0xb);
                puVar17 = DAT_01d4edc8;
                pcVar2 = DAT_01d4edc4;
                if (DAT_01d51174 != 2) {
                  puVar17 = &DAT_01cfc5e0;
                  pcVar2 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
                }
                iVar25 = (*(code *)puVar17[3])(pcVar2,&local_ec);
                if (iVar25 != 0) {
                  if (*(uint *****)(DAT_01d4b4d0 + 0x20) == (uint ****)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c04598);
                  }
                  local_84 = &local_104;
                  local_d8 = *(uint *****)(DAT_01d4b4d0 + 0x24);
                  local_d4 = *(undefined4 **)(DAT_01d4b4d0 + 0x28);
                  local_88 = (uint ****)&local_e0;
                  local_34 = (uint ****)&DAT_00000001;
                  local_d0 = (uint ****)0x0;
                  local_80 = (uint ****)&DAT_01d2ea4c;
                  local_100 = (uint ***)0x6f;
                  local_104 = (uint ***)0x3d4609;
                  local_e0 = *(uint *****)(DAT_01d4b4d0 + 0x1c);
                  local_dc = *(uint *****)(DAT_01d4b4d0 + 0x20);
                  local_38 = (char *)&local_88;
                  local_30 = (uint ****)(DAT_01d4b4d0 + 0x1c);
                  FUN_01aaa328(iVar12,pcVar2,puVar17[4],&local_ec,&local_38);
                }
              }
            }
          }
        }
        local_288 = local_23c;
        pppuStack_284 = local_238;
        iStack_280 = local_234;
        uStack_27c = uStack_230;
        ppppuStack_278 = local_22c;
        local_274 = local_228;
        uStack_270 = uStack_224;
        uStack_26c = uStack_220;
        uStack_268 = uStack_21c;
        uStack_264 = uStack_218;
        local_260 = local_214;
        ppppuStack_25c = ppppuStack_210;
        uStack_258 = uStack_20c;
        uStack_254 = uStack_208;
        uStack_250 = uStack_204;
        local_298 = local_200;
        uStack_294 = uStack_1fc;
        uStack_290 = uStack_1f8;
        uStack_28c = uStack_1f4;
        if (local_124 != '\x02') {
          FUN_0067e0f0(&local_130);
        }
        ppppuStack_174 = local_2c4;
      }
      *param_1 = ppppuVar30;
      param_1[1] = ppppuStack_174;
      param_1[2] = ppppuVar11;
      param_1[3] = local_288;
      param_1[4] = pppuStack_284;
      param_1[5] = iStack_280;
      param_1[6] = uStack_27c;
      param_1[7] = ppppuStack_278;
      param_1[8] = local_274;
      param_1[9] = uStack_270;
      param_1[10] = uStack_26c;
      param_1[0xb] = uStack_268;
      param_1[0xc] = uStack_264;
      param_1[0xd] = local_260;
      param_1[0xe] = ppppuStack_25c;
      param_1[0xf] = uStack_258;
      param_1[0x10] = uStack_254;
      param_1[0x11] = uStack_250;
      param_1[0x12] = local_298;
      param_1[0x13] = uStack_294;
      param_1[0x14] = uStack_290;
      param_1[0x15] = uStack_28c;
      uVar8 = 1;
      goto LAB_00673588;
    }
    uVar8 = 3;
  }
  *(undefined1 *)(param_2 + 0x12) = uVar8;
  param_1[2] = 0x80000002;
  uVar8 = 3;
LAB_00673588:
  *(undefined1 *)(param_2 + 0x15) = uVar8;
  return;
LAB_006731c8:
  uVar26 = (uint)*(char *)((int)ppppuVar20 + uVar14);
  if (-1 < (int)uVar26) {
    uVar26 = (uint)*ppppuVar20 & 0x80808080;
    uVar14 = LZCOUNT(((uint)*ppppuVar20 & 0x80) << 0x18 | (uVar26 >> 8 & 0xff) << 0x10 |
                     (uVar26 >> 0x10 & 0xff) << 8 | uVar26 >> 0x18);
    uVar26 = (uint)*(byte *)((int)ppppuVar20 + (uVar14 >> 3));
    uVar14 = uVar14 >> 3;
  }
  local_1e8 = (uint ****)((int)local_1e8 - (uVar26 & 1));
  bVar1 = (byte)(uVar24 >> 0x19);
  *(byte *)((int)ppppuVar20 + uVar14) = bVar1;
                    /* WARNING (jumptable): Read-only address (ram,0x0056d23c) is written */
  *(byte *)((int)ppppuVar20 + (uVar14 - 4 & (uint)ppppuVar18) + 4) = bVar1;
  local_1e4 = local_1e4 + 1;
  ppppuVar20[uVar14 * -6 + -6] = (uint ***)local_f8;
  ppppuVar20[uVar14 * -6 + -5] = local_f4;
  ppppuVar20[uVar14 * -6 + -4] = pppuStack_f0;
  ppppuVar20[uVar14 * -6 + -3] = pppuVar5;
  ppppuVar20[uVar14 * -6 + -1] = pppuVar7;
  ppppuVar20[uVar14 * -6 + -2] = pppuVar6;
LAB_006731bc:
  FUN_006a41c0(&local_110);
  goto LAB_00672f00;
}

