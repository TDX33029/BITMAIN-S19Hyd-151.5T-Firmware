// FUN_013584e0 @ 013584e0 size=3644 calls_out=16 calls_in=3
// strings: h2::proto::streams::recv/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/recv.rs | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | h2::proto::streams::state/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/state.rsevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/state.rs:246event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/state.rs:241 | InvalidParamSegmentInvalidParamInvalidCatchAll

void FUN_013584e0(int *param_1,int param_2,undefined4 *param_3,int *param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  char *pcVar3;
  code *pcVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  undefined4 extraout_r2;
  undefined *puVar9;
  uint uVar10;
  char ******ppppppcVar11;
  undefined4 *puVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  char *******pppppppcVar17;
  undefined4 local_248;
  undefined4 local_244;
  undefined4 local_240;
  int local_23c;
  undefined1 auStack_238 [88];
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 local_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  char ******local_1a0;
  char *******local_19c;
  char *******local_198;
  code *pcStack_194;
  int *piStack_190;
  code *pcStack_18c;
  int iStack_188;
  int iStack_184;
  undefined1 auStack_180 [76];
  byte local_134 [28];
  char *******local_118;
  char *******local_114;
  int *local_110;
  code *local_10c;
  int iStack_108;
  int iStack_104;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  char *******local_f0;
  char *******local_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  char *******local_d4;
  char *******local_d0;
  int *local_cc;
  char ******local_c8;
  int local_c4;
  char *******local_c0;
  code *local_bc;
  int *local_b8;
  code *pcStack_b4;
  int iStack_b0;
  int iStack_ac;
  undefined1 auStack_a8 [108];
  char ******local_3c;
  char *******local_38;
  char *******local_34;
  int *local_30;
  char ******local_2c;
  char *******local_28;
  
  iVar15 = *param_4;
  iVar13 = param_4[1];
  iVar16 = param_4[2];
  iVar6 = FUN_01367cb8(*(undefined4 *)(iVar15 + 0x34),*(undefined4 *)(iVar15 + 0x38),iVar13,iVar16);
  ppppppcVar11 = (char ******)(iVar6 + 0x20);
  if (*(char *)ppppppcVar11 != '\x06') {
    local_3c = ppppppcVar11;
    if ((DAT_01d50f88 < 2) &&
       (((DAT_01d4d664 - 1 < 2 ||
         ((DAT_01d4d664 != 0 && (cVar5 = FUN_01aaafa8(&DAT_01d4d65c), cVar5 != '\0')))) &&
        (iVar6 = FUN_01aaa278(DAT_01d4d65c), iVar6 != 0)))) {
      local_c4 = *(int *)(DAT_01d4d65c + 0x20);
      if (local_c4 == 0) {
LAB_013592cc:
        puVar9 = &DAT_01cea30c;
LAB_013592e4:
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,puVar9);
      }
      local_114 = &local_2c;
      local_c0 = *(char ********)(DAT_01d4d65c + 0x24);
      local_bc = *(code **)(DAT_01d4d65c + 0x28);
      local_30 = (int *)(DAT_01d4d65c + 0x1c);
      local_c8 = (char ******)*local_30;
      local_118 = &local_c8;
      local_38 = (char *******)&local_118;
      local_b8 = (int *)0x0;
      local_34 = (char *******)&DAT_00000001;
      local_28 = (char *******)&local_d4;
      local_d4 = &local_3c;
      local_110 = (int *)&DAT_01d2ea4c;
      local_2c = (char ******)&DAT_005b94fa;
      local_d0 = (char *******)FUN_0137acac;
      FUN_01aaaecc(DAT_01d4d65c,&local_38);
      iVar6 = DAT_01d4d65c;
      if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
        local_19c = *(char ********)(DAT_01d4d65c + 0x14);
        local_198 = *(char ********)(DAT_01d4d65c + 0x18);
        local_1a0 = (char ******)&SUB_00000004;
        DataMemoryBarrier(0xb);
        puVar12 = DAT_01d4edc8;
        pcVar3 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          puVar12 = &DAT_01cfc5e0;
          pcVar3 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar13 = (*(code *)puVar12[3])(pcVar3,&local_1a0);
        if (iVar13 != 0) {
          FUN_01aaa328(iVar6,pcVar3,puVar12[4],&local_1a0,&local_38);
        }
      }
    }
    else {
      iVar6 = DAT_01d4d65c;
      if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
        local_ec = *(char ********)(DAT_01d4d65c + 0x14);
        local_e8._0_4_ = *(int **)(DAT_01d4d65c + 0x18);
        local_f0 = (char *******)&SUB_00000004;
        DataMemoryBarrier(0xb);
        puVar12 = DAT_01d4edc8;
        pcVar3 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          puVar12 = &DAT_01cfc5e0;
          pcVar3 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar13 = (*(code *)puVar12[3])(pcVar3,&local_f0);
        if (iVar13 != 0) {
          local_110 = (int *)(DAT_01d4d65c + 0x1c);
          local_c8 = (char ******)*local_110;
          local_c4 = *(int *)(DAT_01d4d65c + 0x20);
          if (local_c4 == 0) goto LAB_013592cc;
          local_19c = (char *******)&local_d4;
          local_c0 = *(char ********)(DAT_01d4d65c + 0x24);
          local_bc = *(code **)(DAT_01d4d65c + 0x28);
          local_1a0 = (char ******)&local_c8;
          local_118 = &local_1a0;
          local_114 = (char *******)&DAT_00000001;
          local_d0 = (char *******)&local_38;
          local_38 = &local_3c;
          local_b8 = (int *)0x0;
          local_198 = (char *******)&DAT_01d2ea4c;
          local_d4 = (char *******)&DAT_005b94fa;
          local_34 = (char *******)FUN_0137acac;
          FUN_01aaa328(iVar6,pcVar3,puVar12[4],&local_f0,&local_118);
        }
      }
    }
    param_1[4] = 0;
    param_1[2] = (int)&PTR_FUN_01ceb2a4;
    param_1[1] = 1;
    param_1[3] = 1;
    param_1[5] = 0;
    *(undefined2 *)param_1 = 0x101;
