// FUN_0143d474 @ 0143d474 size=1316 calls_out=9 calls_in=2
// strings: hyper_util::client::legacy::connect::http/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-util-0.1.20/src/client/legacy/connect/http.rs | InvalidParamSegmentInvalidParamInvalidCatchAll | hyper_util::client::legacy::connect::http/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-util-0.1.20/src/client/legacy/connect/http.rs | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | invalid URL; scheme is not httpevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-util-0.1.20/src/client/legacy/connect/http.rs:770event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-util-0.1.20/src/client/legacy/connect/http.rs:767event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-util-0.1.20/src/client/legacy/connect/http.rs:774

void FUN_0143d474(undefined2 *param_1,int param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 ****ppppuVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  undefined4 *****pppppuVar10;
  undefined8 local_a0;
  undefined4 *local_98;
  char *local_94;
  char ***local_90;
  char *local_8c;
  undefined4 ***local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 ****local_7c;
  char **local_78;
  undefined4 *local_74;
  undefined4 ****local_70;
  undefined8 *local_6c;
  undefined1 *local_68;
  undefined4 ***pppuStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined8 local_50;
  char **local_48;
  code *local_44;
  undefined8 *local_40;
  code *local_3c;
  undefined4 ****local_38;
  undefined1 *local_34;
  undefined4 ***local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  if ((DAT_01d50f88 == 0) &&
     (((DAT_01d4eaf8 - 1 < 2 ||
       ((DAT_01d4eaf8 != 0 && (cVar1 = FUN_01aaafa8(&DAT_01d4eaf0), cVar1 != '\0')))) &&
      (iVar3 = FUN_01aaa278(DAT_01d4eaf0), iVar3 != 0)))) {
    puVar7 = (undefined4 *)(DAT_01d4eaf0 + 0x1c);
    pppuStack_64 = (undefined4 ***)*puVar7;
    iStack_60 = *(int *)(DAT_01d4eaf0 + 0x20);
    if (iStack_60 == 0) {
LAB_0143d980:
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01cf806c);
    }
    uStack_5c = *(undefined4 *)(DAT_01d4eaf0 + 0x24);
    uStack_58 = *(undefined4 *)(DAT_01d4eaf0 + 0x28);
    local_54 = 0;
    local_8c = (char *)0x0;
    if (*param_3 != '\0') {
      local_8c = param_3;
    }
    if (*(int *)(param_3 + 0x10) == 0) {
      local_50 = (ulonglong)local_50._4_4_ << 0x20;
LAB_0143d674:
      local_70 = (undefined4 ****)0x0;
    }
    else {
      local_50 = FUN_01415984(*(undefined4 *)(param_3 + 0xc));
      if (*(int *)(param_3 + 0x10) == 0) goto LAB_0143d674;
      FUN_01415bb0(&local_70,*(undefined4 *)(param_3 + 0xc));
    }
    local_90 = &local_48;
    pppppuVar10 = (undefined4 *****)&local_a0;
    local_78 = &local_94;
    local_7c = &pppuStack_64;
    local_a0._0_4_ = &local_7c;
    local_38 = &local_70;
    local_40 = &local_50;
    local_48 = &local_8c;
    local_3c = FUN_0143db80;
    local_a0._4_4_ = 1;
    local_34 = &LAB_0143dcd4;
    local_44 = FUN_0143da38;
    local_94 = &DAT_005bd40e;
    local_74 = (undefined4 *)&DAT_01d2ea4c;
    local_98 = puVar7;
    FUN_01aaaecc(DAT_01d4eaf0,pppppuVar10);
    iVar3 = DAT_01d4eaf0;
    local_a0 = CONCAT44(local_a0._4_4_,(undefined4 *****)local_a0);
    if ((DAT_01d51ae9 == '\0') &&
       (local_a0 = CONCAT44(local_a0._4_4_,(undefined4 *****)local_a0), 4 < DAT_01d51b00)) {
      local_2c = *(undefined4 *)(DAT_01d4eaf0 + 0x14);
      local_28 = *(undefined4 *)(DAT_01d4eaf0 + 0x18);
      local_30 = (undefined4 ***)0x5;
      DataMemoryBarrier(0xb);
      puVar7 = DAT_01d4edc8;
      if (DAT_01d51174 != 2) {
        puVar7 = &DAT_01cfc5e0;
      }
      pcVar4 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        pcVar4 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar2 = (*(code *)puVar7[3])(pcVar4,&local_30);
      if (iVar2 != 0) {
        uVar5 = puVar7[4];
        ppppuVar6 = &local_30;
LAB_0143d854:
        FUN_01aaa328(iVar3,pcVar4,uVar5,ppppuVar6,pppppuVar10);
      }
    }
  }
  else {
    iVar3 = DAT_01d4eaf0;
    local_50 = CONCAT44(local_50._4_4_,(undefined4)local_50);
    local_a0 = CONCAT44(local_a0._4_4_,(undefined4 *****)local_a0);
    if ((DAT_01d51ae9 == '\0') &&
       (local_50 = CONCAT44(local_50._4_4_,(undefined4)local_50),
       local_a0 = CONCAT44(local_a0._4_4_,(undefined4 *****)local_a0), 4 < DAT_01d51b00)) {
      local_84 = *(undefined4 *)(DAT_01d4eaf0 + 0x14);
      local_80 = *(undefined4 *)(DAT_01d4eaf0 + 0x18);
      local_88 = (undefined4 ***)0x5;
      DataMemoryBarrier(0xb);
      puVar7 = DAT_01d4edc8;
      if (DAT_01d51174 != 2) {
        puVar7 = &DAT_01cfc5e0;
      }
      pcVar4 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        pcVar4 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar2 = (*(code *)puVar7[3])(pcVar4,&local_88);
      local_a0 = CONCAT44(local_a0._4_4_,(undefined4 *****)local_a0);
      if (iVar2 != 0) {
        puVar8 = (undefined4 *)(DAT_01d4eaf0 + 0x1c);
        pppuStack_64 = (undefined4 ***)*puVar8;
        iStack_60 = *(int *)(DAT_01d4eaf0 + 0x20);
        if (iStack_60 == 0) goto LAB_0143d980;
        uStack_5c = *(undefined4 *)(DAT_01d4eaf0 + 0x24);
        uStack_58 = *(undefined4 *)(DAT_01d4eaf0 + 0x28);
        local_54 = 0;
        local_94 = (char *)0x0;
        if (*param_3 != '\0') {
          local_94 = param_3;
        }
        if (*(int *)(param_3 + 0x10) == 0) {
          local_a0 = (ulonglong)local_a0._4_4_ << 0x20;
LAB_0143d7bc:
          local_30 = (undefined4 ***)0x0;
        }
        else {
          local_a0 = FUN_01415984(*(undefined4 *)(param_3 + 0xc));
          if (*(int *)(param_3 + 0x10) == 0) goto LAB_0143d7bc;
          FUN_01415bb0(&local_30,*(undefined4 *)(param_3 + 0xc));
        }
        local_6c = &local_50;
        local_70 = &pppuStack_64;
        local_7c = &local_70;
        local_38 = &local_30;
        local_40 = &local_a0;
        local_48 = &local_94;
        local_78 = (char **)&DAT_00000001;
        pppppuVar10 = &local_7c;
        local_50 = CONCAT44(&local_48,&DAT_005bd40e);
        ppppuVar6 = &local_88;
        local_34 = &LAB_0143dcd4;
        local_3c = FUN_0143db80;
        local_44 = FUN_0143da38;
        local_68 = &DAT_01d2ea4c;
        uVar5 = puVar7[4];
        local_74 = puVar8;
        goto LAB_0143d854;
      }
    }
  }
  if (*(char *)(param_2 + 0x74) == '\0') {
    if (*param_3 == '\0') {
      uVar5 = 0x1e;
      pcVar4 = 
      "invalid URL, scheme is missingevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-util-0.1.20/src/client/legacy/connect/http.rs:921event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-util-0.1.20/src/client/legacy/connect/http.rs:927event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-util-0.1.20/src/client/legacy/connect/http.rs:904event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-util-0.1.20/src/client/legacy/connect/http.rs:844event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-util-0.1.20/src/client/legacy/connect/http.rs:933"
      ;
      goto LAB_0143d920;
    }
LAB_0143d8ac:
    if (*(int *)(param_3 + 0x10) != 0) {
      uVar9 = FUN_01415984(*(undefined4 *)(param_3 + 0xc));
      if ((int)uVar9 != 0) {
        if (*(int *)(param_3 + 0x10) != 0) {
          FUN_01415bb0(&local_48,*(undefined4 *)(param_3 + 0xc));
          if (local_48 != (char **)0x0) {
            goto LAB_0143d96c;
          }
        }
        if (*param_3 == '\0') {
          local_40._0_2_ = 0x50;
        }
        else {
          iVar3 = FUN_014146a0(param_3,&DAT_00570360);
          local_40._0_2_ = 0x50;
          if (iVar3 != 0) {
            local_40._0_2_ = 0x1bb;
          }
        }
LAB_0143d96c:
        param_1[6] = local_40._0_2_;
        *(undefined8 *)(param_1 + 2) = uVar9;
        *param_1 = 3;
        return;
      }
    }
    uVar5 = 0x1c;
    pcVar4 = "invalid URL, host is missingevent /nix/store/eee";
  }
  else {
    if (*param_3 != '\0') {
      iVar3 = FUN_014146a0(param_3,&DAT_00570850);
      if (iVar3 != 0) goto LAB_0143d8ac;
    }
    uVar5 = 0x1f;
    pcVar4 = 
    "invalid URL, scheme is not httpevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-util-0.1.20/src/client/legacy/connect/http.rs:770event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-util-0.1.20/src/client/legacy/connect/http.rs:767event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-util-0.1.20/src/client/legacy/connect/http.rs:774"
    ;
  }
LAB_0143d920:
  *(char **)(param_1 + 0x10) = pcVar4;
  *param_1 = 2;
  *(undefined4 *)(param_1 + 0x12) = uVar5;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}

