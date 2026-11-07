// FUN_017ba330 @ 017ba330 size=2704 calls_out=17 calls_in=1
// strings: try_reclaim_frameevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/prioritize.rs:129 | tracing::span::active | h2::proto::streams::prioritizestream.id/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/prioritize.rsevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/prioritize.rs:669 | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | reclaimed

undefined4 FUN_017ba330(int param_1,undefined4 param_2,undefined4 ****param_3,int param_4)

{
  char *pcVar1;
  undefined8 uVar2;
  char cVar3;
  undefined4 ****ppppuVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  undefined4 ****ppppuVar13;
  undefined4 *puVar14;
  undefined4 *extraout_r12;
  undefined8 uVar15;
  undefined4 ****local_1b8;
  char **ppcStack_1b4;
  undefined4 ****local_1b0;
  undefined4 ****local_1ac;
  undefined4 ****local_1a8;
  undefined4 ****ppppuStack_1a4;
  undefined4 ****local_1a0;
  undefined4 ****ppppuStack_19c;
  undefined4 ****local_198;
  undefined4 ****ppppuStack_194;
  undefined4 ****ppppuStack_190;
  undefined4 ****local_18c;
  undefined4 ****ppppuStack_188;
  undefined4 ****ppppuStack_184;
  undefined4 ****local_178;
  undefined4 local_174;
  byte local_170;
  undefined *local_168;
  undefined2 local_164;
  undefined1 local_162;
  undefined4 ****local_160;
  undefined4 local_15c;
  undefined4 *local_158;
  undefined4 ****local_150;
  undefined4 ****local_14c;
  undefined4 *local_148;
  undefined4 *puStack_144;
  undefined4 local_140;
  char *local_13c;
  undefined4 local_138;
  undefined4 ****local_134;
  undefined4 ****local_130;
  undefined8 local_12c;
  undefined4 local_124;
  undefined4 ****local_120;
  undefined4 ****local_11c;
  undefined4 ****local_118;
  undefined4 ****local_114;
  undefined8 local_110;
  undefined4 ****local_108;
  undefined4 ****ppppuStack_104;
  undefined *local_100;
  undefined4 local_fc;
  undefined4 ****local_f8;
  char **local_f4;
  undefined4 ****local_f0;
  undefined4 ****local_ec;
  undefined4 ****local_e8;
  undefined4 ****local_e4;
  undefined4 ****local_e0;
  undefined4 ****local_dc;
  undefined *local_d8;
  uint uStack_d4;
  undefined4 ****local_40;
  undefined4 local_3c;
  undefined4 *local_38;
  undefined4 ****local_30;
  undefined4 local_2c;
  undefined4 *puStack_28;
  
  puVar14 = &DAT_01d50f88;
  if ((DAT_01d50f88 == 0) &&
     (((DAT_01d4f454 - 1 < 2 ||
       ((DAT_01d4f454 != 0 && (cVar3 = FUN_01aaafa8(&DAT_01d4f44c), cVar3 != '\0')))) &&
      (iVar5 = FUN_01aaa278(DAT_01d4f44c), iVar5 != 0)))) {
    local_f0 = DAT_01d4f44c + 7;
    local_f4 = (char **)0x0;
    local_f8 = (undefined4 ****)&SUB_00000004;
    FUN_01aaa548(&local_1b8,DAT_01d4f44c,&local_f8);
  }
  else {
    local_e0 = DAT_01d4f44c;
    local_f0 = (undefined4 ****)0x2;
    if (DAT_01d51ae9 == '\0') {
      local_110._0_4_ = DAT_01d4f44c + 7;
      local_114 = (undefined4 ****)0x0;
      local_118 = (undefined4 ****)&SUB_00000004;
      FUN_01aaa3e0(&local_f8,&local_118);
    }
    local_1b8 = local_f8;
    ppcStack_1b4 = local_f4;
    local_1b0 = local_f0;
    local_1ac = local_ec;
    local_1a8 = local_e8;
    ppppuStack_1a4 = local_e4;
    local_1a0 = local_e0;
    ppppuStack_19c = local_dc;
  }
  if (local_1b0 != (undefined4 ****)0x2) {
    if (((uint)local_1b0 & 1) == 0) {
      ppppuVar4 = local_1ac;
    }
    else {
      ppppuVar4 = (undefined4 ****)((int)local_1ac + ((int)local_1a8[2] - 1U & 0xfffffff8) + 8);
    }
    (*(code *)local_1a8[0xc])(ppppuVar4,&local_1b8);
  }
  if ((DAT_01d51ae9 == '\0') && (local_1a0 != (undefined4 ****)0x0)) {
    local_114 = (undefined4 ****)local_1a0[4];
    local_118 = (undefined4 ****)local_1a0[3];
    local_f8 = &local_118;
    local_f4 = (char **)&DAT_0132b6a0;
    FUN_006404a8(&local_1b8,"tracing::span::active",0x15,&DAT_00594cdd,&local_f8);
  }
  ppppuVar4 = *(undefined4 *****)(param_4 + 0x108);
  uVar9 = 0;
  *(undefined4 *)(param_4 + 0x108) = 3;
  if (ppppuVar4 == (undefined4 ****)&DAT_00000003) goto LAB_017bad54;
  puVar7 = (undefined4 *)((uint)&local_198 | 4);
  uVar9 = *(undefined4 *)(param_4 + 0x110);
  uVar10 = *(undefined4 *)(param_4 + 0x114);
  uVar12 = *(undefined4 *)(param_4 + 0x118);
  *puVar7 = *(undefined4 *)(param_4 + 0x10c);
  puVar7[1] = uVar9;
  puVar7[2] = uVar10;
  puVar7[3] = uVar12;
  uVar9 = *(undefined4 *)(param_4 + 0x120);
  uVar10 = *(undefined4 *)(param_4 + 0x124);
  uVar12 = *(undefined4 *)(param_4 + 0x128);
  puVar7[4] = *(undefined4 *)(param_4 + 0x11c);
  puVar7[5] = uVar9;
  puVar7[6] = uVar10;
  puVar7[7] = uVar12;
  uVar9 = *(undefined4 *)(param_4 + 0x130);
  uVar10 = *(undefined4 *)(param_4 + 0x134);
  puVar11 = *(undefined4 **)(param_4 + 0x138);
  ppppuVar13 = *(undefined4 *****)(param_4 + 0x13c);
  puVar7[8] = *(undefined4 *)(param_4 + 300);
  puVar7[9] = uVar9;
  puVar7[10] = uVar10;
  puVar7[0xb] = puVar11;
  puVar7[0xc] = ppppuVar13;
  local_198 = ppppuVar4;
  if ((DAT_01d50f88 == 0) &&
     ((DAT_01d4f460 - 1 < 2 ||
      ((DAT_01d4f460 != 0 && (cVar3 = FUN_01aaafa8(&DAT_01d4f458), cVar3 != '\0')))))) {
    iVar5 = FUN_01aaa278(DAT_01d4f458);
    if (iVar5 == 0) goto LAB_017ba518;
    ppppuVar4 = *(undefined4 *****)(DAT_01d4f458 + 0x20);
    puVar7 = extraout_r12;
    if (ppppuVar4 != (undefined4 ****)0x0) {
      puVar11 = *(undefined4 **)(DAT_01d4f458 + 0x24);
      puVar14 = *(undefined4 **)(DAT_01d4f458 + 0x28);
      puVar7 = (undefined4 *)(DAT_01d4f458 + 0x1c);
      ppppuVar13 = (undefined4 ****)*puVar7;
      local_140 = 0;
      local_138 = 0x13;
      local_13c = "reclaimed";
      local_150 = ppppuVar13;
      local_14c = ppppuVar4;
      local_148 = puVar11;
      puStack_144 = puVar14;
    }
    puVar8 = &DAT_01d1bcf8;
    local_12c = CONCAT44(local_12c._4_4_,(undefined4 *)local_12c);
    local_110 = CONCAT44(local_110._4_4_,(undefined4 ****)local_110);
    if ((ppppuVar4 < (undefined4 ****)0x2) ||
       (local_124 = 1, local_134 = ppppuVar13, local_130 = ppppuVar4, local_120 = &local_198,
       local_12c = CONCAT44(puVar14,puVar11),
       local_110 = CONCAT44(local_110._4_4_,(undefined4 ****)local_110), ppppuVar4 < &DAT_00000003))
    goto LAB_017ba6ec;
    local_108 = (undefined4 ****)0x2;
    if (local_198 == (undefined4 ****)0x0) {
      local_11c = local_18c;
    }
    else {
      local_11c = (undefined4 ****)0x0;
      if (local_198 == (undefined4 ****)&DAT_00000001) {
        local_11c = (undefined4 ****)((int)local_18c - (int)ppppuStack_188);
        if (local_18c < ppppuStack_188) {
          local_11c = (undefined4 ****)0x0;
        }
        if (ppppuStack_184 != (undefined4 ****)0x0) {
          local_11c = (undefined4 ****)0x0;
        }
      }
    }
    local_dc = &local_11c;
    local_e0 = &local_118;
    local_e8 = &local_120;
    local_ec = &local_134;
    local_f4 = &local_13c;
    local_f8 = &local_150;
    local_160 = &local_f8;
    local_15c = 3;
    local_d8 = &DAT_01d2dd1c;
    local_e4 = (undefined4 ****)&DAT_01d1bd08;
    local_f0 = (undefined4 ****)&DAT_01d2ea4c;
    local_158 = puVar7;
    local_12c._0_4_ = puVar11;
    local_12c._4_4_ = puVar14;
    local_118 = ppppuVar13;
    local_114 = ppppuVar4;
    local_110._0_4_ = (undefined4 ****)puVar11;
    local_110._4_4_ = (undefined4 ****)puVar14;
    FUN_01aaaecc(DAT_01d4f458,&local_160);
    iVar5 = DAT_01d4f458;
    uVar2 = CONCAT44(local_12c._4_4_,(undefined4 *)local_12c);
    local_110 = CONCAT44(local_110._4_4_,(undefined4 ****)local_110);
    if ((DAT_01d51ae9 == '\0') &&
       (uVar2 = CONCAT44(local_12c._4_4_,(undefined4 *)local_12c),
       local_110 = CONCAT44(local_110._4_4_,(undefined4 ****)local_110), 4 < DAT_01d51b00)) {
      local_3c = *(undefined4 *)(DAT_01d4f458 + 0x14);
      local_38 = *(undefined4 **)(DAT_01d4f458 + 0x18);
      local_40 = (undefined4 ****)&DAT_00000005;
      DataMemoryBarrier(0xb);
      puVar14 = DAT_01d4edc8;
      pcVar1 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        puVar14 = &DAT_01cfc5e0;
        pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar6 = (*(code *)puVar14[3])(pcVar1,&local_40);
      uVar2 = CONCAT44(local_12c._4_4_,(undefined4 *)local_12c);
      if (iVar6 != 0) {
        local_30 = local_40;
        local_2c = local_3c;
        puStack_28 = local_38;
        FUN_01aaa328(iVar5,pcVar1,puVar14[4],&local_30,&local_160);
        uVar2 = CONCAT44(local_12c._4_4_,(undefined4 *)local_12c);
      }
    }
  }
  else {
LAB_017ba518:
    iVar5 = DAT_01d4f458;
    uVar2 = CONCAT44(local_12c._4_4_,(undefined4 *)local_12c);
    local_110 = CONCAT44(local_110._4_4_,(undefined4 ****)local_110);
    if ((DAT_01d51ae9 == '\0') &&
       (uVar2 = CONCAT44(local_12c._4_4_,(undefined4 *)local_12c),
       local_110 = CONCAT44(local_110._4_4_,(undefined4 ****)local_110), 4 < DAT_01d51b00)) {
      local_15c = *(undefined4 *)(DAT_01d4f458 + 0x14);
      local_158 = *(undefined4 **)(DAT_01d4f458 + 0x18);
      local_160 = (undefined4 ****)&DAT_00000005;
      DataMemoryBarrier(0xb);
      puVar14 = DAT_01d4edc8;
      pcVar1 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        puVar14 = &DAT_01cfc5e0;
        pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      uVar15 = (*(code *)puVar14[3])(pcVar1,&local_160);
      uVar2 = CONCAT44(local_12c._4_4_,(undefined4 *)local_12c);
      if ((int)uVar15 != 0) {
        ppppuVar13 = *(undefined4 *****)(DAT_01d4f458 + 0x1c);
        ppppuVar4 = *(undefined4 *****)(DAT_01d4f458 + 0x20);
        if (ppppuVar4 != (undefined4 ****)0x0) {
          local_148 = *(undefined4 **)(DAT_01d4f458 + 0x24);
          puStack_144 = *(undefined4 **)(DAT_01d4f458 + 0x28);
          uVar15 = *(undefined8 *)(DAT_01d4f458 + 0x24);
          local_140 = 0;
          local_138 = 0x13;
          local_13c = "reclaimed";
          local_150 = ppppuVar13;
          local_14c = ppppuVar4;
        }
        if (ppppuVar4 < (undefined4 ****)0x2) {
          puVar8 = &DAT_01d1bcf8;
          local_12c = CONCAT44(local_12c._4_4_,(undefined4 *)local_12c);
          goto LAB_017ba6ec;
        }
        local_124 = 1;
        puVar8 = &DAT_01d1bcf8;
        local_134 = ppppuVar13;
        local_130 = ppppuVar4;
        local_120 = &local_198;
        local_12c = uVar15;
        if (ppppuVar4 < &DAT_00000003) goto LAB_017ba6ec;
        local_108 = (undefined4 ****)0x2;
        if (local_198 == (undefined4 ****)0x2) {
          local_11c = (undefined4 ****)0x0;
        }
        else if (local_198 == (undefined4 ****)&DAT_00000001) {
          local_11c = (undefined4 ****)((int)local_18c - (int)ppppuStack_188);
          if (local_18c < ppppuStack_188) {
            local_11c = (undefined4 ****)0x0;
          }
          if (ppppuStack_184 != (undefined4 ****)0x0) {
            local_11c = (undefined4 ****)0x0;
          }
        }
        else {
          local_11c = local_18c;
        }
        local_dc = &local_11c;
        local_e0 = &local_118;
        local_e8 = &local_120;
        local_ec = &local_134;
        local_f4 = &local_13c;
        local_f8 = &local_150;
        local_40 = &local_f8;
        local_f0 = (undefined4 ****)&DAT_01d2ea4c;
        local_d8 = &DAT_01d2dd1c;
        local_3c = 3;
        local_e4 = (undefined4 ****)&DAT_01d1bd08;
        local_30 = local_160;
        local_2c = local_15c;
        puStack_28 = local_158;
        local_118 = ppppuVar13;
        local_114 = ppppuVar4;
        local_38 = (undefined4 *)(DAT_01d4f458 + 0x1c);
        local_110 = uVar15;
        FUN_01aaa328(iVar5,pcVar1,puVar14[4],&local_30,&local_40);
        uVar2 = local_12c;
      }
    }
  }
  local_12c._4_4_ = (undefined4 *)((ulonglong)uVar2 >> 0x20);
  iVar5 = *(int *)(param_1 + 0x3c);
  *(undefined4 *)(param_1 + 0x3c) = 0;
  local_12c = uVar2;
  if (iVar5 == 1) {
    local_100 = local_168;
    local_118 = local_198;
    local_114 = ppppuStack_194;
    local_110._0_4_ = ppppuStack_190;
    local_110._4_4_ = local_18c;
    local_108 = ppppuStack_188;
    ppppuStack_104 = ppppuStack_184;
    local_fc._0_3_ = CONCAT12(local_162,local_164);
    if (local_198 == (undefined4 ****)0x0) {
      ppppuVar4 = local_18c;
LAB_017bacbc:
      if (ppppuVar4 != (undefined4 ****)0x0) {
        local_130 = local_178;
        local_12c._0_4_ = (undefined4 *)local_174;
        if ((local_170 & 1) != 0) {
          local_fc = CONCAT13(local_fc._3_1_,CONCAT12(local_162,local_164)) | 0x10000;
        }
        local_f0 = local_198;
        local_ec = ppppuStack_194;
        local_e8 = ppppuStack_190;
        local_e4 = local_18c;
        local_e0 = ppppuStack_188;
        local_dc = ppppuStack_184;
        local_d8 = local_168;
        uStack_d4 = local_fc;
        local_f8 = (undefined4 ****)((uint)local_f8 & 0xffffff00);
        local_134 = param_3;
        iVar5 = FUN_0139f148(param_3[0xd],param_3[0xe],local_178,local_174);
        FUN_017f1084(iVar5 + 100,param_2,&local_f8);
        iVar5 = FUN_0139f0d0(param_3[0xd],param_3[0xe],local_178,local_174);
        if (0 < *(int *)(iVar5 + 0x3c)) {
          FUN_013a07f4(param_1,&local_134);
        }
        uVar9 = 1;
        goto LAB_017bad54;
      }
    }
    else if (local_198 == (undefined4 ****)&DAT_00000001) {
      ppppuVar4 = (undefined4 ****)((int)local_18c - (int)ppppuStack_188);
      if (local_18c < ppppuStack_188) {
        ppppuVar4 = (undefined4 ****)0x0;
      }
      if (ppppuStack_184 == (undefined4 ****)0x0) goto LAB_017bacbc;
    }
    uVar9 = 0;
    FUN_01a6322c();
    goto LAB_017bad54;
  }
  if (iVar5 != 2) {
                    /* WARNING: Subroutine does not return */
    FUN_01979f74("wasn\'t expecting a frame to reclaim",0x23,&DAT_01d1bd18);
  }
  if (DAT_01d50f88 == 0) {
    if (1 < DAT_01d4f46c - 1) {
      if (DAT_01d4f46c != 0) {
        cVar3 = FUN_01aaafa8(&DAT_01d4f464);
        uVar2 = local_12c;
        if (cVar3 != '\0') goto LAB_017bab68;
      }
      goto LAB_017ba9cc;
    }
LAB_017bab68:
    iVar5 = FUN_01aaa278(DAT_01d4f464);
    uVar2 = local_12c;
    if (iVar5 == 0) goto LAB_017ba9cc;
    if (*(char ***)(DAT_01d4f464 + 0x20) == (char **)0x0) goto LAB_017badbc;
    local_130 = &local_30;
    local_f0 = *(undefined4 *****)(DAT_01d4f464 + 0x24);
    local_ec = *(undefined4 *****)(DAT_01d4f464 + 0x28);
    local_148 = (undefined4 *)(DAT_01d4f464 + 0x1c);
    local_f8 = (undefined4 ****)*local_148;
    local_134 = &local_f8;
    local_150 = &local_134;
    local_e8 = (undefined4 ****)0x0;
    local_14c = (undefined4 ****)&DAT_00000001;
    local_12c._0_4_ = (undefined4 *)&DAT_01d2ea4c;
    local_2c = 0x53;
    local_30 = (undefined4 ****)0x52df55;
    local_f4 = *(char ***)(DAT_01d4f464 + 0x20);
    FUN_01aaaecc(DAT_01d4f464,&local_150);
    iVar5 = DAT_01d4f464;
    uVar2 = CONCAT44(local_12c._4_4_,(undefined4 *)local_12c);
    if ((DAT_01d51ae9 == '\0') &&
       (uVar2 = CONCAT44(local_12c._4_4_,(undefined4 *)local_12c), 4 < DAT_01d51b00)) {
      local_114 = *(undefined4 *****)(DAT_01d4f464 + 0x14);
      local_110._0_4_ = *(undefined4 *****)(DAT_01d4f464 + 0x18);
      local_118 = (undefined4 ****)&DAT_00000005;
      DataMemoryBarrier(0xb);
      puVar14 = DAT_01d4edc8;
      pcVar1 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        puVar14 = &DAT_01cfc5e0;
        pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar6 = (*(code *)puVar14[3])(pcVar1,&local_118);
      uVar2 = CONCAT44(local_12c._4_4_,(undefined4 *)local_12c);
      if (iVar6 != 0) {
        FUN_01aaa328(iVar5,pcVar1,puVar14[4],&local_118,&local_150);
        uVar2 = CONCAT44(local_12c._4_4_,(undefined4 *)local_12c);
      }
    }
  }
  else {
LAB_017ba9cc:
    iVar5 = DAT_01d4f464;
    if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
      local_14c = *(undefined4 *****)(DAT_01d4f464 + 0x14);
      local_148 = *(undefined4 **)(DAT_01d4f464 + 0x18);
      local_150 = (undefined4 ****)&DAT_00000005;
      DataMemoryBarrier(0xb);
      puVar14 = DAT_01d4edc8;
      pcVar1 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        puVar14 = &DAT_01cfc5e0;
        pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      local_12c = uVar2;
      iVar6 = (*(code *)puVar14[3])(pcVar1,&local_150);
      uVar2 = local_12c;
      if (iVar6 != 0) {
        if (*(char ***)(DAT_01d4f464 + 0x20) == (char **)0x0) {
LAB_017badbc:
          puVar8 = &DAT_01d1bd28;
LAB_017ba6ec:
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,puVar8);
        }
        local_114 = &local_30;
        local_f0 = *(undefined4 *****)(DAT_01d4f464 + 0x24);
        local_ec = *(undefined4 *****)(DAT_01d4f464 + 0x28);
        local_118 = &local_f8;
        local_134 = &local_118;
        local_130 = (undefined4 ****)&DAT_00000001;
        local_e8 = (undefined4 ****)0x0;
        local_110._0_4_ = (undefined4 ****)&DAT_01d2ea4c;
        local_2c = 0x53;
        local_30 = (undefined4 ****)0x52df55;
        local_12c._0_4_ = (undefined4 *)(DAT_01d4f464 + 0x1c);
        local_f8 = *(undefined4 *****)(DAT_01d4f464 + 0x1c);
        local_f4 = *(char ***)(DAT_01d4f464 + 0x20);
        FUN_01aaa328(iVar5,pcVar1,puVar14[4],&local_150,&local_134);
        uVar2 = CONCAT44(local_12c._4_4_,(undefined4 *)local_12c);
      }
    }
  }
  uVar9 = 0;
  local_12c = uVar2;
  FUN_01a6322c(&local_198);
LAB_017bad54:
  FUN_0134c39c(&local_1b8);
  FUN_01834abc(&local_1b8);
  return uVar9;
}

