// FUN_017f14bc @ 017f14bc size=3996 calls_out=22 calls_in=1
// strings: h2::proto::streams::recv/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/recv.rs | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | h2::proto::streams::state/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/state.rsevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/state.rs:246event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/state.rs:241 | InvalidParamSegmentInvalidParamInvalidCatchAll

/* WARNING: Removing unreachable block (ram,0x017f2420) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_017f14bc(undefined4 *param_1,undefined4 param_2,int *param_3,int param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  char *pcVar3;
  char cVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  byte *pbVar8;
  uint uVar9;
  undefined4 extraout_r2;
  undefined *puVar10;
  int iVar11;
  undefined4 *puVar12;
  int *piVar13;
  char ****ppppcVar14;
  char *****pppppcVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  bool bVar20;
  undefined8 uVar21;
  char *****local_300;
  char *****local_2fc;
  undefined8 local_2f8;
  char *****local_2f0;
  char *****local_2ec;
  char *****local_2e8;
  char *****local_2e4;
  char *****local_2e0;
  char *****local_2dc;
  char *****pppppcStack_2d8;
  char *****local_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  undefined4 local_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined1 auStack_2a8 [92];
  char local_24c;
  char *****local_244;
  undefined4 local_238;
  char *local_234;
  undefined4 local_230;
  char *****local_22c;
  undefined1 auStack_228 [88];
  char ****local_1d0;
  char ****ppppcStack_1cc;
  uint uStack_1c8;
  undefined4 uStack_1c4;
  char *****pppppcStack_1c0;
  char *****local_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 *****local_190;
  char *****local_18c;
  char *****local_188;
  char *****pppppcStack_184;
  char *****pppppcStack_180;
  char *****pppppcStack_17c;
  char *****pppppcStack_178;
  char *****pppppcStack_174;
  undefined1 auStack_170 [76];
  byte local_124 [28];
  char *****local_108;
  char *****local_104;
  char *****local_100;
  char *****local_fc;
  char *****pppppcStack_f8;
  char *****pppppcStack_f4;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  char *****local_d4;
  char *****local_d0;
  undefined4 *puStack_cc;
  undefined4 *****local_c8;
  char *****local_c4;
  char *****local_c0;
  char *****local_bc;
  char *****local_b8;
  char *****pppppcStack_b4;
  char *****pppppcStack_b0;
  char *****pppppcStack_ac;
  undefined1 auStack_a8 [108];
  char ****local_3c;
  char *****local_38;
  char *****local_34;
  char *****local_30;
  char *****local_2c;
  undefined4 *local_28;
  
  iVar18 = *param_3;
  iVar19 = param_3[1];
  iVar17 = param_3[2];
  iVar5 = FUN_0139f0d0(*(undefined4 *)(iVar18 + 0x34),*(undefined4 *)(iVar18 + 0x38),iVar19,iVar17);
  puVar6 = *(undefined1 **)(iVar5 + 0x18);
  FUN_01bed4e2(&local_2e8,param_4,0xb0);
  piVar13 = *(int **)(param_4 + 0xb0);
  puVar7 = *(undefined4 **)(param_4 + 0xb4);
  iVar11 = *piVar13;
  iVar5 = FUN_0139f148(*(undefined4 *)(iVar18 + 0x34),*(undefined4 *)(iVar18 + 0x38),iVar19,iVar17);
  ppppcVar14 = (char ****)(iVar5 + 0x20);
  if (*(char *)ppppcVar14 == '\x06') {
    FUN_013b63b0(ppppcVar14);
    *(char *)ppppcVar14 = '\b';
    if (local_24c != '\0') {
      if (((DAT_01d50f88 < 2) && (cVar4 = FUN_01aaafa8(0x1d4d8f0), cVar4 != '\0')) &&
         (iVar5 = FUN_01aaa278(&DAT_01cecab4), iVar5 != 0)) {
        local_c4 = (char *****)&DAT_00000001;
        local_104 = (char *****)&local_d4;
        local_c0 = (char *****)0x1d4d8f0;
        local_bc = (char *****)&DAT_01cec72c;
        local_2f8._0_4_ = (undefined **)&DAT_01cecad0;
        local_c8 = (undefined4 *****)&DAT_01d2f7e0;
        local_108 = (char *****)&local_c8;
        local_300 = (char *****)&local_108;
        local_b8 = (char *****)0x0;
        local_2fc = (char *****)0x1;
        local_d0 = (char *****)&local_30;
        local_30 = (char *****)&local_38;
        local_100 = (char *****)&DAT_01d2ea4c;
        local_38 = local_244;
        local_d4 = (char *****)&DAT_00572eca;
        local_2c = (char *****)FUN_00b1c384;
        FUN_01aaaecc(&DAT_01cecab4,&local_300);
        if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
          local_18c = (char *****)0x45cead;
          local_188 = (char *****)&DAT_00000018;
          local_190 = (undefined4 *****)&SUB_00000004;
          DataMemoryBarrier(0xb);
          puVar12 = DAT_01d4edc8;
          pcVar3 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            puVar12 = &DAT_01cfc5e0;
            pcVar3 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          iVar5 = (*(code *)puVar12[3])(pcVar3,&local_190);
          if (iVar5 != 0) {
            FUN_01aaa328(&DAT_01cecab4,pcVar3,puVar12[4],&local_190,&local_300);
          }
        }
      }
      else if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
        local_234 = 
        "h2::proto::streams::recv/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/recv.rs"
        ;
        local_230 = 0x18;
        local_238 = 4;
        DataMemoryBarrier(0xb);
        puVar12 = DAT_01d4edc8;
        pcVar3 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          puVar12 = &DAT_01cfc5e0;
          pcVar3 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar5 = (*(code *)puVar12[3])(pcVar3,&local_238);
        if (iVar5 != 0) {
          local_100 = (char *****)&DAT_01cecad0;
          local_c8 = (undefined4 *****)&DAT_01d2f7e0;
          local_c4 = (char *****)&DAT_00000001;
          local_18c = (char *****)&local_30;
          local_c0 = (char *****)0x1d4d8f0;
          local_bc = (char *****)&DAT_01cec72c;
          local_190 = &local_c8;
          local_108 = (char *****)&local_190;
          local_104 = (char *****)&DAT_00000001;
          local_2c = (char *****)&local_300;
          local_b8 = (char *****)0x0;
          local_300 = (char *****)&local_d4;
          local_188 = (char *****)&DAT_01d2ea4c;
          local_d4 = local_244;
          local_30 = (char *****)&DAT_00572eca;
          local_2fc = (char *****)FUN_00b1c384;
          FUN_01aaa328(&DAT_01cecab4,pcVar3,puVar12[4],&local_238,&local_108);
        }
      }
      local_2fc = local_244;
      local_2f8._0_4_ = (undefined **)&DAT_00000007;
      local_300 = (char *****)CONCAT22(local_300._2_2_,0x100);
      goto LAB_017f1c9c;
    }
    local_22c = local_244;
    FUN_01bed4e2(auStack_228,auStack_2a8,0x58);
    local_1d0 = (char ****)local_2e8;
    ppppcStack_1cc = (char ****)local_2e4;
    uStack_1c8 = (uint)local_2e0;
    uStack_1c4 = local_2dc;
    pppppcStack_1c0 = pppppcStack_2d8;
    local_1bc = local_2d4;
    uStack_1b8 = uStack_2d0;
    uStack_1b4 = uStack_2cc;
    uStack_1b0 = uStack_2c8;
    uStack_1ac = uStack_2c4;
    local_1a8 = local_2c0;
    uStack_1a4 = uStack_2bc;
    uStack_1a0 = uStack_2b8;
    uStack_19c = uStack_2b4;
    uStack_198 = uStack_2b0;
    uStack_194 = uStack_2ac;
    FUN_013a7338(&local_c8,auStack_228,&local_1d0,local_244);
    local_108 = local_c0;
    local_104 = local_bc;
    local_100 = local_b8;
    local_fc = pppppcStack_b4;
    pppppcStack_f8 = pppppcStack_b0;
    pppppcStack_f4 = pppppcStack_ac;
    if (local_c8 == (undefined4 *****)&DAT_00000003 && local_c4 == (char *****)0x0) {
      local_300 = local_c0;
      pppppcVar15 = local_300;
      local_2fc = local_bc;
      local_2f8._0_4_ = (undefined **)local_b8;
      local_2f8._4_4_ = pppppcStack_b4;
      local_2f0 = pppppcStack_b0;
      local_2ec = pppppcStack_ac;
      local_300._0_1_ = (char)local_c0;
      bVar20 = (char)local_300 == '\x03';
      local_300 = pppppcVar15;
      if (bVar20) {
LAB_017f1e74:
        local_2e0 = (char *****)param_3[1];
        local_2dc = (char *****)param_3[2];
        local_2e4 = (char *****)&DAT_00000001;
        local_2e8 = (char *****)CONCAT31(local_2e8._1_3_,3);
        goto LAB_017f1d38;
      }
    }
    else {
      FUN_01bed4e2(auStack_170,auStack_a8,0x68);
      local_188 = local_108;
      pppppcStack_184 = local_104;
      pppppcStack_180 = local_100;
      pppppcStack_17c = local_fc;
      pppppcStack_178 = pppppcStack_f8;
      pppppcStack_174 = pppppcStack_f4;
      local_190 = local_c8;
      local_18c = local_c4;
      local_c8 = (undefined4 *****)0x0;
      local_c4 = (char *****)&DAT_00000018;
      local_c0 = (char *****)0x0;
      local_bc = (char *****)0x0;
      uVar21 = FUN_013b43b8(&local_190);
      iVar5 = (int)uVar21;
      uVar2 = CONCAT44(extraout_r2,(int)((ulonglong)uVar21 >> 0x20));
      if (iVar5 == 0) {
LAB_017f1dd8:
        uVar16 = 2;
        if ((local_124[0] & 0xb) == 1) {
          uVar16 = 3;
        }
        if (uVar16 - 3 < uVar16) {
          iVar5 = FUN_0139f148(*(undefined4 *)(iVar18 + 0x34),*(undefined4 *)(iVar18 + 0x38),iVar19,
                               iVar17);
          FUN_01bed4e2(&local_c8,&local_190,0x88);
          FUN_013ab988(iVar5 + 0xac,iVar11 + 100,&local_c8);
          iVar5 = FUN_0139f148(*(undefined4 *)(iVar18 + 0x34),*(undefined4 *)(iVar18 + 0x38),iVar19,
                               iVar17);
          iVar11 = *(int *)(iVar5 + 0x50);
          *(undefined4 *)(iVar5 + 0x50) = 0;
          if (iVar11 != 0) {
            (**(code **)(iVar11 + 4))(*(undefined4 *)(iVar5 + 0x54));
          }
          local_300 = (char *****)CONCAT31(local_300._1_3_,3);
          goto LAB_017f1e74;
        }
        if (((DAT_01d50f88 < 2) && (cVar4 = FUN_01aaafa8(&DAT_01d4d8e4), cVar4 != '\0')) &&
           (iVar5 = FUN_01aaa278(DAT_01d4d8e4), iVar5 != 0)) {
          local_28 = (undefined4 *)(DAT_01d4d8e4 + 0x1c);
          if (*(char ******)(DAT_01d4d8e4 + 0x20) == (char *****)0x0) {
LAB_017f2448:
            puVar10 = &DAT_01cecb44;
LAB_017f2450:
                    /* WARNING: Subroutine does not return */
            FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,puVar10);
          }
          local_c0 = *(char ******)(DAT_01d4d8e4 + 0x24);
          local_bc = *(char ******)(DAT_01d4d8e4 + 0x28);
          local_2fc = (char *****)&local_d4;
          local_2c = (char *****)&DAT_00000001;
          local_38 = (char *****)local_124;
          local_d0 = (char *****)&local_108;
          local_100 = (char *****)&local_22c;
          local_108 = (char *****)&local_38;
          local_30 = (char *****)&local_300;
          local_b8 = (char *****)0x0;
          local_2f8._0_4_ = (undefined **)&DAT_01d2ea4c;
          local_d4 = (char *****)&DAT_0057dee1;
          local_fc = (char *****)FUN_00b1c384;
          local_104 = (char *****)FUN_013b7eec;
          local_300 = (char *****)&local_c8;
          local_c8 = (undefined4 *****)*local_28;
          local_c4 = *(char ******)(DAT_01d4d8e4 + 0x20);
          FUN_01394548(&local_30);
          local_2f8 = CONCAT44(local_2f8._4_4_,(undefined **)local_2f8);
        }
        else {
          iVar5 = DAT_01d4d8e4;
          local_2f8 = CONCAT44(local_2f8._4_4_,(undefined **)local_2f8);
          if ((DAT_01d51ae9 == '\0') &&
             (local_2f8 = CONCAT44(local_2f8._4_4_,(undefined **)local_2f8), 3 < DAT_01d51b00)) {
            local_e8 = *(undefined4 *)(DAT_01d4d8e4 + 0x14);
            local_e4 = *(undefined4 *)(DAT_01d4d8e4 + 0x18);
            local_ec = 4;
            DataMemoryBarrier(0xb);
            puVar12 = DAT_01d4edc8;
            pcVar3 = DAT_01d4edc4;
            if (DAT_01d51174 != 2) {
              puVar12 = &DAT_01cfc5e0;
              pcVar3 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
            }
            iVar11 = (*(code *)puVar12[3])(pcVar3,&local_ec);
            if (iVar11 != 0) {
              local_28 = (undefined4 *)(DAT_01d4d8e4 + 0x1c);
              if (*(char ******)(DAT_01d4d8e4 + 0x20) == (char *****)0x0) goto LAB_017f2448;
              local_c0 = *(char ******)(DAT_01d4d8e4 + 0x24);
              local_2fc = (char *****)&local_d4;
              local_bc = *(char ******)(DAT_01d4d8e4 + 0x28);
              local_30 = (char *****)&local_300;
              local_2c = (char *****)&DAT_00000001;
              local_38 = (char *****)local_124;
              local_d0 = (char *****)&local_108;
              local_100 = (char *****)&local_22c;
              local_b8 = (char *****)0x0;
              local_2f8._0_4_ = (undefined **)&DAT_01d2ea4c;
              local_d4 = (char *****)&DAT_0057dee1;
              local_fc = (char *****)FUN_00b1c384;
              local_104 = (char *****)FUN_013b7eec;
              local_108 = (char *****)&local_38;
              local_300 = (char *****)&local_c8;
              local_c8 = (undefined4 *****)*local_28;
              local_c4 = *(char ******)(DAT_01d4d8e4 + 0x20);
              FUN_01aaa328(iVar5,pcVar3,puVar12[4],&local_ec,&local_30);
            }
          }
        }
      }
      else {
        uVar16 = *(uint *)(iVar5 + 8);
        pppppcVar15 = (char *****)&DAT_00000001;
        if (uVar16 < 0x14) {
          if (uVar16 != 0) {
            pbVar8 = *(byte **)(iVar5 + 4);
            uVar1 = 0;
            do {
              iVar5 = (int)(uVar1 >> 0x20);
              uVar9 = (uint)*pbVar8;
              uVar2 = CONCAT44(iVar5,uVar9);
              if ((uVar9 - 0x3a & 0xff) < 0xf6) {
                pppppcVar15 = (char *****)&DAT_00000001;
                goto LAB_017f1f8c;
              }
              pbVar8 = pbVar8 + 1;
              uVar16 = uVar16 - 1;
              uVar1 = (uVar1 & 0xffffffff) * 10 +
                      (CONCAT44(iVar5 * 10,uVar9 - 0x30) & 0xffffffff000000ff);
            } while (uVar16 != 0);
            pppppcVar15 = (char *****)0x0;
            uVar2 = uVar1;
            if (uVar1 != 0) goto LAB_017f1f8c;
          }
          goto LAB_017f1dd8;
        }
LAB_017f1f8c:
        local_2fc = (char *****)0x0;
        local_300 = pppppcVar15;
        local_2f8 = uVar2;
        if (DAT_01d50f88 < 2) {
          if (1 < DAT_01d4d8e0 - 1) {
            if (DAT_01d4d8e0 != 0) {
              cVar4 = FUN_01aaafa8(&DAT_01d4d8d8);
              if (cVar4 != '\0') goto LAB_017f1fc8;
            }
            goto LAB_017f2084;
          }
LAB_017f1fc8:
          iVar5 = FUN_01aaa278(DAT_01d4d8d8);
          if (iVar5 == 0) goto LAB_017f2084;
          puStack_cc = (undefined4 *)(DAT_01d4d8d8 + 0x1c);
          if (*(char ******)(DAT_01d4d8d8 + 0x20) == (char *****)0x0) {
LAB_017f243c:
            puVar10 = &DAT_01cecb34;
            goto LAB_017f2450;
          }
          local_2c = (char *****)&local_38;
          local_c0 = *(char ******)(DAT_01d4d8d8 + 0x24);
          local_bc = *(char ******)(DAT_01d4d8d8 + 0x28);
          local_d4 = (char *****)&local_30;
          local_b8 = (char *****)0x0;
          local_d0 = (char *****)&DAT_00000001;
          local_34 = (char *****)&local_108;
          local_100 = (char *****)&local_22c;
          local_108 = (char *****)&local_300;
          local_28 = (undefined4 *)&DAT_01d2ea4c;
          local_38 = (char *****)&DAT_00585fb2;
          local_fc = (char *****)FUN_00b1c384;
          local_104 = (char *****)FUN_013942ec;
          local_c8 = (undefined4 *****)*puStack_cc;
          local_c4 = *(char ******)(DAT_01d4d8d8 + 0x20);
          local_30 = (char *****)&local_c8;
          FUN_01394450(&local_d4);
        }
        else {
LAB_017f2084:
          iVar5 = DAT_01d4d8d8;
          if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
            local_dc = *(undefined4 *)(DAT_01d4d8d8 + 0x14);
            local_d8 = *(undefined4 *)(DAT_01d4d8d8 + 0x18);
            local_e0 = 4;
            DataMemoryBarrier(0xb);
            puVar12 = DAT_01d4edc8;
            pcVar3 = DAT_01d4edc4;
            if (DAT_01d51174 != 2) {
              puVar12 = &DAT_01cfc5e0;
              pcVar3 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
            }
            iVar11 = (*(code *)puVar12[3])(pcVar3,&local_e0);
            if (iVar11 != 0) {
              puStack_cc = (undefined4 *)(DAT_01d4d8d8 + 0x1c);
              if (*(char ******)(DAT_01d4d8d8 + 0x20) == (char *****)0x0) goto LAB_017f243c;
              local_bc = *(char ******)(DAT_01d4d8d8 + 0x28);
              local_2c = (char *****)&local_38;
              local_c0 = *(char ******)(DAT_01d4d8d8 + 0x24);
              local_d0 = (char *****)&DAT_00000001;
              local_34 = (char *****)&local_108;
              local_d4 = (char *****)&local_30;
              local_100 = (char *****)&local_22c;
              local_108 = (char *****)&local_300;
              local_b8 = (char *****)0x0;
              local_28 = (undefined4 *)&DAT_01d2ea4c;
              local_38 = (char *****)&DAT_00585fb2;
              local_fc = (char *****)FUN_00b1c384;
              local_104 = (char *****)FUN_013942ec;
              local_c8 = (undefined4 *****)*puStack_cc;
              local_c4 = *(char ******)(DAT_01d4d8d8 + 0x20);
              local_30 = (char *****)&local_c8;
              FUN_01aaa328(iVar5,pcVar3,puVar12[4],&local_e0,&local_d4);
            }
          }
        }
      }
      local_2f8._4_4_ = (char *****)(local_2f8 >> 0x20);
      local_2f8._0_4_ = (undefined **)&DAT_00000001;
      local_2fc = local_244;
      local_300 = (char *****)CONCAT22(local_300._2_2_,0x100);
      FUN_01354a94(&local_190);
    }
  }
  else {
    local_3c = ppppcVar14;
    if ((DAT_01d50f88 < 2) &&
       (((DAT_01d4de5c - 1 < 2 ||
         ((DAT_01d4de5c != 0 && (cVar4 = FUN_01aaafa8(&DAT_01d4de54), cVar4 != '\0')))) &&
        (iVar5 = FUN_01aaa278(DAT_01d4de54), iVar5 != 0)))) {
      local_c4 = *(char ******)(DAT_01d4de54 + 0x20);
      if (local_c4 == (char *****)0x0) {
LAB_017f2414:
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01cf0848);
      }
      local_104 = (char *****)&local_38;
      local_c0 = *(char ******)(DAT_01d4de54 + 0x24);
      local_bc = *(char ******)(DAT_01d4de54 + 0x28);
      local_2f8._0_4_ = (undefined **)(DAT_01d4de54 + 0x1c);
      local_c8 = (undefined4 *****)*(undefined **)local_2f8;
      local_108 = (char *****)&local_c8;
      local_300 = (char *****)&local_108;
      local_b8 = (char *****)0x0;
      local_2fc = (char *****)0x1;
      local_34 = (char *****)&local_d4;
      local_d4 = &local_3c;
      local_100 = (char *****)&DAT_01d2ea4c;
      local_38 = (char *****)&DAT_005b94fa;
      local_d0 = (char *****)FUN_013b640c;
      FUN_01aaaecc(DAT_01d4de54,&local_300);
      iVar5 = DAT_01d4de54;
      if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
        local_18c = *(char ******)(DAT_01d4de54 + 0x14);
        local_188 = *(char ******)(DAT_01d4de54 + 0x18);
        local_190 = (undefined4 *****)&SUB_00000004;
        DataMemoryBarrier(0xb);
        puVar12 = DAT_01d4edc8;
        pcVar3 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          puVar12 = &DAT_01cfc5e0;
          pcVar3 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar11 = (*(code *)puVar12[3])(pcVar3,&local_190);
        if (iVar11 != 0) {
          FUN_01aaa328(iVar5,pcVar3,puVar12[4],&local_190,&local_300);
        }
      }
    }
    else {
      iVar5 = DAT_01d4de54;
      if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
        local_2c = *(char ******)(DAT_01d4de54 + 0x14);
        local_28 = *(undefined4 **)(DAT_01d4de54 + 0x18);
        local_30 = (char *****)&SUB_00000004;
        DataMemoryBarrier(0xb);
        puVar12 = DAT_01d4edc8;
        pcVar3 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          puVar12 = &DAT_01cfc5e0;
          pcVar3 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar11 = (*(code *)puVar12[3])(pcVar3,&local_30);
        if (iVar11 != 0) {
          local_100 = (char *****)(DAT_01d4de54 + 0x1c);
          local_c8 = (undefined4 *****)*local_100;
          local_c4 = *(char ******)(DAT_01d4de54 + 0x20);
          if (local_c4 == (char *****)0x0) goto LAB_017f2414;
          local_18c = (char *****)&local_d4;
          local_c0 = *(char ******)(DAT_01d4de54 + 0x24);
          local_bc = *(char ******)(DAT_01d4de54 + 0x28);
          local_190 = &local_c8;
          local_108 = (char *****)&local_190;
          local_104 = (char *****)&DAT_00000001;
          local_d0 = (char *****)&local_300;
          local_300 = &local_3c;
          local_b8 = (char *****)0x0;
          local_188 = (char *****)&DAT_01d2ea4c;
          local_d4 = (char *****)&DAT_005b94fa;
          local_2fc = (char *****)FUN_013b640c;
          FUN_01aaa328(iVar5,pcVar3,puVar12[4],&local_30,&local_108);
        }
      }
    }
    local_2ec = (char *****)0x0;
    local_2f0 = (char *****)0x0;
    local_2f8._4_4_ = (char *****)&DAT_00000001;
    local_2fc = (char *****)&DAT_00000001;
    local_300 = (char *****)CONCAT22(local_300._2_2_,0x101);
    local_2f8._0_4_ = &PTR_FUN_01cf1710;
