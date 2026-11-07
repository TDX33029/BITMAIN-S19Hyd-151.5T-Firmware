// FUN_01441e3c @ 01441e3c size=1080 calls_out=10 calls_in=3
// strings: hyper_ut | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | hyper_ut | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll

void FUN_01441e3c(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int ***pppiVar8;
  int **local_e0;
  undefined *local_dc;
  int ***local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  int **local_c8;
  int ***local_c4;
  int **local_c0;
  int ***local_bc;
  undefined4 *local_b8;
  int iStack_b4;
  int iStack_b0;
  int local_ac;
  int iStack_a8;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  int iStack_98;
  int ***local_90;
  undefined1 *local_8c;
  undefined4 *local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  int ***local_7c;
  undefined1 *local_78;
  int iStack_74;
  int iStack_70;
  int local_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int *local_50;
  int local_4c;
  int ***pppiStack_48;
  undefined1 *puStack_44;
  undefined4 *local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  
  if (((char)*param_1 == '\0') && (param_1[4] != 0)) goto LAB_01442164;
  local_e0 = (int **)(param_1 + 6);
  if ((uint)param_1[8] < 2) {
    pcVar4 = &DAT_005327c4;
    if (param_1[8] != 0) {
      pcVar4 = (char *)param_1[7];
    }
    if (*pcVar4 != '/') goto LAB_01441e94;
  }
  else {
LAB_01441e94:
    if ((DAT_01d50f88 < 4) &&
       (((DAT_01d4eb4c - 1 < 2 ||
         ((DAT_01d4eb4c != 0 && (cVar1 = FUN_01aaafa8(&DAT_01d4eb44), cVar1 != '\0')))) &&
        (iVar2 = FUN_01aaa278(DAT_01d4eb44), iVar2 != 0)))) {
      local_4c = *(int *)(DAT_01d4eb44 + 0x20);
      if (local_4c == 0) {
LAB_0144225c:
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01cf8494);
      }
      local_bc = (int ***)&local_dc;
      pppiStack_48 = *(int ****)(DAT_01d4eb44 + 0x24);
      puStack_44 = *(undefined1 **)(DAT_01d4eb44 + 0x28);
      local_88 = (undefined4 *)(DAT_01d4eb44 + 0x1c);
      local_50 = (int *)*local_88;
      local_c0 = &local_50;
      local_90 = &local_c0;
      local_40 = (undefined4 *)0x0;
      pppiVar8 = (int ***)&local_90;
      local_8c = (undefined1 *)0x1;
      local_d8 = &local_c8;
      local_c8 = (int **)&local_e0;
      local_b8 = (undefined4 *)&DAT_01d2ea4c;
      local_dc = &DAT_00588b1a;
      local_c4 = (int ***)&LAB_01445488;
      FUN_01aaaecc(DAT_01d4eb44,pppiVar8);
      iVar2 = DAT_01d4eb44;
      if ((DAT_01d51ae9 == '\0') && (1 < DAT_01d51b00)) {
        local_7c = *(int ****)(DAT_01d4eb44 + 0x14);
        local_78 = *(undefined1 **)(DAT_01d4eb44 + 0x18);
        local_80 = (int **)0x2;
        DataMemoryBarrier(0xb);
        puVar7 = DAT_01d4edc8;
        if (DAT_01d51174 != 2) {
          puVar7 = &DAT_01cfc5e0;
        }
        pcVar4 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          pcVar4 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar3 = (*(code *)puVar7[3])(pcVar4,&local_80);
        if (iVar3 != 0) {
          uVar5 = puVar7[4];
          puVar6 = &local_80;
          goto LAB_01442154;
        }
      }
    }
    else {
      iVar2 = DAT_01d4eb44;
      if ((DAT_01d51ae9 == '\0') && (1 < DAT_01d51b00)) {
        local_d0 = *(undefined4 *)(DAT_01d4eb44 + 0x14);
        local_cc = *(undefined4 *)(DAT_01d4eb44 + 0x18);
        local_d4 = 2;
        DataMemoryBarrier(0xb);
        puVar7 = DAT_01d4edc8;
        if (DAT_01d51174 != 2) {
          puVar7 = &DAT_01cfc5e0;
        }
        pcVar4 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          pcVar4 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar3 = (*(code *)puVar7[3])(pcVar4,&local_d4);
        if (iVar3 != 0) {
          local_b8 = (undefined4 *)(DAT_01d4eb44 + 0x1c);
          local_50 = (int *)*local_b8;
          local_4c = *(int *)(DAT_01d4eb44 + 0x20);
          if (local_4c == 0) goto LAB_0144225c;
          local_7c = &local_c8;
          pppiStack_48 = *(int ****)(DAT_01d4eb44 + 0x24);
          puStack_44 = *(undefined1 **)(DAT_01d4eb44 + 0x28);
          local_80 = &local_50;
          local_c0 = (int **)&local_80;
          local_40 = (undefined4 *)0x0;
          local_bc = (int ***)&DAT_00000001;
          local_c4 = (int ***)&local_90;
          local_90 = &local_e0;
          pppiVar8 = &local_c0;
          local_78 = &DAT_01d2ea4c;
          puVar6 = &local_d4;
          local_c8 = (int **)&DAT_00588b1a;
          local_8c = &LAB_01445488;
          uVar5 = puVar7[4];
LAB_01442154:
          FUN_01aaa328(iVar2,pcVar4,uVar5,puVar6,pppiVar8);
        }
      }
    }
  }
  if (param_1[4] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb100("internal error: entered unreachable code: authority_form with relative uri",0x95,
                 &DAT_01cf84a4);
  }
