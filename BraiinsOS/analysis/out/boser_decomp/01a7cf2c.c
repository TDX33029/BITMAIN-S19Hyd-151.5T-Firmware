// FUN_01a7cf2c @ 01a7cf2c size=4628 calls_out=22 calls_in=3
// strings: InvalidParamSegmentInvalidParamInvalidCatchAll | stre | stre | am e | rror | InvalidParamSegmentInvalidParamInvalidCatchAll

void FUN_01a7cf2c(undefined4 *param_1,undefined4 *param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  char ***pppcVar2;
  char ***pppcVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined1 *puVar8;
  undefined4 ****ppppuVar9;
  char ***extraout_r2;
  undefined2 *puVar10;
  undefined *puVar11;
  undefined4 ******extraout_r3;
  char ***extraout_r3_00;
  undefined4 uVar12;
  int *piVar13;
  undefined4 *puVar14;
  uint uVar15;
  undefined4 *****pppppuVar16;
  char ***unaff_r5;
  undefined4 uVar17;
  char *pcVar18;
  uint uVar19;
  int iVar20;
  char ***unaff_r10;
  undefined4 ****ppppuVar21;
  char ****ppppcVar22;
  undefined4 ******ppppppuVar23;
  bool bVar24;
  bool bVar25;
  undefined4 *****local_1e0;
  char ***local_1dc;
  char ***local_1d8;
  undefined4 uStack_1d4;
  undefined4 ****local_1d0;
  undefined4 local_1cc;
  undefined4 *local_1c8;
  undefined4 ****local_1c4;
  undefined4 local_1c0;
  undefined4 ****local_1bc;
  undefined4 ****local_1b8;
  undefined4 local_1b4;
  undefined4 *local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined4 ****local_1a0;
  undefined4 ****local_19c;
  undefined4 ****local_198;
  undefined4 local_194;
  char ***local_190;
  undefined4 ******local_18c;
  undefined8 local_188;
  char ***local_180;
  undefined4 local_17c;
  char local_175;
  undefined4 local_174;
  char **local_170;
  char **local_16c;
  undefined4 ******local_168;
  undefined4 ****local_164;
  char ***local_160;
  char ***local_15c;
  undefined4 local_158;
  undefined4 local_150;
  undefined4 ******local_14c;
  undefined4 ******local_148;
  undefined4 ******local_144;
  char ****local_140;
  undefined4 ******local_13c;
  undefined4 *local_138;
  char ****local_134;
  undefined *local_130;
  undefined4 local_58;
  undefined4 *****local_54;
  undefined4 ******local_50;
  undefined4 *****local_4c;
  undefined4 ****local_48;
  undefined4 ******local_44;
  undefined4 ****local_40;
  undefined4 local_3c;
  undefined4 *local_38;
  undefined4 ****local_30;
  undefined4 local_2c;
  undefined4 *local_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*param_3) {
  case 0:
    ppppuVar21 = *(undefined4 *****)(param_3 + 4);
    ppppuVar9 = *(undefined4 *****)(param_3 + 8);
    local_1a0 = ppppuVar21;
    local_19c = ppppuVar9;
    if ((DAT_01d50f88 == 0) &&
       (((DAT_01d50a20 - 1 < 2 ||
         ((DAT_01d50a20 != 0 && (cVar4 = FUN_01aaafa8(&DAT_01d50a18), cVar4 != '\0')))) &&
        (iVar6 = FUN_01aaa278(DAT_01d50a18), iVar20 = DAT_01d50a18, iVar6 != 0)))) {
      local_54 = *(undefined4 ******)(DAT_01d50a18 + 0x20);
      if (local_54 == (undefined4 *****)0x0) {
LAB_01a7d63c:
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d2d744);
      }
      local_50 = *(undefined4 *******)(DAT_01d50a18 + 0x24);
      local_4c = *(undefined4 ******)(DAT_01d50a18 + 0x28);
      local_28 = (undefined4 *)(DAT_01d50a18 + 0x1c);
      local_18c = (undefined4 ******)*local_28;
      ppppcVar22 = (char ****)&local_188;
      bVar25 = local_54 != (undefined4 *****)0x0;
      bVar24 = local_54 != (undefined4 *****)&DAT_00000001;
      local_17c = 0;
      pcVar18 = s_stre_0052f0b1;
      if (bVar24) {
        ppppcVar22 = (char ****)&local_164;
      }
      local_40 = (undefined4 ****)s_stre_0052f0b1;
      if (bVar24) {
        local_158 = 1;
        pcVar18 = (char *)&local_1a0;
      }
      local_3c = 0x19;
      local_188._0_4_ = local_54;
      local_188._4_4_ = (char ***)local_50;
      local_180 = (char ***)local_4c;
      if (bVar24) {
        *ppppcVar22 = (char ***)local_54;
        ppppcVar22[1] = (char ***)local_50;
        ppppcVar22[2] = (char ***)local_4c;
        bVar25 = &DAT_00000001 < local_54;
        local_1c4 = (undefined4 ****)pcVar18;
        local_168 = local_18c;
      }
      if (!bVar25 || (!bVar24 || local_54 == (undefined4 *****)0x2)) goto LAB_01a7d63c;
      local_134 = (char ****)&local_1d0;
      local_138 = &local_58;
      local_140 = (char ****)&local_1c4;
      local_144 = &local_168;
      local_14c = (undefined4 ******)&local_40;
      local_150 = &local_18c;
      local_30 = (undefined4 ****)&local_150;
      local_48 = (undefined4 ****)0x2;
      local_2c = 3;
      local_1d0 = &local_19c;
      local_130 = &DAT_01d2d764;
      local_13c = (undefined4 ******)&DAT_01d2d754;
      local_148 = (undefined4 ******)&DAT_01d2ea4c;
      local_58 = local_18c;
      FUN_01aaaecc(iVar20,&local_30);
      iVar20 = DAT_01d50a18;
      if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
        local_1dc = *(char ****)(DAT_01d50a18 + 0x14);
        local_1d8 = *(char ****)(DAT_01d50a18 + 0x18);
        local_1e0 = (undefined4 *****)&DAT_00000005;
        DataMemoryBarrier(0xb);
        puVar14 = DAT_01d4edc8;
        if (DAT_01d51174 != 2) {
          puVar14 = &DAT_01cfc5e0;
        }
        pcVar18 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          pcVar18 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar6 = (*(code *)puVar14[3])(pcVar18,&local_1e0);
        if (iVar6 != 0) {
          uVar12 = puVar14[4];
          goto LAB_01a7d13c;
        }
      }
    }
    else {
      iVar20 = DAT_01d50a18;
      if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
        local_194 = *(undefined4 *)(DAT_01d50a18 + 0x14);
        local_190 = *(char ****)(DAT_01d50a18 + 0x18);
        local_198 = (undefined4 ****)&DAT_00000005;
        DataMemoryBarrier(0xb);
        puVar14 = DAT_01d4edc8;
        if (DAT_01d51174 != 2) {
          puVar14 = &DAT_01cfc5e0;
        }
        pcVar18 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          pcVar18 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar6 = (*(code *)puVar14[3])(pcVar18,&local_198);
        if (iVar6 != 0) {
          local_28 = (undefined4 *)(DAT_01d50a18 + 0x1c);
          local_58 = (undefined4 ******)*local_28;
          local_54 = *(undefined4 ******)(DAT_01d50a18 + 0x20);
          if (local_54 == (undefined4 *****)0x0) goto LAB_01a7d63c;
          local_188._4_4_ = *(char ****)(DAT_01d50a18 + 0x24);
          local_180 = *(char ****)(DAT_01d50a18 + 0x28);
          bVar25 = local_54 != (undefined4 *****)0x0;
          local_17c = 0;
          local_3c = 0x19;
          local_40 = (undefined4 ****)s_stre_0052f0b1;
          if (local_54 != (undefined4 *****)&DAT_00000001) {
            local_158 = 1;
            local_1c4 = &local_1a0;
            bVar25 = &DAT_00000001 < local_54;
            local_168 = local_58;
            local_164 = local_54;
            local_160 = local_188._4_4_;
          }
          local_18c = local_58;
          local_188._0_4_ = local_54;
          if (!bVar25 ||
              (local_54 == (undefined4 *****)&DAT_00000001 || local_54 == (undefined4 *****)0x2))
          goto LAB_01a7d63c;
          local_138 = &local_58;
          local_140 = (char ****)&local_1c4;
          local_144 = &local_168;
          local_14c = (undefined4 ******)&local_40;
          local_134 = (char ****)&local_1d0;
          local_150 = &local_18c;
          local_30 = (undefined4 ****)&local_150;
          local_48 = (undefined4 ****)0x2;
          local_2c = 3;
          local_130 = &DAT_01d2d764;
          local_13c = (undefined4 ******)&DAT_01d2d754;
          local_148 = (undefined4 ******)&DAT_01d2ea4c;
          local_1d0 = &local_19c;
          local_1e0 = (undefined4 *****)local_198;
          local_1dc = (char ***)local_194;
          local_1d8 = local_190;
          uVar12 = puVar14[4];
          local_50 = (undefined4 ******)local_188._4_4_;
          local_4c = (undefined4 *****)local_180;
LAB_01a7d13c:
          FUN_01aaa328(iVar20,pcVar18,uVar12,&local_1e0,&local_30);
        }
      }
    }
    uVar12 = param_2[5];
    FUN_01933ff0(&local_150,param_2[4]);
    ppppppuVar23 = local_14c;
    if (local_150 == (undefined4 ******)&DAT_00000001) {
      local_54 = (undefined4 *****)CONCAT31(local_54._1_3_,local_148._0_1_);
      local_58 = local_14c;
                    /* WARNING: Subroutine does not return */
      FUN_013073dc(&DAT_00533467,0x2b,&local_58,&DAT_01d2cac8,&DAT_01d2c808);
    }
    uVar15 = (uint)local_148 & 0xff;
    pppppuVar16 = local_14c + 0x56;
    FUN_0136a6ac(&local_168,pppppuVar16,ppppuVar21);
    if (local_168 == (undefined4 ******)0x0) {
      local_188 = FUN_0139f3b4(local_164,local_160);
    }
    else {
      if (ppppuVar21 == (undefined4 ****)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("assertion failed: !id.is_zero()event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/peer.rs:80"
                     ,0x1f,&DAT_01cec208);
      }
      if ((((uint)*(byte *)(ppppppuVar23 + 0xd) ^ (uint)ppppuVar21) & 1) == 0) {
        if ((ppppppuVar23[0xe] == (undefined4 *****)0x0) && (ppppppuVar23[0xf] <= ppppuVar21)) {
          ppppppuVar23[0xe] = (undefined4 *****)((int)ppppuVar21 + 2U >> 0x1f);
          ppppppuVar23[0xf] = (undefined4 *****)((int)ppppuVar21 + 2U);
        }
      }
      else if ((ppppppuVar23[0x3a] == (undefined4 *****)0x0) && (ppppppuVar23[0x3b] <= ppppuVar21))
      {
        ppppppuVar23[0x3a] = (undefined4 *****)((int)ppppuVar21 + 2U >> 0x1f);
        ppppppuVar23[0x3b] = (undefined4 *****)((int)ppppuVar21 + 2U);
      }
      FUN_013850f0(&local_150,ppppuVar21,0,0);
      local_188 = FUN_01367d30(&local_168,&local_150);
    }
    local_18c = (undefined4 ******)pppppuVar16;
    FUN_01656cb0(&local_58,uVar12);
    pppppuVar16 = local_54;
    if (local_58 == (undefined4 ******)&DAT_00000001) {
      local_1dc = (char ***)CONCAT31(local_1dc._1_3_,local_50._0_1_);
      local_1e0 = local_54;
                    /* WARNING: Subroutine does not return */
      FUN_013073dc(&DAT_00533467,0x2b,&local_1e0,&DAT_01d2cab8,&DAT_01d2c988);
    }
    local_30 = (undefined4 ****)CONCAT31(local_30._1_3_,1);
    local_44 = (undefined4 ******)(local_54 + 2);
    local_48 = &local_30;
    local_4c = &local_1e0;
    uVar19 = (uint)local_50 & 0xff;
    local_54 = ppppppuVar23 + 0x3a;
    local_58 = ppppppuVar23 + 0xe;
    local_1e0 = (undefined4 *****)ppppuVar9;
    local_50 = ppppppuVar23 + 0x38;
    FUN_01a87550(ppppppuVar23 + 2,&local_18c,&local_58);
    FUN_00a97e8c(pppppuVar16,uVar19);
    FUN_00a97e8c(ppppppuVar23,uVar15);
    *(undefined1 *)param_1 = 3;
    break;
  case 1:
    local_1e0 = *(undefined4 ******)(param_3 + 8);
    local_1dc = *(char ****)(param_3 + 0xc);
    local_1d8 = *(char ****)(param_3 + 0x10);
    uStack_1d4 = *(undefined4 *)(param_3 + 0x14);
    uVar1 = param_3[1];
    iVar20 = *(int *)(param_3 + 4);
    (*(code *)*local_1e0)(&local_150,&uStack_1d4,local_1dc,local_1d8);
    local_50 = local_150;
    local_4c = local_14c;
    local_48 = local_148;
    local_44 = local_144;
    local_58 = (undefined4 ******)CONCAT31(CONCAT21(local_58._2_2_,uVar1),1);
    local_54 = (undefined4 *****)iVar20;
    if (((DAT_01d50f88 < 2) &&
        ((DAT_01d50a2c - 1 < 2 ||
         ((DAT_01d50a2c != 0 && (cVar4 = FUN_01aaafa8(&DAT_01d50a24), cVar4 != '\0')))))) &&
       (iVar6 = FUN_01aaa278(DAT_01d50a24), iVar6 != 0)) {
      ppppuVar9 = *(undefined4 *****)(DAT_01d50a24 + 0x20);
      puVar11 = &DAT_01d2d774;
      if (ppppuVar9 == (undefined4 ****)0x0) goto LAB_01a7e19c;
      local_188._4_4_ = *(char ****)(DAT_01d50a24 + 0x24);
      local_180 = *(char ****)(DAT_01d50a24 + 0x28);
      local_18c = *(undefined4 *******)(DAT_01d50a24 + 0x1c);
      local_17c = 0;
      local_1c0 = 0x45;
      local_1c4 = (undefined4 ****)0x52f0bd;
      local_188._0_4_ = ppppuVar9;
      if (ppppuVar9 == (undefined4 ****)&DAT_00000001) goto LAB_01a7e19c;
      local_140 = (char ****)&local_1bc;
      local_144 = &local_168;
      local_14c = (undefined4 ******)&local_1c4;
      local_150 = &local_18c;
      local_158 = 1;
      local_1cc = 2;
      local_13c = (undefined4 ******)&DAT_01d2d784;
      local_148 = (undefined4 ******)&DAT_01d2ea4c;
      local_1d0 = (undefined4 ****)&local_150;
      local_1c8 = (undefined4 *)(DAT_01d50a24 + 0x1c);
      local_1bc = (undefined4 ****)&local_58;
      local_168 = local_18c;
      local_164 = ppppuVar9;
      local_160 = local_188._4_4_;
      local_15c = local_180;
      FUN_01aaaecc(DAT_01d50a24,&local_1d0);
      iVar6 = DAT_01d50a24;
      if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
        local_3c = *(undefined4 *)(DAT_01d50a24 + 0x14);
        local_38 = *(undefined4 **)(DAT_01d50a24 + 0x18);
        local_40 = (undefined4 ****)&SUB_00000004;
        DataMemoryBarrier(0xb);
        puVar14 = DAT_01d4edc8;
        pcVar18 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          puVar14 = &DAT_01cfc5e0;
          pcVar18 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar7 = (*(code *)puVar14[3])(pcVar18,&local_40);
        if (iVar7 != 0) {
          local_30 = local_40;
          local_2c = local_3c;
          local_28 = local_38;
          FUN_01aaa328(iVar6,pcVar18,puVar14[4],&local_30,&local_1d0);
        }
      }
    }
    else {
      iVar6 = DAT_01d50a24;
      if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
        local_1b4 = *(undefined4 *)(DAT_01d50a24 + 0x14);
        local_1b0 = *(undefined4 **)(DAT_01d50a24 + 0x18);
        local_1b8 = (undefined4 ****)&SUB_00000004;
        DataMemoryBarrier(0xb);
        puVar14 = DAT_01d4edc8;
        pcVar18 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          puVar14 = &DAT_01cfc5e0;
          pcVar18 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar7 = (*(code *)puVar14[3])(pcVar18,&local_1b8);
        if (iVar7 != 0) {
          ppppppuVar23 = *(undefined4 *******)(DAT_01d50a24 + 0x1c);
          ppppuVar9 = *(undefined4 *****)(DAT_01d50a24 + 0x20);
          puVar11 = &DAT_01d2d774;
          if (ppppuVar9 == (undefined4 ****)0x0) goto LAB_01a7e19c;
          local_188._4_4_ = *(char ****)(DAT_01d50a24 + 0x24);
          local_180 = *(char ****)(DAT_01d50a24 + 0x28);
          local_17c = 0;
          local_1d0 = (undefined4 ****)0x52f0bd;
          local_1cc = 0x45;
          local_18c = ppppppuVar23;
          local_188._0_4_ = ppppuVar9;
          if (ppppuVar9 == (undefined4 ****)&DAT_00000001) goto LAB_01a7e19c;
          local_140 = (char ****)&local_1c4;
          local_144 = &local_168;
          local_14c = (undefined4 ******)&local_1d0;
          local_150 = &local_18c;
          local_158 = 1;
          local_3c = 2;
          local_148 = (undefined4 ******)&DAT_01d2ea4c;
          local_13c = (undefined4 ******)&DAT_01d2d784;
          local_30 = local_1b8;
          local_2c = local_1b4;
          local_28 = local_1b0;
          local_1c4 = (undefined4 ****)&local_58;
          local_168 = ppppppuVar23;
          local_164 = ppppuVar9;
          local_160 = local_188._4_4_;
          local_15c = local_180;
          local_40 = (undefined4 ****)&local_150;
          local_38 = (undefined4 *)(DAT_01d50a24 + 0x1c);
          FUN_01aaa328(iVar6,pcVar18,puVar14[4],&local_30,&local_40);
        }
      }
    }
    piVar13 = (int *)param_2[1];
    iVar6 = *piVar13;
    bVar25 = iVar6 == 1;
    if (bVar25) {
      iVar6 = piVar13[2];
    }
    if (!bVar25 || iVar6 != iVar20) {
      local_150 = local_58;
      local_14c = (undefined4 ******)local_54;
      local_148 = local_50;
      local_144 = (undefined4 ******)local_4c;
      local_140 = (char ****)local_48;
      local_13c = local_44;
      uVar12 = param_2[4];
      FUN_01a63270(uVar12,param_2[5],&local_150);
      local_168 = (undefined4 ******)local_1e0;
      local_164 = (undefined4 ****)local_1dc;
      local_160 = local_1d8;
      local_15c = (char ***)uStack_1d4;
      local_140 = (char ****)FUN_01a63640(uVar12);
      local_150 = local_168;
      local_14c = (undefined4 ******)local_164;
      local_148 = (undefined4 ******)local_160;
      local_144 = (undefined4 ******)local_15c;
      local_13c = (undefined4 ******)iVar20;
      FUN_01386f04(piVar13,&local_150);
      *(undefined1 *)param_1 = 3;
      return;
    }
    if (((DAT_01d50f88 == 0) &&
        ((DAT_01d50a38 - 1 < 2 ||
         ((DAT_01d50a38 != 0 && (cVar4 = FUN_01aaafa8(&DAT_01d50a30), cVar4 != '\0')))))) &&
       (iVar6 = FUN_01aaa278(DAT_01d50a30), iVar6 != 0)) {
      if (*(undefined4 ******)(DAT_01d50a30 + 0x20) == (undefined4 *****)0x0) {
LAB_01a7e194:
        puVar11 = &DAT_01d2d794;
LAB_01a7e19c:
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,puVar11);
      }
      local_164 = &local_30;
      local_148 = *(undefined4 *******)(DAT_01d50a30 + 0x24);
      local_144 = *(undefined4 *******)(DAT_01d50a30 + 0x28);
      local_168 = (undefined4 ******)&local_150;
      local_18c = &local_168;
      local_188._0_4_ = (undefined4 ****)&DAT_00000001;
      local_140 = (char ****)0x0;
      local_160 = (char ***)&DAT_01d2ea4c;
      local_2c = 0x33;
      local_30 = (undefined4 ****)0x52f0df;
      local_188._4_4_ = (char ***)(DAT_01d50a30 + 0x1c);
      local_150 = *(undefined4 *******)(DAT_01d50a30 + 0x1c);
      local_14c = (undefined4 ******)*(undefined4 ******)(DAT_01d50a30 + 0x20);
      FUN_01a7e434(&local_18c);
    }
    else {
      iVar6 = DAT_01d50a30;
      if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
        local_1a8 = *(undefined4 *)(DAT_01d50a30 + 0x14);
        local_1a4 = *(undefined4 *)(DAT_01d50a30 + 0x18);
        local_1ac = 5;
        DataMemoryBarrier(0xb);
        puVar14 = DAT_01d4edc8;
        pcVar18 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          puVar14 = &DAT_01cfc5e0;
          pcVar18 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar7 = (*(code *)puVar14[3])(pcVar18,&local_1ac);
        if (iVar7 != 0) {
          if (*(undefined4 ******)(DAT_01d50a30 + 0x20) == (undefined4 *****)0x0) goto LAB_01a7e194;
          local_164 = &local_30;
          local_148 = *(undefined4 *******)(DAT_01d50a30 + 0x24);
          local_144 = *(undefined4 *******)(DAT_01d50a30 + 0x28);
          local_168 = (undefined4 ******)&local_150;
          local_18c = &local_168;
          local_188._0_4_ = (undefined4 ****)&DAT_00000001;
          local_140 = (char ****)0x0;
          local_160 = (char ***)&DAT_01d2ea4c;
          local_2c = 0x33;
          local_30 = (undefined4 ****)0x52f0df;
          local_188._4_4_ = (char ***)(DAT_01d50a30 + 0x1c);
          local_150 = *(undefined4 *******)(DAT_01d50a30 + 0x1c);
          local_14c = (undefined4 ******)*(undefined4 ******)(DAT_01d50a30 + 0x20);
          FUN_01aaa328(iVar6,pcVar18,puVar14[4],&local_1ac,&local_18c);
        }
      }
    }
    puVar8 = (undefined1 *)*param_2;
    *(undefined1 *)param_1 = 3;
    puVar8[1] = uVar1;
    *(int *)(puVar8 + 4) = iVar20;
    *puVar8 = 1;
    FUN_01a7e52c(&local_58);
    (*(code *)local_1e0[4])(&uStack_1d4,local_1dc,local_1d8);
    break;
  case 2:
    cVar4 = param_3[1];
    iVar20 = *(int *)(param_3 + 4);
    uVar17 = *(undefined4 *)(param_3 + 8);
    uVar12 = *(undefined4 *)(param_3 + 0xc);
    local_175 = cVar4;
    if ((DAT_01d50f88 < 2) &&
       (((DAT_01d50a44 - 1 < 2 ||
         ((DAT_01d50a44 != 0 && (cVar5 = FUN_01aaafa8(&DAT_01d50a3c), cVar5 != '\0')))) &&
        (iVar6 = FUN_01aaa278(DAT_01d50a3c), iVar6 != 0)))) {
      local_54 = (undefined4 *****)DAT_01d50a3c[8];
      local_1d8 = extraout_r2;
      local_58 = extraout_r3;
      if (local_54 != (undefined4 *****)0x0) {
        unaff_r10 = (char ***)DAT_01d50a3c[9];
        unaff_r5 = (char ***)DAT_01d50a3c[10];
        local_1d8 = DAT_01d50a3c + 7;
        local_58 = (undefined4 ******)*local_1d8;
        local_158 = 0;
        local_2c = 0x35;
        local_30 = (undefined4 ****)0x52f0f8;
        local_168 = local_58;
        local_164 = local_54;
        local_160 = unaff_r10;
        local_15c = unaff_r5;
      }
      if (local_54 < (undefined4 ****)0x2) {
LAB_01a7d750:
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d2d7a4);
      }
      local_140 = (char ****)&local_40;
      local_144 = (undefined4 ******)&local_58;
      local_14c = (undefined4 ******)&local_30;
      local_150 = &local_168;
      local_1e0 = (undefined4 *****)&local_150;
      local_1dc = (char ***)0x2;
      local_40 = (undefined4 ****)&local_175;
      local_48 = (undefined4 ****)0x1;
      local_13c = (undefined4 ******)&DAT_01d2d7b4;
      local_148 = (undefined4 ******)&DAT_01d2ea4c;
      local_50 = (undefined4 ******)unaff_r10;
      local_4c = (undefined4 *****)unaff_r5;
      FUN_01aaaecc(DAT_01d50a3c,&local_1e0);
      pppcVar3 = DAT_01d50a3c;
      if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
        local_188._0_4_ = (undefined4 ****)DAT_01d50a3c[5];
        local_188._4_4_ = (char ***)DAT_01d50a3c[6];
        local_18c = (undefined4 ******)&SUB_00000004;
        DataMemoryBarrier(0xb);
        puVar14 = DAT_01d4edc8;
        pcVar18 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          puVar14 = &DAT_01cfc5e0;
          pcVar18 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar6 = (*(code *)puVar14[3])(pcVar18,&local_18c);
        if (iVar6 != 0) {
          FUN_01aaa328(pppcVar3,pcVar18,puVar14[4],&local_18c,&local_1e0);
        }
      }
    }
    else {
      pppcVar3 = DAT_01d50a3c;
      if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
        local_170 = DAT_01d50a3c[5];
        local_16c = DAT_01d50a3c[6];
        local_174 = 4;
        DataMemoryBarrier(0xb);
        puVar14 = DAT_01d4edc8;
        pcVar18 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          puVar14 = &DAT_01cfc5e0;
          pcVar18 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar6 = (*(code *)puVar14[3])(pcVar18,&local_174);
        if (iVar6 != 0) {
          local_188._4_4_ = DAT_01d50a3c + 7;
          local_58 = (undefined4 ******)*local_188._4_4_;
          local_54 = (undefined4 *****)DAT_01d50a3c[8];
          local_4c = (undefined4 *****)pppcVar3;
          local_50 = (undefined4 ******)extraout_r3_00;
          pppcVar2 = (char ***)0x1a7d6f4;
          if (local_54 != (undefined4 *****)0x0) {
            local_50 = (undefined4 ******)DAT_01d50a3c[9];
            local_4c = (undefined4 *****)DAT_01d50a3c[10];
            local_158 = 0;
            local_1dc = (char ***)0x35;
            local_1e0 = (undefined4 *****)0x52f0f8;
            pppcVar2 = pppcVar3;
            local_168 = local_58;
            local_164 = local_54;
            local_160 = (char ***)local_50;
            local_15c = (char ***)local_4c;
          }
          if (local_54 < (undefined4 ****)0x2) goto LAB_01a7d750;
          local_140 = (char ****)&local_30;
          local_144 = (undefined4 ******)&local_58;
          local_14c = &local_1e0;
          local_150 = &local_168;
          local_18c = (undefined4 ******)&local_150;
          local_48 = (undefined4 ****)0x1;
          local_188._0_4_ = (undefined4 ****)0x2;
          local_148 = (undefined4 ******)&DAT_01d2ea4c;
          local_13c = (undefined4 ******)&DAT_01d2d7b4;
          local_30 = (undefined4 ****)&local_175;
          FUN_01aaa328(pppcVar2,pcVar18,puVar14[4],&local_174,&local_18c);
        }
      }
    }
    local_58 = (undefined4 ******)CONCAT31(CONCAT21(local_58._2_2_,cVar4),2);
    local_4c = (undefined4 *****)uVar12;
    local_50 = (undefined4 ******)uVar17;
    local_54 = (undefined4 *****)iVar20;
    if (iVar20 == -0x80000000) {
      local_168 = (undefined4 ******)&DAT_80000000;
    }
    else {
      FUN_006666fc(&local_168,uVar17,uVar12);
    }
    local_14c = local_168;
    local_148 = (undefined4 ******)local_164;
    local_144 = (undefined4 ******)local_160;
    uVar12 = param_2[5];
    local_150 = (undefined4 ******)CONCAT31(CONCAT21(local_150._2_2_,cVar4),2);
    FUN_01a63270(param_2[4],uVar12);
    if (*(char *)(param_2 + 6) != '\0') {
      FUN_01656cb0(&local_150,uVar12);
      if (local_150 == (undefined4 ******)0x1) {
        local_164 = (undefined4 ****)CONCAT31(local_164._1_3_,local_148._0_1_);
        local_168 = local_14c;
                    /* WARNING: Subroutine does not return */
        FUN_013073dc(&DAT_00533467,0x2b,&local_168,&DAT_01d2cab8,&DAT_01d2c898);
      }
      pppppuVar16 = local_14c[5];
      FUN_00a97e8c(local_14c,(uint)local_148 & 0xff);
      if (cVar4 == '%' && pppppuVar16 == (undefined4 *****)0x0) {
        puVar10 = (undefined2 *)*param_2;
        *(undefined1 *)param_1 = 3;
        *(undefined4 *)(puVar10 + 2) = 0;
        *puVar10 = 0x102;
        FUN_01a7e52c(&local_58);
        return;
      }
    }
    *param_1 = local_58;
    param_1[1] = local_54;
    param_1[2] = local_50;
    param_1[3] = local_4c;
    param_1[4] = local_48;
    param_1[5] = local_44;
    break;
  case 3:
    puVar10 = (undefined2 *)*param_2;
    *(undefined1 *)param_1 = 3;
    *(undefined4 *)(puVar10 + 2) = 0;
    *puVar10 = 0x101;
  }
  return;
}