LAB_01358d3c:
    FUN_01834c18(param_3);
    return;
  }
  FUN_0137ac50(ppppppcVar11);
  *(char *)ppppppcVar11 = '\b';
  if (*(char *)(param_3 + 0x27) != '\0') {
    if (((DAT_01d50f88 < 2) &&
        ((DAT_01d4d100 - 1 < 2 ||
         ((DAT_01d4d100 != 0 && (cVar5 = FUN_01aaafa8(&DAT_01d4d0f8), cVar5 != '\0')))))) &&
       (iVar6 = FUN_01aaa278(DAT_01d4d0f8), iVar6 != 0)) {
      local_c4 = *(int *)(DAT_01d4d0f8 + 0x20);
      if (local_c4 == 0) {
LAB_013592dc:
        puVar9 = &DAT_01ce75a4;
        goto LAB_013592e4;
      }
      local_114 = (char *******)&local_d4;
      local_c0 = *(char ********)(DAT_01d4d0f8 + 0x24);
      local_bc = *(code **)(DAT_01d4d0f8 + 0x28);
      local_e8._0_4_ = (int *)(DAT_01d4d0f8 + 0x1c);
      local_c8 = (char ******)*(int *)local_e8;
      local_118 = &local_c8;
      local_f0 = (char *******)&local_118;
      local_b8 = (int *)0x0;
      local_2c = (char ******)param_3[0x29];
      local_d0 = (char *******)&local_38;
      local_38 = &local_2c;
      local_ec = (char *******)&DAT_00000001;
      local_110 = (int *)&DAT_01d2ea4c;
      local_d4 = (char *******)&DAT_005bc062;
      local_34 = (char *******)FUN_00b1c384;
      FUN_01aaaecc(DAT_01d4d0f8,&local_f0);
      iVar6 = DAT_01d4d0f8;
      if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
        local_19c = *(char ********)(DAT_01d4d0f8 + 0x14);
        local_198 = *(char ********)(DAT_01d4d0f8 + 0x18);
        local_1a0 = (char ******)&SUB_00000004;
        DataMemoryBarrier(0xb);
        puVar12 = DAT_01d4edc8;
        pcVar3 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          puVar12 = &DAT_01cfc5e0;
          pcVar3 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar13 = (*(code *)puVar12[3])(pcVar3,&local_1a0);
        if (iVar13 != 0) {
          FUN_01aaa328(iVar6,pcVar3,puVar12[4],&local_1a0,&local_f0);
        }
      }
    }
    else {
      iVar6 = DAT_01d4d0f8;
      if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
        local_244 = *(undefined4 *)(DAT_01d4d0f8 + 0x14);
        local_240 = *(undefined4 *)(DAT_01d4d0f8 + 0x18);
        local_248 = 4;
        DataMemoryBarrier(0xb);
        puVar12 = DAT_01d4edc8;
        pcVar3 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          puVar12 = &DAT_01cfc5e0;
          pcVar3 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar13 = (*(code *)puVar12[3])(pcVar3,&local_248);
        if (iVar13 != 0) {
          local_110 = (int *)(DAT_01d4d0f8 + 0x1c);
          local_c8 = (char ******)*local_110;
          local_c4 = *(int *)(DAT_01d4d0f8 + 0x20);
          if (local_c4 == 0) goto LAB_013592dc;
          local_19c = (char *******)&local_38;
          local_c0 = *(char ********)(DAT_01d4d0f8 + 0x24);
          local_bc = *(code **)(DAT_01d4d0f8 + 0x28);
          local_1a0 = (char ******)&local_c8;
          local_118 = &local_1a0;
          local_d4 = (char *******)param_3[0x29];
          local_b8 = (int *)0x0;
          local_34 = (char *******)&local_f0;
          local_f0 = (char *******)&local_d4;
          local_114 = (char *******)&DAT_00000001;
          local_198 = (char *******)&DAT_01d2ea4c;
          local_38 = (char *******)&DAT_005bc062;
          local_ec = (char *******)FUN_00b1c384;
          FUN_01aaa328(iVar6,pcVar3,puVar12[4],&local_248,&local_118);
        }
      }
    }
    iVar6 = param_3[0x29];
    *(undefined2 *)param_1 = 0x100;
    param_1[1] = iVar6;
    param_1[2] = 1;
    goto LAB_01358d3c;
  }
  iVar6 = param_3[0x29];
  local_23c = iVar6;
  FUN_01bed4e2(auStack_238,param_3 + 0x10,0x58);
  local_1e0 = *param_3;
  uStack_1dc = param_3[1];
  uStack_1d8 = param_3[2];
  uStack_1d4 = param_3[3];
  uStack_1d0 = param_3[4];
  local_1cc = param_3[5];
  uStack_1c8 = param_3[6];
  uStack_1c4 = param_3[7];
  uStack_1c0 = param_3[8];
  uStack_1bc = param_3[9];
  local_1b8 = param_3[10];
  uStack_1b4 = param_3[0xb];
  uStack_1b0 = param_3[0xc];
  uStack_1ac = param_3[0xd];
  uStack_1a8 = param_3[0xe];
  uStack_1a4 = param_3[0xf];
  FUN_01376460(&local_c8,auStack_238,&local_1e0,iVar6);
  local_118 = local_c0;
  local_114 = (char *******)local_bc;
  local_110 = local_b8;
  local_10c = pcStack_b4;
  iStack_108 = iStack_b0;
  iStack_104 = iStack_ac;
  if (local_c8 == (char ******)0x3 && local_c4 == 0) {
    *param_1 = (int)local_c0;
    param_1[1] = (int)local_bc;
    param_1[2] = (int)local_b8;
    param_1[3] = (int)pcStack_b4;
    param_1[4] = iStack_b0;
    param_1[5] = iStack_ac;
    return;
  }
  FUN_01bed4e2(auStack_180,auStack_a8,0x68);
  pcVar4 = local_10c;
  local_198 = local_118;
  pcStack_194 = (code *)local_114;
  piStack_190 = local_110;
  pcStack_18c = local_10c;
  iStack_188 = iStack_108;
  iStack_184 = iStack_104;
  local_19c = (char *******)local_c4;
  local_1a0 = local_c8;
  local_c8 = (char ******)0x0;
  local_c4 = 0x18;
  local_c0 = (char *******)0x0;
  local_bc = (code *)0x0;
  iVar7 = FUN_0160ab20(&local_1a0,&local_c8);
  uVar2 = CONCAT44(extraout_r2,pcVar4);
  if (iVar7 != 0) {
    uVar10 = *(uint *)(iVar7 + 8);
    pppppppcVar17 = (char *******)&DAT_00000001;
    if (0x13 < uVar10) {
LAB_0135896c:
      local_ec = (char *******)0x0;
      local_f0 = pppppppcVar17;
      local_e8 = uVar2;
      if (DAT_01d50f88 < 2) {
        if (1 < DAT_01d4d10c - 1) {
          if (DAT_01d4d10c != 0) {
            cVar5 = FUN_01aaafa8(&DAT_01d4d104);
            if (cVar5 != '\0') goto LAB_013589a8;
          }
          goto LAB_01358f78;
        }
LAB_013589a8:
        iVar13 = FUN_01aaa278(DAT_01d4d104);
        if (iVar13 == 0) goto LAB_01358f78;
        local_cc = (int *)(DAT_01d4d104 + 0x1c);
        if (*(int *)(DAT_01d4d104 + 0x20) != 0) {
          local_34 = &local_2c;
          local_c0 = *(char ********)(DAT_01d4d104 + 0x24);
          local_bc = *(code **)(DAT_01d4d104 + 0x28);
          local_d4 = (char *******)&local_38;
          local_b8 = (int *)0x0;
          local_d0 = (char *******)&DAT_00000001;
          local_28 = (char *******)&local_118;
          local_110 = &local_23c;
          local_118 = (char *******)&local_f0;
          local_30 = (int *)&DAT_01d2ea4c;
          local_2c = (char ******)&DAT_00585fb2;
          local_10c = FUN_00b1c384;
          local_114 = (char *******)FUN_013942ec;
          local_c8 = (char ******)*local_cc;
          local_c4 = *(int *)(DAT_01d4d104 + 0x20);
          local_38 = &local_c8;
          FUN_0135950c(&local_d4);
          goto LAB_01359238;
        }
      }
      else {
LAB_01358f78:
        iVar13 = DAT_01d4d104;
        if ((DAT_01d51ae9 != '\0') || (DAT_01d51b00 < 4)) goto LAB_01359238;
        local_dc = *(undefined4 *)(DAT_01d4d104 + 0x14);
        local_d8 = *(undefined4 *)(DAT_01d4d104 + 0x18);
        local_e0 = 4;
        DataMemoryBarrier(0xb);
        puVar12 = DAT_01d4edc8;
        pcVar3 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          puVar12 = &DAT_01cfc5e0;
          pcVar3 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar15 = (*(code *)puVar12[3])(pcVar3,&local_e0);
        if (iVar15 == 0) goto LAB_01359238;
        local_cc = (int *)(DAT_01d4d104 + 0x1c);
        if (*(int *)(DAT_01d4d104 + 0x20) != 0) {
          local_34 = &local_2c;
          local_c0 = *(char ********)(DAT_01d4d104 + 0x24);
          local_bc = *(code **)(DAT_01d4d104 + 0x28);
          local_d4 = (char *******)&local_38;
          local_d0 = (char *******)&DAT_00000001;
          local_28 = (char *******)&local_118;
          local_110 = &local_23c;
          local_b8 = (int *)0x0;
          local_30 = (int *)&DAT_01d2ea4c;
          local_2c = (char ******)&DAT_00585fb2;
          local_10c = FUN_00b1c384;
          local_114 = (char *******)FUN_013942ec;
          local_118 = (char *******)&local_f0;
          local_c8 = (char ******)*local_cc;
          local_c4 = *(int *)(DAT_01d4d104 + 0x20);
          local_38 = &local_c8;
          FUN_01aaa328(iVar13,pcVar3,puVar12[4],&local_e0,&local_d4);
          goto LAB_01359238;
        }
      }
      puVar9 = &DAT_01ce7584;
      goto LAB_01359310;
    }
    if (uVar10 != 0) {
      pbVar8 = *(byte **)(iVar7 + 4);
      uVar1 = 0;
      do {
        iVar7 = (int)(uVar1 >> 0x20);
        uVar14 = (uint)*pbVar8;
        uVar2 = CONCAT44(iVar7,uVar14);
        if ((uVar14 - 0x3a & 0xff) < 0xf6) goto LAB_0135896c;
        pbVar8 = pbVar8 + 1;
        uVar10 = uVar10 - 1;
        uVar1 = (uVar1 & 0xffffffff) * 10 +
                (CONCAT44(iVar7 * 10,uVar14 - 0x30) & 0xffffffff000000ff);
      } while (uVar10 != 0);
      pppppppcVar17 = (char *******)0x0;
      uVar2 = uVar1;
      if (uVar1 != 0) goto LAB_0135896c;
    }
  }
  uVar10 = 2;
  if ((local_134[0] & 0xb) == 1) {
    uVar10 = 3;
  }
  if (uVar10 - 3 < uVar10) {
    iVar6 = FUN_01367cb8(*(undefined4 *)(iVar15 + 0x34),*(undefined4 *)(iVar15 + 0x38),iVar13,iVar16
                        );
    FUN_01bed4e2(&local_c8,&local_1a0,0x88);
    FUN_0138b32c(iVar6 + 0xb4,param_2 + 100,&local_c8);
    iVar6 = FUN_01367cb8(*(undefined4 *)(iVar15 + 0x34),*(undefined4 *)(iVar15 + 0x38),iVar13,iVar16
                        );
    iVar7 = *(int *)(iVar6 + 0x50);
    *(undefined4 *)(iVar6 + 0x50) = 0;
    if (iVar7 != 0) {
      (**(code **)(iVar7 + 4))(*(undefined4 *)(iVar6 + 0x54));
    }
    iVar6 = FUN_01367cb8(*(undefined4 *)(iVar15 + 0x34),*(undefined4 *)(iVar15 + 0x38),iVar13,iVar16
                        );
    iVar13 = *(int *)(iVar6 + 0x58);
    *(undefined4 *)(iVar6 + 0x58) = 0;
    if (iVar13 != 0) {
      (**(code **)(iVar13 + 4))(*(undefined4 *)(iVar6 + 0x5c));
    }
    *(undefined1 *)param_1 = 3;
    return;
  }
  if (((DAT_01d50f88 < 2) &&
      ((DAT_01d4d0f4 - 1 < 2 ||
       ((DAT_01d4d0f4 != 0 && (cVar5 = FUN_01aaafa8(&DAT_01d4d0ec), cVar5 != '\0')))))) &&
     (iVar13 = FUN_01aaa278(DAT_01d4d0ec), iVar13 != 0)) {
    local_30 = (int *)(DAT_01d4d0ec + 0x1c);
    if (*(int *)(DAT_01d4d0ec + 0x20) != 0) {
      local_c0 = *(char ********)(DAT_01d4d0ec + 0x24);
      local_bc = *(code **)(DAT_01d4d0ec + 0x28);
      local_ec = (char *******)&local_d4;
      local_34 = (char *******)&DAT_00000001;
      local_2c = (char ******)local_134;
      local_d0 = (char *******)&local_118;
      local_110 = &local_23c;
      local_118 = &local_2c;
      local_38 = (char *******)&local_f0;
      local_b8 = (int *)0x0;
      local_e8._0_4_ = (int *)&DAT_01d2ea4c;
      local_d4 = (char *******)&DAT_0057dee1;
      local_10c = FUN_00b1c384;
      local_114 = (char *******)&LAB_01386d28;
      local_f0 = &local_c8;
      local_c8 = (char ******)*local_30;
      local_c4 = *(int *)(DAT_01d4d0ec + 0x20);
      FUN_01359604(&local_38);
      local_e8 = CONCAT44(local_e8._4_4_,(int *)local_e8);
      goto LAB_01359238;
    }
  }
  else {
    iVar13 = DAT_01d4d0ec;
    local_e8 = CONCAT44(local_e8._4_4_,(int *)local_e8);
    if ((DAT_01d51ae9 != '\0') ||
       (local_e8 = CONCAT44(local_e8._4_4_,(int *)local_e8), DAT_01d51b00 < 4)) {
LAB_01359238:
      param_1[1] = iVar6;
      param_1[2] = 1;
      *(undefined2 *)param_1 = 0x100;
      FUN_01354a94(&local_1a0);
      return;
    }
    local_f8 = *(undefined4 *)(DAT_01d4d0ec + 0x14);
    local_f4 = *(undefined4 *)(DAT_01d4d0ec + 0x18);
    local_fc = 4;
    DataMemoryBarrier(0xb);
    puVar12 = DAT_01d4edc8;
    pcVar3 = DAT_01d4edc4;
    if (DAT_01d51174 != 2) {
      puVar12 = &DAT_01cfc5e0;
      pcVar3 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
    }
    iVar15 = (*(code *)puVar12[3])(pcVar3,&local_fc);
    if (iVar15 == 0) goto LAB_01359238;
    local_30 = (int *)(DAT_01d4d0ec + 0x1c);
    if (*(int *)(DAT_01d4d0ec + 0x20) != 0) {
      local_c0 = *(char ********)(DAT_01d4d0ec + 0x24);
      local_ec = (char *******)&local_d4;
      local_bc = *(code **)(DAT_01d4d0ec + 0x28);
      local_34 = (char *******)&DAT_00000001;
      local_38 = (char *******)&local_f0;
      local_2c = (char ******)local_134;
      local_d0 = (char *******)&local_118;
      local_110 = &local_23c;
      local_b8 = (int *)0x0;
      local_e8._0_4_ = (int *)&DAT_01d2ea4c;
      local_d4 = (char *******)&DAT_0057dee1;
      local_10c = FUN_00b1c384;
      local_114 = (char *******)&LAB_01386d28;
      local_118 = &local_2c;
      local_f0 = &local_c8;
      local_c8 = (char ******)*local_30;
      local_c4 = *(int *)(DAT_01d4d0ec + 0x20);
      FUN_01aaa328(iVar13,pcVar3,puVar12[4],&local_fc,&local_38);
      goto LAB_01359238;
    }
  }
  puVar9 = &DAT_01ce7594;
LAB_01359310:
                    /* WARNING: Subroutine does not return */
  FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,puVar9);
}