LAB_01442164:
  (**(code **)param_1[2])(&local_90,param_1 + 5,param_1[3]);
  local_50 = (int *)0x3;
  local_4c = 0;
  pppiStack_48 = local_90;
  puStack_44 = local_8c;
  local_40 = local_88;
  uStack_3c = uStack_84;
  local_38 = 0;
  FUN_01414ce8(&local_80);
  if ((char)local_80 == '\x03') {
    local_50 = (int *)CONCAT31(local_50._1_3_,local_80._1_1_);
                    /* WARNING: Subroutine does not return */
    FUN_013073dc("authority is validevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-util-0.1.20/src/client/legacy/client.rs:951event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-util-0.1.20/src/client/legacy/client.rs:526event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-util-0.1.20/src/client/legacy/client.rs:574event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-util-0.1.20/src/client/legacy/client.rs:634event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-util-0.1.20/src/client/legacy/client.rs:620event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-util-0.1.20/src/client/legacy/client.rs:599event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-util-0.1.20/src/client/legacy/client.rs:609event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-util-0.1.20/src/client/legacy/client.rs:626event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-util-0.1.20/src/client/legacy/client.rs:549event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-util-0.1.20/src/client/legacy/client.rs:644event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-util-0.1.20/src/client/legacy/client.rs:588event /nix/store/eeeeeeeeeee..." /* TRUNCATED STRING LITERAL */
                 ,0x12,&local_50,&DAT_01cf8964,&DAT_01cf84b4);
  }
  local_c0 = local_80;
  local_bc = local_7c;
  local_b8 = (undefined4 *)local_78;
  iStack_b4 = iStack_74;
  iStack_b0 = iStack_70;
  local_ac = local_6c;
  iStack_a8 = iStack_68;
  iStack_a4 = iStack_64;
  iStack_a0 = iStack_60;
  iStack_9c = iStack_5c;
  iStack_98 = iStack_58;
  FUN_01435814(param_1);
  *param_1 = (int)local_c0;
  param_1[1] = (int)local_bc;
  param_1[2] = (int)local_b8;
  param_1[3] = iStack_b4;
  param_1[4] = iStack_b0;
  param_1[5] = local_ac;
  param_1[6] = iStack_a8;
  param_1[7] = iStack_a4;
  param_1[8] = iStack_a0;
  param_1[9] = iStack_9c;
  param_1[10] = iStack_98;
  return;
}

