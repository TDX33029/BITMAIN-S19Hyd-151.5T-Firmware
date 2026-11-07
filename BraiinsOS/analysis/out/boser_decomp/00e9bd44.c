// FUN_00e9bd44 @ 00e9bd44 size=3872 calls_out=35 calls_in=1
// strings: BUG: request parameters cell was already initialized. | boser::api::grpc::utilsopen/boser/boser/src/api/grpc/utils.rs | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | BUG: request parameters cell was already initialized. | boser::api::grpc::utilsopen/boser/boser/src/api/grpc/utils.rs

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00e9bd44(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined3 uVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 ****ppppuVar4;
  undefined4 ****ppppuVar5;
  undefined4 ****ppppuVar6;
  undefined1 uVar7;
  char cVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  undefined4 ****ppppuVar13;
  undefined4 ****ppppuVar14;
  undefined4 ****ppppuVar15;
  undefined4 ****ppppuVar16;
  undefined4 ****ppppuVar17;
  undefined4 *puVar18;
  undefined *puVar19;
  undefined4 uVar20;
  int *piVar21;
  undefined4 ****ppppuVar22;
  undefined4 ****local_274;
  undefined4 ****local_270;
  undefined4 ****local_26c;
  undefined4 ****local_268;
  undefined4 ****local_264;
  undefined4 ****local_260;
  uint local_25c;
  undefined4 ****local_258;
  undefined4 ****local_254;
  undefined4 ****local_24c;
  undefined4 ****local_244;
  undefined4 ****local_240;
  undefined4 ****local_23c;
  undefined4 ****local_238;
  undefined4 ****local_234;
  undefined4 ****local_230;
  undefined4 ****local_22c;
  undefined4 ****local_224;
  undefined4 ****local_220;
  undefined4 ****local_214;
  undefined4 ****local_210;
  undefined4 ****local_20c;
  undefined4 ****local_208;
  undefined4 ****ppppuStack_204;
  undefined4 ****ppppuStack_200;
  undefined4 ****ppppuStack_1fc;
  undefined4 ****local_1f8;
  undefined4 uStack_1f4;
  undefined4 ****ppppuStack_1f0;
  undefined4 ****ppppuStack_1ec;
  undefined4 ****local_1e8;
  int iStack_1e4;
  undefined4 ****ppppuStack_1e0;
  undefined4 ****ppppuStack_1dc;
  undefined4 ****local_188;
  int local_184;
  undefined4 ****local_180;
  undefined4 ****ppppuStack_17c;
  undefined4 ****local_178;
  int iStack_174;
  undefined4 ****ppppuStack_170;
  undefined4 ****ppppuStack_16c;
  undefined2 local_164;
  undefined1 local_162;
  undefined4 ****local_160;
  undefined4 ****local_15c;
  undefined4 ****local_158;
  undefined4 ****local_150;
  undefined4 ****local_14c;
  undefined4 ****local_148;
  undefined4 ***local_140;
  undefined4 local_13c;
  undefined4 ****local_138;
  undefined4 ****local_134;
  undefined4 ****local_130;
  undefined4 ****local_12c;
  undefined4 local_120;
  undefined1 uStack_11c;
  undefined1 uStack_11b;
  undefined2 uStack_11a;
  undefined4 ****local_118;
  undefined4 ****local_114;
  undefined4 ****local_110;
  undefined4 ****local_10c;
  undefined1 auStack_108 [12];
  int local_fc;
  undefined4 ****local_e8;
  undefined4 ****local_e4;
  undefined4 ****local_e0;
  undefined4 local_dc;
  undefined4 ****local_d8;
  undefined4 ****local_d4;
  undefined4 ****local_d0;
  undefined4 ****local_cc;
  undefined4 ****local_c8;
  undefined4 ****local_c4;
  undefined4 ****local_c0;
  undefined4 ****local_bc;
  undefined4 ****local_b8;
  undefined4 ****local_b4;
  undefined4 ****local_b0;
  undefined4 ****local_ac;
  undefined4 ****local_a8;
  undefined4 ****local_a4;
  undefined4 ****local_a0;
  undefined4 ****local_9c;
  undefined4 ****local_98;
  undefined4 ****local_94;
  undefined4 ****local_90;
  int iStack_8c;
  undefined4 ****ppppuStack_88;
  undefined4 ****ppppuStack_84;
  undefined1 local_64;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0xa4)) {
  case 0:
    *(undefined1 *)(param_2 + 0xa5) = 0;
    piVar21 = *(int **)(param_2 + 0xa0);
    FUN_01bed4e2(param_2 + 0x48,param_2,0x48);
    piVar9 = (int *)FUN_00a52660(*(undefined4 *)(param_2 + 0x88));
    if (piVar9 != (int *)0x0) {
      local_d8 = (undefined4 ****)&DAT_80000000;
      local_dc = (undefined4 ****)0x0;
      local_e4 = (undefined4 ****)0x0;
      local_e8 = (undefined4 ****)0x0;
      FUN_0196ac88(&local_120,&local_e8);
      cVar8 = (char)local_120;
      if ((char)local_120 == '\x06') {
        FUN_00e0fe5c(CONCAT22(uStack_11a,CONCAT11(uStack_11b,uStack_11c)));
      }
      else {
        FUN_01bed4e2((uint)&local_138 | 1,(uint)&local_120 | 1,0x17);
        local_138 = (undefined4 ****)CONCAT31(local_138._1_3_,cVar8);
        if (cVar8 == '\x05') {
          local_d4 = (undefined4 ****)0x0;
          local_d0 = local_134;
          local_c8 = local_12c;
          if (local_134 == (undefined4 ****)0x0) {
            local_c8 = local_134;
          }
          local_e0 = local_134;
          local_e8 = local_134;
          if (local_134 != (undefined4 ****)0x0) {
            local_e8 = (undefined4 ****)&DAT_00000001;
          }
          local_cc = local_130;
          local_dc = local_130;
          local_e4 = (undefined4 ****)0x0;
          local_d8 = local_e8;
          FUN_00fea674(auStack_108,&local_e8);
          if (local_fc != 0) {
            FUN_0067b1ac(&local_e8,auStack_108);
            local_160 = local_e8;
            local_15c = local_e4;
            local_158 = local_e0;
            cVar8 = (char)local_dc;
            local_164 = local_dc._1_2_;
            local_162 = local_dc._3_1_;
            FUN_00e0febc(&local_138);
            if (cVar8 != '\x02') {
              local_e8 = local_160;
              local_e4 = local_15c;
              local_e0 = local_158;
              local_dc = (undefined4 ****)CONCAT31(CONCAT12(local_162,local_164),cVar8);
              DataMemoryBarrier(0xb);
              if (*(int *)(*piVar9 + 0x18) != 0) {
                FUN_00b065ec(*piVar9 + 8,&local_e8);
              }
              if ((char)local_dc != '\x02') {
                local_120._0_1_ = (char)local_e8;
                local_120._1_1_ = (undefined1)((uint)local_e8 >> 8);
                local_120._2_1_ = (undefined1)((uint)local_e8 >> 0x10);
                local_120._3_1_ = (undefined1)((uint)local_e8 >> 0x18);
                uStack_11c = SUB41(local_e4,0);
                uStack_11b = (undefined1)((uint)local_e4 >> 8);
                uStack_11a = (undefined2)((uint)local_e4 >> 0x10);
                local_118 = local_e0;
                local_114 = local_dc;
                FUN_019cf348(&local_120);
                if ((DAT_01d50f88 < 5) &&
                   (((DAT_01d4c488 - 1 < 2 ||
                     ((DAT_01d4c488 != 0 && (cVar8 = FUN_01aaafa8(&DAT_01d4c480), cVar8 != '\0'))))
                    && (iVar10 = FUN_01aaa278(DAT_01d4c480), iVar10 != 0)))) {
                  local_130 = (undefined4 ****)(DAT_01d4c480 + 0x1c);
                  if (*(undefined4 *****)(DAT_01d4c480 + 0x20) == (undefined4 ****)0x0) {
LAB_00e9cc90:
                    /* WARNING: Subroutine does not return */
                    FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c17708);
                  }
                  local_e0 = *(undefined4 *****)(DAT_01d4c480 + 0x24);
                  local_dc = *(undefined4 *****)(DAT_01d4c480 + 0x28);
                  uStack_11c = SUB41(&local_188,0);
                  uStack_11b = (undefined1)((uint)&local_188 >> 8);
                  uStack_11a = (undefined2)((uint)&local_188 >> 0x10);
                  local_134 = (undefined4 ****)&DAT_00000001;
                  local_120._0_1_ = (char)&local_e8;
                  local_120._1_1_ = (undefined1)((uint)&local_e8 >> 8);
                  local_120._2_1_ = (undefined1)((uint)&local_e8 >> 0x10);
                  local_120._3_1_ = (undefined1)((uint)&local_e8 >> 0x18);
                  local_d8 = (undefined4 ****)0x0;
                  local_118 = (undefined4 ****)&DAT_01d2ea4c;
                  local_184 = 0x6b;
                  local_188 = (undefined4 ****)0x3fe987;
                  local_138 = (undefined4 ****)&local_120;
                  local_e8 = (undefined4 ****)*local_130;
                  local_e4 = *(undefined4 *****)(DAT_01d4c480 + 0x20);
                  FUN_00e0ff40(&local_138);
                }
                else {
                  iVar10 = DAT_01d4c480;
                  if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
                    local_14c = *(undefined4 *****)(DAT_01d4c480 + 0x14);
                    local_148 = *(undefined4 *****)(DAT_01d4c480 + 0x18);
                    local_150 = (undefined4 ****)&DAT_00000001;
                    DataMemoryBarrier(0xb);
                    puVar18 = DAT_01d4edc8;
                    pcVar3 = DAT_01d4edc4;
                    if (DAT_01d51174 != 2) {
                      puVar18 = &DAT_01cfc5e0;
                      pcVar3 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
                    }
                    iVar11 = (*(code *)puVar18[3])(pcVar3,&local_150);
                    if (iVar11 != 0) {
                      local_180 = (undefined4 ****)(DAT_01d4c480 + 0x1c);
                      if (*(undefined4 *****)(DAT_01d4c480 + 0x20) == (undefined4 ****)0x0)
                      goto LAB_00e9cc90;
                      local_138 = &local_e8;
                      local_188 = &local_138;
                      local_d8 = (undefined4 ****)0x0;
                      local_e0 = *(undefined4 *****)(DAT_01d4c480 + 0x24);
                      local_134 = &local_140;
                      local_dc = *(undefined4 *****)(DAT_01d4c480 + 0x28);
                      local_184 = 1;
                      local_130 = (undefined4 ****)&DAT_01d2ea4c;
                      local_13c = 0x6b;
                      local_140 = (undefined4 ***)0x3fe987;
                      local_120._0_1_ = (char)local_150;
                      local_120._1_1_ = (undefined1)((uint)local_150 >> 8);
                      local_120._2_1_ = (undefined1)((uint)local_150 >> 0x10);
                      local_120._3_1_ = (undefined1)((uint)local_150 >> 0x18);
                      uStack_11c = SUB41(local_14c,0);
                      uStack_11b = (undefined1)((uint)local_14c >> 8);
                      uStack_11a = (undefined2)((uint)local_14c >> 0x10);
                      local_118 = local_148;
                      local_e8 = (undefined4 ****)*local_180;
                      local_e4 = *(undefined4 *****)(DAT_01d4c480 + 0x20);
                      FUN_01aaa328(iVar10,pcVar3,puVar18[4],&local_120,&local_188);
                    }
                  }
                }
              }
            }
            goto LAB_00e9c044;
          }
          FUN_0165a1f4(auStack_108);
        }
        FUN_00e0febc(&local_138);
      }
    }
