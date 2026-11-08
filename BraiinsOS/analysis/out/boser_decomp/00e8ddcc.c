// FUN_00e8ddcc @ 00e8ddcc size=3788 calls_out=35 calls_in=2
// strings: BUG: request parameters cell was already initialized. | boser::api::grpc::mineropen/boser/boser/src/api/grpc/miner.rsevent open/boser/boser/src/api/grpc/miner.rs:690struct Config with 3 elementsstruct FormatSection with 1 element | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | boser::api::grpc::mineropen/boser/boser/src/api/grpc/miner.rsevent open/boser/boser/src/api/grpc/miner.rs:690struct Config with 3 elementsstruct FormatSection with 1 element | InvalidParamSegmentInvalidParamInvalidCatchAll

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00e8ddcc(undefined4 *param_1,int param_2,undefined4 param_3)

{
  char *pcVar1;
  undefined1 uVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined *puVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  uint ****ppppuVar11;
  int *piVar12;
  uint ****ppppuVar13;
  uint ****ppppuVar14;
  uint ****ppppuVar15;
  bool bVar16;
  bool bVar17;
  uint ****local_2a0;
  uint ****local_294;
  undefined4 local_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  uint ****local_280;
  uint ****ppppuStack_27c;
  uint ****ppppuStack_278;
  uint ****ppppuStack_274;
  uint ****ppppuStack_270;
  uint ****local_26c;
  uint ****ppppuStack_268;
  uint ****ppppuStack_264;
  uint ****ppppuStack_260;
  uint ****ppppuStack_25c;
  uint ****local_258;
  uint ****ppppuStack_254;
  uint ****ppppuStack_250;
  uint ****ppppuStack_24c;
  uint ****ppppuStack_248;
  uint ****ppppuStack_244;
  int local_240;
  uint ***pppuStack_23c;
  uint ****ppppuStack_238;
  int local_230;
  uint ***local_22c;
  uint ****local_228;
  uint ****local_220;
  uint ****local_21c;
  uint ****local_218;
  uint ****local_214;
  uint ****local_210;
  uint ****local_20c;
  uint ****local_208;
  uint ****ppppuStack_204;
  uint ****ppppuStack_200;
  uint ****ppppuStack_1fc;
  uint ****local_1f8;
  uint ****ppppuStack_1f4;
  uint ****ppppuStack_1f0;
  uint ****ppppuStack_1ec;
  uint ****ppppuStack_1e8;
  uint ****ppppuStack_1e4;
  uint ****local_1e0;
  uint ****ppppuStack_1dc;
  uint ****ppppuStack_1d8;
  uint ****ppppuStack_1d4;
  uint ****ppppuStack_1d0;
  uint ****local_1cc;
  uint ****ppppuStack_1c8;
  uint ****ppppuStack_1c4;
  uint ****ppppuStack_1c0;
  uint ****ppppuStack_1bc;
  uint ****local_1b8;
  uint ****ppppuStack_1b4;
  uint ****ppppuStack_1b0;
  uint ****ppppuStack_1ac;
  uint ****ppppuStack_1a8;
  uint ****ppppuStack_1a4;
  uint ****local_1a0;
  uint ****ppppuStack_19c;
  uint ****ppppuStack_198;
  uint ****ppppuStack_194;
  uint ****ppppuStack_190;
  uint ****ppppuStack_18c;
  uint ***local_188;
  uint ****local_184;
  uint ****local_180;
  uint ****local_17c;
  uint ****local_178;
  uint ****local_174;
  uint ****local_170;
  uint ****local_16c;
  uint ****local_168;
  uint ****local_164;
  uint ****local_160;
  uint ****ppppuStack_15c;
  uint ****local_158;
  uint ****local_154;
  uint ****ppppuStack_150;
  uint ****local_14c;
  uint ****ppppuStack_148;
  uint ****local_144;
  uint ****ppppuStack_140;
  uint ****ppppuStack_13c;
  uint ****local_138;
  uint ****ppppuStack_134;
  uint ****local_130;
  uint ****ppppuStack_12c;
  uint ****ppppuStack_128;
  uint ****ppppuStack_124;
  uint ****ppppuStack_120;
  uint ****ppppuStack_11c;
  uint ***local_118;
  uint ****local_114;
  undefined1 auStack_110 [12];
  int local_104;
  uint ****local_f0;
  uint ****local_ec;
  uint ****local_e8;
  uint ****ppppuStack_e4;
  uint ****ppppuStack_e0;
  uint ****local_dc;
  uint ****ppppuStack_d8;
  uint ****ppppuStack_d4;
  uint ****ppppuStack_d0;
  uint ****ppppuStack_cc;
  uint ****ppppuStack_c8;
  uint ****local_c0;
  uint ****local_bc;
  uint ****local_b8;
  uint ****ppppuStack_b4;
  uint ****ppppuStack_b0;
  uint ****local_ac;
  uint ****ppppuStack_a8;
  uint ****ppppuStack_a4;
  uint ****local_a0;
  uint ****ppppuStack_9c;
  uint ****ppppuStack_98;
  uint ****local_90;
  uint ****local_8c;
  uint ****local_88;
  uint ****local_80;
  uint ****local_7c;
  uint ****local_78;
  uint ****local_74;
  uint ****local_58;
  uint ****local_54;
  uint ****local_50;
  uint ****local_48;
  uint ****local_44;
  uint ****local_40;
  uint ****local_38;
  uint ****local_34;
  uint ****local_30;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x94)) {
  case 0:
    *(undefined1 *)(param_2 + 0x95) = 0;
    piVar12 = *(int **)(param_2 + 0x90);
    FUN_01bed4e2(param_2 + 0x48,param_2,0x48);
    piVar4 = (int *)FUN_00a52660(*(undefined4 *)(param_2 + 0x88));
    if (piVar4 != (int *)0x0) {
      local_170 = (uint ****)&DAT_80000000;
      local_174 = (uint ****)0x0;
      local_17c = (uint ****)0x0;
      local_180 = (uint ****)0x0;
      FUN_0196ac88(&local_220,&local_180);
      uVar2 = local_220._0_1_;
      uVar8 = (uint)local_220 & 0xff;
      if (uVar8 == 6) {
        FUN_00e0fe5c(local_21c);
      }
      else {
        FUN_01bed4e2((uint)&local_c0 | 1,(uint)&local_220 | 1,0x17);
        local_c0 = (uint ****)CONCAT31(local_c0._1_3_,uVar2);
        if (uVar8 == 5) {
          local_16c = (uint ****)0x0;
          local_168 = local_bc;
          local_160 = ppppuStack_b4;
          if (local_bc == (uint ****)0x0) {
            local_160 = local_bc;
          }
          local_178 = local_bc;
          local_180 = local_bc;
          if (local_bc != (uint ****)0x0) {
            local_180 = (uint ****)&DAT_00000001;
          }
          local_164 = local_b8;
          local_174 = local_b8;
          local_17c = (uint ****)0x0;
          local_170 = local_180;
          FUN_00fea674(auStack_110,&local_180);
          if (local_104 != 0) {
            FUN_0067b1ac(&local_180,auStack_110);
            local_38 = local_180;
            local_34 = local_17c;
            local_30 = local_178;
            cVar3 = (char)local_174;
            local_58._0_3_ = (undefined3)((uint)local_174 >> 8);
            FUN_00e0febc(&local_c0);
            if (cVar3 != '\x02') {
              local_180 = local_38;
              local_17c = local_34;
              local_178 = local_30;
              local_174 = (uint ****)CONCAT31((int3)local_58,cVar3);
              DataMemoryBarrier(0xb);
              if (*(int *)(*piVar4 + 0x18) != 0) {
                FUN_00b065ec(*piVar4 + 8,&local_180);
              }
              if ((char)local_174 != '\x02') {
                local_220 = local_180;
                local_21c = local_17c;
                local_218 = local_178;
                local_214 = local_174;
                FUN_019cf348();
                if ((DAT_01d50f88 < 5) &&
                   (((DAT_01d4c488 - 1 < 2 ||
                     ((DAT_01d4c488 != 0 && (cVar3 = FUN_01aaafa8(&DAT_01d4c480), cVar3 != '\0'))))
                    && (iVar9 = FUN_01aaa278(DAT_01d4c480), iVar9 != 0)))) {
                  local_b8 = (uint ****)(DAT_01d4c480 + 0x1c);
                  if (*(uint *****)(DAT_01d4c480 + 0x20) == (uint ****)0x0) {
LAB_00e8eca0:
                    /* WARNING: Subroutine does not return */
                    FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c17708);
                  }
                  local_21c = (uint ****)&local_f0;
                  local_178 = *(uint *****)(DAT_01d4c480 + 0x24);
                  local_174 = *(uint *****)(DAT_01d4c480 + 0x28);
                  local_220 = (uint ****)&local_180;
                  local_c0 = (uint ****)&local_220;
                  local_bc = (uint ****)&DAT_00000001;
                  local_170 = (uint ****)0x0;
                  local_218 = (uint ****)&DAT_01d2ea4c;
                  local_ec = (uint ****)&DAT_0000006b;
                  local_f0 = (uint ****)0x3fe987;
                  local_180 = (uint ****)*local_b8;
                  local_17c = *(uint *****)(DAT_01d4c480 + 0x20);
                  FUN_00e0ff40(&local_c0);
                }
                else {
                  iVar9 = DAT_01d4c480;
                  if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
                    local_7c = *(uint *****)(DAT_01d4c480 + 0x14);
                    local_78 = *(uint *****)(DAT_01d4c480 + 0x18);
                    local_80 = (uint ****)&DAT_00000001;
                    DataMemoryBarrier(0xb);
                    puVar6 = DAT_01d4edc8;
                    pcVar1 = DAT_01d4edc4;
                    if (DAT_01d51174 != 2) {
                      puVar6 = &DAT_01cfc5e0;
                      pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
                    }
                    iVar5 = (*(code *)puVar6[3])(pcVar1,&local_80);
                    if (iVar5 != 0) {
                      local_e8 = (uint ****)(DAT_01d4c480 + 0x1c);
                      if (*(uint *****)(DAT_01d4c480 + 0x20) == (uint ****)0x0) goto LAB_00e8eca0;
                      local_c0 = (uint ****)&local_180;
                      local_bc = (uint ****)&local_48;
                      local_f0 = (uint ****)&local_c0;
                      local_178 = *(uint *****)(DAT_01d4c480 + 0x24);
                      local_174 = *(uint *****)(DAT_01d4c480 + 0x28);
                      local_170 = (uint ****)0x0;
                      local_ec = (uint ****)&DAT_00000001;
                      local_b8 = (uint ****)&DAT_01d2ea4c;
                      local_44 = (uint ****)&DAT_0000006b;
                      local_48 = (uint ****)0x3fe987;
                      local_220 = local_80;
                      local_21c = local_7c;
                      local_218 = local_78;
                      local_180 = (uint ****)*local_e8;
                      local_17c = *(uint *****)(DAT_01d4c480 + 0x20);
                      FUN_01aaa328(iVar9,pcVar1,puVar6[4],&local_220,&local_f0);
                    }
                  }
                }
              }
            }
            goto LAB_00e8e09c;
          }
          FUN_0165a1f4(auStack_110);
        }
        FUN_00e0febc(&local_c0);
      }
    }