LAB_017f1c9c:
    FUN_01834c18(&local_2e8);
  }
  FUN_01656cb0(&local_2e8,*puVar7);
  pppppcVar15 = local_2e4;
  if (local_2e8 == (char *****)0x1) {
    local_c4 = (char *****)CONCAT31(local_c4._1_3_,local_2e0._0_1_);
    local_c8 = (undefined4 *****)local_2e4;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&local_c8,&DAT_01d1d414,&DAT_01d1d364);
  }
  uVar16 = (uint)local_2e0 & 0xff;
  local_2e8 = local_300;
  local_2e4 = local_2fc;
  local_2e0 = (char *****)(undefined **)local_2f8;
  local_2dc = local_2f8._4_4_;
  pppppcStack_2d8 = local_2f0;
  local_2d4 = local_2ec;
  FUN_017f26bc(&local_c8,*piVar13,pppppcVar15 + 2,param_3,param_2,&local_2e8);
  if ((char)local_c8 == '\x03') {
    local_2e8 = (char *****)CONCAT31(local_2e8._1_3_,3);
    local_2e4 = (char *****)0x0;
  }
  else {
    local_2e8 = (char *****)local_c8;
    local_2e4 = local_c4;
    local_2e0 = local_c0;
    local_2dc = local_bc;
    pppppcStack_2d8 = local_b8;
    local_2d4 = pppppcStack_b4;
  }
  FUN_00a97e8c(pppppcVar15,uVar16);
LAB_017f1d38:
  FUN_013b1740(param_2,param_3,puVar6 != &DAT_3b9aca00);
  *param_1 = local_2e8;
  param_1[1] = local_2e4;
  param_1[2] = local_2e0;
  param_1[3] = local_2dc;
  param_1[4] = pppppcStack_2d8;
  param_1[5] = local_2d4;
  return;
}