LAB_00e9c044:
    *(undefined1 *)(param_2 + 0x9c) = 0;
    *(int **)(param_2 + 0x90) = piVar21;
LAB_00e9c058:
    local_64 = 0;
    local_e8 = (undefined4 ****)(*piVar21 + 8);
    iVar10 = thunk_FUN_01be5118(0xbc);
    if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0xbc);
    }
    FUN_01bed4e2(iVar10,&local_e8,0xbc);
    puVar19 = &DAT_01c134b0;
    *(int *)(param_2 + 0x94) = iVar10;
    *(undefined **)(param_2 + 0x98) = &DAT_01c134b0;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c17dcc);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c17dcc);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x9c)) {
    case 0:
      piVar21 = *(int **)(param_2 + 0x90);
      goto LAB_00e9c058;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c181ac);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c181ac);
    case 3:
      iVar10 = *(int *)(param_2 + 0x94);
      puVar19 = *(undefined **)(param_2 + 0x98);
    }
  }
  local_224 = (undefined4 ****)(param_2 + 0x9c);
  (**(code **)(puVar19 + 0xc))(&local_e8,iVar10,param_3);
  ppppuVar13 = local_b4;
  ppppuVar6 = local_b8;
  local_258 = local_bc;
  local_254 = local_cc;
  ppppuVar5 = local_d0;
  ppppuVar4 = local_d4;
  ppppuVar22 = local_d8;
  ppppuVar17 = local_dc;
  ppppuVar14 = local_e0;
  ppppuVar16 = local_e4;
  ppppuVar15 = local_e8;
  if (local_e8 == (undefined4 ****)&DAT_80000001) {
    *(undefined1 *)local_224 = 3;
LAB_00e9c0c8:
    *param_1 = 4;
    param_1[1] = 0;
    uVar7 = 3;
    goto LAB_00e9c994;
  }
  local_234 = local_e8;
  local_20c = local_d4;
  local_230 = local_d0;
  local_244 = local_b0;
  local_214 = local_e4;
  local_23c = local_e0;
  local_22c = local_dc;
  local_25c = (uint)local_b4 >> 0x18;
  local_210 = local_c0;
  local_238 = local_c4;
  local_240 = local_c8;
  local_220 = local_ac;
  uVar1 = local_b8._1_3_;
  FUN_01139b38(*(undefined4 *)(param_2 + 0x94),*(undefined4 *)(param_2 + 0x98));
  if (ppppuVar15 == (undefined4 ****)&DAT_80000000) {
    local_138 = &local_150;
    local_110 = ppppuVar4;
    local_118 = ppppuVar17;
    uStack_11c = SUB41(ppppuVar14,0);
    uStack_11b = (undefined1)((uint)ppppuVar14 >> 8);
    uStack_11a = (undefined2)((uint)ppppuVar14 >> 0x10);
    local_120._0_1_ = (char)ppppuVar16;
    local_120._1_1_ = (undefined1)((uint)ppppuVar16 >> 8);
    local_120._2_1_ = (undefined1)((uint)ppppuVar16 >> 0x10);
    local_120._3_1_ = (undefined1)((uint)ppppuVar16 >> 0x18);
    local_10c = ppppuVar5;
    local_148 = (undefined4 ****)0x0;
    local_150 = (undefined4 ****)0x0;
    local_12c = (undefined4 ****)0x0;
    local_114 = ppppuVar22;
    local_14c = (undefined4 ****)&DAT_00000001;
    local_130 = (undefined4 ****)0x60000020;
    local_134 = (undefined4 ****)&DAT_01c18084;
    iVar10 = FUN_0121efc4(&local_120,&local_138);
    if (iVar10 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_013073dc(&DAT_00533383,0x37,&local_140,&DAT_01c180dc,&DAT_01d30334);
    }
    local_160 = local_150;
    local_15c = local_14c;
    local_158 = local_148;
    FUN_01a70fd4(&local_e8,0xd);
    FUN_00b719dc(&local_120);
    ppppuVar17 = local_d0;
    local_24c = local_d8;
    ppppuVar14 = local_dc;
    ppppuVar16 = local_e0;
    ppppuVar15 = local_e4;
    ppppuVar13 = local_e8;
    local_230 = local_c8;
    local_260 = local_94;
    local_244 = local_a8;
    local_234 = local_e0;
    local_214 = local_dc;
    local_23c = local_d8;
    local_22c = local_d4;
    local_254 = local_c4;
    local_240 = local_c0;
    local_238 = local_bc;
    local_210 = local_b8;
    local_20c = local_cc;
    local_258 = local_b4;
    local_25c = (uint)local_ac >> 0x18;
    local_268 = local_98;
    local_220 = local_a4;
    local_274 = local_a0;
    local_264 = local_9c;
    local_188 = local_90;
    local_184 = iStack_8c;
    local_180 = ppppuStack_88;
    ppppuStack_17c = ppppuStack_84;
    if (local_e8 == (undefined4 ****)&DAT_00000003 && local_e4 == (undefined4 ****)0x0) {
      ppppuVar22 = local_d0;
      ppppuVar15 = (undefined4 ****)((uint)local_b0 & 0xff);
      if (((uint)local_b0 & 1) != 0) {
        uVar1 = local_b0._1_3_;
        ppppuVar13 = local_ac;
        goto LAB_00e9c318;
      }
      local_260 = (undefined4 ****)&DAT_80000000;
      goto LAB_00e9c4ac;
    }
    local_178 = local_90;
    iStack_174 = iStack_8c;
    ppppuStack_170 = ppppuStack_88;
    ppppuStack_16c = ppppuStack_84;
    *(undefined1 *)local_224 = 1;
    if (local_e8 == (undefined4 ****)&SUB_00000004 && local_e4 == (undefined4 ****)0x0)
    goto LAB_00e9c0c8;
    local_1e8 = local_90;
    iStack_1e4 = iStack_8c;
    ppppuStack_1e0 = ppppuStack_88;
    ppppuStack_1dc = ppppuStack_84;
    FUN_00f9604c(param_2 + 0x48);
    local_270 = local_b0;
    local_26c = local_ac;
    local_bc = local_c4;
    if (*(char *)(param_2 + 0xa5) == '\x01') {
      FUN_00f9604c();
      ppppuVar22 = (undefined4 ****)0x0;
      local_23c = local_a0;
      local_224 = (undefined4 ****)&DAT_00000003;
    }
    else {
      ppppuVar22 = (undefined4 ****)0x0;
      local_23c = local_a0;
      local_224 = (undefined4 ****)&DAT_00000003;
    }
  }
  else {
    ppppuVar15 = local_254;
    if (((uint)ppppuVar6 & 1) == 0) {
      local_260 = (undefined4 ****)&DAT_80000000;
    }
    else {
LAB_00e9c318:
      uVar12 = (uint)ppppuVar13 & 0xffffff;
      local_120._3_1_ = (undefined1)uVar12;
      uStack_11c = (undefined1)(uVar12 >> 8);
      local_120._0_1_ = (char)uVar1;
      local_120._1_1_ = (undefined1)((uint3)uVar1 >> 8);
      uStack_11b = (undefined1)(uVar12 >> 0x10);
      local_120._2_1_ = (undefined1)((uint3)uVar1 >> 0x10);
      local_e0 = (undefined4 ****)0x0;
      local_e4 = (undefined4 ****)&DAT_00000001;
      local_e8 = (undefined4 ****)0x0;
      iVar10 = FUN_007a82f4(&local_120,&local_e8,&DAT_01c18084);
      if (iVar10 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013073dc(&DAT_00533383,0x37,&local_140,&DAT_01c180dc,&DAT_01d30334);
      }
      local_260 = local_e8;
      local_268 = local_e4;
      local_274 = local_e0;
    }
LAB_00e9c4ac:
    local_26c = (undefined4 ****)&DAT_00000001;
    if (((uint)local_220 & 1) != 0) {
      local_26c = (undefined4 ****)0x2;
    }
    local_270 = (undefined4 ****)(uint)(((uint)local_220 & 0xff) != 2);
    FUN_00745308(&local_160,ppppuVar22,ppppuVar22 + (int)local_20c);
    if (0x2aaaaaa8 < (uint)((int)local_240 * 8)) {
      uVar20 = 0;
LAB_00e9c4f0:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar20,ppppuVar15);
    }
    local_220 = (undefined4 ****)((uint)local_240 & 0x1fffffff);
    ppppuVar15 = (undefined4 ****)((int)local_220 * 0x18);
    if (ppppuVar15 == (undefined4 ****)0x0) {
      iVar10 = 4;
      ppppuVar13 = (undefined4 ****)0x0;
    }
    else {
      uVar20 = 4;
      iVar10 = FUN_01298504(ppppuVar15,4);
      ppppuVar13 = local_220;
      if (iVar10 == 0) goto LAB_00e9c4f0;
    }
    ppppuVar15 = (undefined4 ****)0x0;
    local_188 = ppppuVar13;
    local_184 = iVar10;
    if (local_240 != (undefined4 ****)0x0) {
      puVar18 = (undefined4 *)(iVar10 + 8);
      ppppuVar13 = local_254;
      do {
        local_118 = (undefined4 ****)0x0;
        local_120._0_1_ = '\0';
        local_120._1_1_ = 0;
        local_120._2_1_ = 0;
        local_120._3_1_ = 0;
        local_dc = (undefined4 ****)0x0;
        uStack_11c = 1;
        uStack_11b = 0;
        uStack_11a = 0;
        local_e0 = (undefined4 ****)0x60000020;
        local_e4 = (undefined4 ****)&DAT_01c1d138;
        local_e8 = (undefined4 ****)&local_120;
        iVar10 = FUN_013095bc(ppppuVar13,&local_e8);
        ppppuVar16 = local_118;
        if (iVar10 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_013073dc(&DAT_00533383,0x37,&local_140,&DAT_01c1d27c,&DAT_01d30334);
        }
        uVar20 = CONCAT13(local_120._3_1_,
                          CONCAT12(local_120._2_1_,CONCAT11(local_120._1_1_,(char)local_120)));
        local_118 = (undefined4 ****)0x0;
        local_120._0_1_ = '\0';
        local_120._1_1_ = 0;
        local_120._2_1_ = 0;
        local_120._3_1_ = 0;
        local_dc = (undefined4 ****)0x0;
        uVar2 = CONCAT22(uStack_11a,CONCAT11(uStack_11b,uStack_11c));
        uStack_11c = 1;
        uStack_11b = 0;
        uStack_11a = 0;
        local_e0 = (undefined4 ****)0x60000020;
        local_e4 = (undefined4 ****)&DAT_01c1d138;
        local_e8 = (undefined4 ****)&local_120;
        iVar10 = FUN_013095bc(ppppuVar13 + 1,&local_e8);
        if (iVar10 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_013073dc(&DAT_00533383,0x37,&local_140,&DAT_01c1d27c,&DAT_01d30334);
        }
        local_138 = (undefined4 ****)
                    CONCAT13(local_120._3_1_,
                             CONCAT12(local_120._2_1_,CONCAT11(local_120._1_1_,(char)local_120)));
        local_134 = (undefined4 ****)CONCAT22(uStack_11a,CONCAT11(uStack_11b,uStack_11c));
        ppppuVar13 = ppppuVar13 + 2;
        local_130 = local_118;
        puVar18[-2] = uVar20;
        *puVar18 = ppppuVar16;
        puVar18[-1] = uVar2;
        puVar18[1] = local_138;
        puVar18[2] = local_134;
        puVar18[3] = local_118;
        ppppuVar15 = (undefined4 ****)((int)ppppuVar15 + 1);
        puVar18 = puVar18 + 6;
      } while (local_220 != ppppuVar15);
    }
    local_150 = local_188;
    local_14c = (undefined4 ****)local_184;
    local_180 = ppppuVar15;
    local_148 = ppppuVar15;
    if ((local_25c & 1) == 0) {
      local_20c = (undefined4 ****)0x80000000;
    }
    else {
      local_e8 = (undefined4 ****)&local_120;
      local_138 = local_244;
      local_118 = (undefined4 ****)0x0;
      local_120._0_1_ = '\0';
      local_120._1_1_ = 0;
      local_120._2_1_ = 0;
      local_120._3_1_ = 0;
      local_dc = (undefined4 ****)0x0;
      uStack_11c = 1;
      uStack_11b = 0;
      uStack_11a = 0;
      local_e0 = (undefined4 ****)0x60000020;
      local_e4 = (undefined4 ****)&DAT_01c18084;
      iVar10 = FUN_013095bc(&local_138,&local_e8);
      if (iVar10 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013073dc(&DAT_00533383,0x37,&local_140,&DAT_01c180dc,&DAT_01d30334);
      }
      local_20c = (undefined4 ****)
                  CONCAT13(local_120._3_1_,
                           CONCAT12(local_120._2_1_,CONCAT11(local_120._1_1_,(char)local_120)));
      local_220 = (undefined4 ****)CONCAT22(uStack_11a,CONCAT11(uStack_11b,uStack_11c));
      local_240 = local_118;
    }
    ppppuStack_1e0 = local_148;
    iStack_1e4 = (int)local_14c;
    local_1e8 = local_150;
    ppppuVar5 = local_158;
    ppppuVar4 = local_15c;
    local_264 = local_160;
    FUN_0134aee0(local_22c,ppppuVar22,1,4);
    FUN_0134c054(local_230,local_254,1,8);
    *(undefined1 *)local_224 = 1;
    FUN_0160aaa4(&local_e8,0);
    ppppuVar14 = local_d4;
    ppppuVar16 = local_d8;
    ppppuVar15 = local_dc;
    ppppuVar13 = local_e0;
    ppppuVar22 = local_e4;
    local_244 = local_234;
    ppppuStack_1dc = local_260;
    local_208 = local_268;
    ppppuStack_204 = local_274;
    ppppuStack_200 = local_238;
    ppppuStack_1fc = local_210;
    local_1f8 = local_258;
    uStack_1f4 = local_20c;
    ppppuStack_1f0 = local_220;
    ppppuStack_1ec = local_240;
    local_20c = local_c4;
    local_230 = local_c0;
    local_224 = local_e8;
    local_258 = local_ac;
    local_210 = local_b0;
    local_238 = local_b4;
    local_240 = local_b8;
    local_22c = local_cc;
    local_24c = local_d0;
    FUN_00f9604c(param_2 + 0x48);
    ppppuVar17 = local_c8;
    local_268 = ppppuVar4;
    local_260 = ppppuVar5;
    local_220 = local_214;
  }
  param_1[2] = ppppuVar13;
  param_1[0x16] = local_268;
  param_1[5] = ppppuVar14;
  param_1[6] = local_24c;
  param_1[7] = local_22c;
  param_1[0xc] = local_240;
  param_1[0xd] = local_238;
  param_1[0xe] = local_210;
  param_1[0xf] = local_258;
  param_1[0x10] = local_270;
  param_1[0x11] = local_26c;
  param_1[0x14] = local_23c;
  param_1[10] = local_230;
  *param_1 = local_224;
  param_1[9] = local_20c;
  param_1[0x12] = local_244;
  param_1[4] = ppppuVar16;
  param_1[8] = ppppuVar17;
  param_1[0xb] = local_bc;
  param_1[0x15] = local_264;
  param_1[3] = ppppuVar15;
  param_1[1] = ppppuVar22;
  param_1[0x13] = local_220;
  param_1[0x17] = local_260;
  param_1[0x18] = local_1e8;
  param_1[0x19] = iStack_1e4;
  param_1[0x1a] = ppppuStack_1e0;
  param_1[0x1b] = ppppuStack_1dc;
  param_1[0x1c] = local_208;
  param_1[0x1d] = ppppuStack_204;
  param_1[0x1e] = ppppuStack_200;
  param_1[0x1f] = ppppuStack_1fc;
  param_1[0x20] = local_1f8;
  param_1[0x21] = uStack_1f4;
  param_1[0x22] = ppppuStack_1f0;
  param_1[0x23] = ppppuStack_1ec;
  param_1[0x24] = 0;
  uVar7 = 1;
LAB_00e9c994:
  *(undefined1 *)(param_2 + 0xa4) = uVar7;
  return;
}

