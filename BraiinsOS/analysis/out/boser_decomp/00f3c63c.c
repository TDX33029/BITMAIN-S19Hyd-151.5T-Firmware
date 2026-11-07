// FUN_00f3c63c @ 00f3c63c size=1248 calls_out=19 calls_in=0
// strings: axum::serve/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/axum-0.8.4/src/serve/mod.rsevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/axum-0.8.4/src/serve/mod.rs:408event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/axum-0.8.4/src/serve/mod.rs:403event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/axum-0.8.4/src/serve/mod.rs:299event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/axum-0.8.4/src/serve/mod.rs:288event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/axum-0.8.4/src/serve/mod.rs:278 | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | received graceful shutdown signal. Telling tasks to shutdown | InvalidParamSegmentInvalidParamInvalidCatchAll | received graceful shutdown signal. Telling tasks to shutdown

int FUN_00f3c63c(int param_1,undefined4 param_2)

{
  bool bVar1;
  char *pcVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  undefined *puVar9;
  int iVar10;
  undefined4 *puVar11;
  int *piVar12;
  undefined8 uVar13;
  undefined4 **local_a0;
  int local_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 ***local_5c;
  undefined4 local_58;
  undefined4 *local_54;
  char *local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 ***local_3c;
  char **local_38;
  undefined4 *local_34;
  undefined4 **local_30;
  undefined4 ****local_2c;
  undefined1 *local_28;
  
  if (*(int *)(param_1 + 0x10) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb100("internal error: entered unreachable code: unexpected stage",0x75,&DAT_01d2e13c);
  }
  uVar13 = FUN_019ec558(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  uVar8 = (undefined4)((ulonglong)uVar13 >> 0x20);
  piVar12 = (int *)(param_1 + 0x34);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0x49)) {
  case 0:
    *(undefined1 *)(param_1 + 0x48) = 1;
    *piVar12 = *(int *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x24);
    *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x2c);
    *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x30);
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c192f4);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c192f4);
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0x44)) {
  case 0:
    uVar4 = FUN_00b7cba8(*piVar12 + 8);
    puVar9 = &DAT_01c13730;
    *(undefined4 *)(param_1 + 0x3c) = uVar4;
    *(undefined **)(param_1 + 0x40) = &DAT_01c13730;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c19afc);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c19afc);
  case 3:
    uVar4 = *(undefined4 *)(param_1 + 0x3c);
    puVar9 = *(undefined **)(param_1 + 0x40);
  }
  iVar5 = (**(code **)(puVar9 + 0xc))(uVar4,param_2);
  if (iVar5 == 0) {
    FUN_01139b38(*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x40));
    FUN_01a3b7c0(*(undefined4 *)(param_1 + 0x38));
    piVar6 = (int *)*piVar12;
    DataMemoryBarrier(0xb);
    do {
      iVar10 = *piVar6;
      bVar1 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar1);
    *piVar6 = iVar10 + -1;
    if (iVar10 == 1) {
      DataMemoryBarrier(0xb);
      FUN_011772ac(*piVar12);
    }
    FUN_005faf6c((undefined4 *)(param_1 + 0x38));
    *(undefined1 *)(param_1 + 0x44) = 1;
    FUN_005f3030(piVar12);
    if ((DAT_01d50f88 == 0) &&
       (((DAT_01d4c53c - 1 < 2 ||
         ((DAT_01d4c53c != 0 && (cVar3 = FUN_01aaafa8(&DAT_01d4c534), cVar3 != '\0')))) &&
        (iVar10 = FUN_01aaa278(DAT_01d4c534), iVar10 != 0)))) {
      local_9c = *(int *)(DAT_01d4c534 + 0x20);
      if (local_9c == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c19304);
      }
      local_38 = &local_50;
      uStack_98 = *(undefined4 *)(DAT_01d4c534 + 0x24);
      uStack_94 = *(undefined4 *)(DAT_01d4c534 + 0x28);
      local_54 = (undefined4 *)(DAT_01d4c534 + 0x1c);
      local_a0 = (undefined4 **)*local_54;
      local_3c = &local_a0;
      local_5c = &local_3c;
      local_90 = 0;
      local_58 = 1;
      local_34 = (undefined4 *)&DAT_01d2ea4c;
      local_4c = 0x79;
      local_50 = "received graceful shutdown signal. Telling tasks to shutdown";
      FUN_01aaaecc(DAT_01d4c534,&local_5c);
      iVar10 = DAT_01d4c534;
      if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
        local_2c = *(undefined4 *****)(DAT_01d4c534 + 0x14);
        local_28 = *(undefined1 **)(DAT_01d4c534 + 0x18);
        local_30 = (undefined4 **)&DAT_00000005;
        DataMemoryBarrier(0xb);
        puVar11 = DAT_01d4edc8;
        pcVar2 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          puVar11 = &DAT_01cfc5e0;
          pcVar2 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar7 = (*(code *)puVar11[3])(pcVar2,&local_30);
        if (iVar7 != 0) {
          FUN_01aaa328(iVar10,pcVar2,puVar11[4],&local_30,&local_5c);
        }
      }
    }
    else {
      iVar10 = DAT_01d4c534;
      if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
        local_44 = *(undefined4 *)(DAT_01d4c534 + 0x14);
        local_40 = *(undefined4 *)(DAT_01d4c534 + 0x18);
        local_48 = 5;
        DataMemoryBarrier(0xb);
        puVar11 = DAT_01d4edc8;
        pcVar2 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          puVar11 = &DAT_01cfc5e0;
          pcVar2 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar7 = (*(code *)puVar11[3])(pcVar2,&local_48);
        if (iVar7 != 0) {
          local_34 = (undefined4 *)(DAT_01d4c534 + 0x1c);
          local_a0 = (undefined4 **)*local_34;
          local_9c = *(int *)(DAT_01d4c534 + 0x20);
          if (local_9c == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c19304);
          }
          local_30 = &local_a0;
          local_3c = &local_30;
          uStack_98 = *(undefined4 *)(DAT_01d4c534 + 0x24);
          local_90 = 0;
          uStack_94 = *(undefined4 *)(DAT_01d4c534 + 0x28);
          local_2c = &local_5c;
          local_38 = (char **)&DAT_00000001;
          local_28 = &DAT_01d2ea4c;
          local_58 = 0x79;
          local_5c = (undefined4 ***)0x3f2c1f;
          FUN_01aaa328(iVar10,pcVar2,puVar11[4],&local_48,&local_3c);
        }
      }
    }
    local_a0 = *(undefined4 ***)(param_1 + 0x18);
    local_9c = *(undefined4 *)(param_1 + 0x1c);
    *(undefined1 *)(param_1 + 0x48) = 0;
    FUN_019d8724(&local_a0);
    *(undefined1 *)(param_1 + 0x49) = 1;
    FUN_019ec558((int)uVar13,uVar8);
    local_a0 = (undefined4 **)0x2;
    FUN_00f31a40(param_1,&local_a0);
  }
  else {
    *(undefined1 *)(param_1 + 0x49) = 3;
    *(undefined1 *)(param_1 + 0x44) = 3;
    FUN_019ec558((int)uVar13,uVar8);
  }
  return iVar5;
}

