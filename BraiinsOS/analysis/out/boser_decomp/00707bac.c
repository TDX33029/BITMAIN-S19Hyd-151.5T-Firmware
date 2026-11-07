// FUN_00707bac @ 00707bac size=1408 calls_out=11 calls_in=1
// strings: Failed to deserialize query stringevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/axum-0.8.4/src/extract/ws.rs:904axum::extract::ws::rejection/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/axum-0.8.4/src/extract/ws.rs | axum::rejectionrejection_typeaxum_extra::extract::form/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/axum-extra-0.10.1/src/extract/form.rs | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | reje | FieldSet corrupted (this is a bug)

void FUN_00707bac(undefined4 param_1,undefined4 param_2,int param_3)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 unaff_r9;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined4 local_100;
  undefined4 uStack_fc;
  int iStack_f8;
  undefined4 **local_f4;
  undefined4 local_f0;
  undefined4 *local_ec;
  undefined4 local_e8;
  uint local_e4;
  int local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  char *local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  uint local_c8;
  int iStack_c4;
  undefined4 uStack_c0;
  undefined4 local_bc;
  undefined2 local_b6;
  undefined4 local_b4;
  uint local_b0;
  int iStack_ac;
  undefined4 uStack_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  uint local_9c;
  int local_98;
  int iStack_94;
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
  
  local_74 = (char **)&DAT_01c069a8;
  local_78 = &local_a0;
  local_98 = 0;
  local_a0 = 0;
  local_6c = (undefined4 *)0x0;
  local_9c = 1;
  local_70 = (undefined1 *)0x60000020;
  iVar3 = FUN_005fdd28(local_78,
                       "Failed to deserialize query stringevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/axum-0.8.4/src/extract/ws.rs:904axum::extract::ws::rejection/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/axum-0.8.4/src/extract/ws.rs"
                       ,0x22);
  if (iVar3 != 0) {
LAB_00708108:
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533383,0x37,&local_b4,&DAT_01c069c0,&DAT_01d30334);
  }
  iVar3 = FUN_005fdd28(&local_a0,0x5312dd,2);
  if ((iVar3 != 0) ||
     (iVar4 = (**(code **)(param_3 + 0x10))(param_2,&local_78), iVar3 = local_98, iVar4 != 0))
  goto LAB_00708108;
  local_100 = local_a0;
  uStack_fc = local_9c;
  iStack_f8 = local_98;
  if ((DAT_01d50f88 == 0) &&
     ((DAT_01d4b734 - 1 < 2 ||
      ((DAT_01d4b734 != 0 && (cVar2 = FUN_01aaafa8(&DAT_01d4b72c), cVar2 != '\0')))))) {
    uVar8 = FUN_01aaa278(DAT_01d4b72c);
    puVar5 = (undefined4 *)((ulonglong)uVar8 >> 0x20);
    if ((int)uVar8 != 0) {
      uVar6 = *(uint *)(DAT_01d4b72c + 0x20);
      uVar7 = extraout_r3_00;
      if (uVar6 != 0) {
        iVar3 = *(int *)(DAT_01d4b72c + 0x24);
        unaff_r9 = *(undefined4 *)(DAT_01d4b72c + 0x28);
        puVar5 = (undefined4 *)(DAT_01d4b72c + 0x1c);
        uVar7 = *puVar5;
        local_d8 = 0;
        local_d0 = 0x23;
        local_d4 = s_reje_003deff8;
        local_e8 = uVar7;
        local_e4 = uVar6;
        local_e0 = iVar3;
        local_dc = unaff_r9;
      }
      if (uVar6 < 2) goto LAB_00707d5c;
      local_bc = 1;
      local_b6 = 400;
      local_cc = uVar7;
      local_c8 = uVar6;
      iStack_c4 = iVar3;
      uStack_c0 = unaff_r9;
      if ((uVar6 < 3) ||
         (local_a4 = 2, local_b4 = uVar7, local_b0 = uVar6, iStack_ac = iVar3, uStack_a8 = unaff_r9,
         uVar6 == 3)) goto LAB_00707d5c;
      local_60 = &local_b4;
      local_68 = &local_b6;
      local_6c = &local_cc;
      local_50 = &local_8c;
      local_74 = &local_d4;
      local_78 = &local_e8;
      local_90 = 3;
      local_4c = &DAT_01c24094;
      local_64 = &DAT_01c08e7c;
      local_58 = &DAT_01c067a0;
      local_70 = &DAT_01d2ea4c;
      local_88 = 0x38;
      local_f0 = 4;
      local_f4 = &local_78;
      local_8c = 
      "axum::extract::rejection::FailedToDeserializeQueryStringaxum::extract::rejection::JsonSyntaxErroraxum::extract::rejection::JsonDataError"
      ;
      local_ec = puVar5;
      local_a0 = uVar7;
      local_9c = uVar6;
      local_98 = iVar3;
      iStack_94 = unaff_r9;
      local_5c = &local_100;
      local_54 = &local_a0;
      FUN_01aaaecc(DAT_01d4b72c,&local_f4);
      iVar3 = DAT_01d4b72c;
      if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
        local_80 = *(undefined4 *)(DAT_01d4b72c + 0x14);
        local_7c = *(undefined4 **)(DAT_01d4b72c + 0x18);
        local_84 = (undefined4 **)&DAT_00000005;
        DataMemoryBarrier(0xb);
        puVar5 = DAT_01d4edc8;
        pcVar1 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          puVar5 = &DAT_01cfc5e0;
          pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar4 = (*(code *)puVar5[3])(pcVar1,&local_84);
        if (iVar4 != 0) {
          FUN_01aaa328(iVar3,pcVar1,puVar5[4],&local_84,&local_f4);
        }
      }
      goto LAB_007080c0;
    }
  }
  iVar3 = DAT_01d4b72c;
  if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
    local_f0 = *(undefined4 *)(DAT_01d4b72c + 0x14);
    local_ec = *(undefined4 **)(DAT_01d4b72c + 0x18);
    local_f4 = (undefined4 **)&DAT_00000005;
    DataMemoryBarrier(0xb);
    puVar5 = DAT_01d4edc8;
    pcVar1 = DAT_01d4edc4;
    if (DAT_01d51174 != 2) {
      puVar5 = &DAT_01cfc5e0;
      pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
    }
    iVar4 = (*(code *)puVar5[3])(pcVar1,&local_f4);
    if (iVar4 != 0) {
      local_7c = (undefined4 *)(DAT_01d4b72c + 0x1c);
      uVar7 = *local_7c;
      uVar6 = *(uint *)(DAT_01d4b72c + 0x20);
      iStack_94 = extraout_r3;
      if (uVar6 != 0) {
        iVar4 = *(int *)(DAT_01d4b72c + 0x24);
        iStack_94 = *(undefined4 *)(DAT_01d4b72c + 0x28);
        local_d8 = 0;
        local_d0 = 0x23;
        local_d4 = s_reje_003deff8;
        local_e8 = uVar7;
        local_e4 = uVar6;
        local_e0 = iVar4;
        local_dc = iStack_94;
      }
      if (1 < uVar6) {
        local_bc = 1;
        local_b6 = 400;
        local_cc = uVar7;
        local_c8 = uVar6;
        iStack_c4 = iVar4;
        uStack_c0 = iStack_94;
        if ((2 < uVar6) &&
           (local_a4 = 2, local_b4 = uVar7, local_b0 = uVar6, iStack_ac = iVar4,
           uStack_a8 = iStack_94, uVar6 != 3)) {
          local_60 = &local_b4;
          local_68 = &local_b6;
          local_50 = &local_8c;
          local_6c = &local_cc;
          local_74 = &local_d4;
          local_90 = 3;
          local_78 = &local_e8;
          local_4c = &DAT_01c24094;
          local_58 = &DAT_01c067a0;
          local_64 = &DAT_01c08e7c;
          local_70 = &DAT_01d2ea4c;
          local_88 = 0x38;
          local_8c = 
          "axum::extract::rejection::FailedToDeserializeQueryStringaxum::extract::rejection::JsonSyntaxErroraxum::extract::rejection::JsonDataError"
          ;
          local_80 = 4;
          local_84 = &local_78;
          local_a0 = uVar7;
          local_9c = uVar6;
          local_98 = iVar4;
          local_5c = &local_100;
          local_54 = &local_a0;
          FUN_01aaa328(iVar3,pcVar1,puVar5[4],&local_f4,&local_84);
          goto LAB_007080c0;
        }
      }
LAB_00707d5c:
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c06998);
    }
  }
LAB_007080c0:
  local_9c = local_100;
  local_98 = uStack_fc;
  iStack_94 = iStack_f8;
  local_a0 = CONCAT22(local_a0._2_2_,400);
  FUN_007167d4(&local_78);
  local_34 = 400;
  FUN_01bed4e2(param_1,&local_78,0x50);
  FUN_01a5ef40(param_2,param_3);
  return;
}