LAB_00e8e09c:
    uVar10 = FUN_0102c580(*piVar12 + 8);
    puVar7 = &DAT_01c1defc;
    *(undefined4 *)(param_2 + 0x98) = uVar10;
    *(undefined **)(param_2 + 0x9c) = &DAT_01c1defc;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c17c4c);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c17c4c);
  case 3:
    uVar10 = *(undefined4 *)(param_2 + 0x98);
    puVar7 = *(undefined **)(param_2 + 0x9c);
    break;
  case 4:
    goto LAB_00e8e56c;
  }
  (**(code **)(puVar7 + 0xc))(&local_180,uVar10,param_3);
  ppppuVar11 = local_17c;
  ppppuVar15 = local_180;
  if (local_180 == (uint ****)&DAT_00000008 && local_17c == (uint ****)0x0) {
    *param_1 = 4;
    param_1[1] = 0;
    uVar2 = 3;
  }
  else {
    local_1a0 = local_178;
    ppppuStack_19c = local_174;
    ppppuStack_198 = local_170;
    ppppuStack_194 = local_16c;
    ppppuStack_190 = local_168;
    ppppuStack_18c = local_164;
    local_1e0 = local_160;
    ppppuStack_1dc = ppppuStack_15c;
    ppppuStack_1d8 = local_158;
    ppppuStack_1d4 = local_154;
    ppppuStack_1d0 = ppppuStack_150;
    local_1cc = local_14c;
    ppppuStack_1c8 = ppppuStack_148;
    ppppuStack_1c4 = local_144;
    ppppuStack_1c0 = ppppuStack_140;
    ppppuStack_1bc = ppppuStack_13c;
    local_1b8 = local_138;
    ppppuStack_1b4 = ppppuStack_134;
    ppppuStack_1b0 = local_130;
    ppppuStack_1ac = ppppuStack_12c;
    ppppuStack_1a8 = ppppuStack_128;
    ppppuStack_1a4 = ppppuStack_124;
    FUN_01139b38(*(undefined4 *)(param_2 + 0x98),*(undefined4 *)(param_2 + 0x9c));
    if (ppppuVar15 == (uint ****)&DAT_00000007 && ppppuVar11 == (uint ****)0x0) {
      local_c0 = local_1a0;
      local_bc = ppppuStack_19c;
      local_b8 = ppppuStack_198;
      ppppuStack_b4 = ppppuStack_194;
      ppppuStack_b0 = ppppuStack_190;
      local_ac = ppppuStack_18c;
      if (((DAT_01d50f88 < 4) &&
          ((DAT_01d4c4ac - 1 < 2 ||
           ((DAT_01d4c4ac != 0 && (cVar3 = FUN_01aaafa8(&DAT_01d4c4a4), cVar3 != '\0')))))) &&
         (iVar9 = FUN_01aaa278(DAT_01d4c4a4), iVar9 != 0)) {
        if (*(uint *****)(DAT_01d4c4a4 + 0x20) == (uint ****)0x0) {
LAB_00e8ec84:
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c17c5c);
        }
        local_44 = &local_118;
        local_178 = *(uint *****)(DAT_01d4c4a4 + 0x24);
        local_174 = *(uint *****)(DAT_01d4c4a4 + 0x28);
        local_50 = (uint ****)(DAT_01d4c4a4 + 0x1c);
        local_180 = (uint ****)*local_50;
        local_48 = (uint ****)&local_180;
        local_58 = (uint ****)&local_48;
        local_170 = (uint ****)0x0;
        local_54 = (uint ****)&DAT_00000001;
        local_114 = (uint ****)&local_90;
        local_40 = (uint ****)&DAT_01d2ea4c;
        local_118 = (uint ***)&DAT_003f1b29;
        local_8c = (uint ****)FUN_0121efc4;
        local_17c = *(uint *****)(DAT_01d4c4a4 + 0x20);
        local_90 = (uint ****)&local_c0;
        FUN_01aaaecc(DAT_01d4c4a4,&local_58);
        iVar9 = DAT_01d4c4a4;
        if ((DAT_01d51ae9 == '\0') && (1 < DAT_01d51b00)) {
          local_34 = *(uint *****)(DAT_01d4c4a4 + 0x14);
          local_30 = *(uint *****)(DAT_01d4c4a4 + 0x18);
          local_38 = (uint ****)0x2;
          DataMemoryBarrier(0xb);
          puVar6 = DAT_01d4edc8;
          pcVar1 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            puVar6 = &DAT_01cfc5e0;
            pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          iVar5 = (*(code *)puVar6[3])(pcVar1,&local_38);
          if (iVar5 != 0) {
            local_80 = local_38;
            local_7c = local_34;
            local_78 = local_30;
            FUN_01aaa328(iVar9,pcVar1,puVar6[4],&local_80,&local_58);
          }
        }
      }
      else {
        iVar9 = DAT_01d4c4a4;
        if ((DAT_01d51ae9 == '\0') && (1 < DAT_01d51b00)) {
          local_54 = *(uint *****)(DAT_01d4c4a4 + 0x14);
          local_50 = *(uint *****)(DAT_01d4c4a4 + 0x18);
          local_58 = (uint ****)0x2;
          DataMemoryBarrier(0xb);
          puVar6 = DAT_01d4edc8;
          pcVar1 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            puVar6 = &DAT_01cfc5e0;
            pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          iVar5 = (*(code *)puVar6[3])(pcVar1,&local_58);
          if (iVar5 != 0) {
            local_40 = (uint ****)(DAT_01d4c4a4 + 0x1c);
            if (*(uint *****)(DAT_01d4c4a4 + 0x20) == (uint ****)0x0) goto LAB_00e8ec84;
            local_34 = &local_118;
            local_178 = *(uint *****)(DAT_01d4c4a4 + 0x24);
            local_174 = *(uint *****)(DAT_01d4c4a4 + 0x28);
            local_38 = (uint ****)&local_180;
            local_48 = (uint ****)&local_38;
            local_170 = (uint ****)0x0;
            local_44 = (uint ****)&DAT_00000001;
            local_114 = (uint ****)&local_90;
            local_30 = (uint ****)&DAT_01d2ea4c;
            local_118 = (uint ***)&DAT_003f1b29;
            local_8c = (uint ****)FUN_0121efc4;
            local_80 = local_58;
            local_7c = local_54;
            local_78 = local_50;
            local_180 = (uint ****)*local_40;
            local_17c = *(uint *****)(DAT_01d4c4a4 + 0x20);
            local_90 = (uint ****)&local_c0;
            FUN_01aaa328(iVar9,pcVar1,puVar6[4],&local_80,&local_48);
          }
        }
      }
      FUN_01a71aac(&local_180,0xd,&DAT_003f1b4b,0x19);
      FUN_00b719dc(&local_c0);
      ppppuVar14 = local_17c;
      ppppuVar13 = local_180;
      local_f0 = local_170;
      local_ec = local_16c;
      local_e8 = local_168;
      ppppuStack_e4 = local_164;
      ppppuStack_e0 = local_160;
      local_dc = ppppuStack_15c;
      local_220 = local_158;
      local_21c = local_154;
      local_218 = ppppuStack_150;
      local_214 = local_14c;
      local_210 = ppppuStack_148;
      local_20c = local_144;
      local_208 = ppppuStack_140;
      ppppuStack_204 = ppppuStack_13c;
      ppppuStack_200 = local_138;
      ppppuStack_1fc = ppppuStack_134;
      local_1f8 = local_130;
      ppppuStack_1f4 = ppppuStack_12c;
      ppppuStack_1f0 = ppppuStack_128;
      ppppuStack_1ec = ppppuStack_124;
      ppppuStack_1e8 = ppppuStack_120;
      ppppuStack_1e4 = ppppuStack_11c;
      ppppuVar15 = local_178;
      ppppuVar11 = local_174;
      if (local_180 != (uint ****)&DAT_00000003 || local_17c != (uint ****)0x0) {
        *(undefined4 *)(param_2 + 0x98) = local_180;
        *(uint *****)(param_2 + 0x9c) = local_17c;
        *(uint *****)(param_2 + 0xa4) = local_174;
        *(undefined4 *)(param_2 + 0xa0) = local_178;
        *(uint *****)(param_2 + 0xa8) = local_170;
        *(uint *****)(param_2 + 0xac) = local_16c;
        *(uint *****)(param_2 + 0xb0) = local_168;
        *(uint *****)(param_2 + 0xb4) = local_164;
        *(uint *****)(param_2 + 0xb8) = local_160;
        *(uint *****)(param_2 + 0xbc) = ppppuStack_15c;
        *(uint *****)(param_2 + 0xc0) = local_158;
        *(uint *****)(param_2 + 0xc4) = local_154;
        *(uint *****)(param_2 + 200) = ppppuStack_150;
        *(uint *****)(param_2 + 0xcc) = local_14c;
        *(uint *****)(param_2 + 0xd0) = ppppuStack_148;
        *(uint *****)(param_2 + 0xd4) = local_144;
        *(uint *****)(param_2 + 0xd8) = ppppuStack_140;
        *(uint *****)(param_2 + 0xdc) = ppppuStack_13c;
        *(uint *****)(param_2 + 0xe0) = local_138;
        *(uint *****)(param_2 + 0xe4) = ppppuStack_134;
        *(uint *****)(param_2 + 0xe8) = local_130;
        *(uint *****)(param_2 + 0xec) = ppppuStack_12c;
        *(uint *****)(param_2 + 0xf0) = ppppuStack_128;
        *(uint *****)(param_2 + 0xf4) = ppppuStack_124;
        *(uint *****)(param_2 + 0xf8) = ppppuStack_120;
        *(uint *****)(param_2 + 0xfc) = ppppuStack_11c;
        FUN_01bed4e2(&local_280,(undefined4 *)(param_2 + 0xa0),0x4c);
        uVar10 = *(undefined4 *)(param_2 + 0xec);
        local_290 = *(undefined4 *)(param_2 + 0xf0);
        uStack_28c = *(undefined4 *)(param_2 + 0xf4);
        uStack_288 = *(undefined4 *)(param_2 + 0xf8);
        uStack_284 = *(undefined4 *)(param_2 + 0xfc);
        FUN_00f9604c(param_2 + 0x48);
        if (*(char *)(param_2 + 0x95) != '\0') {
          FUN_00f9604c(param_2);
        }
LAB_00e8eaa0:
        *param_1 = ppppuVar13;
        param_1[1] = ppppuVar14;
        FUN_01bed4e2(param_1 + 2,&local_280,0x4c);
        param_1[0x15] = uVar10;
        param_1[0x16] = local_290;
        param_1[0x17] = uStack_28c;
        param_1[0x18] = uStack_288;
        param_1[0x19] = uStack_284;
        uVar2 = 1;
        goto LAB_00e8ead0;
      }
    }
    else {
      local_f0 = local_1a0;
      local_ec = ppppuStack_19c;
      local_e8 = ppppuStack_198;
      ppppuStack_e4 = ppppuStack_194;
      ppppuStack_e0 = ppppuStack_190;
      local_dc = ppppuStack_18c;
      local_220 = local_1e0;
      local_21c = ppppuStack_1dc;
      local_218 = ppppuStack_1d8;
      local_214 = ppppuStack_1d4;
      local_210 = ppppuStack_1d0;
      local_20c = local_1cc;
      local_208 = ppppuStack_1c8;
      ppppuStack_204 = ppppuStack_1c4;
      ppppuStack_200 = ppppuStack_1c0;
      ppppuStack_1fc = ppppuStack_1bc;
      local_1f8 = local_1b8;
      ppppuStack_1f4 = ppppuStack_1b4;
      ppppuStack_1f0 = ppppuStack_1b0;
      ppppuStack_1ec = ppppuStack_1ac;
      ppppuStack_1e8 = ppppuStack_1a8;
      ppppuStack_1e4 = ppppuStack_1a4;
    }
    *(uint *****)(param_2 + 0xa4) = ppppuVar11;
    *(undefined4 *)(param_2 + 0xa0) = ppppuVar15;
    *(uint *****)(param_2 + 0xa8) = local_f0;
    *(uint *****)(param_2 + 0xac) = local_ec;
    *(uint *****)(param_2 + 0xb0) = local_e8;
    *(uint *****)(param_2 + 0xb4) = ppppuStack_e4;
    *(uint *****)(param_2 + 0xb8) = ppppuStack_e0;
    *(uint *****)(param_2 + 0xbc) = local_dc;
    *(uint *****)(param_2 + 0xc0) = local_220;
    *(uint *****)(param_2 + 0xc4) = local_21c;
    *(uint *****)(param_2 + 200) = local_218;
    *(uint *****)(param_2 + 0xcc) = local_214;
    *(uint *****)(param_2 + 0xd0) = local_210;
    *(uint *****)(param_2 + 0xd4) = local_20c;
    *(uint *****)(param_2 + 0xd8) = local_208;
    *(uint *****)(param_2 + 0xdc) = ppppuStack_204;
    *(uint *****)(param_2 + 0xe0) = ppppuStack_200;
    *(uint *****)(param_2 + 0xe4) = ppppuStack_1fc;
    *(uint *****)(param_2 + 0xe8) = local_1f8;
    *(uint *****)(param_2 + 0xec) = ppppuStack_1f4;
    *(uint *****)(param_2 + 0xf0) = ppppuStack_1f0;
    *(uint *****)(param_2 + 0xf4) = ppppuStack_1ec;
    *(uint *****)(param_2 + 0xf8) = ppppuStack_1e8;
    *(uint *****)(param_2 + 0xfc) = ppppuStack_1e4;
    *(undefined4 *)(param_2 + 0x98) = 3;
    *(undefined4 *)(param_2 + 0x9c) = 0;
    FUN_01bed4e2(param_2 + 0x100,(undefined4 *)(param_2 + 0xa0),0x60);
    *(undefined4 *)(param_2 + 0x160) = 0;
    *(undefined4 *)(param_2 + 0x164) = 4;
    *(undefined4 *)(param_2 + 0x168) = 0;
