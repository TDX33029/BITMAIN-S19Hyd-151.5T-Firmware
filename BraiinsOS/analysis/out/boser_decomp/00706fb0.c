// FUN_00706fb0 @ 00706fb0 size=2672 calls_out=12 calls_in=0
// strings: axum::rejectionrejection_typeaxum_extra::extract::form/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/axum-extra-0.10.1/src/extract/form.rs | InvalidParamSegmentInvalidParamInvalidCatchAll | reje | reje | axum::extract::rejection::MissingPathParams | InvalidParamSegmentInvalidParamInvalidCatchAll

void FUN_00706fb0(undefined4 param_1,uint *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  uint uVar8;
  char ****ppppcVar9;
  char *extraout_r3;
  uint uVar10;
  uint uVar11;
  undefined2 uVar12;
  char *pcVar13;
  uint unaff_r10;
  uint unaff_r11;
  bool bVar14;
  bool bVar15;
  undefined8 uVar16;
  char ****ppppcVar17;
  char *local_128;
  uint uStack_124;
  uint uStack_120;
  uint uStack_11c;
  uint local_118;
  uint uStack_114;
  uint uStack_110;
  uint uStack_10c;
  uint uStack_108;
  char *local_100;
  undefined4 local_fc;
  undefined4 uStack_f8;
  char ***local_f4;
  undefined4 local_f0;
  undefined4 *local_ec;
  char *local_e8;
  uint local_e4;
  uint local_e0;
  uint local_dc;
  undefined4 local_d8;
  char *local_d4;
  undefined4 local_d0;
  char *local_cc;
  uint local_c8;
  uint local_c4;
  uint local_c0;
  undefined4 local_bc;
  undefined2 local_b6;
  char *local_b4;
  uint local_b0;
  uint local_ac;
  uint local_a8;
  undefined4 local_a4;
  char *local_a0;
  char *local_9c;
  uint local_98;
  uint local_94;
  undefined4 local_90;
  char *local_8c;
  undefined4 local_88;
  char ***local_84;
  undefined4 local_80;
  undefined4 *local_7c;
  char **local_78;
  char **local_74;
  undefined1 *local_70;
  char **local_6c;
  char **local_68;
  undefined *local_64;
  char **local_60;
  char **local_5c;
  undefined *local_58;
  char **local_54;
  char **local_50;
  undefined *local_4c;
  undefined2 local_34;
  
  if ((undefined1 *)*param_2 == &DAT_80000008) {
    if ((DAT_01d50f88 == 0) &&
       (((DAT_01d4b710 - 1 < 2 ||
         ((DAT_01d4b710 != 0 && (cVar1 = FUN_01aaafa8(&DAT_01d4b708), cVar1 != '\0')))) &&
        (iVar3 = FUN_01aaa278(DAT_01d4b708), iVar3 != 0)))) {
      local_9c = *(char **)(DAT_01d4b708 + 0x20);
      if (local_9c == (char *)0x0) {
LAB_007072bc:
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c06890);
      }
      local_e0 = *(uint *)(DAT_01d4b708 + 0x24);
      bVar15 = local_9c != (char *)0x0;
      bVar14 = local_9c != (char *)0x1;
      local_dc = *(uint *)(DAT_01d4b708 + 0x28);
      local_e8 = *(char **)(DAT_01d4b708 + 0x1c);
      local_d8 = 0;
      uVar12 = 0x23;
      local_88 = 0x23;
      if (bVar14) {
        local_bc = 1;
        uVar12 = 500;
      }
      local_8c = s_reje_003deff8;
      if (bVar14) {
        local_d4 = (char *)CONCAT22(local_d4._2_2_,uVar12);
        bVar15 = 1 < local_9c;
        local_cc = local_e8;
        local_c8 = (uint)local_9c;
        local_c4 = local_e0;
        local_c0 = local_dc;
      }
      local_e4 = (uint)local_9c;
      if ((!bVar15 || (!bVar14 || local_9c == (char *)0x2)) ||
         (local_a4 = 2, local_b4 = local_e8, local_b0 = (uint)local_9c, local_ac = local_e0,
         local_a8 = local_dc, local_9c == (char *)0x3)) goto LAB_007072bc;
      local_50 = &local_100;
      local_60 = &local_b4;
      local_68 = &local_d4;
      local_6c = &local_cc;
      local_74 = &local_8c;
      local_90 = 3;
      ppppcVar17 = &local_f4;
      local_78 = &local_e8;
      local_f0 = 4;
      local_f4 = &local_78;
      local_4c = &DAT_01c24094;
      local_58 = &DAT_01c24094;
      local_5c = (char **)&DAT_01c068a0;
      local_64 = &DAT_01c08e7c;
      local_70 = &DAT_01d2ea4c;
      local_fc = 0x2b;
      local_100 = "axum::extract::rejection::MissingPathParams";
      local_ec = (undefined4 *)(DAT_01d4b708 + 0x1c);
      local_a0 = local_e8;
      local_98 = local_e0;
      local_94 = local_dc;
      local_54 = &local_a0;
      FUN_01aaaecc(DAT_01d4b708,ppppcVar17);
      iVar3 = DAT_01d4b708;
      if ((DAT_01d51ae9 != '\0') || (DAT_01d51b00 < 5)) goto LAB_00707844;
      local_80 = *(undefined4 *)(DAT_01d4b708 + 0x14);
      local_7c = *(undefined4 **)(DAT_01d4b708 + 0x18);
      local_84 = (char ***)&DAT_00000005;
      DataMemoryBarrier(0xb);
      puVar6 = DAT_01d4edc8;
      if (DAT_01d51174 != 2) {
        puVar6 = &DAT_01cfc5e0;
      }
      pcVar4 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        pcVar4 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar2 = (*(code *)puVar6[3])(pcVar4,&local_84);
      if (iVar2 == 0) goto LAB_00707844;
      uVar7 = puVar6[4];
      ppppcVar9 = &local_84;
    }
    else {
      iVar3 = DAT_01d4b708;
      if ((DAT_01d51ae9 != '\0') || (DAT_01d51b00 < 5)) goto LAB_00707844;
      local_f0 = *(undefined4 *)(DAT_01d4b708 + 0x14);
      local_ec = *(undefined4 **)(DAT_01d4b708 + 0x18);
      local_f4 = (char ***)&DAT_00000005;
      DataMemoryBarrier(0xb);
      puVar6 = DAT_01d4edc8;
      if (DAT_01d51174 != 2) {
        puVar6 = &DAT_01cfc5e0;
      }
      pcVar4 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        pcVar4 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar2 = (*(code *)puVar6[3])(pcVar4,&local_f4);
      if (iVar2 == 0) goto LAB_00707844;
      local_7c = (undefined4 *)(DAT_01d4b708 + 0x1c);
      local_a0 = (char *)*local_7c;
      local_9c = *(char **)(DAT_01d4b708 + 0x20);
      if (local_9c == (char *)0x0) goto LAB_007072bc;
      local_e0 = *(uint *)(DAT_01d4b708 + 0x24);
      local_dc = *(uint *)(DAT_01d4b708 + 0x28);
      bVar15 = local_9c != (char *)0x0;
      local_d8 = 0;
      local_8c = s_reje_003deff8;
      if (local_9c != (char *)0x1) {
        local_bc = 1;
        local_d4 = (char *)CONCAT22(local_d4._2_2_,500);
        bVar15 = 1 < local_9c;
        local_cc = local_a0;
        local_c8 = (uint)local_9c;
        local_c4 = local_e0;
        local_c0 = local_dc;
      }
      local_88 = 0x23;
      local_e8 = local_a0;
      local_e4 = (uint)local_9c;
      if ((!bVar15 || (local_9c == (char *)0x1 || local_9c == (char *)0x2)) ||
         (local_a4 = 2, local_b4 = local_a0, local_b0 = (uint)local_9c, local_ac = local_e0,
         local_a8 = local_dc, local_9c == (char *)0x3)) goto LAB_007072bc;
      local_60 = &local_b4;
      local_50 = &local_100;
      local_68 = &local_d4;
      local_6c = &local_cc;
      local_74 = &local_8c;
      local_78 = &local_e8;
      local_90 = 3;
      local_4c = &DAT_01c24094;
      local_58 = &DAT_01c24094;
      ppppcVar9 = &local_f4;
      local_5c = (char **)&DAT_01c068a0;
      local_70 = &DAT_01d2ea4c;
      local_64 = &DAT_01c08e7c;
      local_fc = 0x2b;
      local_80 = 4;
      local_84 = &local_78;
      local_100 = "axum::extract::rejection::MissingPathParams";
      ppppcVar17 = &local_84;
      uVar7 = puVar6[4];
      local_98 = local_e0;
      local_94 = local_dc;
      local_54 = &local_a0;
    }
    FUN_01aaa328(iVar3,pcVar4,uVar7,ppppcVar9,ppppcVar17);
LAB_00707844:
    local_98 = 0x2b;
    local_9c = 
    "No paths parameters found for matched routeevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/axum-0.8.4/src/extract/rejection.rs:59"
    ;
    local_a0 = (char *)0x80000000;
    FUN_007167d4(&local_78,&local_a0);
    local_34 = 500;
    FUN_01bed4e2(param_1,&local_78,0x50);
    return;
  }
  local_78 = &local_128;
  local_128 = (char *)*param_2;
  uStack_124 = param_2[1];
  uStack_120 = param_2[2];
  uStack_11c = param_2[3];
  local_118 = param_2[4];
  uStack_114 = param_2[5];
  uVar10 = param_2[6];
  uVar11 = param_2[7];
  uStack_108 = param_2[8];
  pcVar4 = (char *)0x6;
  if ((int)local_128 < 0) {
    pcVar4 = local_128;
  }
  uStack_110 = uVar10;
  uStack_10c = uVar11;
  if ((1 << ((uint)pcVar4 & 0xff) & 0xdeU) == 0) {
    local_9c = (char *)0x1;
    local_98 = 0;
    local_a0 = (char *)0x0;
    local_6c = (char **)0x0;
    local_70 = (undefined1 *)0x60000020;
    local_74 = (char **)&DAT_01c06fa4;
    local_78 = &local_a0;
    iVar3 = FUN_0070e258(&local_128,&local_78);
    if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_013073dc(&DAT_00533383,0x37,&local_b4,&DAT_01c0713c,&DAT_01d30334);
    }
    local_100 = local_a0;
    local_fc = local_9c;
    uStack_f8 = local_98;
  }
  else {
    local_74 = (char **)FUN_0070e258;
    FUN_00664898(&local_100,&DAT_0058ff7a,&local_78);
  }
  if ((DAT_01d50f88 == 0) &&
     ((DAT_01d4b794 - 1 < 2 ||
      ((DAT_01d4b794 != 0 && (cVar1 = FUN_01aaafa8(&DAT_01d4b78c), cVar1 != '\0')))))) {
    uVar16 = FUN_01aaa278(DAT_01d4b78c);
    puVar6 = (undefined4 *)((ulonglong)uVar16 >> 0x20);
    if ((int)uVar16 != 0) {
      uVar8 = *(uint *)(DAT_01d4b78c + 0x20);
      pcVar4 = extraout_r3;
      if (uVar8 != 0) {
        uVar11 = *(uint *)(DAT_01d4b78c + 0x24);
        uVar10 = *(uint *)(DAT_01d4b78c + 0x28);
        puVar6 = (undefined4 *)(DAT_01d4b78c + 0x1c);
        pcVar4 = (char *)*puVar6;
        local_d8 = 0;
        local_d0 = 0x23;
        local_d4 = s_reje_003deff8;
        local_e8 = pcVar4;
        local_e4 = uVar8;
        local_e0 = uVar11;
        local_dc = uVar10;
      }
      if (uVar8 < 2) goto LAB_00707418;
      local_bc = 1;
      pcVar5 = local_128;
      if (-1 < (int)local_128) {
        pcVar5 = (char *)0x6;
      }
      local_b6 = *(undefined2 *)(&DAT_00568018 + (int)pcVar5 * 2);
      local_cc = pcVar4;
      local_c8 = uVar8;
      local_c4 = uVar11;
      local_c0 = uVar10;
      if ((uVar8 < 3) ||
         (local_a4 = 2, local_b4 = pcVar4, local_b0 = uVar8, local_ac = uVar11, local_a8 = uVar10,
         uVar8 == 3)) goto LAB_00707418;
      local_50 = &local_8c;
      local_5c = &local_100;
      local_60 = &local_b4;
      local_68 = (char **)&local_b6;
      local_6c = &local_cc;
      local_74 = &local_d4;
      local_78 = &local_e8;
      local_f0 = 4;
      local_f4 = &local_78;
      local_90 = 3;
      local_4c = &DAT_01c24094;
      local_58 = &DAT_01c06f44;
      local_64 = &DAT_01c08e7c;
      local_70 = &DAT_01d2ea4c;
      local_88 = 0x32;
      local_8c = 
      "axum::extract::path::FailedToDeserializePathParams. Note that multiple parameters must be extracted with a tuple `Path<(_, _)>` or a struct `Path<YourParams>`"
      ;
      local_ec = puVar6;
      local_a0 = pcVar4;
      local_9c = (char *)uVar8;
      local_98 = uVar11;
      local_94 = uVar10;
      local_54 = &local_a0;
      FUN_01aaaecc(DAT_01d4b78c,&local_f4);
      iVar3 = DAT_01d4b78c;
      if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
        local_80 = *(undefined4 *)(DAT_01d4b78c + 0x14);
        local_7c = *(undefined4 **)(DAT_01d4b78c + 0x18);
        local_84 = (char ***)&DAT_00000005;
        DataMemoryBarrier(0xb);
        puVar6 = DAT_01d4edc8;
        pcVar4 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          puVar6 = &DAT_01cfc5e0;
          pcVar4 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar2 = (*(code *)puVar6[3])(pcVar4,&local_84);
        if (iVar2 != 0) {
          FUN_01aaa328(iVar3,pcVar4,puVar6[4],&local_84,&local_f4);
        }
      }
      goto LAB_0070799c;
    }
  }
  iVar3 = DAT_01d4b78c;
  if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
    local_f0 = *(undefined4 *)(DAT_01d4b78c + 0x14);
    local_ec = *(undefined4 **)(DAT_01d4b78c + 0x18);
    local_f4 = (char ***)&DAT_00000005;
    DataMemoryBarrier(0xb);
    puVar6 = DAT_01d4edc8;
    pcVar4 = DAT_01d4edc4;
    if (DAT_01d51174 != 2) {
      puVar6 = &DAT_01cfc5e0;
      pcVar4 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
    }
    iVar2 = (*(code *)puVar6[3])(pcVar4,&local_f4);
    if (iVar2 != 0) {
      local_7c = (undefined4 *)(DAT_01d4b78c + 0x1c);
      pcVar5 = (char *)*local_7c;
      uVar10 = *(uint *)(DAT_01d4b78c + 0x20);
      if (uVar10 != 0) {
        unaff_r10 = *(uint *)(DAT_01d4b78c + 0x24);
        unaff_r11 = *(uint *)(DAT_01d4b78c + 0x28);
        local_d8 = 0;
        local_d0 = 0x23;
        local_d4 = s_reje_003deff8;
        local_e8 = pcVar5;
        local_e4 = uVar10;
        local_e0 = unaff_r10;
        local_dc = unaff_r11;
      }
      if (1 < uVar10) {
        local_bc = 1;
        pcVar13 = local_128;
        if (-1 < (int)local_128) {
          pcVar13 = (char *)0x6;
        }
        local_b6 = *(undefined2 *)(&DAT_00568018 + (int)pcVar13 * 2);
        local_cc = pcVar5;
        local_c8 = uVar10;
        local_c4 = unaff_r10;
        local_c0 = unaff_r11;
        if ((2 < uVar10) &&
           (local_a4 = 2, local_c4 = unaff_r10, local_c0 = unaff_r11, local_b4 = pcVar5,
           local_b0 = uVar10, local_ac = unaff_r10, local_a8 = unaff_r11, uVar10 != 3)) {
          local_50 = &local_8c;
          local_5c = &local_100;
          local_60 = &local_b4;
          local_68 = (char **)&local_b6;
          local_6c = &local_cc;
          local_74 = &local_d4;
          local_90 = 3;
          local_78 = &local_e8;
          local_58 = &DAT_01c06f44;
          local_4c = &DAT_01c24094;
          local_64 = &DAT_01c08e7c;
          local_70 = &DAT_01d2ea4c;
          local_88 = 0x32;
          local_80 = 4;
          local_84 = &local_78;
          local_8c = 
          "axum::extract::path::FailedToDeserializePathParams. Note that multiple parameters must be extracted with a tuple `Path<(_, _)>` or a struct `Path<YourParams>`"
          ;
          local_c4 = unaff_r10;
          local_c0 = unaff_r11;
          local_ac = unaff_r10;
          local_a8 = unaff_r11;
          local_a0 = pcVar5;
          local_9c = (char *)uVar10;
          local_98 = unaff_r10;
          local_94 = unaff_r11;
          local_54 = &local_a0;
          FUN_01aaa328(iVar3,pcVar4,puVar6[4],&local_f4,&local_84);
          goto LAB_0070799c;
        }
      }
LAB_00707418:
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c06f94);
    }
  }
LAB_0070799c:
  pcVar4 = local_128;
  if (-1 < (int)local_128) {
    pcVar4 = (char *)0x6;
  }
  uVar12 = *(undefined2 *)(&DAT_00568018 + (int)pcVar4 * 2);
  local_9c = local_100;
  local_98 = local_fc;
  local_94 = uStack_f8;
  local_a0 = (char *)CONCAT22(local_a0._2_2_,uVar12);
  FUN_007167d4(&local_78);
  local_34 = uVar12;
  FUN_01bed4e2(param_1,&local_78,0x50);
  FUN_0070e1cc(&local_128);
  return;
}

