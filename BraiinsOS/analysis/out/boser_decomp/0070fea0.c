// FUN_0070fea0 @ 0070fea0 size=1180 calls_out=8 calls_in=0
// strings: axum::rejectionrejection_typeaxum_extra::extract::form/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/axum-extra-0.10.1/src/extract/form.rs | InvalidParamSegmentInvalidParamInvalidCatchAll | reje | axum::extract::multipart::InvalidBoundaryError parsing `multipart/form-data` request | InvalidParamSegmentInvalidParamInvalidCatchAll | reje

void FUN_0070fea0(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 ***pppuVar6;
  undefined4 *puVar7;
  bool bVar8;
  bool bVar9;
  undefined4 ***pppuVar10;
  undefined4 **local_f4;
  undefined4 local_f0;
  undefined4 *local_ec;
  undefined4 local_e8;
  uint uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  char *local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  uint uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 local_bc;
  undefined2 local_b6;
  undefined4 local_b4;
  uint uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  char *local_9c;
  undefined4 local_98;
  undefined4 uStack_94;
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
  undefined *local_5c;
  undefined *local_58;
  undefined4 *local_54;
  char **local_50;
  undefined *local_4c;
  undefined2 local_34;
  
  if ((DAT_01d50f88 == 0) &&
     (((DAT_01d4b7c4 - 1 < 2 ||
       ((DAT_01d4b7c4 != 0 && (cVar1 = FUN_01aaafa8(&DAT_01d4b7bc), cVar1 != '\0')))) &&
      (iVar3 = FUN_01aaa278(DAT_01d4b7bc), iVar3 != 0)))) {
    local_9c = *(char **)(DAT_01d4b7bc + 0x20);
    if (local_9c == (char *)0x0) {
LAB_00710134:
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c07324);
    }
    uStack_e0 = *(undefined4 *)(DAT_01d4b7bc + 0x24);
    uStack_dc = *(undefined4 *)(DAT_01d4b7bc + 0x28);
    local_e8 = *(undefined4 *)(DAT_01d4b7bc + 0x1c);
    bVar9 = local_9c != (char *)0x0;
    bVar8 = local_9c != (char *)0x1;
    local_d8 = 0;
    uVar5 = 0x23;
    local_d0 = 0x23;
    if (bVar8) {
      uVar5 = 1;
    }
    local_d4 = s_reje_003deff8;
    if (bVar8) {
      local_b6 = 400;
      bVar9 = 1 < local_9c;
      local_cc = local_e8;
      local_bc = uVar5;
      uStack_c8 = (uint)local_9c;
      uStack_c4 = uStack_e0;
      uStack_c0 = uStack_dc;
    }
    uStack_e4 = (uint)local_9c;
    if ((!bVar9 || (!bVar8 || local_9c == (char *)0x2)) ||
       (local_a4 = 2, local_b4 = local_e8, uStack_b0 = (uint)local_9c, uStack_ac = uStack_e0,
       uStack_a8 = uStack_dc, local_9c == (char *)0x3)) goto LAB_00710134;
    local_50 = &local_8c;
    local_54 = &local_a0;
    local_60 = &local_b4;
    local_68 = &local_b6;
    local_6c = &local_cc;
    local_74 = &local_d4;
    local_90 = 3;
    pppuVar10 = &local_f4;
    local_78 = &local_e8;
    local_f0 = 4;
    local_f4 = &local_78;
    local_4c = &DAT_01c24094;
    local_58 = &DAT_01c24094;
    local_5c = &DAT_01c07334;
    local_64 = &DAT_01c08e7c;
    local_70 = &DAT_01d2ea4c;
    local_88 = 0x29;
    local_8c = 
    "axum::extract::multipart::InvalidBoundaryError parsing `multipart/form-data` request";
    local_ec = (undefined4 *)(DAT_01d4b7bc + 0x1c);
    local_a0 = local_e8;
    local_98 = uStack_e0;
    uStack_94 = uStack_dc;
    FUN_01aaaecc(DAT_01d4b7bc,pppuVar10);
    iVar3 = DAT_01d4b7bc;
    if ((DAT_01d51ae9 != '\0') || (DAT_01d51b00 < 5)) goto LAB_007102f0;
    local_80 = *(undefined4 *)(DAT_01d4b7bc + 0x14);
    local_7c = *(undefined4 **)(DAT_01d4b7bc + 0x18);
    local_84 = (undefined4 **)&DAT_00000005;
    DataMemoryBarrier(0xb);
    puVar7 = DAT_01d4edc8;
    if (DAT_01d51174 != 2) {
      puVar7 = &DAT_01cfc5e0;
    }
    pcVar4 = DAT_01d4edc4;
    if (DAT_01d51174 != 2) {
      pcVar4 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
    }
    iVar2 = (*(code *)puVar7[3])(pcVar4,&local_84);
    if (iVar2 == 0) goto LAB_007102f0;
    uVar5 = puVar7[4];
    pppuVar6 = &local_84;
  }
  else {
    iVar3 = DAT_01d4b7bc;
    if ((DAT_01d51ae9 != '\0') || (DAT_01d51b00 < 5)) goto LAB_007102f0;
    local_f0 = *(undefined4 *)(DAT_01d4b7bc + 0x14);
    local_ec = *(undefined4 **)(DAT_01d4b7bc + 0x18);
    local_f4 = (undefined4 **)&DAT_00000005;
    DataMemoryBarrier(0xb);
    puVar7 = DAT_01d4edc8;
    if (DAT_01d51174 != 2) {
      puVar7 = &DAT_01cfc5e0;
    }
    pcVar4 = DAT_01d4edc4;
    if (DAT_01d51174 != 2) {
      pcVar4 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
    }
    iVar2 = (*(code *)puVar7[3])(pcVar4,&local_f4);
    if (iVar2 == 0) goto LAB_007102f0;
    local_7c = (undefined4 *)(DAT_01d4b7bc + 0x1c);
    local_a0 = *local_7c;
    local_9c = *(char **)(DAT_01d4b7bc + 0x20);
    if (local_9c == (char *)0x0) goto LAB_00710134;
    uStack_e0 = *(undefined4 *)(DAT_01d4b7bc + 0x24);
    uStack_dc = *(undefined4 *)(DAT_01d4b7bc + 0x28);
    bVar9 = local_9c != (char *)0x0;
    local_d8 = 0;
    local_d0 = 0x23;
    if (local_9c != (char *)0x1) {
      local_bc = 1;
      local_b6 = 400;
      bVar9 = 1 < local_9c;
      local_cc = local_a0;
      uStack_c8 = (uint)local_9c;
      uStack_c4 = uStack_e0;
      uStack_c0 = uStack_dc;
    }
    local_d4 = s_reje_003deff8;
    local_e8 = local_a0;
    uStack_e4 = (uint)local_9c;
    if ((!bVar9 || (local_9c == (char *)0x1 || local_9c == (char *)0x2)) ||
       (local_a4 = 2, local_b4 = local_a0, uStack_b0 = (uint)local_9c, uStack_ac = uStack_e0,
       uStack_a8 = uStack_dc, local_9c == (char *)0x3)) goto LAB_00710134;
    local_54 = &local_a0;
    local_50 = &local_8c;
    local_60 = &local_b4;
    local_68 = &local_b6;
    local_6c = &local_cc;
    local_74 = &local_d4;
    local_90 = 3;
    local_78 = &local_e8;
    pppuVar6 = &local_f4;
    local_4c = &DAT_01c24094;
    local_58 = &DAT_01c24094;
    local_64 = &DAT_01c08e7c;
    local_5c = &DAT_01c07334;
    local_70 = &DAT_01d2ea4c;
    local_88 = 0x29;
    local_8c = 
    "axum::extract::multipart::InvalidBoundaryError parsing `multipart/form-data` request";
    local_80 = 4;
    local_84 = &local_78;
    pppuVar10 = &local_84;
    uVar5 = puVar7[4];
    local_98 = uStack_e0;
    uStack_94 = uStack_dc;
  }
  FUN_01aaa328(iVar3,pcVar4,uVar5,pppuVar6,pppuVar10);
LAB_007102f0:
  local_98 = 0x34;
  local_9c = "Invalid `boundary` for `multipart/form-data` request";
  local_a0 = 0x80000000;
  FUN_007167d4(&local_78,&local_a0);
  local_34 = 400;
  FUN_01bed4e2(param_1,&local_78,0x50);
  return;
}

