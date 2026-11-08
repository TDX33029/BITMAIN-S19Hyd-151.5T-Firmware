// FUN_013823e0 @ 013823e0 size=2884 calls_out=19 calls_in=3
// strings: h2::proto::streams::recv/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/recv.rs | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | h2::proto::streams::recv/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/recv.rs | h2::proto::streams::recv/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/recv.rs | InvalidParamSegmentInvalidParamInvalidCatchAll

void FUN_013823e0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char **ppcVar4;
  char **ppcVar5;
  undefined4 *extraout_r2;
  undefined1 *extraout_r3;
  undefined4 *puVar6;
  undefined4 *puVar7;
  char *pcVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined4 *puVar11;
  undefined4 ****ppppuVar12;
  int local_f8 [3];
  int local_ec [3];
  undefined4 ****local_e0;
  char **local_dc;
  undefined4 *local_d8;
  undefined4 ****local_d4;
  int *local_d0;
  undefined *puStack_cc;
  int local_c8;
  undefined4 uStack_c4;
  undefined4 ****local_c0;
  char **local_bc;
  undefined4 *local_b8;
  undefined4 ****local_b4;
  int *local_b0;
  undefined *local_ac;
  int local_a8;
  undefined4 uStack_a4;
  char *local_a0;
  char **local_9c;
  undefined4 *puStack_98;
  char *local_90;
  char **local_8c;
  undefined4 *local_88;
  undefined4 ****local_80;
  char **local_7c;
  undefined4 *local_78;
  undefined4 ****local_74;
  char **local_70;
  undefined4 *local_6c;
  undefined1 *local_68;
  undefined4 local_64;
  char *local_60;
  undefined4 local_5c;
  undefined4 ****local_58;
  char **local_54;
  undefined4 *local_50;
  undefined1 *local_4c;
  undefined4 local_48;
  int local_44;
  undefined4 ****local_40;
  char **local_3c;
  undefined4 *local_38;
  undefined4 ****local_30;
  char **local_2c;
  undefined4 *local_28;
  
  while (FUN_01368148(&local_80,param_1 + 0x28,param_3), puVar11 = local_78, ppcVar4 = local_7c,
        ppppuVar12 = local_80, local_80 != (undefined4 ****)0x0) {
    local_40 = local_80;
    local_3c = local_7c;
    local_38 = local_78;
    iVar2 = FUN_01367c40(local_80[0xd],local_80[0xe],local_7c,local_78);
    puVar10 = *(undefined1 **)(iVar2 + 0x18);
    if ((DAT_01d50f88 == 0) &&
       (((DAT_01d4d790 - 1 < 2 ||
         ((DAT_01d4d790 != 0 && (cVar1 = FUN_01aaafa8(&DAT_01d4d788), cVar1 != '\0')))) &&
        (iVar2 = FUN_01aaa278(DAT_01d4d788), iVar2 != 0)))) {
      puVar6 = (undefined4 *)(DAT_01d4d788 + 0x1c);
      if (*(char ***)(DAT_01d4d788 + 0x20) == (char **)0x0) {
LAB_01382f10:
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01cebab0);
      }
      local_b8 = *(undefined4 **)(DAT_01d4d788 + 0x24);
      local_b4 = *(undefined4 *****)(DAT_01d4d788 + 0x28);
      local_b0 = (int *)0x0;
      local_c0 = (undefined4 ****)*puVar6;
      local_bc = *(char ***)(DAT_01d4d788 + 0x20);
      iVar2 = FUN_01367c40(ppppuVar12[0xd],ppppuVar12[0xe],ppcVar4,puVar11);
      local_9c = &local_90;
      local_90 = (char *)(iVar2 + 0xd4);
      local_a0 = &DAT_005ac552;
      local_6c = (undefined4 *)&DAT_01d2ea4c;
      local_70 = &local_a0;
      local_74 = &local_c0;
      local_2c = (char **)&DAT_00000001;
      local_30 = &local_74;
      local_8c = (char **)FUN_00b1c384;
      local_28 = puVar6;
      FUN_01aaaecc(DAT_01d4d788,&local_30);
      iVar2 = DAT_01d4d788;
      if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
        local_54 = *(char ***)(DAT_01d4d788 + 0x14);
        local_50 = *(undefined4 **)(DAT_01d4d788 + 0x18);
        local_58 = (undefined4 ****)&DAT_00000005;
        DataMemoryBarrier(0xb);
        puVar11 = DAT_01d4edc8;
        if (DAT_01d51174 != 2) {
          puVar11 = &DAT_01cfc5e0;
        }
        pcVar8 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          pcVar8 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar3 = (*(code *)puVar11[3])(pcVar8,&local_58);
        if (iVar3 != 0) {
          local_e0 = local_58;
          local_dc = local_54;
          local_d8 = local_50;
          FUN_01aaa328(iVar2,pcVar8,puVar11[4],&local_e0,&local_30);
        }
      }
    }
    else {
      iVar2 = DAT_01d4d788;
      if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
        local_2c = *(char ***)(DAT_01d4d788 + 0x14);
        local_28 = *(undefined4 **)(DAT_01d4d788 + 0x18);
        local_30 = (undefined4 ****)&DAT_00000005;
        DataMemoryBarrier(0xb);
        puVar11 = DAT_01d4edc8;
        if (DAT_01d51174 != 2) {
          puVar11 = &DAT_01cfc5e0;
        }
        pcVar8 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          pcVar8 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar3 = (*(code *)puVar11[3])(pcVar8,&local_30);
        if (iVar3 != 0) {
          puVar6 = (undefined4 *)(DAT_01d4d788 + 0x1c);
          if (*(char ***)(DAT_01d4d788 + 0x20) == (char **)0x0) goto LAB_01382f10;
          local_b8 = *(undefined4 **)(DAT_01d4d788 + 0x24);
          local_b4 = *(undefined4 *****)(DAT_01d4d788 + 0x28);
          local_b0 = (int *)0x0;
          local_c0 = (undefined4 ****)*puVar6;
          local_bc = *(char ***)(DAT_01d4d788 + 0x20);
          iVar3 = FUN_01367c40(local_40[0xd],local_40[0xe],local_3c,local_38);
          local_9c = &local_90;
          local_90 = (char *)(iVar3 + 0xd4);
          local_a0 = &DAT_005ac552;
          local_50 = (undefined4 *)&DAT_01d2ea4c;
          local_54 = &local_a0;
          local_58 = &local_c0;
          local_70 = (char **)&DAT_00000001;
          local_74 = &local_58;
          local_8c = (char **)FUN_00b1c384;
          local_e0 = local_30;
          local_dc = local_2c;
          local_d8 = local_28;
          local_6c = puVar6;
          FUN_01aaa328(iVar2,pcVar8,puVar11[4],&local_e0,&local_74);
        }
      }
    }
    FUN_01387ff4(param_4,&local_40,puVar10 != &DAT_3b9aca00);
  }
  while (FUN_01367f24(local_f8,param_1 + 0x50,param_3), local_f8[0] != 0) {
    FUN_01387ff4(param_4,local_f8,1);
  }
  if (param_2 != 0) {
    while (FUN_01368478(local_ec,param_1 + 0x3c,param_3), local_ec[0] != 0) {
      FUN_01387ff4(param_4,local_ec,0);
    }
  }
  if (((DAT_01d50f88 == 0) &&
      ((DAT_01d4d3c4 - 1 < 2 ||
       ((DAT_01d4d3c4 != 0 && (cVar1 = FUN_01aaafa8(&DAT_01d4d3bc), cVar1 != '\0')))))) &&
     (iVar2 = FUN_01aaa278(DAT_01d4d3bc), iVar2 != 0)) {
    local_b8 = (undefined4 *)(DAT_01d4d3bc + 0x1c);
    local_bc = (char **)0x0;
    local_c0 = (undefined4 ****)&SUB_00000004;
    FUN_01aaa548(&local_e0,DAT_01d4d3bc,&local_c0);
  }
  else {
    local_a8 = DAT_01d4d3bc;
    local_b8 = (undefined4 *)0x2;
    if (DAT_01d51ae9 == '\0') {
      local_d8 = (undefined4 *)(DAT_01d4d3bc + 0x1c);
      local_dc = (char **)0x0;
      local_e0 = (undefined4 ****)0x4;
      FUN_01aaa3e0(&local_c0,&local_e0);
    }
    local_e0 = local_c0;
    local_dc = local_bc;
    local_d8 = local_b8;
    local_d4 = local_b4;
    local_d0 = local_b0;
    puStack_cc = local_ac;
    local_c8 = local_a8;
    uStack_c4 = uStack_a4;
  }
  if (local_d8 != (undefined4 *)0x2) {
    if (((uint)local_d8 & 1) == 0) {
      ppppuVar12 = local_d4;
    }
    else {
      ppppuVar12 = (undefined4 ****)((int)local_d4 + (local_d0[2] - 1U & 0xfffffff8) + 8);
    }
    (*(code *)local_d0[0xc])(ppppuVar12,&local_e0);
  }
  if ((DAT_01d51ae9 == '\0') && (local_c8 != 0)) {
    local_54 = *(char ***)(local_c8 + 0x10);
    local_58 = *(undefined4 *****)(local_c8 + 0xc);
    local_c0 = &local_58;
    local_bc = (char **)&DAT_0132b6a0;
    FUN_006404a8(&local_e0,"tracing::span::active",0x15,&DAT_00594cdd,&local_c0);
  }
  do {
    puVar10 = &DAT_01d51ae9;
    FUN_01368368(&local_a0,param_1 + 0xcc,param_3);
    puVar11 = puStack_98;
    ppcVar4 = local_9c;
    pcVar8 = local_a0;
    if (local_a0 == (char *)0x0) {
      FUN_0134c39c(&local_e0);
      FUN_01834abc(&local_e0);
      while (FUN_01368258(&local_e0,param_1 + 0xb8,param_3), puVar11 = local_d8, ppcVar4 = local_dc,
            ppppuVar12 = local_e0, local_e0 != (undefined4 ****)0x0) {
        iVar2 = FUN_01367c40(local_e0[0xd],local_e0[0xe],local_dc,local_d8);
        local_b8 = puVar11;
        local_bc = ppcVar4;
        local_c0 = ppppuVar12;
        FUN_01387ff4(param_4,&local_c0,*(undefined1 **)(iVar2 + 0x18) != &DAT_3b9aca00);
      }
      while (FUN_01368038(&local_e0,param_1 + 0xe0,param_3), puVar11 = local_d8, ppcVar4 = local_dc,
            ppppuVar12 = local_e0, local_e0 != (undefined4 ****)0x0) {
        iVar2 = FUN_01367c40(local_e0[0xd],local_e0[0xe],local_dc,local_d8);
        local_b8 = puVar11;
        local_bc = ppcVar4;
        local_c0 = ppppuVar12;
        FUN_01387ff4(param_4,&local_c0,*(undefined1 **)(iVar2 + 0x18) != &DAT_3b9aca00);
      }
      return;
    }
    local_90 = local_a0;
    local_8c = local_9c;
    local_88 = puStack_98;
    iVar2 = FUN_01367c40(*(undefined4 *)(local_a0 + 0x34),*(undefined4 *)(local_a0 + 0x38),local_9c,
                         puStack_98);
    puVar9 = *(undefined1 **)(iVar2 + 0x18);
    if (((DAT_01d50f88 == 0) &&
        ((DAT_01d4d784 - 1 < 2 ||
         ((DAT_01d4d784 != 0 && (cVar1 = FUN_01aaafa8(&DAT_01d4d77c), cVar1 != '\0')))))) &&
       (iVar2 = FUN_01aaa278(DAT_01d4d77c), iVar2 != 0)) {
      puVar7 = (undefined4 *)(DAT_01d4d77c + 0x1c);
      ppppuVar12 = (undefined4 ****)*puVar7;
      ppcVar5 = *(char ***)(DAT_01d4d77c + 0x20);
      puVar6 = extraout_r2;
      puVar10 = extraout_r3;
      if (ppcVar5 != (char **)0x0) {
        puVar6 = *(undefined4 **)(DAT_01d4d77c + 0x24);
        puVar10 = *(undefined1 **)(DAT_01d4d77c + 0x28);
        local_64 = 0;
        local_5c = 0x2d;
        local_60 = 
        "clear_pending_capacityevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/send.rs:185"
        ;
        local_74 = ppppuVar12;
        local_70 = ppcVar5;
        local_6c = puVar6;
        local_68 = puVar10;
      }
      if (ppcVar5 < (char **)0x2) {
LAB_01382dd4:
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01cebaa0);
      }
      local_48 = 1;
      local_58 = ppppuVar12;
      local_54 = ppcVar5;
      local_50 = puVar6;
      local_4c = puVar10;
      local_44 = FUN_01367c40(*(undefined4 *)(pcVar8 + 0x34),*(undefined4 *)(pcVar8 + 0x38),ppcVar4,
                              puVar11);
      local_b0 = &local_44;
      local_b4 = &local_58;
      local_bc = &local_60;
      local_44 = local_44 + 0xd4;
      local_c0 = &local_74;
      local_80 = &local_c0;
      local_7c = (char **)0x2;
      local_ac = &DAT_01d2d754;
      local_b8 = (undefined4 *)&DAT_01d2ea4c;
      local_78 = puVar7;
      FUN_01aaaecc(DAT_01d4d77c,&local_80);
      iVar2 = DAT_01d4d77c;
      if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
        local_3c = *(char ***)(DAT_01d4d77c + 0x14);
        local_38 = *(undefined4 **)(DAT_01d4d77c + 0x18);
        local_40 = (undefined4 ****)&DAT_00000005;
        DataMemoryBarrier(0xb);
        pcVar8 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          pcVar8 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        puVar11 = DAT_01d4edc8;
        if (DAT_01d51174 != 2) {
          puVar11 = &DAT_01cfc5e0;
        }
        iVar3 = (*(code *)puVar11[3])(pcVar8,&local_40);
        if (iVar3 != 0) {
          local_30 = local_40;
          local_2c = local_3c;
          local_28 = local_38;
          FUN_01aaa328(iVar2,pcVar8,puVar11[4],&local_30,&local_80);
        }
      }
    }
    else {
      iVar2 = DAT_01d4d77c;
      if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
        local_7c = *(char ***)(DAT_01d4d77c + 0x14);
        local_78 = *(undefined4 **)(DAT_01d4d77c + 0x18);
        local_80 = (undefined4 ****)&DAT_00000005;
        DataMemoryBarrier(0xb);
        pcVar8 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          pcVar8 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        puVar6 = DAT_01d4edc8;
        if (DAT_01d51174 != 2) {
          puVar6 = &DAT_01cfc5e0;
        }
        iVar3 = (*(code *)puVar6[3])(pcVar8,&local_80);
        if (iVar3 != 0) {
          puVar7 = (undefined4 *)(DAT_01d4d77c + 0x1c);
          ppppuVar12 = (undefined4 ****)*puVar7;
          ppcVar4 = *(char ***)(DAT_01d4d77c + 0x20);
          if (ppcVar4 != (char **)0x0) {
            puVar11 = *(undefined4 **)(DAT_01d4d77c + 0x24);
            puVar10 = *(undefined1 **)(DAT_01d4d77c + 0x28);
            local_64 = 0;
            local_5c = 0x2d;
            local_60 = 
            "clear_pending_capacityevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/send.rs:185"
            ;
            local_74 = ppppuVar12;
            local_70 = ppcVar4;
            local_6c = puVar11;
            local_68 = puVar10;
          }
          if (ppcVar4 < (char **)0x2) goto LAB_01382dd4;
          local_48 = 1;
          local_58 = ppppuVar12;
          local_54 = ppcVar4;
          local_50 = puVar11;
          local_4c = puVar10;
          local_44 = FUN_01367c40(*(undefined4 *)(local_90 + 0x34),*(undefined4 *)(local_90 + 0x38),
                                  local_8c,local_88);
          local_b0 = &local_44;
          local_b4 = &local_58;
          local_bc = &local_60;
          local_44 = local_44 + 0xd4;
          local_c0 = &local_74;
          local_40 = &local_c0;
          local_3c = (char **)0x2;
          local_ac = &DAT_01d2d754;
          local_b8 = (undefined4 *)&DAT_01d2ea4c;
          local_30 = local_80;
          local_2c = local_7c;
          local_28 = local_78;
          local_38 = puVar7;
          FUN_01aaa328(iVar2,pcVar8,puVar6[4],&local_30,&local_40);
        }
      }
    }
    FUN_01387ff4(param_4,&local_90,puVar9 != &DAT_3b9aca00);
  } while( true );
}

