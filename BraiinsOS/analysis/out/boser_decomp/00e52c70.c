// FUN_00e52c70 @ 00e52c70 size=2320 calls_out=34 calls_in=1
// strings: BUG: request parameters cell was already initialized. | authoriza | boser::api::grpc::utilsopen/boser/boser/src/api/grpc/utils.rs | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | BUG: request parameters cell was already initialized.

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00e52c70(undefined4 *param_1,int param_2,undefined4 param_3)

{
  char *pcVar1;
  undefined1 uVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined *puVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined4 ****ppppuVar12;
  undefined4 ****ppppuVar13;
  undefined4 ****ppppuVar14;
  longlong lVar15;
  undefined8 uVar16;
  undefined4 ****local_278;
  undefined4 ****local_274;
  undefined4 ****local_260;
  undefined4 ****ppppuStack_25c;
  undefined4 *puStack_258;
  undefined4 uStack_254;
  int local_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 local_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 ****local_228;
  undefined4 ****ppppuStack_224;
  undefined4 ****ppppuStack_220;
  undefined4 ****ppppuStack_21c;
  undefined4 ****ppppuStack_218;
  undefined4 ****ppppuStack_214;
  undefined2 local_210;
  undefined1 local_20e;
  undefined1 auStack_204 [12];
  undefined4 ****local_1f8;
  undefined4 ****local_1f4;
  undefined4 *local_1f0;
  undefined4 uStack_1ec;
  int local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 local_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 ****local_1c0;
  undefined4 ****local_1bc;
  undefined4 ****local_1b8;
  undefined4 ****ppppuStack_1b4;
  undefined4 ****ppppuStack_1b0;
  undefined4 ****ppppuStack_1ac;
  undefined4 ****local_1a8;
  undefined4 ****ppppuStack_1a4;
  undefined4 *puStack_1a0;
  undefined4 uStack_19c;
  int local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 local_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 ****local_170;
  undefined4 ****ppppuStack_16c;
  undefined4 ****ppppuStack_168;
  undefined4 ****ppppuStack_164;
  undefined4 ****ppppuStack_160;
  undefined4 ****ppppuStack_15c;
  undefined4 ****local_158;
  undefined4 ****ppppuStack_154;
  undefined4 ****ppppuStack_150;
  undefined1 auStack_148 [12];
  int local_13c;
  undefined4 ****local_128;
  undefined4 ****local_124;
  undefined4 ****local_120;
  undefined4 ****local_11c;
  undefined4 ****ppppuStack_118;
  undefined4 ****ppppuStack_114;
  undefined4 ****ppppuStack_110;
  undefined4 ****ppppuStack_10c;
  undefined4 ****local_108;
  undefined4 ****ppppuStack_104;
  undefined4 *puStack_100;
  undefined4 uStack_fc;
  int local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 local_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 ****local_d0;
  undefined4 ****local_cc;
  undefined4 ****local_c8;
  undefined4 uStack_c4;
  char local_c0;
  undefined2 local_bf;
  undefined1 local_bd;
  undefined4 ****local_b8;
  undefined4 ****local_b4;
  undefined4 ****local_b0;
  undefined4 local_ac;
  char local_a8;
  undefined2 local_a7;
  undefined1 local_a5;
  undefined4 ****local_a0;
  undefined4 ****local_9c;
  undefined4 ****local_98;
  undefined4 local_94;
  undefined4 ****local_90;
  undefined4 ****local_8c;
  undefined4 ****local_88;
  undefined4 ****local_84;
  undefined4 ****local_80;
  undefined4 ****ppppuStack_7c;
  undefined4 ****local_78;
  undefined4 ****ppppuStack_74;
  undefined4 *puStack_70;
  undefined4 uStack_6c;
  int local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 ****local_40;
  int iStack_3c;
  undefined4 ****local_38;
  undefined *local_34;
  undefined4 ****ppppuStack_30;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0xcc)) {
  case 0:
    *(undefined1 *)(param_2 + 0xcd) = 0;
    iVar6 = *(int *)(param_2 + 200);
    FUN_01bed4e2(param_2 + 0x60,param_2,0x60);
    piVar4 = (int *)FUN_00a52660(*(undefined4 *)(param_2 + 0xb8));
    if (piVar4 != (int *)0x0) {
      FUN_0096b858(&local_a0,param_2 + 0xa0);
      uVar2 = local_a0._0_1_;
      uVar10 = (uint)local_a0 & 0xff;
      if (uVar10 == 6) {
        FUN_00e0fe5c(local_9c);
      }
      else {
        FUN_01bed4e2((uint)&local_128 | 1,(uint)&local_a0 | 1,0x17);
        local_128 = (undefined4 ****)CONCAT31(local_128._1_3_,uVar2);
        if (uVar10 == 5) {
          local_8c = (undefined4 ****)0x0;
          local_88 = local_124;
          local_80 = local_11c;
          if (local_124 == (undefined4 ****)0x0) {
            local_80 = (undefined4 ****)0x0;
          }
          local_98 = local_124;
          local_a0 = local_124;
          if (local_124 != (undefined4 ****)0x0) {
            local_a0 = (undefined4 ****)&DAT_00000001;
          }
          local_84 = local_120;
          local_94 = local_120;
          local_9c = (undefined4 ****)0x0;
          local_90 = local_a0;
          FUN_00fea674(auStack_148,&local_a0);
          if (local_13c != 0) {
            FUN_0067b1ac(&local_a0,auStack_148);
            local_d0 = local_a0;
            local_cc = local_9c;
            local_c8 = local_98;
            cVar3 = (char)local_94;
            local_210 = local_94._1_2_;
            local_20e = local_94._3_1_;
            FUN_00e0febc(&local_128);
            if (cVar3 != '\x02') {
              local_a0 = local_d0;
              local_9c = local_cc;
              local_98 = local_c8;
              local_94 = (undefined4 ****)CONCAT31(CONCAT12(local_20e,local_210),cVar3);
              DataMemoryBarrier(0xb);
              if (*(int *)(*piVar4 + 0x18) != 0) {
                FUN_00b065ec(*piVar4 + 8,&local_a0);
              }
              if (((uint)local_94 & 0xff) != 2) {
                local_128 = local_a0;
                local_124 = local_9c;
                local_120 = local_98;
                local_11c = local_94;
                FUN_019cf348();
                if ((DAT_01d50f88 < 5) &&
                   (((DAT_01d4c488 - 1 < 2 ||
                     ((DAT_01d4c488 != 0 && (cVar3 = FUN_01aaafa8(&DAT_01d4c480), cVar3 != '\0'))))
                    && (iVar5 = FUN_01aaa278(DAT_01d4c480), iVar5 != 0)))) {
                  local_1f0 = (undefined4 *)(DAT_01d4c480 + 0x1c);
                  if (*(undefined4 *****)(DAT_01d4c480 + 0x20) == (undefined4 ****)0x0) {
LAB_00e53584:
                    /* WARNING: Subroutine does not return */
                    FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c17708);
                  }
                  local_98 = *(undefined4 *****)(DAT_01d4c480 + 0x24);
                  local_94 = *(undefined4 *****)(DAT_01d4c480 + 0x28);
                  local_124 = &local_1c0;
                  local_1f8 = &local_128;
                  local_1f4 = (undefined4 ****)&DAT_00000001;
                  local_90 = (undefined4 ****)0x0;
                  local_120 = (undefined4 ****)&DAT_01d2ea4c;
                  local_1bc = (undefined4 ****)0x6b;
                  local_1c0 = (undefined4 ****)0x3fe987;
                  local_128 = &local_a0;
                  local_a0 = (undefined4 ****)*local_1f0;
                  local_9c = *(undefined4 *****)(DAT_01d4c480 + 0x20);
                  FUN_00e0ff40(&local_1f8);
                }
                else {
                  iVar5 = DAT_01d4c480;
                  if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
                    local_b4 = *(undefined4 *****)(DAT_01d4c480 + 0x14);
                    local_b0 = *(undefined4 *****)(DAT_01d4c480 + 0x18);
                    local_b8 = (undefined4 ****)&DAT_00000001;
                    DataMemoryBarrier(0xb);
                    puVar11 = DAT_01d4edc8;
                    pcVar1 = DAT_01d4edc4;
                    if (DAT_01d51174 != 2) {
                      puVar11 = &DAT_01cfc5e0;
                      pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
                    }
                    iVar7 = (*(code *)puVar11[3])(pcVar1,&local_b8);
                    if (iVar7 != 0) {
                      local_1b8 = (undefined4 ****)(DAT_01d4c480 + 0x1c);
                      if (*(undefined4 *****)(DAT_01d4c480 + 0x20) == (undefined4 ****)0x0)
                      goto LAB_00e53584;
                      local_1c0 = &local_1f8;
                      local_98 = *(undefined4 *****)(DAT_01d4c480 + 0x24);
                      local_1f4 = &local_38;
                      local_94 = *(undefined4 *****)(DAT_01d4c480 + 0x28);
                      local_90 = (undefined4 ****)0x0;
                      local_1bc = (undefined4 ****)0x1;
                      local_1f0 = (undefined4 *)&DAT_01d2ea4c;
                      local_34 = (undefined *)0x6b;
                      local_38 = (undefined4 ****)0x3fe987;
                      local_128 = local_b8;
                      local_124 = local_b4;
                      local_120 = local_b0;
                      local_1f8 = &local_a0;
                      local_a0 = (undefined4 ****)*local_1b8;
                      local_9c = *(undefined4 *****)(DAT_01d4c480 + 0x20);
                      FUN_01aaa328(iVar5,pcVar1,puVar11[4],&local_128,&local_1c0);
                    }
                  }
                }
              }
            }
            goto LAB_00e52f24;
          }
          FUN_0165a1f4(auStack_148);
        }
        FUN_00e0febc(&local_128);
      }
    }
