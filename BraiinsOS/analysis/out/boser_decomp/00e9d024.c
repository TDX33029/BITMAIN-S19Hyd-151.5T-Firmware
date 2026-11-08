// FUN_00e9d024 @ 00e9d024 size=1600 calls_out=22 calls_in=1
// strings: BUG: request parameters cell was already initialized. | boser::api::grpc::utilsopen/boser/boser/src/api/grpc/utils.rs | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | BUG: request parameters cell was already initialized. | boser::api::grpc::utilsopen/boser/boser/src/api/grpc/utils.rs

void FUN_00e9d024(undefined4 *param_1,int param_2,undefined4 param_3)

{
  char *pcVar1;
  undefined1 uVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 ****ppppuVar10;
  undefined4 ****ppppuVar11;
  undefined4 ****ppppuVar12;
  undefined4 ****local_218;
  undefined4 local_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 ****local_200;
  undefined4 ****ppppuStack_1fc;
  undefined4 ****ppppuStack_1f8;
  undefined4 ****ppppuStack_1f4;
  undefined4 ****local_1f0;
  undefined4 ****ppppuStack_1ec;
  undefined4 ****ppppuStack_1e8;
  undefined4 ****ppppuStack_1e4;
  undefined4 ****ppppuStack_1e0;
  undefined4 ****local_1d8;
  undefined4 ****ppppuStack_1d4;
  undefined4 ****ppppuStack_1d0;
  undefined4 ****ppppuStack_1cc;
  undefined4 ****ppppuStack_1c8;
  undefined4 ****local_1c4;
  undefined4 ****ppppuStack_1c0;
  undefined4 ****ppppuStack_1bc;
  undefined4 ****ppppuStack_1b8;
  undefined4 ****ppppuStack_1b4;
  undefined4 ****local_1b0;
  undefined4 ****ppppuStack_1ac;
  undefined4 ****ppppuStack_1a8;
  undefined4 ****ppppuStack_1a4;
  undefined4 ****ppppuStack_1a0;
  undefined4 ****local_170;
  undefined4 ****ppppuStack_16c;
  undefined4 ****ppppuStack_168;
  undefined4 ****ppppuStack_164;
  undefined4 ****ppppuStack_160;
  undefined4 ****local_15c;
  undefined4 ****ppppuStack_158;
  undefined4 ****ppppuStack_154;
  undefined4 ****ppppuStack_150;
  undefined4 ****ppppuStack_14c;
  undefined4 ****local_148;
  undefined4 ****ppppuStack_144;
  undefined4 ****ppppuStack_140;
  undefined4 ****ppppuStack_13c;
  undefined4 ****ppppuStack_138;
  undefined4 ****local_130;
  undefined4 ****local_12c;
  undefined4 ****local_128;
  undefined4 local_124;
  undefined4 ****local_120;
  undefined4 ****local_11c;
  undefined4 ****local_118;
  undefined4 ****local_114;
  undefined4 ****local_110;
  undefined4 ****local_10c;
  undefined4 ****ppppuStack_108;
  undefined4 ****ppppuStack_104;
  undefined4 ****local_100;
  undefined4 ****ppppuStack_fc;
  undefined4 ****local_f8;
  undefined4 ****ppppuStack_f4;
  undefined4 ****ppppuStack_f0;
  undefined4 ****local_ec;
  undefined4 ****ppppuStack_e8;
  undefined4 ****local_e4;
  undefined4 ****ppppuStack_e0;
  undefined4 ****local_dc;
  undefined4 ****ppppuStack_d8;
  undefined4 ****local_d4;
  undefined4 ****ppppuStack_d0;
  undefined4 ****ppppuStack_cc;
  undefined4 ****ppppuStack_c8;
  undefined4 ****ppppuStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined2 local_ac;
  undefined1 local_aa;
  undefined4 ****local_a8;
  undefined4 ****ppppuStack_a4;
  undefined4 ****ppppuStack_a0;
  undefined4 ****local_98;
  undefined4 ****local_94;
  undefined4 ****local_90;
  undefined4 ****local_8c;
  undefined4 local_88;
  undefined4 *local_84;
  undefined4 ***local_80;
  undefined4 local_7c;
  undefined4 ****local_78;
  undefined4 ****local_74;
  undefined4 ****local_70;
  undefined4 ****ppppuStack_6c;
  undefined4 ****local_60;
  undefined4 ****local_5c;
  undefined4 ****local_58;
  char local_54;
  undefined2 local_53;
  undefined1 local_51;
  undefined1 auStack_48 [12];
  int local_3c;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0xa4)) {
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c17dec);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c17dec);
  case 3:
    goto switchD_00e9d050_caseD_3;
  }
  *(undefined1 *)(param_2 + 0xa5) = 0;
  uVar7 = *(undefined4 *)(param_2 + 0xa0);
  FUN_01bed4e2(param_2 + 0x48,param_2,0x48);
  piVar4 = (int *)FUN_00a52660(*(undefined4 *)(param_2 + 0x88));
  if (piVar4 != (int *)0x0) {
    local_120 = (undefined4 ****)&DAT_80000000;
    local_124 = (undefined4 ****)0x0;
    local_12c = (undefined4 ****)0x0;
    local_130 = (undefined4 ****)0x0;
    FUN_0196ac88(&local_60,&local_130);
    uVar2 = local_60._0_1_;
    uVar8 = (uint)local_60 & 0xff;
    if (uVar8 == 6) {
      FUN_00e0fe5c(local_5c);
    }
    else {
      FUN_01bed4e2((uint)&local_78 | 1,(uint)&local_60 | 1,0x17);
      local_78 = (undefined4 ****)CONCAT31(local_78._1_3_,uVar2);
      if (uVar8 == 5) {
        local_11c = (undefined4 ****)0x0;
        local_118 = local_74;
        if (local_74 == (undefined4 ****)0x0) {
          ppppuStack_6c = local_74;
        }
        local_128 = local_74;
        local_130 = local_74;
        if (local_74 != (undefined4 ****)0x0) {
          local_130 = (undefined4 ****)&DAT_00000001;
        }
        local_114 = local_70;
        local_124 = local_70;
        local_12c = (undefined4 ****)0x0;
        local_120 = local_130;
        local_110 = ppppuStack_6c;
        FUN_00fea674(auStack_48,&local_130);
        if (local_3c != 0) {
          FUN_0067b1ac(&local_130,auStack_48);
          local_a8 = local_130;
          ppppuStack_a4 = local_12c;
          ppppuStack_a0 = local_128;
          cVar3 = (char)local_124;
          local_ac = local_124._1_2_;
          local_aa = local_124._3_1_;
          FUN_00e0febc(&local_78);
          if (cVar3 != '\x02') {
            local_130 = local_a8;
            local_12c = ppppuStack_a4;
            local_128 = ppppuStack_a0;
            local_124 = (undefined4 ****)CONCAT31(CONCAT12(local_aa,local_ac),cVar3);
            DataMemoryBarrier(0xb);
            if (*(int *)(*piVar4 + 0x18) != 0) {
              FUN_00b065ec(*piVar4 + 8,&local_130);
            }
            if ((char)local_124 != '\x02') {
              local_60 = local_130;
              local_5c = local_12c;
              local_58 = local_128;
              local_51 = local_124._3_1_;
              local_53 = local_124._1_2_;
              local_54 = (char)local_124;
              FUN_019cf348(&local_60);
              if ((DAT_01d50f88 < 5) &&
                 (((DAT_01d4c488 - 1 < 2 ||
                   ((DAT_01d4c488 != 0 && (cVar3 = FUN_01aaafa8(&DAT_01d4c480), cVar3 != '\0')))) &&
                  (iVar5 = FUN_01aaa278(DAT_01d4c480), iVar5 != 0)))) {
                local_70 = (undefined4 ****)(DAT_01d4c480 + 0x1c);
                if (*(undefined4 *****)(DAT_01d4c480 + 0x20) == (undefined4 ****)0x0) {
LAB_00e9d65c:
                    /* WARNING: Subroutine does not return */
                  FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c17708);
                }
                local_5c = &local_8c;
                local_128 = *(undefined4 *****)(DAT_01d4c480 + 0x24);
                local_124 = *(undefined4 *****)(DAT_01d4c480 + 0x28);
                local_60 = &local_130;
                local_74 = (undefined4 ****)&DAT_00000001;
                local_120 = (undefined4 ****)0x0;
                local_58 = (undefined4 ****)&DAT_01d2ea4c;
                local_88 = 0x6b;
                local_8c = (undefined4 ****)0x3fe987;
                local_130 = (undefined4 ****)*local_70;
                local_12c = *(undefined4 *****)(DAT_01d4c480 + 0x20);
                local_78 = &local_60;
                FUN_00e0ff40(&local_78);
              }
              else {
                iVar5 = DAT_01d4c480;
                if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
                  local_94 = *(undefined4 *****)(DAT_01d4c480 + 0x14);
                  local_90 = *(undefined4 *****)(DAT_01d4c480 + 0x18);
                  local_98 = (undefined4 ****)&DAT_00000001;
                  DataMemoryBarrier(0xb);
                  puVar9 = DAT_01d4edc8;
                  pcVar1 = DAT_01d4edc4;
                  if (DAT_01d51174 != 2) {
                    puVar9 = &DAT_01cfc5e0;
                    pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
                  }
                  iVar6 = (*(code *)puVar9[3])(pcVar1,&local_98);
                  if (iVar6 != 0) {
                    local_84 = (undefined4 *)(DAT_01d4c480 + 0x1c);
                    if (*(undefined4 *****)(DAT_01d4c480 + 0x20) == (undefined4 ****)0x0)
                    goto LAB_00e9d65c;
                    local_74 = &local_80;
                    local_78 = &local_130;
                    local_124 = *(undefined4 *****)(DAT_01d4c480 + 0x28);
                    local_8c = &local_78;
                    local_128 = *(undefined4 *****)(DAT_01d4c480 + 0x24);
                    local_120 = (undefined4 ****)0x0;
                    local_88 = 1;
                    local_70 = (undefined4 ****)&DAT_01d2ea4c;
                    local_7c = 0x6b;
                    local_80 = (undefined4 ***)0x3fe987;
                    local_60 = local_98;
                    local_5c = local_94;
                    local_58 = local_90;
                    local_130 = (undefined4 ****)*local_84;
                    local_12c = *(undefined4 *****)(DAT_01d4c480 + 0x20);
                    FUN_01aaa328(iVar5,pcVar1,puVar9[4],&local_60,&local_8c);
                  }
                }
              }
            }
          }
          goto LAB_00e9d2d0;
        }
        FUN_0165a1f4(auStack_48);
      }
      FUN_00e0febc(&local_78);
    }
  }