LAB_00e8e56c:
    while( true ) {
      FUN_00e7be78(&local_180,param_2 + 0x100,param_3);
      if (local_180 == (uint ****)&DAT_80000001) break;
      local_220 = local_180;
      local_21c = local_17c;
      local_218 = local_178;
      local_214 = local_174;
      local_210 = local_170;
      local_20c = local_16c;
      local_208 = local_168;
      ppppuStack_204 = local_164;
      ppppuStack_200 = local_160;
      ppppuStack_1fc = ppppuStack_15c;
      local_1f8 = local_158;
      ppppuStack_1f4 = local_154;
      if (local_180 == (uint ****)&DAT_80000000) {
LAB_00e8e9e0:
        iVar9 = *(int *)(param_2 + 0x160);
        *(undefined4 *)(param_2 + 0x160) = 0;
        local_188 = *(uint ****)(param_2 + 0x164);
        local_184 = *(uint *****)(param_2 + 0x168);
        *(undefined4 *)(param_2 + 0x164) = 4;
        *(undefined4 *)(param_2 + 0x168) = 0;
        if (iVar9 != -0x80000000) {
          local_118 = local_188;
          local_114 = local_184;
          FUN_00e8ef6c(param_2 + 0x100);
          local_228 = local_184;
          local_22c = local_188;
          uVar10 = 0;
          local_230 = iVar9;
          FUN_0160aaa4(&local_180,0);
          local_240 = local_230;
          pppuStack_23c = local_22c;
          ppppuStack_238 = local_228;
          local_280 = local_180;
          ppppuStack_27c = local_17c;
          ppppuStack_278 = local_178;
          ppppuStack_274 = local_174;
          ppppuStack_270 = local_170;
          local_26c = local_16c;
          ppppuStack_268 = local_168;
          ppppuStack_264 = local_164;
          ppppuStack_260 = local_160;
          ppppuStack_25c = ppppuStack_15c;
          local_258 = local_158;
          ppppuStack_254 = local_154;
          ppppuStack_250 = ppppuStack_150;
          ppppuStack_24c = local_14c;
          ppppuStack_248 = ppppuStack_148;
          ppppuStack_244 = local_144;
          FUN_00f9604c(param_2 + 0x48);
          ppppuVar13 = (uint ****)&DAT_00000003;
          ppppuVar14 = (uint ****)0x0;
          goto LAB_00e8eaa0;
        }
        break;
      }
      FUN_00eaa900(&local_180);
      ppppuVar13 = local_160;
      ppppuVar11 = local_164;
      uVar10 = 0;
      ppppuVar15 = local_294;
      if ((uint ****)0x38e38e3 < local_160) {
LAB_00e8e940:
        local_294 = ppppuVar15;
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar10,local_294);
      }
      ppppuVar15 = (uint ****)((int)local_160 * 0x24);
      if (ppppuVar15 == (uint ****)0x0) {
        local_294 = (uint ****)&SUB_00000004;
        local_90 = (uint ****)0x0;
      }
      else {
        uVar10 = 4;
        local_294 = (uint ****)FUN_01298504(ppppuVar15,4);
        if (local_294 == (uint ****)0x0) goto LAB_00e8e940;
        local_90 = ppppuVar13;
      }
      ppppuVar15 = (uint ****)0x0;
      local_8c = local_294;
      if (ppppuVar13 != (uint ****)0x0) {
        iVar9 = 0;
        ppppuVar15 = (uint ****)0x0;
        do {
          FUN_006666fc(&local_58,*(undefined4 *)((int)ppppuVar11 + iVar9 + 4),
                       *(undefined4 *)((int)ppppuVar11 + iVar9 + 8));
          FUN_006666fc(&local_48,*(undefined4 *)((int)ppppuVar11 + iVar9 + 0x10),
                       *(undefined4 *)((int)ppppuVar11 + iVar9 + 0x14));
          FUN_006666fc(&local_38,*(undefined4 *)((int)ppppuVar11 + iVar9 + 0x1c),
                       *(undefined4 *)((int)ppppuVar11 + iVar9 + 0x20));
          ppppuVar15 = (uint ****)((int)ppppuVar15 + 1);
          local_80 = local_58;
          local_7c = local_54;
          local_78 = local_50;
          local_74 = local_48;
          puVar6 = (undefined4 *)((int)local_294 + iVar9);
          iVar9 = iVar9 + 0x24;
          *puVar6 = local_58;
          puVar6[1] = local_54;
          puVar6[2] = local_50;
          puVar6[3] = local_48;
          puVar6[4] = local_44;
          puVar6[5] = local_40;
          puVar6[6] = local_38;
          puVar6[7] = local_34;
          puVar6[8] = local_30;
        } while (ppppuVar13 != ppppuVar15);
        ppppuVar15 = ppppuVar13;
      }
      local_58 = local_90;
      local_54 = local_8c;
      local_88 = ppppuVar15;
      local_50 = ppppuVar15;
      FUN_00eaac14(&local_180);
      FUN_00eaa900(&local_180,&local_220);
      ppppuVar13 = local_154;
      ppppuVar15 = local_158;
      uVar10 = 0;
      bVar17 = (uint ****)0xffffffe < local_154;
      bVar16 = local_154 == (uint ****)0xfffffff;
      if (local_154 < (uint ****)0x10000000) {
        ppppuVar11 = (uint ****)((int)local_154 << 4);
        bVar17 = (uint ****)0x7ffffffb < ppppuVar11;
        bVar16 = ppppuVar11 == (uint ****)0x7ffffffc;
      }
      ppppuVar14 = local_2a0;
      if (bVar17 && !bVar16) {
LAB_00e8e950:
        local_2a0 = ppppuVar14;
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar10,local_2a0);
      }
      if (ppppuVar11 == (uint ****)0x0) {
        local_2a0 = (uint ****)&SUB_00000004;
        local_38 = (uint ****)0x0;
      }
      else {
        uVar10 = 4;
        local_2a0 = (uint ****)FUN_01298504(ppppuVar11,4);
        ppppuVar14 = ppppuVar11;
        if (local_2a0 == (uint ****)0x0) goto LAB_00e8e950;
        local_38 = ppppuVar13;
      }
      ppppuVar11 = (uint ****)0x0;
      local_34 = local_2a0;
      if (ppppuVar13 != (uint ****)0x0) {
        ppppuVar11 = (uint ****)0x0;
        do {
          FUN_01266f10(&local_80,ppppuVar15[(int)ppppuVar11 * 2]);
          local_74 = (uint ****)ppppuVar15[(int)ppppuVar11 * 2 + 1];
          ppppuVar14 = local_2a0 + (int)ppppuVar11 * 4;
          ppppuVar11 = (uint ****)((int)ppppuVar11 + 1);
          *ppppuVar14 = (uint ***)local_80;
          ppppuVar14[1] = (uint ***)local_7c;
          ppppuVar14[2] = (uint ***)local_78;
          ppppuVar14[3] = (uint ***)local_74;
        } while (ppppuVar13 != ppppuVar11);
        ppppuVar11 = ppppuVar13;
      }
      local_48 = local_38;
      local_44 = local_34;
      local_40 = ppppuVar11;
      local_30 = ppppuVar11;
      FUN_00eaac14(&local_180);
      FUN_006666fc(&local_80,local_21c,local_218);
      FUN_006666fc(&local_180,local_210,local_20c);
      ppppuVar15 = local_80;
      local_ac = local_58;
      ppppuStack_a8 = local_54;
      ppppuStack_a4 = local_50;
      local_a0 = local_48;
      ppppuStack_9c = local_44;
      ppppuStack_98 = local_40;
      local_c0 = local_7c;
      local_bc = local_78;
      local_b8 = local_180;
      ppppuStack_b4 = local_17c;
      ppppuStack_b0 = local_178;
      FUN_00eaac14(&local_220);
      local_f0 = local_c0;
      local_ec = local_bc;
      local_e8 = local_b8;
      ppppuStack_e4 = ppppuStack_b4;
      ppppuStack_e0 = ppppuStack_b0;
      local_dc = local_ac;
      ppppuStack_d8 = ppppuStack_a8;
      ppppuStack_d4 = ppppuStack_a4;
      ppppuStack_d0 = local_a0;
      ppppuStack_cc = ppppuStack_9c;
      ppppuStack_c8 = ppppuStack_98;
      if (ppppuVar15 == (uint ****)&DAT_80000000) goto LAB_00e8e9e0;
      if (ppppuVar15 == (uint ****)&DAT_80000001) break;
      local_180 = ppppuVar15;
      local_17c = local_c0;
      local_178 = local_bc;
      local_174 = local_b8;
      local_170 = ppppuStack_b4;
      local_16c = ppppuStack_b0;
      local_168 = local_ac;
      local_164 = ppppuStack_a8;
      local_160 = ppppuStack_a4;
      ppppuStack_15c = local_a0;
      local_158 = ppppuStack_9c;
      local_154 = ppppuStack_98;
      iVar9 = *(int *)(param_2 + 0x168);
      if ((uint)(*(int *)(param_2 + 0x160) - iVar9) < (uint)(ppppuVar15 != (uint ****)&DAT_80000000)
         ) {
        FUN_0132b898(param_2 + 0x160,iVar9,(uint)(ppppuVar15 != (uint ****)&DAT_80000000),4,0x30);
        iVar9 = *(int *)(param_2 + 0x168);
      }
      puVar6 = (undefined4 *)(*(int *)(param_2 + 0x164) + iVar9 * 0x30);
      *puVar6 = ppppuVar15;
      puVar6[1] = local_f0;
      puVar6[2] = local_ec;
      puVar6[3] = local_e8;
      puVar6[4] = ppppuStack_e4;
      puVar6[5] = ppppuStack_e0;
      puVar6[6] = local_dc;
      puVar6[7] = ppppuStack_d8;
      puVar6[8] = ppppuStack_d4;
      puVar6[9] = ppppuStack_d0;
      puVar6[10] = ppppuStack_cc;
      puVar6[0xb] = ppppuStack_c8;
      *(int *)(param_2 + 0x168) = iVar9 + 1;
    }
    uVar2 = 4;
    *param_1 = 4;
    param_1[1] = 0;
  }
LAB_00e8ead0:
  *(undefined1 *)(param_2 + 0x94) = uVar2;
  return;
}