LAB_00e52f24:
    FUN_006666fc(&local_210,*(undefined4 *)(param_2 + 0xa4),*(undefined4 *)(param_2 + 0xa8));
    FUN_006666fc(auStack_204,*(undefined4 *)(param_2 + 0xb0),*(undefined4 *)(param_2 + 0xb4));
    uVar8 = FUN_00b83314(*(int *)(iVar6 + 4) + 8,&local_210,auStack_204);
    puVar9 = &DAT_01c13ac8;
    *(undefined4 *)(param_2 + 0xc0) = uVar8;
    *(undefined **)(param_2 + 0xc4) = &DAT_01c13ac8;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c173d4);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c173d4);
  case 3:
    uVar8 = *(undefined4 *)(param_2 + 0xc0);
    puVar9 = *(undefined **)(param_2 + 0xc4);
  }
  (**(code **)(puVar9 + 0xc))(&local_a0,uVar8,param_3);
  ppppuVar14 = local_94;
  if (local_94 == (undefined4 ****)&DAT_00000003) {
    *param_1 = 4;
    param_1[1] = 0;
    uVar2 = 3;
    goto LAB_00e5316c;
  }
  local_158 = local_a0;
  ppppuStack_154 = local_9c;
  ppppuStack_150 = local_98;
  local_170 = local_90;
  ppppuStack_16c = local_8c;
  ppppuStack_168 = local_88;
  ppppuStack_164 = local_84;
  ppppuStack_160 = local_80;
  ppppuStack_15c = ppppuStack_7c;
  local_1a8 = local_78;
  ppppuStack_1a4 = ppppuStack_74;
  puStack_1a0 = puStack_70;
  uStack_19c = uStack_6c;
  local_198 = local_68;
  uStack_194 = uStack_64;
  uStack_190 = uStack_60;
  uStack_18c = uStack_5c;
  uStack_188 = uStack_58;
  local_184 = local_54;
  uStack_180 = uStack_50;
  uStack_17c = uStack_4c;
  uStack_178 = uStack_48;
  uStack_174 = uStack_44;
  FUN_01139b38(*(undefined4 *)(param_2 + 0xc0),*(undefined4 *)(param_2 + 0xc4));
  if (ppppuVar14 == (undefined4 ****)0x2) {
    local_1c0 = local_170;
    local_1bc = ppppuStack_16c;
    local_1b8 = ppppuStack_168;
    ppppuStack_1b4 = ppppuStack_164;
    ppppuStack_1b0 = ppppuStack_160;
    ppppuStack_1ac = ppppuStack_15c;
LAB_00e5302c:
    local_128 = local_1c0;
    local_124 = local_1bc;
    local_120 = local_1b8;
    local_11c = ppppuStack_1b4;
    ppppuStack_118 = ppppuStack_1b0;
    ppppuStack_114 = ppppuStack_1ac;
    local_b8 = &local_d0;
    local_c8 = (undefined4 ****)0x0;
    local_d0 = (undefined4 ****)0x0;
    local_ac = 0;
    local_cc = (undefined4 ****)0x1;
    local_b0 = (undefined4 ****)0x60000020;
    local_b4 = (undefined4 ****)&DAT_01c17420;
    iVar6 = FUN_00b81f38(&local_128,&local_b8);
    if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_013073dc(&DAT_00533383,0x37,&local_38,&DAT_01c17458,&DAT_01d30334);
    }
    local_38 = local_d0;
    local_34 = (undefined *)local_cc;
    ppppuStack_30 = local_c8;
    FUN_01a70fd4(&local_a0,0x10);
    if ((undefined1 *)0x3 < (undefined1 *)((int)local_128 + 0x7fffffea)) {
      FUN_00df4ae4(&local_1c0);
    }
    local_278 = local_98;
    local_274 = local_94;
    local_228 = local_90;
    ppppuStack_224 = local_8c;
    ppppuStack_220 = local_88;
    ppppuStack_21c = local_84;
    ppppuStack_218 = local_80;
    ppppuStack_214 = ppppuStack_7c;
    local_260 = local_78;
    ppppuStack_25c = ppppuStack_74;
    puStack_258 = puStack_70;
    uStack_254 = uStack_6c;
    local_250 = local_68;
    uStack_24c = uStack_64;
    uStack_248 = uStack_60;
    uStack_244 = uStack_5c;
    uStack_240 = uStack_58;
    local_23c = local_54;
    uStack_238 = uStack_50;
    uStack_234 = uStack_4c;
    uStack_230 = uStack_48;
    uStack_22c = uStack_44;
    ppppuVar12 = local_a0;
    ppppuVar13 = local_9c;
    ppppuVar14 = local_40;
    iVar6 = iStack_3c;
  }
  else {
    local_a0 = local_158;
    local_9c = ppppuStack_154;
    local_98 = ppppuStack_150;
    local_90 = local_170;
    local_8c = ppppuStack_16c;
    local_88 = ppppuStack_168;
    local_84 = ppppuStack_164;
    local_80 = ppppuStack_160;
    ppppuStack_7c = ppppuStack_15c;
    local_78 = local_1a8;
    ppppuStack_74 = ppppuStack_1a4;
    puStack_70 = puStack_1a0;
    uStack_6c = uStack_19c;
    local_68 = local_198;
    uStack_64 = uStack_194;
    uStack_60 = uStack_190;
    uStack_5c = uStack_18c;
    uStack_58 = uStack_188;
    local_54 = local_184;
    uStack_50 = uStack_180;
    uStack_4c = uStack_17c;
    uStack_48 = uStack_178;
    uStack_44 = uStack_174;
    ppppuVar12 = (undefined4 ****)0x0;
    if (ppppuStack_160 != (undefined4 ****)&DAT_80000001) {
      ppppuVar12 = &local_80;
    }
    local_94 = ppppuVar14;
    lVar15 = FUN_012f2b0c(&local_68,ppppuVar12);
    ppppuVar14 = (undefined4 ****)((ulonglong)lVar15 >> 0x20);
    if (lVar15 < 0) {
      uVar8 = 0;
LAB_00e531e0:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar8,ppppuVar14);
    }
    if (ppppuVar14 == (undefined4 ****)0x0) {
      puVar9 = (undefined *)0x1;
      ppppuVar13 = (undefined4 ****)0x0;
    }
    else {
      uVar8 = 1;
      puVar9 = (undefined *)FUN_01298504(ppppuVar14,1);
      if (puVar9 == (undefined *)0x0) goto LAB_00e531e0;
      ppppuVar13 = ppppuVar14;
    }
    FUN_01bed4e2(puVar9,(int)lVar15,ppppuVar14);
    local_ac = 0xe10;
    local_b8 = ppppuVar13;
    local_b4 = (undefined4 ****)puVar9;
    local_b0 = ppppuVar14;
    FUN_00f07f58(&local_128,&local_b8);
    uVar16 = FUN_012f2b0c(&local_68,ppppuVar12);
    FUN_01ac61a4(&local_b8,(int)uVar16,(int)((ulonglong)uVar16 >> 0x20));
    if (local_a8 == '\x02') {
                    /* WARNING: Subroutine does not return */
      FUN_013073dc("BUG: failed to create authentication metadata value",0x33,&local_38,
                   &DAT_01c17438,&DAT_01c173e4);
    }
    local_d0 = local_b8;
    local_cc = local_b4;
    local_c8 = local_b0;
    uStack_c4 = local_ac;
    local_bd = local_a5;
    local_bf = local_a7;
    local_c0 = local_a8;
    FUN_01a68498(&local_b8,&local_128,"authoriza",0xd,&local_d0);
    if (local_a8 != '\x02') {
      (*(code *)local_b8[4])(&local_ac,local_b4,local_b0);
    }
    local_274 = local_124;
    ppppuVar14 = local_128;
    local_1c0 = local_120;
    local_1bc = local_11c;
    local_1b8 = ppppuStack_118;
    ppppuStack_1b4 = ppppuStack_114;
    ppppuStack_1b0 = ppppuStack_110;
    ppppuStack_1ac = ppppuStack_10c;
    local_1f8 = local_108;
    local_1f4 = ppppuStack_104;
    local_1f0 = puStack_100;
    uStack_1ec = uStack_fc;
    local_1e8 = local_f8;
    uStack_1e4 = uStack_f4;
    uStack_1e0 = uStack_f0;
    uStack_1dc = uStack_ec;
    uStack_1d8 = uStack_e8;
    local_1d4 = local_e4;
    uStack_1d0 = uStack_e0;
    uStack_1cc = uStack_dc;
    uStack_1c8 = uStack_d8;
    uStack_1c4 = uStack_d4;
    FUN_00dd1234(&local_a0);
    if (ppppuVar14 == (undefined4 ****)&DAT_00000003 && local_274 == (undefined4 ****)0x0)
    goto LAB_00e5302c;
    local_278 = ppppuVar14;
    ppppuVar13 = (undefined4 ****)0x0;
    ppppuVar12 = (undefined4 ****)&DAT_00000003;
    local_228 = local_1c0;
    ppppuStack_224 = local_1bc;
    ppppuStack_220 = local_1b8;
    ppppuStack_21c = ppppuStack_1b4;
    ppppuStack_218 = ppppuStack_1b0;
    ppppuStack_214 = ppppuStack_1ac;
    local_260 = local_1f8;
    ppppuStack_25c = local_1f4;
    puStack_258 = local_1f0;
    uStack_254 = uStack_1ec;
    local_250 = local_1e8;
    uStack_24c = uStack_1e4;
    uStack_248 = uStack_1e0;
    uStack_244 = uStack_1dc;
    uStack_240 = uStack_1d8;
    local_23c = local_1d4;
    uStack_238 = uStack_1d0;
    uStack_234 = uStack_1cc;
    uStack_230 = uStack_1c8;
    uStack_22c = uStack_1c4;
    iVar6 = param_2;
  }
  FUN_00e34abc(param_2 + 0x60);
  param_1[2] = local_278;
  param_1[3] = local_274;
  *param_1 = ppppuVar12;
  param_1[1] = ppppuVar13;
  param_1[4] = local_228;
  param_1[5] = ppppuStack_224;
  param_1[6] = ppppuStack_220;
  param_1[7] = ppppuStack_21c;
  param_1[8] = ppppuStack_218;
  param_1[9] = ppppuStack_214;
  param_1[10] = local_260;
  param_1[0xb] = ppppuStack_25c;
  param_1[0xc] = puStack_258;
  param_1[0xd] = uStack_254;
  param_1[0xe] = local_250;
  param_1[0xf] = uStack_24c;
  param_1[0x10] = uStack_248;
  param_1[0x11] = uStack_244;
  param_1[0x12] = uStack_240;
  param_1[0x13] = local_23c;
  param_1[0x14] = uStack_238;
  param_1[0x15] = uStack_234;
  param_1[0x16] = uStack_230;
  param_1[0x17] = uStack_22c;
  uVar2 = 1;
  param_1[0x18] = ppppuVar14;
  param_1[0x19] = iVar6;
LAB_00e5316c:
  *(undefined1 *)(param_2 + 0xcc) = uVar2;
  return;
}

