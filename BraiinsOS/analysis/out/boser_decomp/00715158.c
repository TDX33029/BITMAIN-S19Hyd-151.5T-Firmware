// FUN_00715158 @ 00715158 size=2756 calls_out=11 calls_in=0
// strings: Failed to buffer the request body | axum::rejectionrejection_typeaxum_extra::extract::form/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/axum-extra-0.10.1/src/extract/form.rs | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | reje | FieldSet corrupted (this is a bug)

void FUN_00715158(undefined4 param_1,int *param_2)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 extraout_r3_01;
  undefined4 extraout_r3_02;
  undefined2 uVar9;
  int iVar10;
  undefined4 unaff_r9;
  int iVar11;
  undefined8 uVar12;
  undefined4 local_100;
  int iStack_fc;
  int iStack_f8;
  undefined4 **local_f4;
  undefined4 local_f0;
  undefined4 *local_ec;
  undefined4 local_e8;
  uint local_e4;
  int iStack_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  char *local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  uint local_c8;
  int iStack_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined2 local_b6;
  undefined4 local_b4;
  uint local_b0;
  int iStack_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  uint local_9c;
  int local_98;
  int local_94;
  undefined4 local_90;
  char *local_8c;
  undefined4 local_88;
  undefined4 **local_84;
  undefined4 local_80;
  undefined4 *local_7c;
  undefined4 *local_78;
  char **local_74;
  undefined1 *local_70;
  undefined4 *local_6c;
  undefined2 *local_68;
  undefined *local_64;
  undefined4 *local_60;
  undefined4 *local_5c;
  undefined *local_58;
  undefined4 *local_54;
  char **local_50;
  undefined *local_4c;
  undefined2 local_34;
  
  iVar11 = param_2[1];
  iVar10 = param_2[2];
  if (*param_2 != 1) {
    local_98 = 0;
    local_9c = 1;
    local_a0 = 0;
    local_6c = (undefined4 *)0x0;
    local_70 = (undefined1 *)0x60000020;
    local_74 = (char **)&DAT_01c075ac;
    local_78 = &local_a0;
    iVar3 = FUN_01aba690(&local_a0,"Failed to buffer the request body",0x21);
    if (((iVar3 != 0) || (iVar3 = (*(code *)local_74[3])(local_78,0x5312dd,2), iVar3 != 0)) ||
       (iVar4 = (**(code **)(iVar10 + 0x10))(iVar11,&local_78), iVar3 = local_98, iVar4 != 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_013073dc(&DAT_00533383,0x37,&local_b4,&DAT_01c075c4,&DAT_01d30334);
    }
    local_100 = local_a0;
    iStack_fc = local_9c;
    iStack_f8 = local_98;
    if ((DAT_01d50f88 == 0) &&
       ((DAT_01d4b7d0 - 1 < 2 ||
        ((DAT_01d4b7d0 != 0 && (cVar2 = FUN_01aaafa8(&DAT_01d4b7c8), cVar2 != '\0')))))) {
      uVar12 = FUN_01aaa278(DAT_01d4b7c8);
      puVar6 = (undefined4 *)((ulonglong)uVar12 >> 0x20);
      if ((int)uVar12 == 0) goto LAB_007153d0;
      uVar7 = *(uint *)(DAT_01d4b7c8 + 0x20);
      uVar5 = extraout_r3_02;
      if (uVar7 != 0) {
        iVar3 = *(int *)(DAT_01d4b7c8 + 0x24);
        unaff_r9 = *(undefined4 *)(DAT_01d4b7c8 + 0x28);
        puVar6 = (undefined4 *)(DAT_01d4b7c8 + 0x1c);
        uVar5 = *puVar6;
        local_d8 = 0;
        local_d0 = 0x23;
        local_d4 = s_reje_003deff8;
        local_e8 = uVar5;
        local_e4 = uVar7;
        local_dc = unaff_r9;
        iStack_e0 = iVar3;
      }
      if (uVar7 < 2) goto LAB_007154b8;
      local_bc = 1;
      local_b6 = 0x19d;
      local_cc = uVar5;
      local_c8 = uVar7;
      iStack_c4 = iVar3;
      local_c0 = unaff_r9;
      if ((uVar7 < 3) ||
         (local_a4 = 2, local_b4 = uVar5, local_b0 = uVar7, iStack_ac = iVar3, local_a8 = unaff_r9,
         uVar7 == 3)) goto LAB_007154b8;
      local_60 = &local_b4;
      local_50 = &local_8c;
      local_68 = &local_b6;
      local_6c = &local_cc;
      local_74 = &local_d4;
      local_78 = &local_e8;
      local_90 = 3;
      local_4c = &DAT_01c24094;
      local_58 = &DAT_01c074fc;
      local_70 = &DAT_01d2ea4c;
      local_64 = &DAT_01c08e7c;
      local_88 = 0x2f;
      local_f0 = 4;
      local_f4 = &local_78;
      local_8c = "axum_core::extract::rejection::LengthLimitError";
      local_ec = puVar6;
      local_a0 = uVar5;
      local_9c = uVar7;
      local_98 = iVar3;
      local_94 = unaff_r9;
      local_5c = &local_100;
      local_54 = &local_a0;
      FUN_01aaaecc(DAT_01d4b7c8,&local_f4);
      iVar3 = DAT_01d4b7c8;
      if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
        local_80 = *(undefined4 *)(DAT_01d4b7c8 + 0x14);
        local_7c = *(undefined4 **)(DAT_01d4b7c8 + 0x18);
        local_84 = (undefined4 **)&DAT_00000005;
        DataMemoryBarrier(0xb);
        puVar6 = DAT_01d4edc8;
        pcVar1 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          puVar6 = &DAT_01cfc5e0;
          pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar4 = (*(code *)puVar6[3])(pcVar1,&local_84);
        if (iVar4 != 0) {
          FUN_01aaa328(iVar3,pcVar1,puVar6[4],&local_84,&local_f4);
        }
      }
    }
    else {
LAB_007153d0:
      iVar3 = DAT_01d4b7c8;
      if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
        local_f0 = *(undefined4 *)(DAT_01d4b7c8 + 0x14);
        local_ec = *(undefined4 **)(DAT_01d4b7c8 + 0x18);
        local_f4 = (undefined4 **)&DAT_00000005;
        DataMemoryBarrier(0xb);
        puVar6 = DAT_01d4edc8;
        pcVar1 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          puVar6 = &DAT_01cfc5e0;
          pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar4 = (*(code *)puVar6[3])(pcVar1,&local_f4);
        if (iVar4 != 0) {
          local_7c = (undefined4 *)(DAT_01d4b7c8 + 0x1c);
          uVar5 = *local_7c;
          uVar7 = *(uint *)(DAT_01d4b7c8 + 0x20);
          local_94 = extraout_r3_00;
          if (uVar7 != 0) {
            iVar4 = *(int *)(DAT_01d4b7c8 + 0x24);
            local_94 = *(undefined4 *)(DAT_01d4b7c8 + 0x28);
            local_d8 = 0;
            local_d0 = 0x23;
            local_d4 = s_reje_003deff8;
            local_e8 = uVar5;
            local_e4 = uVar7;
            local_dc = local_94;
            iStack_e0 = iVar4;
          }
          if (uVar7 < 2) {
LAB_007154b8:
                    /* WARNING: Subroutine does not return */
            FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c0754c);
          }
          local_bc = 1;
          local_b6 = 0x19d;
          local_cc = uVar5;
          local_c8 = uVar7;
          iStack_c4 = iVar4;
          local_c0 = local_94;
          if ((uVar7 < 3) ||
             (local_a4 = 2, local_b4 = uVar5, local_b0 = uVar7, iStack_ac = iVar4,
             local_a8 = local_94, uVar7 == 3)) goto LAB_007154b8;
          local_60 = &local_b4;
          local_68 = &local_b6;
          local_50 = &local_8c;
          local_6c = &local_cc;
          local_74 = &local_d4;
          local_90 = 3;
          local_78 = &local_e8;
          local_4c = &DAT_01c24094;
          local_64 = &DAT_01c08e7c;
          local_58 = &DAT_01c074fc;
          local_70 = &DAT_01d2ea4c;
          local_88 = 0x2f;
          local_8c = "axum_core::extract::rejection::LengthLimitError";
          local_80 = 4;
          local_84 = &local_78;
          local_a0 = uVar5;
          local_9c = uVar7;
          local_98 = iVar4;
          local_5c = &local_100;
          local_54 = &local_a0;
          FUN_01aaa328(iVar3,pcVar1,puVar6[4],&local_f4,&local_84);
        }
      }
    }
    uVar9 = 0x19d;
    local_9c = local_100;
    local_98 = iStack_fc;
    local_94 = iStack_f8;
    local_a0 = CONCAT22(local_a0._2_2_,0x19d);
    FUN_007167d4(&local_78);
    goto LAB_00715ba8;
  }
  local_98 = 0;
  local_9c = 1;
  local_a0 = 0;
  local_6c = (undefined4 *)0x0;
  local_70 = (undefined1 *)0x60000020;
  local_74 = (char **)&DAT_01c075ac;
  local_78 = &local_a0;
  iVar3 = FUN_01aba690(&local_a0,"Failed to buffer the request body",0x21);
  if (((iVar3 != 0) || (iVar3 = (*(code *)local_74[3])(local_78,0x5312dd,2), iVar3 != 0)) ||
     (iVar3 = (**(code **)(iVar10 + 0x10))(iVar11,&local_78), uVar7 = local_9c, iVar3 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533383,0x37,&local_b4,&DAT_01c075c4,&DAT_01d30334);
  }
  local_100 = local_a0;
  iStack_fc = local_9c;
  iStack_f8 = local_98;
  if ((DAT_01d50f88 == 0) &&
     ((DAT_01d4b7dc - 1 < 2 ||
      ((DAT_01d4b7dc != 0 && (cVar2 = FUN_01aaafa8(&DAT_01d4b7d4), cVar2 != '\0')))))) {
    uVar12 = FUN_01aaa278(DAT_01d4b7d4);
    puVar6 = (undefined4 *)((ulonglong)uVar12 >> 0x20);
    if ((int)uVar12 == 0) goto LAB_00715230;
    uVar8 = *(uint *)(DAT_01d4b7d4 + 0x20);
    uVar5 = extraout_r3_01;
    if (uVar8 != 0) {
      uVar7 = *(int *)(DAT_01d4b7d4 + 0x24);
      unaff_r9 = *(undefined4 *)(DAT_01d4b7d4 + 0x28);
      puVar6 = (undefined4 *)(DAT_01d4b7d4 + 0x1c);
      uVar5 = *puVar6;
      local_d8 = 0;
      local_d0 = 0x23;
      local_d4 = s_reje_003deff8;
      local_e8 = uVar5;
      local_e4 = uVar8;
      local_dc = unaff_r9;
      iStack_e0 = uVar7;
    }
    if (uVar8 < 2) goto LAB_00715318;
    local_bc = 1;
    local_b6 = 400;
    local_cc = uVar5;
    local_c8 = uVar8;
    iStack_c4 = uVar7;
    local_c0 = unaff_r9;
    if ((uVar8 < 3) ||
       (local_a4 = 2, local_b4 = uVar5, local_b0 = uVar8, iStack_ac = uVar7, local_a8 = unaff_r9,
       uVar8 == 3)) goto LAB_00715318;
    local_60 = &local_b4;
    local_50 = &local_8c;
    local_68 = &local_b6;
    local_6c = &local_cc;
    local_74 = &local_d4;
    local_78 = &local_e8;
    local_90 = 3;
    local_4c = &DAT_01c24094;
    local_64 = &DAT_01c08e7c;
    local_58 = &DAT_01c074fc;
    local_70 = &DAT_01d2ea4c;
    local_88 = 0x2f;
    local_f0 = 4;
    local_f4 = &local_78;
    local_8c = "axum_core::extract::rejection::UnknownBodyError";
    local_ec = puVar6;
    local_a0 = uVar5;
    local_9c = uVar8;
    local_98 = uVar7;
    local_94 = unaff_r9;
    local_5c = &local_100;
    local_54 = &local_a0;
    FUN_01aaaecc(DAT_01d4b7d4,&local_f4);
    iVar3 = DAT_01d4b7d4;
    if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
      local_80 = *(undefined4 *)(DAT_01d4b7d4 + 0x14);
      local_7c = *(undefined4 **)(DAT_01d4b7d4 + 0x18);
      local_84 = (undefined4 **)&DAT_00000005;
      DataMemoryBarrier(0xb);
      puVar6 = DAT_01d4edc8;
      pcVar1 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        puVar6 = &DAT_01cfc5e0;
        pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar4 = (*(code *)puVar6[3])(pcVar1,&local_84);
      if (iVar4 != 0) {
        FUN_01aaa328(iVar3,pcVar1,puVar6[4],&local_84,&local_f4);
      }
    }
  }
  else {
LAB_00715230:
    iVar3 = DAT_01d4b7d4;
    if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
      local_f0 = *(undefined4 *)(DAT_01d4b7d4 + 0x14);
      local_ec = *(undefined4 **)(DAT_01d4b7d4 + 0x18);
      local_f4 = (undefined4 **)&DAT_00000005;
      DataMemoryBarrier(0xb);
      puVar6 = DAT_01d4edc8;
      pcVar1 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        puVar6 = &DAT_01cfc5e0;
        pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar4 = (*(code *)puVar6[3])(pcVar1,&local_f4);
      if (iVar4 != 0) {
        local_7c = (undefined4 *)(DAT_01d4b7d4 + 0x1c);
        uVar5 = *local_7c;
        uVar7 = *(uint *)(DAT_01d4b7d4 + 0x20);
        local_94 = extraout_r3;
        iVar4 = iVar3;
        if (uVar7 != 0) {
          iVar4 = *(int *)(DAT_01d4b7d4 + 0x24);
          local_94 = *(undefined4 *)(DAT_01d4b7d4 + 0x28);
          local_d8 = 0;
          local_d0 = 0x23;
          local_d4 = s_reje_003deff8;
          local_e8 = uVar5;
          local_e4 = uVar7;
          local_dc = local_94;
          iStack_e0 = iVar4;
        }
        if (uVar7 < 2) {
LAB_00715318:
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c0759c);
        }
        local_bc = 1;
        local_b6 = 400;
        local_cc = uVar5;
        local_c8 = uVar7;
        iStack_c4 = iVar4;
        local_c0 = local_94;
        if ((uVar7 < 3) ||
           (local_a4 = 2, local_b4 = uVar5, local_b0 = uVar7, iStack_ac = iVar4, local_a8 = local_94
           , uVar7 == 3)) goto LAB_00715318;
        local_60 = &local_b4;
        local_68 = &local_b6;
        local_6c = &local_cc;
        local_74 = &local_d4;
        local_50 = &local_8c;
        local_78 = &local_e8;
        local_90 = 3;
        local_4c = &DAT_01c24094;
        local_64 = &DAT_01c08e7c;
        local_58 = &DAT_01c074fc;
        local_70 = &DAT_01d2ea4c;
        local_88 = 0x2f;
        local_80 = 4;
        local_84 = &local_78;
        local_8c = "axum_core::extract::rejection::UnknownBodyError";
        local_a0 = uVar5;
        local_9c = uVar7;
        local_98 = iVar4;
        local_5c = &local_100;
        local_54 = &local_a0;
        FUN_01aaa328(iVar3,pcVar1,puVar6[4],&local_f4,&local_84);
      }
    }
  }
  uVar9 = 400;
  local_9c = local_100;
  local_98 = iStack_fc;
  local_94 = iStack_f8;
  local_a0 = CONCAT22(local_a0._2_2_,400);
  FUN_007167d4(&local_78);
LAB_00715ba8:
  local_34 = uVar9;
  FUN_01bed4e2(param_1,&local_78,0x50);
  FUN_01a5ef40(iVar11,iVar10);
  return;
}