LAB_00e9d2d0:
  *(undefined1 *)(param_2 + 0x9c) = 0;
  *(undefined4 *)(param_2 + 0x90) = uVar7;
switchD_00e9d050_caseD_3:
  FUN_00e9d780(&local_130,param_2 + 0x90,param_3);
  ppppuStack_1e0 = ppppuStack_cc;
  ppppuStack_1e4 = ppppuStack_d0;
  ppppuStack_1e8 = local_d4;
  ppppuStack_1ec = ppppuStack_d8;
  local_1f0 = local_dc;
  ppppuStack_1f4 = ppppuStack_e0;
  ppppuStack_1f8 = local_e4;
  ppppuStack_1fc = ppppuStack_e8;
  local_200 = local_ec;
  ppppuVar10 = local_12c;
  ppppuVar11 = local_130;
  if (local_130 == (undefined4 ****)&SUB_00000004 && local_12c == (undefined4 ****)0x0) {
    *param_1 = 4;
    param_1[1] = 0;
    uVar2 = 3;
  }
  else {
    local_218 = local_130;
    local_170 = local_128;
    ppppuStack_16c = local_124;
    ppppuStack_168 = local_120;
    ppppuStack_164 = local_11c;
    ppppuStack_160 = local_118;
    local_15c = local_114;
    ppppuStack_158 = local_110;
    ppppuStack_154 = local_10c;
    ppppuStack_150 = ppppuStack_108;
    ppppuStack_14c = ppppuStack_104;
    local_148 = local_100;
    ppppuStack_144 = ppppuStack_fc;
    ppppuStack_140 = local_f8;
    ppppuStack_13c = ppppuStack_f4;
    ppppuStack_138 = ppppuStack_f0;
    if (*(char *)(param_2 + 0x9c) == '\x03') {
      FUN_01139b38(*(undefined4 *)(param_2 + 0x94),*(undefined4 *)(param_2 + 0x98));
    }
    if (ppppuVar11 == (undefined4 ****)&DAT_00000003 && ppppuVar10 == (undefined4 ****)0x0) {
      FUN_00d91d08(&local_130,&local_170);
      ppppuVar10 = local_124;
      ppppuVar12 = local_12c;
      ppppuVar11 = local_130;
      local_218 = local_128;
      local_1d8 = local_120;
      ppppuStack_1d4 = local_11c;
      ppppuStack_1d0 = local_118;
      ppppuStack_1cc = local_114;
      ppppuStack_1c8 = local_110;
      local_1c4 = local_10c;
      ppppuStack_1c0 = ppppuStack_108;
      ppppuStack_1bc = ppppuStack_104;
      ppppuStack_1b8 = local_100;
      ppppuStack_1b4 = ppppuStack_fc;
      local_1b0 = local_f8;
      ppppuStack_1ac = ppppuStack_f4;
      ppppuStack_1a8 = ppppuStack_f0;
      ppppuStack_1a4 = local_ec;
      ppppuStack_1a0 = ppppuStack_e8;
      local_200 = local_e4;
      ppppuStack_1fc = ppppuStack_e0;
      ppppuStack_1f8 = local_dc;
      ppppuStack_1f4 = ppppuStack_d8;
      local_1f0 = local_d4;
      ppppuStack_1ec = ppppuStack_d0;
      ppppuStack_1e8 = ppppuStack_cc;
      ppppuStack_1e4 = ppppuStack_c8;
      ppppuStack_1e0 = ppppuStack_c4;
      local_210 = local_c0;
      uStack_20c = uStack_bc;
      uStack_208 = uStack_b8;
      uStack_204 = uStack_b4;
      FUN_00f9604c(param_2 + 0x48);
    }
    else {
      local_1d8 = local_170;
      ppppuStack_1d4 = ppppuStack_16c;
      ppppuStack_1d0 = ppppuStack_168;
      ppppuStack_1cc = ppppuStack_164;
      ppppuStack_1c8 = ppppuStack_160;
      local_1c4 = local_15c;
      ppppuStack_1c0 = ppppuStack_158;
      ppppuStack_1bc = ppppuStack_154;
      ppppuStack_1b8 = ppppuStack_150;
      ppppuStack_1b4 = ppppuStack_14c;
      local_1b0 = local_148;
      ppppuStack_1ac = ppppuStack_144;
      ppppuStack_1a8 = ppppuStack_140;
      ppppuStack_1a4 = ppppuStack_13c;
      ppppuStack_1a0 = ppppuStack_138;
      FUN_00f9604c(param_2 + 0x48);
      ppppuVar12 = (undefined4 ****)0x0;
      ppppuVar11 = (undefined4 ****)&DAT_00000003;
      if (*(char *)(param_2 + 0xa5) == '\x01') {
        FUN_00f9604c(param_2);
      }
    }
    *param_1 = ppppuVar11;
    param_1[1] = ppppuVar12;
    param_1[2] = local_218;
    param_1[3] = ppppuVar10;
    param_1[4] = local_1d8;
    param_1[5] = ppppuStack_1d4;
    param_1[6] = ppppuStack_1d0;
    param_1[7] = ppppuStack_1cc;
    param_1[8] = ppppuStack_1c8;
    param_1[9] = local_1c4;
    param_1[10] = ppppuStack_1c0;
    param_1[0xb] = ppppuStack_1bc;
    param_1[0xc] = ppppuStack_1b8;
    param_1[0xd] = ppppuStack_1b4;
    param_1[0xe] = local_1b0;
    param_1[0xf] = ppppuStack_1ac;
    param_1[0x10] = ppppuStack_1a8;
    param_1[0x11] = ppppuStack_1a4;
    param_1[0x12] = ppppuStack_1a0;
    param_1[0x13] = local_200;
    param_1[0x14] = ppppuStack_1fc;
    param_1[0x15] = ppppuStack_1f8;
    param_1[0x16] = ppppuStack_1f4;
    param_1[0x17] = local_1f0;
    param_1[0x18] = ppppuStack_1ec;
    param_1[0x19] = ppppuStack_1e8;
    param_1[0x1a] = ppppuStack_1e4;
    param_1[0x1b] = ppppuStack_1e0;
    param_1[0x1c] = local_210;
    param_1[0x1d] = uStack_20c;
    param_1[0x1e] = uStack_208;
    param_1[0x1f] = uStack_204;
    uVar2 = 1;
  }
  *(undefined1 *)(param_2 + 0xa4) = uVar2;
  return;
}

