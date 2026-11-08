// FUN_01433618 @ 01433618 size=1116 calls_out=14 calls_in=2
// strings: hyper::upgrade/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-0.14.31/src/upgrade.rsevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-0.14.31/src/upgrade.rs:238 | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | pending upgrade fulfillKeepAliveTimedOutevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-0.14.31/src/client/connect/http.rs:278 | hyper::upgrade/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-0.14.31/src/upgrade.rsevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-0.14.31/src/upgrade.rs:238 | InvalidParamSegmentInvalidParamInvalidCatchAll

void FUN_01433618(int *param_1,int *param_2)

{
  bool bVar1;
  char *pcVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  int ***local_94;
  undefined4 local_90;
  undefined4 *local_8c;
  char *local_88;
  undefined4 local_84;
  undefined4 **local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 ***local_70;
  char **local_6c;
  undefined4 *local_68;
  undefined4 **local_64;
  int local_60;
  int *local_5c;
  int local_58;
  int local_54;
  int iStack_50;
  int iStack_4c;
  int **local_48;
  undefined4 ****ppppuStack_44;
  undefined1 *puStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int **local_30;
  undefined4 ****local_2c;
  undefined1 *local_28;
  
  if ((DAT_01d50f88 == 0) &&
     (((DAT_01d4ea20 - 1 < 2 ||
       ((DAT_01d4ea20 != 0 && (cVar4 = FUN_01aaafa8(&DAT_01d4ea18), cVar4 != '\0')))) &&
      (iVar7 = FUN_01aaa278(DAT_01d4ea18), iVar7 != 0)))) {
    local_60 = *(int *)(DAT_01d4ea18 + 0x20);
    if (local_60 == 0) {
LAB_01433a64:
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01cf5f54);
    }
    local_6c = &local_88;
    local_5c = *(int **)(DAT_01d4ea18 + 0x24);
    local_58 = *(int *)(DAT_01d4ea18 + 0x28);
    local_8c = (undefined4 *)(DAT_01d4ea18 + 0x1c);
    local_64 = (undefined4 **)*local_8c;
    local_70 = &local_64;
    local_94 = (int ***)&local_70;
    local_90 = 1;
    local_54 = 0;
    local_68 = (undefined4 *)&DAT_01d2ea4c;
    local_84 = 0x2f;
    local_88 = 
    "pending upgrade fulfillKeepAliveTimedOutevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-0.14.31/src/client/connect/http.rs:278"
    ;
    FUN_01aaaecc(DAT_01d4ea18,&local_94);
    iVar7 = DAT_01d4ea18;
    if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
      local_2c = *(undefined4 *****)(DAT_01d4ea18 + 0x14);
      local_28 = *(undefined1 **)(DAT_01d4ea18 + 0x18);
      local_30 = (int **)&DAT_00000005;
      DataMemoryBarrier(0xb);
      puVar9 = DAT_01d4edc8;
      pcVar2 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        puVar9 = &DAT_01cfc5e0;
        pcVar2 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar5 = (*(code *)puVar9[3])(pcVar2,&local_30);
      if (iVar5 != 0) {
        local_48 = local_30;
        ppppuStack_44 = local_2c;
        puStack_40 = local_28;
        FUN_01aaa328(iVar7,pcVar2,puVar9[4],&local_48,&local_94);
      }
    }
  }
  else {
    iVar7 = DAT_01d4ea18;
    if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
      local_7c = *(undefined4 *)(DAT_01d4ea18 + 0x14);
      local_78 = *(undefined4 *)(DAT_01d4ea18 + 0x18);
      local_80 = (undefined4 **)0x5;
      DataMemoryBarrier(0xb);
      puVar9 = DAT_01d4edc8;
      pcVar2 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        puVar9 = &DAT_01cfc5e0;
        pcVar2 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar5 = (*(code *)puVar9[3])(pcVar2,&local_80);
      if (iVar5 != 0) {
        local_68 = (undefined4 *)(DAT_01d4ea18 + 0x1c);
        local_64 = (undefined4 **)*local_68;
        local_60 = *(int *)(DAT_01d4ea18 + 0x20);
        if (local_60 == 0) goto LAB_01433a64;
        local_2c = &local_94;
        local_5c = *(int **)(DAT_01d4ea18 + 0x24);
        local_58 = *(int *)(DAT_01d4ea18 + 0x28);
        local_30 = (int **)&local_64;
        local_70 = &local_30;
        local_54 = 0;
        local_6c = (char **)&DAT_00000001;
        local_90 = 0x2f;
        local_28 = &DAT_01d2ea4c;
        local_94 = (int ***)0x47a137;
        local_48 = local_80;
        ppppuStack_44 = (undefined4 ****)local_7c;
        puStack_40 = (undefined1 *)local_78;
        FUN_01aaa328(iVar7,pcVar2,puVar9[4],&local_48,&local_70);
      }
    }
  }
  local_48 = (int **)*param_2;
  ppppuStack_44 = (undefined4 ****)param_2[1];
  puStack_40 = (undefined1 *)param_2[2];
  iStack_3c = param_2[3];
  iStack_38 = param_2[4];
  iStack_34 = param_2[5];
  if (param_1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01d2ce08);
  }
  if (param_1[7] != 0) {
    FUN_0143c404(param_1 + 8);
  }
  param_1[7] = 1;
  iVar7 = param_2[1];
  iVar5 = param_2[2];
  iVar8 = param_2[3];
  iVar10 = param_2[4];
  iVar11 = param_2[5];
  param_1[8] = *param_2;
  param_1[9] = iVar7;
  param_1[10] = iVar5;
  param_1[0xb] = iVar8;
  param_1[0xc] = iVar10;
  param_1[0xd] = iVar11;
  iVar7 = FUN_014295d0(param_1 + 2);
  if (iVar7 == 0) {
    uVar6 = param_1[7];
    param_1[7] = 0;
    if ((uVar6 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01d2ce18);
    }
    local_60 = param_1[8];
    local_5c = (int *)param_1[9];
    local_58 = param_1[10];
    local_54 = param_1[0xb];
    iStack_50 = param_1[0xc];
    iStack_4c = param_1[0xd];
    local_64 = (undefined4 **)0x1;
    DataMemoryBarrier(0xb);
    do {
      iVar7 = *param_1;
      bVar1 = (bool)hasExclusiveAccess(param_1);
    } while (!bVar1);
    *param_1 = iVar7 + -1;
  }
  else {
    local_64 = (undefined4 **)0x0;
    DataMemoryBarrier(0xb);
    do {
      iVar7 = *param_1;
      bVar1 = (bool)hasExclusiveAccess(param_1);
    } while (!bVar1);
    *param_1 = iVar7 + -1;
  }
  if (iVar7 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01436a38(param_1);
  }
  piVar3 = local_5c;
  if (local_64 != (undefined4 **)0x0) {
    if (local_60 == 0) {
      if (*local_5c != 0) {
        FUN_01443048(*local_5c,local_5c[1]);
      }
      FUN_017ccbf4(piVar3 + 2);
      thunk_FUN_01be4678(piVar3);
    }
    else {
      FUN_014335c8(&local_60);
    }
  }
  return;
}

